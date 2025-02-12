#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"
using namespace std;
#include <sstream>


TEST_CASE("Testing calculateOddIndexSum") {
    SECTION("Basic Test Cases") {
        {
            int arr1[] = {1, 2, 3, 4, 5};
            int result = calculateOddIndexSum(arr1, 5);
            REQUIRE(result == 6);
        }
        {
            int arr2[] = {10, 20, 30, 40};
            int result = calculateOddIndexSum(arr2, 4);
            REQUIRE(result == 60);
        }
    }
    SECTION("Edge Cases") {
        {
            int arr3[] = {};
            int result = calculateOddIndexSum(arr3, 0);
            REQUIRE(result == 0);
        }
        {
            int arr4[] = {42};
            int result = calculateOddIndexSum(arr4, 1);
            REQUIRE(result == 0);
        }
    }
    SECTION("Negative and Mixed Values") {
        {
            int arr5[] = {-1, -2, -3, -4, -5};
            int result = calculateOddIndexSum(arr5, 5);
            REQUIRE(result == -6);
        }
    }
}
TEST_CASE("Testing productEvenIndices") {
    SECTION("Basic Test Cases") {
        {
            int arr1[] = {2, 3, 4, 5, 6};
            int result = productEvenIndices(arr1, 5, 0);
            REQUIRE(result == 48);
        }
        {
            int arr2[] = {1, 2, 3, 4, 5, 6};
            int result = productEvenIndices(arr2, 6, 0);
            REQUIRE(result == 15);
        }
    }
    SECTION("Edge Cases") {
        {
            int arr3[] = {};
            int result = productEvenIndices(arr3, 0, 0);
            REQUIRE(result == 1);
        }
        {
            int arr4[] = {42};
            int result = productEvenIndices(arr4, 1, 0);
            REQUIRE(result == 42);
        }

        {
            int arr5[] = {0};
            int result = productEvenIndices(arr5, 1, 0);
            REQUIRE(result == 0);
        }
        {
            int arr6[] = {1, 2};
            int result = productEvenIndices(arr6, 2, 0);
            REQUIRE(result == 1);
        }
    }
    SECTION("Negative and Mixed Values") {
        {
            int arr7[] = {-1, -2, -3, -4, -5};
            int result = productEvenIndices(arr7, 5, 0);
            REQUIRE(result == -15);
        }

        {
            int arr8[] = {1, -2, 3, -4, 5, -6};
            int result = productEvenIndices(arr8, 6, 0);
            REQUIRE(result == 15);
        }
    }
}
TEST_CASE("Find Largest Number") {
    int arr1[] = {3, 1, 4, 1, 5};
    REQUIRE(findLargestNumber(arr1, 5) == 5);

    int arr2[] = {10, 20, 30};
    REQUIRE(findLargestNumber(arr2, 3) == 30);


    int arr3[] = {-1, -5, -3, -2, -4};
    REQUIRE(findLargestNumber(arr3, 5) == -1);

    int arr4[] = {0};
    REQUIRE(findLargestNumber(arr4, 1) == 0);

    int arr5[] = {7, 8, 9, 10, 11, 12};
    REQUIRE(findLargestNumber(arr5, 6) == 12);
}
TEST_CASE("Find Smallest Number") {

    int arr1[] = {3, 1, 4, 1, 5};
    REQUIRE(findSmallestNumber(arr1, 5) == 1);

    int arr2[] = {10, 20, 30};
    REQUIRE(findSmallestNumber(arr2, 3) == 10);

    int arr3[] = {-1, -5, -3, -2, -4};
    REQUIRE(findSmallestNumber(arr3, 5) == -5);

    int arr4[] = {0};
    REQUIRE(findSmallestNumber(arr4, 1) == 0);

    int arr5[] = {7, 8, 9, 10, 11, 12};
    REQUIRE(findSmallestNumber(arr5, 6) == 7);
}
TEST_CASE("Reverse and Print Array") {
    stringstream buffer;
    streambuf* originalCout = cout.rdbuf(buffer.rdbuf());

    int arr1[] = {1, 2, 3, 4, 5};
    reverseAndPrintArray(arr1, 5);
    REQUIRE(buffer.str() == "Original Array: 1 2 3 4 5 \nReversed Array: 5 4 3 2 1 \n");
    buffer.str("");

    int arr2[] = {10, 20, 30};
    reverseAndPrintArray(arr2, 3);
    REQUIRE(buffer.str() == "Original Array: 10 20 30 \nReversed Array: 30 20 10 \n");
    buffer.str("");

    int arr3[] = {7, 8, 9, 10, 11, 12};
    reverseAndPrintArray(arr3, 6);
    REQUIRE(buffer.str() == "Original Array: 7 8 9 10 11 12 \nReversed Array: 12 11 10 9 8 7 \n");
    buffer.str("");

    cout.rdbuf(originalCout);
}