/**
 * Snapshot test for the {@link ../src/NewLifecycleDemo} component.
 * @author Andrew Jarombek
 * @since 1/30/2020
 */

import React from 'react';
import NewLifecycleDemo from '../src/NewLifecycleDemo';
import renderer from 'react-test-renderer';

jest.mock('react-router-dom', () => {
  return {
    ...jest.requireActual('react-router-dom'),
    useNavigate: jest.fn()
  }
});

it('renders correctly', () => {
  const tree = renderer.create(<NewLifecycleDemo />).toJSON();
  expect(tree).toMatchSnapshot();
});
