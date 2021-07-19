#include "book.h"

Book::Book(int isbn):
    m_isbn(isbn){}

Book::Book(int isbn, std::string title, std::string author,int year, double price, int pages):
    m_isbn(isbn),
    m_title(title),
    m_author(author),
    m_year(year),
    m_price(price),
    m_pages(pages){}

int Book::isbn()
{
    return m_isbn;
}
std::string Book:: title()
{
    return m_title;
}
std::string Book:: author()
{
    return m_author;
}

int Book::year()
{
    return m_year;
}

double Book::price()
{
    return m_price;
}

int Book::pages()
{
    return m_pages;
}

//std::string Book::publisher();

void Book::display() const
{
    std::cout<<"ISBN   =  "<<m_isbn<<std::endl;
    std::cout<<"Title  =  "<<m_title<<std::endl;
    std::cout<<"Author =  "<<m_author<<std::endl;
    std::cout<<"Price  =  "<<m_price<<std::endl;
    std::cout<<"Pages  =  "<<m_pages<<std::endl;
    std::cout<<"Year   =  "<<m_year<<std::endl;
}

std::ostream operator<<(std::ostream &out, Book &b)
{
    out<<"ISBN   =  "<<b.m_isbn<<std::endl;
    out<<"Title  =  "<<b.m_title<<std::endl;
    out<<"Author =  "<<b.m_author<<std::endl;
    out<<"Price  =  "<<b.m_price<<std::endl;
    out<<"Pages  =  "<<b.m_pages<<std::endl;
    out<<"Year   =  "<<b.m_year<<std::endl;
}

bool Book::operator==(Book b)
{
    if(this->isbn() == b.isbn())return true;
    else return false;
}

bool Book::operator<(Book &b)
{
    if(this->price() < b.isbn())return true;
    else return false;
}

bool Book::operator<(double n)
{
    if(this->price() < n)return true;
    else return false;
}