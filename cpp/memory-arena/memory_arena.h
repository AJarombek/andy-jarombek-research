// Declaration of a memory arena class
// Author: Andrew Jarombek
// Date: 9/9/2023

#ifndef CONSTANTSTESTS_MEMORY_ARENA_H
#define CONSTANTSTESTS_MEMORY_ARENA_H

#include <cstddef>

class MemoryArena {
private:
    char* arena;
    size_t capacity;
    size_t offset;
public:
    explicit MemoryArena(size_t size);
    ~MemoryArena();

    void* allocate(size_t size);
    void reset();

    [[nodiscard]] size_t getCapacity() const;
    [[nodiscard]] size_t getOffset() const;
};

#endif //CONSTANTSTESTS_MEMORY_ARENA_H
