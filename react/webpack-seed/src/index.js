/**
 * The Entry point for the React.js application
 * @author Andrew Jarombek
 * @since 3/19/2018
 */

import React from 'react';
import { createRoot } from 'react-dom';
import App from './App';

window.React = React;

const root = createRoot(document.getElementById('react-container'));
root.render(<App />);
