#include <gtest/gtest.h>
#include "bubble_sort.h"

TEST(BubbleSort, AlreadySorted) {
    int a[] = { 1, 2, 3, 4, 5 };
    bubble_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(BubbleSort, ReverseSorted) {
    int a[] = { 5, 4, 3, 2, 1 };
    bubble_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(BubbleSort, EmptyArray) {
    int a[1] = { 0 };              // fixed
    bubble_sort(a, 0);
    SUCCEED();
}

TEST(BubbleSort, Variant9) {
    int a[] = { 7, 17, 9, 3, 13, 1, 16, 10 };
    bubble_sort(a, 8);
    int expected[] = { 1, 3, 7, 9, 10, 13, 16, 17 };
    for (int i = 0; i < 8; i++) EXPECT_EQ(a[i], expected[i]);
}