#include <gtest/gtest.h>
#include "kaprekar_constant.h"

class KaprekarTest : public ::testing::Test {

};


TEST_F(KaprekarTest, StringSortAscending) {
    std::string input = "321";
    std::string expected_output = "123";
    std::string output=sortString(input, true);
    EXPECT_EQ(output, expected_output);
}

TEST_F(KaprekarTest, StringSortDescending) {
    std::string input = "123";
    std::string expected_output = "321";
    std::string output=sortString(input, false);
    EXPECT_EQ(output, expected_output);
}

TEST_F(KaprekarTest, swapDigits)
{
   char digit1='3';
   char digit2='4';
   swap(digit1,digit2);
   EXPECT_EQ(digit1,'4');
   EXPECT_EQ(digit2,'3');
}

TEST_F(KaprekarTest, findDifference)
{
   int input = 1459;
   int expected_output = 8082;
   int output = findDifference(input);
   EXPECT_EQ(output,expected_output);
}

TEST_F(KaprekarTest, findStepsForKaprekarConstant)
{
   int input = 1459;
   int expected_output = 3;
   int output = findStepsForKaprekarConstant(input);
   EXPECT_EQ(output,expected_output);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

