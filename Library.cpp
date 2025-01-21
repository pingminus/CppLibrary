#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

std::vector<Book> books;

void Library::addBook(Book book){
	books.push_back(book);
}
void Library::showBooks() {
	for (Book& book : books) {
		book.display();
		std::cout << "\n";
	}
}
std::string toLowerCase(const std::string& str) {
	std::string result = str;  
	for (int i = 0; i < result.length(); i++) {
		result[i] = tolower(result[i]);  
	}
	return result;
}

void Library::searchBook(std::string keyword) {
	for (Book& book : books) {
		if (toLowerCase(book.getAuthor()) == keyword || toLowerCase(book.getGenre())== keyword || toLowerCase(book.getTitle())==keyword || std::to_string(book.getYear())==keyword ||
			book.getAuthor() == keyword || book.getGenre() == keyword || book.getTitle() == keyword) {
			book.display(); 
		}	
	}
}
