<script setup lang="ts">
import { ref } from 'vue';

const isPollDropdownOpen = ref(false);
const isAboutDropdownOpen = ref(false);

const githubUrl = 'https://github.com/AJarombek';
const websiteUrl = 'https://jarombek.com/';
</script>

<template>
  <header>
    <div class="wrapper">
      <img class="logo" src="../assets/aj-logo.png" alt="AJ Poll Logo" />
      <h1>AJ Top 25 Poll</h1>
      <nav>
        <div
          @click="
            isPollDropdownOpen = !isPollDropdownOpen;
            isAboutDropdownOpen = false;
          "
        >
          <div class="dropdown">
            <p>Polls</p>
            <font-awesome-icon icon="chevron-down" v-if="!isPollDropdownOpen" />
            <font-awesome-icon icon="chevron-up" v-if="isPollDropdownOpen" />
            <div class="dropdown-content" v-if="isPollDropdownOpen">
              <RouterLink to="/polls/languages">Languages</RouterLink>
              <RouterLink to="/polls/components">Components</RouterLink>
              <RouterLink to="/polls/companies">Companies</RouterLink>
            </div>
          </div>
        </div>
        <div
          @click="
            isAboutDropdownOpen = !isAboutDropdownOpen;
            isPollDropdownOpen = false;
          "
        >
          <div class="dropdown">
            <p>About</p>
            <font-awesome-icon icon="chevron-down" v-if="!isAboutDropdownOpen" />
            <font-awesome-icon icon="chevron-up" v-if="isAboutDropdownOpen" />
            <div class="dropdown-content" v-if="isAboutDropdownOpen">
              <RouterLink to="/about">About</RouterLink>
              <a :href="githubUrl" target="_blank">
                GitHub
                <font-awesome-icon icon="arrow-up-right-from-square" />
              </a>
              <a :href="websiteUrl" target="_blank">
                My Website
                <font-awesome-icon icon="arrow-up-right-from-square" />
              </a>
            </div>
          </div>
        </div>
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
