/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


/***** isPalindrome Tests *****/


TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(");");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, space_in_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("race car");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, different_case_in_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("raCecaR");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xxxx");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, even_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xyxx");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xxyxx");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, odd_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xxyyx");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, 2char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xx");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, 2char_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xy");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, single_character)
{
    Practice obj;
    bool actual = obj.isPalindrome("x");
    ASSERT_TRUE(actual);
}


/***** sortDescending Tests *****/


TEST(PracticeTest, ascending)
{
    int one = 1;
    int two = 2;
    int three = 3;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, descending)
{
    int one = 3;
    int two = 2;
    int three = 1;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, max_in_middle_min_at_end)
{
    int one = 2;
    int two = 3;
    int three = 1;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, min_in_middle_max_at_end)
{
    int one = 2;
    int two = 1;
    int three = 3;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, max_in_middle_min_at_start)
{
    int one = 1;
    int two = 3;
    int three = 2;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, min_in_middle_max_at_start)
{
    int one = 3;
    int two = 1;
    int three = 2;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, all_duplicates)
{
    int one = 2;
    int two = 2;
    int three = 2;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, two_dup_presorted)
{
    int one = 2;
    int two = 1;
    int three = 1;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}

TEST(PracticeTest, two_dup_ascending)
{
    int one = 1;
    int two = 1;
    int three = 2;
    Practice obj;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
    ASSERT_GE(two, three);
}
