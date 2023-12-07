/**
 * Snapshot test for the {@link ../src/StrictModeDemo} component.
 * @author Andrew Jarombek
 * @since 1/30/2020
 */

import React from 'react';
import StrictModeDemo from '../src/StrictModeDemo';
import renderer from 'react-test-renderer';

jest.mock('react-router-dom', () => {
  return {
    ...jest.requireActual('react-router-dom'),
    useNavigate: jest.fn()
  }
});

it('renders correctly', () => {
  const tree = renderer.create(<StrictModeDemo />).toJSON();
  expect(tree).toMatchSnapshot();
});
