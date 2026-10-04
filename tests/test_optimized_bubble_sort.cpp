#include <gtest/gtest.h>
#include "optimized_bubble_sort.h"

TEST(OptimizedBubbleSort, AlreadySorted) {
    int a[] = { 1, 2, 3, 4, 5 };
    optimized_bubble_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(OptimizedBubbleSort, ReverseSorted) {
    int a[] = { 5, 4, 3, 2, 1 };
    optimized_bubble_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(OptimizedBubbleSort, EmptyArray) {
    int a[1] = { 0 };              // fixed
    optimized_bubble_sort(a, 0);
    SUCCEED();
}

TEST(OptimizedBubbleSort, Variant9) {
    int a[] = { 7, 17, 9, 3, 13, 1, 16, 10 };
    optimized_bubble_sort(a, 8);
    int expected[] = { 1, 3, 7, 9, 10, 13, 16, 17 };
    for (int i = 0; i < 8; i++) EXPECT_EQ(a[i], expected[i]);
}