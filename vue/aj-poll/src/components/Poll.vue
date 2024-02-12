<script setup lang="ts">
import { defineProps } from 'vue';

const props = defineProps({
  title: String,
  childComponent: Object,
});
</script>

<template>
  <main>
    <div class="wrapper">
      <h1>{{ title }}</h1>
      <component :is="childComponent" />
    </div>
  </main>
</template>

<style scoped>
main {
  padding: 2rem;
}
</style>
