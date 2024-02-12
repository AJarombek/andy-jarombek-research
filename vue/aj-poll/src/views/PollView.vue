<script setup lang="ts">
import { useRouter } from 'vue-router';
import type { RouteLocationNormalized } from 'vue-router';
import PollTable from '@/components/PollTable.vue';
import { companies, components, languages } from '@/utils/pollData';

const router = useRouter();

let pageTitle = '';
let entryName = '';
let data: PollEntry[] = [];

// Set initial page title and current child component based on the current route
updatePageInfo(router.currentRoute.value);

// Listen for route changes and update page title and current child component accordingly
router.afterEach((to) => {
  updatePageInfo(to);
});

function updatePageInfo(route: RouteLocationNormalized) {
  switch (route.path) {
    case '/polls/languages':
      pageTitle = 'Top 25 Programming Languages';
      data = languages;
      entryName = 'Language';
      break;
    case '/polls/components':
      pageTitle = 'Top 25 Engineering Components';
      data = components;
      entryName = 'Component';
      break;
    case '/polls/companies':
      pageTitle = 'Top 25 Engineering Companies';
      data = companies;
      entryName = 'Company';
      break;
    default:
      pageTitle = 'Top 25 Programming Languages';
      data = languages;
      entryName = 'Language';
  }
}
</script>

<template>
  <PollTable :title="pageTitle" :entry-name="entryName" :data="data" />
</template>
