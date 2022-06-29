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
/**
 *добавление книги в БД
 */
    void feeddata();


/**
 *изменение базы данных книжного магазина
 */
    void editdata();


/**
 *показвает какие книги есть в магазине
 */
    void showdata();


/** проверка наличия книг в магазине
 *
 * @param tbuy название книги
 * @param abuy имя автора
 * @return
 */
    bool search(std::string const &tbuy, std::string const &abuy);

    
/**
 *функция отвечающая за покупку книги в системе
 */
    void buybook();

};