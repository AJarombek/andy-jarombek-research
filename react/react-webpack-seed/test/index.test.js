/**
 * Test the root App component with Jest and Enzyme
 * @author Andrew Jarombek
 * @since 3/21/2018
 */

import React from 'react';
import { shallow } from 'enzyme';
import toJSON from 'enzyme-to-json';
import App from '../src/App';
import TechnologyList from '../src/TechnologyList';
import Technology from '../src/Technology';

const techList = [
  {
    id: 'ed13c757-27cd-4cc1-b4ac-de449ee9cbae',
    name: 'React',
    picture: './assets/react.png',
    release_date: new Date('2013-03-01'),
  },
  {
    id: 'd9f08c13-f59f-45bb-b8e9-0bd0114b0adf',
    name: 'Sass',
    picture: './assets/sass.png',
    release_date: new Date('2006-11-28'),
  },
];

const app = shallow(<App />);
const technologyList = shallow(<TechnologyList techList={techList} />);
const techListNoProps = shallow(<TechnologyList />);

const technology = shallow(
  <Technology name={techList[0].name} picture={techList[0].picture} release_date={techList[0].release_date} />,
);

// We must mock the format() function for the moment() call
// The jest.mock() function expects one argument - a function that returns the mock
jest.mock('moment', () => () => ({ format: () => 'March 1st, 2013' }));

test('App has Title', () => {
  expect(app.find('.title')).toHaveLength(1);
});

test('App has Sub-Title', () => {
  expect(app.find('.sub-title')).toHaveLength(1);
});

test('Technology List has two technologies', () => {
  expect(technologyList.find('.technology-list').length).toBe(1);
});

// Snapshot test - every time a test is run Jest will compare against the previous snapshot
test('Technology List with No Props', () => {
  expect(toJSON(techListNoProps)).toMatchSnapshot();
});

test('Technology name is React', () => {
  expect(technology.find('.tech-name').text()).toEqual('React');
});

test('Technology release date is march 2013', () => {
  expect(technology.find('.tech-release-date').text()).toEqual('March 1st, 2013');
});
