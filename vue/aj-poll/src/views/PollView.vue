<script setup lang="ts">
import { useRouter } from 'vue-router';
import LanguagePoll from "@/components/LanguagePoll.vue";
import Poll from "@/components/Poll.vue";
import CompaniesPoll from "@/components/CompaniesPoll.vue";
import ComponentsPoll from "@/components/ComponentsPoll.vue";

const router = useRouter();

let pageTitle = '';
let currentChildComponent = null;

// Set initial page title and current child component based on the current route
updatePageInfo(router.currentRoute.value);

// Listen for route changes and update page title and current child component accordingly
router.afterEach((to) => {
  updatePageInfo(to);
});

function updatePageInfo(route) {
  switch (route.path) {
    case '/polls/languages':
      pageTitle = 'Top 25 Programming Languages';
      currentChildComponent = LanguagePoll;
      break;
    case '/polls/components':
      pageTitle = 'Top 25 Engineering Components';
      currentChildComponent = ComponentsPoll;
      break;
    case '/polls/companies':
      pageTitle = 'Top 25 Engineering Companies';
      currentChildComponent = CompaniesPoll;
      break;
    default:
      pageTitle = 'Top 25 Programming Languages';
      currentChildComponent = LanguagePoll;
  }
}
</script>

<template>
  <Poll :title="pageTitle" :childComponent="currentChildComponent" />
</template>
