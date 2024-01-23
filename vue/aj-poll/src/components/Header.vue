<template>
  <header>
    <div class="wrapper">
      <img class="logo" src="../assets/logo.svg" alt="AJ Poll Logo" />
      <h1>AJ Top 25 Poll</h1>
      <nav>
        <RouterLink to="/">Home</RouterLink>
        <RouterLink to="/about">About</RouterLink>
      </nav>
    </div>
  </header>
</template>

<script>
export default {
  name: "Header"
}
</script>

<style scoped>

</style>