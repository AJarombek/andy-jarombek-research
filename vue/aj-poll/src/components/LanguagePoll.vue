<script setup lang="ts">
interface Language {
  id: number
  name: string
  votes: number
  firstPlaceVotes: number
}

const languages: Language[] = [
  {
    id: 1,
    name: 'Python',
    votes: 100,
    firstPlaceVotes: 3
  },
  {
    id: 2,
    name: 'JavaScript',
    votes: 80,
    firstPlaceVotes: 2
  },
  {
    id: 3,
    name: 'Java',
    votes: 60,
    firstPlaceVotes: 0
  }
]
</script>

<template>
  <table>
    <thead>
    <tr>
      <th>Language</th>
      <th>Votes</th>
    </tr>
    </thead>
    <tbody>
    <tr v-for="language in languages" :key="language.id">
      <td>
        <p>{{ language.name }}</p>
        <p v-if="language.firstPlaceVotes > 0" class="fpv">
          ({{ language.firstPlaceVotes }})
        </p>
      </td>
      <td>{{ language.votes }}</td>
    </tr>
    </tbody>
  </table>
</template>

<style scoped>
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

.fpv {
  color: var(--color-text-light);
  margin-left: 0.25rem;
}
</style>