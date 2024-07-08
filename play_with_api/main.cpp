#include "crow_all.h"

int main()
{
   crow::SimpleApp app;
   // Define a JSON alias
   using json = crow::json::wvalue;

   // Route to return a JSON array with book details
   CROW_ROUTE(app, "/")
   ([]()
    {
       json books = json::list({
            json({{"id", 1}, {"title", "To Kill a Mockingbird"}, {"author", "Harper Lee"}, {"publish_year", 1960}}),
            json({{"id", 2}, {"title", "1984"}, {"author", "George Orwell"}, {"publish_year", 1949}}),
            json({{"id", 3}, {"title", "Pride and Prejudice"}, {"author", "Jane Austen"}, {"publish_year", 1813}}),
            json({{"id", 4}, {"title", "The Great Gatsby"}, {"author", "F. Scott Fitzgerald"}, {"publish_year", 1925}}),
            json({{"id", 5}, {"title", "Moby Dick"}, {"author", "Herman Melville"}, {"publish_year", 1851}}),
            json({{"id", 6}, {"title", "War and Peace"}, {"author", "Leo Tolstoy"}, {"publish_year", 1869}}),
            json({{"id", 7}, {"title", "The Catcher in the Rye"}, {"author", "J.D. Salinger"}, {"publish_year", 1951}}),
            json({{"id", 8}, {"title", "The Hobbit"}, {"author", "J.R.R. Tolkien"}, {"publish_year", 1937}}),
            json({{"id", 9}, {"title", "Crime and Punishment"}, {"author", "Fyodor Dostoevsky"}, {"publish_year", 1866}}),
            json({{"id", 10}, {"title", "The Odyssey"}, {"author", "Homer"}, {"publish_year", "8th century BC"}})
        });

        return books; });

   app.port(3000).multithreaded().run();
}
