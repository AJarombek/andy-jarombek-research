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
    votes: 120,
    firstPlaceVotes: 3
  },
  {
    id: 2,
    name: 'Java',
    votes: 110,
    firstPlaceVotes: 0
  },
  {
    id: 3,
    name: 'JavaScript',
    votes: 108,
    firstPlaceVotes: 2
  },
  {
    id: 4,
    name: 'C++',
    votes: 100,
    firstPlaceVotes: 0
  },
  {
    id: 5,
    name: 'TypeScript',
    votes: 92,
    firstPlaceVotes: 0
  },
  {
    id: 6,
    name: 'C#',
    votes: 79,
    firstPlaceVotes: 0
  },
  {
    id: 7,
    name: 'Go',
    votes: 76,
    firstPlaceVotes: 0
  },
  {
    id: 8,
    name: 'PHP',
    votes: 76,
    firstPlaceVotes: 0
  },
  {
    id: 9,
    name: 'Swift',
    votes: 74,
    firstPlaceVotes: 0
  },
  {
    id: 10,
    name: 'C',
    votes: 71,
    firstPlaceVotes: 0
  },
  {
    id: 11,
    name: 'Ruby',
    votes: 50,
    firstPlaceVotes: 0
  },
  {
    id: 12,
    name: 'R',
    votes: 50,
    firstPlaceVotes: 0
  },
  {
    id: 13,
    name: 'Shell',
    votes: 46,
    firstPlaceVotes: 0
  },
  {
    id: 14,
    name: 'Rust',
    votes: 38,
    firstPlaceVotes: 0
  },
  {
    id: 15,
    name: 'Objective-C',
    votes: 38,
    firstPlaceVotes: 0
  },
  {
    id: 16,
    name: 'Kotlin',
    votes: 36,
    firstPlaceVotes: 0
  },
  {
    id: 17,
    name: 'SQL',
    votes: 34,
    firstPlaceVotes: 0
  },
  {
    id: 18,
    name: 'Dart',
    votes: 34,
    firstPlaceVotes: 0
  },
  {
    id: 19,
    name: 'Scala',
    votes: 26,
    firstPlaceVotes: 0
  },
  {
    id: 20,
    name: 'HTML',
    votes: 25,
    firstPlaceVotes: 0
  },
  {
    id: 21,
    name: 'Matlab',
    votes: 24,
    firstPlaceVotes: 0
  },
  {
    id: 22,
    name: 'HCL',
    votes: 18,
    firstPlaceVotes: 0
  },
  {
    id: 23,
    name: 'Groovy',
    votes: 18,
    firstPlaceVotes: 0
  },
  {
    id: 24,
    name: 'YAML',
    votes: 17,
    firstPlaceVotes: 0
  },
  {
    id: 25,
    name: 'Markdown',
    votes: 16,
    firstPlaceVotes: 0
  }
]
</script>

<template>
  <table>
    <thead>
      <tr>
        <th>Language</th>
        <th>Points</th>
      </tr>
    </thead>
    <tbody>
      <tr v-for="language in languages" :key="language.id">
        <td>
          <p>{{ language.name }}</p>
          <p v-if="language.firstPlaceVotes > 0" class="fpv">({{ language.firstPlaceVotes }})</p>
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

td p:first-child {
  font-weight: 600;
}

.fpv {
  color: var(--color-text-light);
  margin-left: 0.25rem;
}
</style>
