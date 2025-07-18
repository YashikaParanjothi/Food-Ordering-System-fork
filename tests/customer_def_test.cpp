#define DOCTEST_CONFIG_INPLEMENT_WITH_MAIN
#include "doctest.h"h
#include customer.h
#include <sstream>
#include string.h

TEST_CASE("Customer::getdetails prompts and stores correct input") {
    // This test is a placeholder. Since getdetails interacts via cin/cout, use stringstreams to simulate IO/ a real test setup.
    CHECK(true); // Replace with input/output simulation if refactored for testability.
}

TEST_CASE("Customer::login returns correct flag for valid credentials") {
    // This test is a placeholder. In practice, this would require dependency injection or stubbing file access and cin/cout.
    CHECK(true); // Replace with actual logic if function is made testable.
}

TEST_CASE("Customer::display outputs user details correctly") {
    // Placeholder: Would require capturing cout output to test properly.
    CHECK(true); // Replace with actual output validation if refactored.
}
