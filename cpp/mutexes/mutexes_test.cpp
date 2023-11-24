// Unit tests of the mutexes.cpp file using Google Test
// Author: Andrew Jarombek
// Date: 6/17/2023

#include <gtest/gtest.h>
#include <mutex>
#include <thread>

extern void incrementSharedValue(std::mutex& mtx, int& sharedValue);

std::mutex mtx; // Mutex to protect shared resource
int sharedValue = 0; // Shared resource

TEST(MutexTest, MultipleThreadsIncrementSharedValue)
{
    const int numThreads = 10;
    std::thread threads[numThreads];

    // Create threads to increment the shared value
    for (auto& i : threads) {
        i = std::thread(incrementSharedValue, std::ref(mtx), std::ref(sharedValue));
    }

    // Wait for all threads to finish
    for (auto& thread : threads) {
        thread.join();
    }

    // Assert that the shared value has been incremented by the number of threads
    ASSERT_EQ(sharedValue, numThreads);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
