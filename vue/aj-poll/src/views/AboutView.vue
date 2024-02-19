<script setup lang="ts">
const apPollUrl = 'https://apnews.com/hub/ap-top-25-college-basketball-poll';
</script>

<template>
  <div class="about">
    <h1>About</h1>
    <p>
      The AJ Top 25 Poll is a quarterly survey that aggregates feedback from software engineers,
      public ranking systems, and AI platforms. Drawing inspiration from the renowned
      <a :href="apPollUrl" target="_blank">
        AP Top 25
        <font-awesome-icon icon="arrow-up-right-from-square" />
      </a>
      polls for college football and basketball, the AJ Poll offers valuable insights into the
      popularity of programming languages, engineering components, and software companies.
    </p>
  </div>
</template>

<style>
.about {
  text-align: center;
  margin-top: 2rem;
}

.about p {
  max-width: 60%;
  margin: 0 auto;
  padding-top: 2rem;
  font-size: 1rem;
}
</style>
