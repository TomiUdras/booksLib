#include "books.hpp"


void book::feeddata() {
    cin.ignore();
    cout << "\nEnter Author Name: ";
    cin >> author;
    cout << "Enter Title Name: ";
    cin >> title;
    cout << "Enter Publisher Name: ";
    cin >> publisher;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Stock Position: ";
    cin >> stock;

}

void book::editdata() {

    cout << "\nEnter Author Name: ";
    cin >> author;
    cout << "Enter Title Name: ";
    cin >> title;
    cout << "Enter Publisher Name: ";
    cin >> publisher;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Stock Position: ";
    cin >> stock;

}

void book::showdata() {
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << price;
    cout << "\nStock Position: " << stock;

}

bool book::search(std::string const &tbuy, std::string const &abuy) {
    return tbuy==title && abuy==author;
}



void book::buybook() {
    int count;
    cout << "\nEnter Number Of Books to buy: "; // вводим имя книги
    cin >> count; // вводим имя книги
    if (count <= stock) {
        stock = stock - count;
        cout << "\nBooks Bought Sucessfully";
        cout << "\nAmount: Rs. " << (price) * count;
    } else
        cout << "\nRequired Copies not in Stock";
}
