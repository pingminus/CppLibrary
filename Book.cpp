#include "Book.h"

// Constructor
Book::Book(const std::string& t, const std::string& a, const std::string& g, int y)
    : title(t), author(a), genre(g), year(y) {}

// Getters
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getGenre() const { return genre; }
int Book::getYear() const { return year; }

// Display function
void Book::display() const {
    std::cout << "\n"
        << "    Title: " << title << "\n"
        << "    Author: " << author << "\n"
        << "    Genre: " << genre << "\n"
        << "    Year: " << year << "\n" << std::endl;
}