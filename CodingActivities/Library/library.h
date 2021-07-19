#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include <list>
#include <iterator>
#include <bits/stdc++.h>

class BookDB {
    std::list<Book> books;

  public:
    void addBook(int isbn, std::string title, std::string author,int year, double price, int pages);
    void addBook(const Book& ref); 
    void displayAll();
    bool isBookFoundById(int key);
    double findAveragePrice();
    Book* findBookById(int key);  //Book*, Book&
    std::list<Book> findBooksbyAuthor(std::string name);
    Book& findBookWithMinPages();
    Book& findBookWithMaxPrice();
    double findAveragePriceByYear(int);
    int countBooksInPriceRange(int,int);
    void removeByISBN(int key);
    double findMaxPrice();
    bool isPriceRange(Book&); 
    //void sortBooksByTitle();
    //void sortBooksByPrice();   //descending order
};
#endif
