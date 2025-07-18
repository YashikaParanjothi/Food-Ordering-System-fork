#include <gtest.gtest.h>
include "customer.h"

class CustomerTest: public :: test::Test {
protected:
  customer cust;

  void SetUp() override {
    // Initialize customer object with test data if needed
    // cust.address = "123 Main St"; // address is private, use a setter if available
    // cust.phone = 1234567890; // phone is private, use a setter if available
    // cust.email = "test@example.com"; // email is private, use a setter if available
  }
};

TEST_F(CustomerTest, GetDetailsTest) {
  // If getdetails sets details, test the outcome here
  cust.getdetails();
  // EXPECT_EQI(cust.getAddress(), "expected address");
}

TEST_F(CustomerTest, DisplayTest) {
  // This could check output to stdout if display prints data
  // Example: testing with Google Test's capture stdout functionality
}

TEST_F(CustomerTest, LoginTest) {
  int loginResult = cust.login();
  // EXPECT_EQ (loginResult, expectedValue);
}
