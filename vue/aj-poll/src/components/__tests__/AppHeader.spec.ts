import { describe, it, expect } from 'vitest';

import { mount } from '@vue/test-utils';
import Header from '../AppHeader.vue';

describe('AppHeader', () => {
  it('renders properly', () => {
    const wrapper = mount(Header);
    expect(wrapper.text()).toContain('AJ Top 25 Poll');
  });
});
