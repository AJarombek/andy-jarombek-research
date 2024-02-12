import { createRouter, createWebHistory } from 'vue-router';
import PollView from '../views/PollView.vue';

const router = createRouter({
  history: createWebHistory(import.meta.env.BASE_URL),
  routes: [
    {
      path: '/',
      name: 'home',
      component: PollView
    },
    {
      path: '/about',
      name: 'about',
      // route level code-splitting
      // this generates a separate chunk (About.[hash].js) for this route
      // which is lazy-loaded when the route is visited.
      component: () => import('../views/AboutView.vue')
    },
    {
      path: '/polls',
      name: 'polls',
      children: [
        {
          path: 'languages',
          name: 'languages-poll',
          component: PollView
        },
        {
          path: 'components',
          name: 'components-poll',
          component: PollView
        },
        {
          path: 'companies',
          name: 'companies-poll',
          component: PollView
        }
      ]
    }
  ]
});

export default router;
