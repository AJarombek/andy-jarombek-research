/**
 * Create a root component for the react application
 * @author Andrew Jarombek
 * @since 3/21/2018
 */

import React from 'react';
import { hot } from 'react-hot-loader';
import TechnologyList from './TechnologyList';
import moment from 'moment';

import './App.scss';

class App extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      technologies: [
        {
          id: '375e6c2b-d799-47ef-848d-84b42bef7a29',
          name: 'JavaScript',
          picture: './assets/js.png',
          release_date: moment('1995-12-04'),
        },
        {
          id: '75bb50f5-9067-4a30-964f-a3f0d42b5ca4',
          name: 'Webpack',
          picture: './assets/webpack.png',
          release_date: moment('2012-03-10'),
        },
        {
          id: 'ed13c757-27cd-4cc1-b4ac-de449ee9cbae',
          name: 'React',
          picture: './assets/react.png',
          release_date: moment('2013-03-01'),
        },
        {
          id: 'd9f08c13-f59f-45bb-b8e9-0bd0114b0adf',
          name: 'Sass',
          picture: './assets/sass.png',
          release_date: moment('2006-11-28'),
        },
      ],
    };
  }

  render() {
    const { technologies } = this.state;
    return (
      <div>
        <div className="title-container">
          <p className="title">React Webpack Seed</p>
        </div>
        <p className="sub-title">Technologies used</p>
        <TechnologyList techList={technologies} />
      </div>
    );
  }
}

// Enable Hot Module Replacement on this component
export default hot(module)(App);
