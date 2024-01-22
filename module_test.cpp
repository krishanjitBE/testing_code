

#include <gtest/gtest.h>
#include "module.cpp"

using namespace std;

class TestFindMax : public testing::Test {

protected:
    TestFindMax() {
        // Setup code if needed
    }

    virtual ~TestFindMax() {
        // Teardown code if needed
    }

    virtual void SetUp() {
        // Code to run before each test
    }

    virtual void TearDown() {
        // Code to run after each test
    }
};

TEST_F(TestFindMax, EmptyArray) {
    vector<int> arr;
    ASSERT_EQ(find_max(arr), -1);
}

TEST_F(TestFindMax, PositiveNumbers) {
    vector<int> arr = {1, 3, 5, 2, 4};
    ASSERT_EQ(find_max(arr), 5);
}

TEST_F(TestFindMax, NegativeNumbers) {
    vector<int> arr = {-1, -3, -5, -2, -4};
    ASSERT_EQ(find_max(arr), -1);
}

TEST_F(TestFindMax, MixedNumbers) {
    vector<int> arr = {-1, 3, -5, 2, -4};
    ASSERT_EQ(find_max(arr), 3);
}

TEST_F(TestFindMax, DuplicateNumbers) {
    vector<int> arr = {1, 3, 5, 5, 2, 4};
    ASSERT_EQ(find_max(arr), 5);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
