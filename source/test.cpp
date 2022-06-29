#include "books.cpp"
#include "../external/doctest/doctest.h"


TEST_CASE("test1"){
    book book1;
    REQUIRE(book1.search("NameBook","NameMen") == 0);
}

TEST_CASE("test2"){
    book book1;
    REQUIRE(book1.search("","") == 1);
}