TEST_CASE("factorial function") {
    CHECK(fact(0) == 1); // should fail
    CHECK(fact(-1) == 0);// should fail
    CHECK(fact(-2) == 2);
    CHECK(fact(1) == 1);
    CHECK(fact(2) == 2);
    CHECK(fact(3) == 6);
