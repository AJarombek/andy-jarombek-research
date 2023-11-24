// Unit tests of the memory_arena.h and memory_arena.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 9/9/2023

#include "memory_arena.h"
#include <gtest/gtest.h>

class MemoryArenaTest: public ::testing::Test {};

TEST_F(MemoryArenaTest, Constructor) {
    // Test the constructor
    size_t size = 1024;
    MemoryArena arena(size);

    EXPECT_EQ(arena.getCapacity(), size);
    EXPECT_EQ(arena.getOffset(), 0);
}

TEST_F(MemoryArenaTest, AllocateAndReset) {
    // Test allocate and reset methods
    size_t size = 1024;
    MemoryArena arena(size);

    // Allocate memory
    size_t allocationSize = 128;
    void* ptr = arena.allocate(allocationSize);

    EXPECT_NE(ptr, nullptr);
    EXPECT_EQ(arena.getOffset(), allocationSize);

    // Reset the arena and ensure offset is reset to 0
    arena.reset();
    EXPECT_EQ(arena.getOffset(), 0);
}

TEST_F(MemoryArenaTest, Destructor) {
    // Test the destructor
    size_t size = 1024;
    {
        MemoryArena arena(size);

        size_t allocationSize = 128;
        void* ptr = arena.allocate(allocationSize);

        EXPECT_NE(ptr, nullptr);
        // The destructor should automatically deallocate memory
    }

    // TODO: Test that the memory was deallocated
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
