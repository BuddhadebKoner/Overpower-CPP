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
        });

        return books; });

   app.port(3000).multithreaded().run();
}