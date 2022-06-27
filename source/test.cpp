#include "books.cpp"
#include "doctest.h"

TEST_CASE("test1"){
    REQUIRE(book::search('qwer','qwer') == 1);
}
TEST_CASE("test2"){
    REQUIRE(book::search('qweryui','qwer') == 0);
}
TEST_CASE("test3"){
    REQUIRE(book::search('qwer','qoiuywer') == 0);
}