#include "library.h"


void BookDB::addBook(int isbn, std::string title, std::string author,int year, double price, int pages) 
{
   books.push_back(Book(isbn, title, author, year, price, pages));  //Method-2, preferred
   //books.emplace_back(isbn, title, author, year, price, pages);
}

void BookDB::addBook(const Book& ref) 
{
   books.push_back(ref);
}

void BookDB::displayAll() 
{
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
      iter->display();
   /* for(Book& ref:books) 
         ref.display();
   */
}

bool comapreISBN(Book& ref)
{ 
    if(ref.isbn()==1002) return true; 
    else return false;
}


bool BookDB::isBookFoundById(int key) 
{
   // create an empty book with ISBN as key, let's call as tbook
   // Implement operator== in Book class , compare ISBN
   Book tbook(key);
   std::list<Book>::iterator iter;
   iter=std::find(books.begin(), books.end(), tbook);
   if(iter!= books.end())return true;
   else return false;
   //std::find_if(books.begin(), books.end(),comapreISBN);
}

Book* BookDB::findBookById(int key) 
{
   Book tbook(key);
   std::list<Book>::iterator iter;
   iter=std::find(books.begin(), books.end(), tbook);
   if(iter!=books.end()) return &(*iter);
   return NULL;
}

double BookDB::findAveragePrice() {
   double total;
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       total += iter->price();
   return total/books.size();
}


std::list<Book> BookDB::findBooksbyAuthor(std::string name) 
{
  std::list<Book> match;   //  std::list<Book*> match;
  std::list<Book>::iterator iter;
  for(iter=books.begin(); iter != books.end(); ++iter)
      if(name==iter->author())match.push_back((*iter));  //match.push_back(&(*iter));
  return match; 
}

bool comparePrice(Book& r1, Book& r2) 
{
  if(r1.price()<r2.price())return true;
  else return false;
}

double BookDB::findMaxPrice() 
{
  std::list<Book>::iterator maxIter;
  //iter = std::max_element(books.begin(), books.end());  //operator< on price in Book
  maxIter = std::max_element(books.begin(), books.end(), comparePrice);
  return maxIter->price();
}
   
Book& BookDB::findBookWithMaxPrice() 
{
  double maxPrice=0;
  std::list<Book>::iterator maxIter;
  maxIter = std::max_element(books.begin(), books.end(), comparePrice);
  return *maxIter;
}

bool comparePages(Book& r1, Book& r2) 
{
  if(r1.pages() < r2.pages())return true;
  else return false;
}


bool BookDB::isPriceRange(Book& ref) 
{
  if(ref.price() < 200.00)return true;
  else return false;
}



bool compareTitle(Book& r1, Book& r2) {
  if (r1.title() == r2.title()) return true;
  else return false;
}





