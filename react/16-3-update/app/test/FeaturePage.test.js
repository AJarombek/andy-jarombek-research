/**
 * Unit tests with Jest and Enzyme for the {@link ../src/FeaturePage} component.
 * @author Andrew Jarombek
 * @since 1/30/2019
 */

import React from 'react';
import { shallow, mount } from 'enzyme';
import FeaturePage from '../src/FeaturePage';
import {useNavigate} from "react-router-dom";

// Mock react router's useNavigate() hook before the tests execute.
jest.mock('react-router-dom', () => {
  return {
    ...jest.requireActual('react-router-dom'),
    useNavigate: jest.fn()
  }
});

describe('unit tests', () => {

  it('renders', () => {
    const wrapper = shallow(<FeaturePage/>);
    expect(wrapper.exists()).toBe(true);
  });

});

describe('integration tests', () => {

  it('calls React Router push() when clicking the back button', () => {
    const wrapper = mount(<FeaturePage/>);
    const pushSpy = jest.spyOn(useNavigate()).mockImplementation();

    const navCircle = wrapper.find('.aj-nav-circle');

    expect(pushSpy).not.toHaveBeenCalled();
    expect(pushSpy).toHaveBeenCalledTimes(0);

    navCircle.simulate('click');

    expect(pushSpy).toHaveBeenCalled();
    expect(pushSpy).toHaveBeenCalledTimes(1);
    expect(pushSpy).toHaveBeenCalledWith('/');
  });

});
