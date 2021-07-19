#ifndef __BOOK_H
#define __BOOK_H

#include <iostream>
class Book {
  private:
    int m_isbn;
    std::string m_title;
    std::string m_author;
    int m_year;
    double m_price;
    int m_pages;
    //std::string m_publisher;

  public:
    Book(int);
    Book(int isbn, std::string title, std::string author,int year, double price, int pages);
    int isbn();
    std::string title();
    std::string author();
    int year();
    double price();
    int pages();
    //std::string publisher();
    void display() const;
    friend std::ostream operator<<(std::ostream &out, Book &b);
    bool operator==(Book b);
    bool operator<(Book &b);
    bool operator<(double n);
};
#endif // __BOOK_H
