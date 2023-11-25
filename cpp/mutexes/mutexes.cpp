// Using mutexes in C++
// Author: Andrew Jarombek
// Date: 6/17/2023

#include <mutex>

void incrementSharedValue(std::mutex& mtx, int& sharedValue) {
    // Acquire the lock on the mutex
    std::unique_lock<std::mutex> lock(mtx);

    // Critical section - Access the shared resource
    sharedValue++;

    // The lock will automatically be released when it goes out of scope (end of the function)
}
