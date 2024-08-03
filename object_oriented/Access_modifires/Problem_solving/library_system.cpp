// 2. Library System
//    Scenario In a library management system, you have a Book class with properties such as title, author, and ISBN. You want to ensure that the ISBN is only set by the library system when a new book is added, but it should be visible to library staff when displaying book details.
//    Question: What access modifiers would you use to control the visibility and modification of the ISBN property in the Book class?

#include <iostream>
#include <string>

using namespace std;

class MyLibrary
{
private:
   string title;
   string author;
   string ISBN; // it is private

public:
   void setTitle(const std::string newTitle)
   {
      this->title = newTitle;
   }
   string getTitle() const
   {
      return this->title;
   }
   void setAuther(const std::string newAuther)
   {
      this->author = newAuther;
   }
   string getAuther()
   {
      return this->author;
   }
   void setIsbn(const std::string newisbn)
   {
      this->ISBN = newisbn;
   }
   string getIsbn() const
   {
      return this->ISBN;
   }
   void displayBookdetails()
   {
      cout << "Ttile : " << this->title << "\n";
      cout << "Auther : " << this->author << "\n";
      cout << "ISBN : " << this->ISBN << "\n";
   }
};

int main()
{
   MyLibrary book1;
   string title, auther, isbn;
   // set title
   cout << "Enter Title of the book : ";
   cin >> title;
   book1.setTitle(title);
   // set auther
   cout << "Enter Auther of the book : ";
   cin >> auther;
   book1.setAuther(auther);
   // set isbn
   cout << "Enter isbn of the book : ";
   cin >> isbn;
   book1.setIsbn(isbn);

   book1.displayBookdetails();

   return 0;
}