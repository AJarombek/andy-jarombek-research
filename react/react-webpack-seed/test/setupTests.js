/**
 * Setup Enzyme with the React adapter.  This file is identified as Jest test framework config in package.json
 * @author Andrew Jarombek
 * @since 3/21/2018
 */

import { configure } from 'enzyme';
import Adapter from 'enzyme-adapter-react-16';

configure({ adapter: new Adapter() });
