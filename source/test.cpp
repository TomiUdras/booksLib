#include "books.cpp"
#include "../external/doctest/doctest.h"


TEST_CASE("test1"){
    book book1;
    char titlebuy[20], authorbuy[20];
    cin.ignore();
    cout << "\nEnter Title Of Book: ";
    cin.getline(titlebuy, 20);
    cout << "Enter Author Of Book: ";
    cin.getline(authorbuy, 20);
    REQUIRE(book1.search(titlebuy,authorbuy) == 1);
}
