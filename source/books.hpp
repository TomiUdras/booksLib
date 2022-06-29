#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class book {
private:
    /// автор книги
    std::string author;
    /// название и кто публикует
    std::string title, publisher;
    float price;
    int stock;
public:
    book() {
        author = std::string();
        title = std::string();
        publisher = std::string();
        price = 0;
        stock = 0;
    }

    void feeddata();

    void editdata();

    void showdata();

    bool search(std::string const &tbuy, std::string const &abuy);

    void buybook();

};