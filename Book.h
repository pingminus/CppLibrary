#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    std::string genre;
    int year;

public:
   
    Book(const std::string& t, const std::string& a, const std::string& g, int y);

    
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getGenre() const;
    int getYear() const;

   
    void display() const;
};

#endif 
