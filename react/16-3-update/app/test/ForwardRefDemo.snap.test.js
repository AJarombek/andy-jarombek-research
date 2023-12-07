/**
 * Snapshot test for the {@link ../src/ForwardRefDemo} component.
 * @author Andrew Jarombek
 * @since 1/30/2020
 */

import React from 'react';
import ForwardRefDemo from '../src/ForwardRefDemo';
import renderer from 'react-test-renderer';

jest.mock('react-router-dom', () => {
  return {
    ...jest.requireActual('react-router-dom'),
    useNavigate: jest.fn()
  }
});

it('renders correctly', () => {
  const tree = renderer.create(<ForwardRefDemo />).toJSON();
  expect(tree).toMatchSnapshot();
});
