/**
 * A component that holds a list of technologies
 * @author Andrew Jarombek
 * @since 3/24/2018
 */

import React from 'react';
import Technology from './Technology';
import PropTypes from 'prop-types';

import './TechnologyList.scss';

const TechnologyList = ({ techList = [] }) => (
  <div className="technology-list">
    {techList.length === 0 ? (
      <p>No Data</p>
    ) : (
      techList.map((technology) => <Technology key={technology.id} {...technology} />)
    )}
  </div>
);

TechnologyList.propTypes = {
  techList: PropTypes.array,
};

export default TechnologyList;
