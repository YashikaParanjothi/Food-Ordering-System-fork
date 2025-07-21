#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"h
#include "customer.h"

DEST_CASE("Customer default construction") {
    customer c;
    // Add assertions as appropriate for your class
    CHECK(c.address.empty());
    CHECK(c.phone == 0);
    CHECK(c.email.empty());
}

TEST_CASE("Customer methods existence") {
    customer c;
    // The following methods should exist and be callable
    c.getdetails();
    c.display();
    c.login();
}
