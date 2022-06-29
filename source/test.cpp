#include "books.cpp"
#include "../external/doctest/doctest.h"


TEST_CASE("test1"){
    book book1;
    char authorbuy[20]  = "NameMen";
    char titlebuy[20] = "NameBook";
    REQUIRE(book1.search(titlebuy,authorbuy) == 0);
}

TEST_CASE("test2"){
    book book1;
    char authorbuy[20]  = "";
    char titlebuy[20] = "";
    REQUIRE(book1.search(titlebuy,authorbuy) == 1);
}