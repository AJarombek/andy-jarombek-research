<script setup lang="ts">
import { ref } from 'vue';

const isPollDropdownOpen = ref(false);
</script>

<template>
  <header>
    <div class="wrapper">
      <img class="logo" src="../assets/logo.svg" alt="AJ Poll Logo" />
      <h1>AJ Top 25 Poll</h1>
      <nav>
        <RouterLink to="/" @click="isPollDropdownOpen = !isPollDropdownOpen">
          <div class="dropdown">
            <p>Polls</p>
            <font-awesome-icon icon="chevron-down" />
            <div class="dropdown-content" v-if="isPollDropdownOpen">
              <RouterLink to="/">Poll 1</RouterLink>
              <RouterLink to="/">Poll 2</RouterLink>
              <RouterLink to="/">Poll 3</RouterLink>
            </div>
          </div>
        </RouterLink>
        <RouterLink to="/about">
          <div class="dropdown">
            <p>About</p>
            <font-awesome-icon icon="chevron-down" />
          </div>
        </RouterLink>
      </nav>
    </div>
  </header>
</template>

<style scoped>
header {
  line-height: 1.5;
  height: 5rem;
}

.wrapper {
  display: flex;
  align-items: center;
}

.logo {
  display: block;
  max-height: 3rem;
}

h1 {
  margin: 0 1rem;
}

nav {
  margin-left: auto;
  display: flex;
  align-items: center;
  justify-content: center;
  font-size: 1rem;
  font-weight: 600;
  text-transform: uppercase;
}

.dropdown {
  display: flex;
  align-items: center;
  cursor: pointer;
  margin: 0 1rem;
}

.dropdown p {
  margin: 0 0.5rem;
}

.dropdown p:hover {
  text-decoration: underline;
}

.dropdown-content {
  display: flex;
  flex-direction: column;
  position: absolute;
  top: 4.5rem;
  min-width: 160px;
  z-index: 1;
  background-color: var(--color-background);
}

.dropdown-content a {
  padding: 0.5rem;
}

.dropdown-content a:hover {
  text-decoration: underline;
}
</style>
