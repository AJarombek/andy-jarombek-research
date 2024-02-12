<script setup lang="ts">
defineProps({
  title: String,
  entryName: String,
  data: Array<PollEntry>
});
</script>

<template>
  <main>
    <div class="wrapper">
      <h1>{{ title }}</h1>
      <table>
        <thead>
          <tr>
            <th>{{ entryName }}</th>
            <th>Points</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="entry in data" :key="entry.id">
            <td>
              <p>{{ entry.name }}</p>
              <p v-if="entry.firstPlaceVotes > 0" class="fpv">({{ entry.firstPlaceVotes }})</p>
            </td>
            <td>{{ entry.votes }}</td>
          </tr>
        </tbody>
      </table>
    </div>
  </main>
</template>

<style scoped>
main {
  padding: 2rem;
}

table {
  width: 100%;
  border-collapse: collapse;
  border-spacing: 0;
  border: 1px solid var(--color-border);
  border-radius: 0.5rem;
  overflow: hidden;
}

thead {
  background-color: var(--color-background);
  border-bottom: 1px solid var(--color-border);
}

tbody {
  background-color: var(--color-background);
}

tr {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 1rem 0;
  border-bottom: 1px solid var(--color-border);
}

td {
  display: flex;
  padding: 0 1rem;
}

td p:first-child {
  font-weight: 600;
}

.fpv {
  color: var(--color-text-light);
  margin-left: 0.25rem;
}
</style>
