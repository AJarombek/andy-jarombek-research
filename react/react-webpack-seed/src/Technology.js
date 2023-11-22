/**
 * A component that displays certain attributes of a technology
 * @author Andrew Jarombek
 * @since 3/22/2018
 */

import React from 'react';
import PropTypes from 'prop-types';
import moment from 'moment';

import './Technology.scss';

const Technology = ({ name, release_date, picture }) => (
  <div className="technology">
    <figure>
      <img src={require(`${picture}`)} />
    </figure>
    <p className="tech-name">{name}</p>
    <p className="tech-release-date">{moment(release_date).format('MMMM Do, YYYY')}</p>
  </div>
);

Technology.propTypes = {
  name: PropTypes.string.isRequired,
  release_date: PropTypes.instanceOf(Date).isRequired,
  picture: PropTypes.string.isRequired,
};

export default Technology;
