#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class book {
private:
    char *author, *title, *publisher; //    параметры книги
    float *price; //    цена книги
    int *stock; //кол-во книг
public:
    book() {
        author = new char[20];
        title = new char[20];
        publisher = new char[20];
        price = new float;
        stock = new int;
    }

    void feeddata();

    void editdata();

    void showdata();

    int search(char[], char[]);

    void buybook();

};