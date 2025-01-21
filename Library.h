#ifndef Library_H
#define	Library_H
#include <string>
#include <iostream>
#include <vector>
#include "Book.h"

class Library
{
private:
	std::vector<Book> books;
public:
	void addBook(Book book);
	void showBooks();
	void searchBook(std::string keyword);
};

#endif // Library_H


	