/**
 * The webpack configuration
 * @author Andrew Jarombek
 * @since 3/20/2018
 */

const path = require("path");
const HtmlWebPackPlugin = require("html-webpack-plugin");
const ESLintPlugin = require("eslint-webpack-plugin");
const { merge } = require("webpack-merge");

const parts = require("./webpack.parts");

// Define paths for the entry point of the app and the output directory
const PATHS = {
    app: path.join(__dirname, 'src'),
    build: path.join(__dirname, 'dist/assets')
};

const commonConfig = merge([
    {
        entry: {
            bundle: PATHS.app
        },
        output: {
            path: PATHS.build,
            filename: "[name].js"
        },
        module: {
            rules: [
                {
                    test: /\.js$/,
                    exclude: /(node_modules)/,
                    loader: "babel-loader",
                    options: {
                        cacheDirectory: true
                    }
                },
                {
                    test: /\.html$/,
                    use: {
                        loader: "html-loader"
                    }
                }
            ]
        },
        plugins: [
            new HtmlWebPackPlugin({
                template: "./src/index.html",
                filename: "./index.html"
            }),
            new ESLintPlugin({
                failOnError: false
            }),
        ]
    },
    parts.generateSourceMaps({ type: 'source-map' }),
    parts.loadFonts()
]);

const productionConfig = merge([
    {
        mode: "production",
        optimization: {
            splitChunks: {
                cacheGroups: {
                    commons: {
                        test: /[\\/]node_modules[\\/]/,
                        name: 'vendor',
                        chunks: 'initial'
                    }
                }
            }
        }
    },
    parts.extractCSS({ use: ["css-loader", "sass-loader"]}),
    parts.loadImages()
]);

const developmentConfig = merge([
    {
        mode: "development",
        performance: {hints: false},
        output: {
            sourceMapFilename: "[name].map"
        }
    },
    parts.devServer({
        host: process.env.HOST,
        port: process.env.PORT
    }),
    parts.hotModuleReplacement(),
    parts.loadSass(),
    parts.loadImages()
]);

module.exports = (env) => {
    if (env === "production") {
        return merge(commonConfig, productionConfig);
    } else {
        return merge(commonConfig, developmentConfig);
    }
};