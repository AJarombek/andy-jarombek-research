/**
 * Bootstrap React onto the DOM at the 'root' id.
 * @author Andrew Jarombek
 * @since 11/14/2019
 */

import 'react-hot-loader';
import React from 'react';
import ReactDOM from 'react-dom';
import {BrowserRouter as Router, Route, Routes} from 'react-router-dom';

import App from "./App";
import ContextDemo from "./ContextDemo";
import CreateRefDemo from "./CreateRefDemo";
import ForwardRefDemo from "./ForwardRefDemo";
import NewLifecycleDemo from "./NewLifecycleDemo";
import StrictModeDemo from "./StrictModeDemo";

const RoutedApp = () => {
    return (
        <Router>
            <Routes>
                <Route exact path="/" element={<App />} />
                <Route exact path="/context" element={<ContextDemo />} />
                <Route exact path="/create-ref" element={<CreateRefDemo />} />
                <Route exact path="/forward-ref" element={<ForwardRefDemo />} />
                <Route exact path="/new-lifecycle" element={<NewLifecycleDemo />} />
                <Route exact path="/strict-mode" element={<StrictModeDemo />} />
                <Route element={<App />} />
            </Routes>
        </Router>
    );
};

ReactDOM.render(<RoutedApp />, document.getElementById('root'));
