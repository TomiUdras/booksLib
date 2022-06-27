#include "books.hpp"

void book::feeddata() { //  добавление книги в БД
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

void book::editdata() { //  изменение базы данных книжного магазина

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

void book::showdata() { //  показвает какие книги есть в магазине
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock;

}

int book::search(char tbuy[20], char abuy[20]) { // проверка наличия книг в магазине
    if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
        return 1;
    else return 0;

}

void book::buybook() { //   функция отвечающая за покупку книги в системе
    int count;
    cout << "\nEnter Number Of Books to buy: "; // вводим имя книги
    cin >> count; // вводим имя книги
    if (count <= *stock) {
        *stock = *stock - count;
        cout << "\nBooks Bought Sucessfully";
        cout << "\nAmount: Rs. " << (*price) * count;
    } else
        cout << "\nRequired Copies not in Stock";
}
