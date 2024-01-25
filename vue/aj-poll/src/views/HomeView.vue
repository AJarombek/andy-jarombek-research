<script>
import {defineComponent} from "vue";
import LanguagePoll from "@/components/LanguagePoll.vue";

export default defineComponent({
  components: {LanguagePoll}
})
</script>

<template>
  <main>
    <div class="wrapper">
      <h1>Top 25 Programming Languages</h1>
      <LanguagePoll />
    </div>
  </main>
</template>

<style scoped>
main {
  padding: 2rem;
}
</style>