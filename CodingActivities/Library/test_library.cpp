#include "book.h"
#include "library.h"
#include <iostream>
using namespace std;

#include <gtest/gtest.h>

/**
 * @brief Testing empty constructor
 * 
 */
TEST(Book, Param_Constructor1)
{
  Book a(100000);
  EXPECT_EQ(100000, a.isbn());
}

/**
 * @brief Testing parameterised constructor
 * 
 */
TEST(Book, Param_Constructor2)
{
  Book a(100000,"ABC","XYZ",2020,999.0,300);
  EXPECT_EQ(100000, a.isbn());
  EXPECT_EQ("ABC", a.title());
  EXPECT_EQ("XYZ", a.author());
  EXPECT_EQ(2020, a.year());
  EXPECT_EQ(999.0, a.price());
  EXPECT_EQ(300, a.pages());
}


TEST(Book, operator_equal_to)
{
  Book a(100000,"ABC","XYZ",2020,999.0,300);
  Book b(100000,"ABC","XYZ",2020,999.0,300);
  EXPECT_EQ(true, b == a);
}

TEST(Book, operator_less_than)
{
  Book a(100001,"ABC","XYZ",2020,999.0,300);
  Book b(100002,"ABC","XYZ",2020,990.0,300);
  EXPECT_EQ(true, b < a);
}

TEST(Book, operator_less_than_1)
{ 
  Book a(100001,"ABC","XYZ",2020,999.0,300);
  //Book b(100002,"ABC","XYZ",2020,990.0,300);
  EXPECT_EQ(true, a < 1000.0);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
