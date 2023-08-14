#include <gtest/gtest.h>

#include <iostream>

#include "ExampleModel/ExampleModelCalc.h"

TEST(random_tests, random_test_1) {
  s21::ExampleModel test;
  char arr[256] = "(256/32)/4*2+256/(32/4*2)+256/(32/4)*2";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_EQ(res, 84);
}

TEST(random_tests, random_test_2) {
  s21::ExampleModel test;
  char arr[256] =
      "5*(1.75+0.234)*sin(cos(tan(5%3))*tan(sin(5))+ln(2))*5^2+sin(5)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 246.648, 0.0001);
}

TEST(random_tests, random_test_4) {
  s21::ExampleModel test;
  char arr[256] = "2^3^4";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 2.4178516392292583e+24, 0.0001);
}

TEST(random_tests, random_test_5) {
  s21::ExampleModel test;
  char arr[256] = "1000%10%12";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 0, 0.0001);
}

TEST(random_tests, random_test_6) {
  s21::ExampleModel test;
  char arr[256] = "435435*10%232^3";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 4354350, 0.0001);
}

TEST(random_tests, random_test_7) {
  s21::ExampleModel test;
  char arr[256] = "+5*(+2.75+2.25)*+12%7/sin(5)*5^2";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, -156.425281, 0.0001);
}

TEST(random_tests, random_test_8) {
  s21::ExampleModel test;
  char arr[256] = "sin(cos(-tan(5%3)-100))";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, -0.789992, 0.0001);
}

TEST(sin_tests, sin_test_1) {
  s21::ExampleModel test;
  char arr[256] = "sin(sin(sin(sin(435435*10%232^3)+7)*3)+25)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 0.00998033, 0.0001);
}

TEST(cos_tests, cos_test_1) {
  s21::ExampleModel test;
  char arr[256] = "+cos(cos(cos(cos(435435*10%232^3)+7)*3)+25)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 0.449615, 0.0001);
}

TEST(tan_tests, tan_test_1) {
  s21::ExampleModel test;
  char arr[256] = "-tan(-cos(tan(5^3)))";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 0.858595, 0.0001);
}

TEST(acos_tests, acos_test_1) {
  s21::ExampleModel test;
  char arr[256] = "acos(0.142214)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 1.42809854, 0.0001);
}

TEST(asin_tests, asin_test_1) {
  s21::ExampleModel test;
  char arr[256] = "asin(-0.3223)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, -0.328158, 0.0001);
}

TEST(atan_tests, atan_test_1) {
  s21::ExampleModel test;
  char arr[256] = "atan(0.99)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 0.780373, 0.0001);
}

TEST(sqrt_tests, sqrt_test_1) {
  s21::ExampleModel test;
  char arr[256] = "-sqrt(sqrt(34058%234)/sqrt(9))";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, -1.94197, 0.0001);
}

TEST(ln_tests, ln_test_1) {
  s21::ExampleModel test;
  char arr[256] = "ln(35/12)%-ln(700)";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 1.070441, 0.0001);
}

TEST(log_tests, log_test_1) {
  s21::ExampleModel test;
  char arr[256] = "log(213+-cos(33)/-sin(62))";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_NEAR(res, 2.328416, 0.0001);
}

TEST(plus, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "10+20-(((30*30))^2^2--sin(+27))*-2.75";
  double res = std::stod(test.s21_calc(arr, 0));
  ASSERT_EQ(res, 1804275000032.63012695);
}

TEST(cos2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "cos(x+1)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -0.91113026);
}

TEST(sin2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "sin(x-1)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 0.99999021);
}

TEST(tan2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "tan(x*-1)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 0.64836083);
}

TEST(acos2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "acos(x^2)";
  char x[255] = "-0.1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 1.56079616);
}
TEST(asin2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "asin(x/2)";
  char x[255] = "-0.1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -0.05002086);
}

TEST(atan2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "atan(x%0.01)";
  char x[255] = "-0.1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -0.00000000);
}

TEST(cos1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-cos(x)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 0.83907153);
}

TEST(sin1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-sin(25)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 0.13235175);
}

TEST(tan1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-tan(x*-37)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 0.85594117);
}

TEST(atan1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-atan(x)";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, 1.47112767);
}

TEST(asin1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-asin(x)";
  char x[255] = "1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -1.57079633);
}

TEST(sin3, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "sin(-x)";
  char x[255] = "1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -0.84147098);
}

TEST(acos1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-acos(x)";
  char x[255] = "0.1";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -1.47062891);
}

TEST(plus_plus, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "1+++1";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(dot, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "1..1";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}
TEST(equality, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "(1+1))";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(equality1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "(1+1)9";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(equality2, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "9(1+1)";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(equality3, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "9cos(10)";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(empty, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "cos(9x)";
  char x[255] = "0";
  std::string res = test.s21_calc(arr, x);
  std::string result = "error";
  ASSERT_EQ(result, res);
}

TEST(alog1, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "-log(x)";
  char x[255] = "10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -1.00000000);
}

TEST(mull, additional_tests) {
  s21::ExampleModel test;
  char arr[255] = "10/10*10*1*0.18-123";
  char x[255] = "-10";
  double res = std::stod(test.s21_calc(arr, x));
  ASSERT_EQ(res, -121.20000000);
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
