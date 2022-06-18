#include "books.hpp"

void book::feeddata() {
    cin.ignore();
    cout << "\nEnter Author Name: ";
    cin.getline(author, 20);
    cout << "Enter Title Name: ";
    cin.getline(title, 20);
    cout << "Enter Publisher Name: ";
    cin.getline(publisher, 20);
    cout << "Enter Price: ";
    cin >> *price;
    cout << "Enter Stock Position: ";
    cin >> *stock;

}

void book::editdata() {

    cout << "\nEnter Author Name: ";
    cin.getline(author, 20);
    cout << "Enter Title Name: ";
    cin.getline(title, 20);
    cout << "Enter Publisher Name: ";
    cin.getline(publisher, 20);
    cout << "Enter Price: ";
    cin >> *price;
    cout << "Enter Stock Position: ";
    cin >> *stock;

}

void book::showdata() {
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock;

}

int book::search(char tbuy[20], char abuy[20]) {
    if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
        return 1;
    else return 0;

}

void book::buybook() {
    int count;
    cout << "\nEnter Number Of Books to buy: ";
    cin >> count;
    if (count <= *stock) {
        *stock = *stock - count;
        cout << "\nBooks Bought Sucessfully";
        cout << "\nAmount: Rs. " << (*price) * count;
    } else
        cout << "\nRequired Copies not in Stock";
}
