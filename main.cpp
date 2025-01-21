// main.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"

using namespace std;	
void AddContent(Library& library) {
	library.addBook(Book("1984", "George_Orwell", "Dystopian", 1949));
	library.addBook(Book("To_Kill_a_Mockingbird", "Harper_Lee", "Fiction", 1960));
	library.addBook(Book("The_Great_Gatsby", "F._Scott_Fitzgerald", "Classics", 1925));
	library.addBook(Book("The_Hobbit", "J.R.R._Tolkien", "Fantasy", 1937));
	library.addBook(Book("Pride_and_Prejudice", "Jane_Austen", "Romance", 1813));
	library.addBook(Book("The_Catcher_in_the_Rye", "J.D._Salinger", "Classics", 1951));
	library.addBook(Book("Moby_Dick", "Herman_Melville", "Adventure", 1851));
	library.addBook(Book("The_Lord_of_the_Rings", "J.R.R._Tolkien", "Fantasy", 1954));
	library.addBook(Book("Brave_New_World", "Aldous_Huxley", "Dystopian", 1932));
	library.addBook(Book("Jane_Eyre", "Charlotte_Bronte", "Romance", 1847));
	library.addBook(Book("War_and_Peace", "Leo_Tolstoy", "Historical", 1869));
	library.addBook(Book("Crime_and_Punishment", "Fyodor_Dostoevsky", "Classics", 1866));
	library.addBook(Book("The_Alchemist", "Paulo_Coelho", "Fiction", 1988));
	library.addBook(Book("Animal_Farm", "George_Orwell", "Satire", 1945));
	library.addBook(Book("The_Road", "Cormac_McCarthy", "Post-Apocalyptic", 2006));
	library.addBook(Book("Dune", "Frank_Herbert", "Science_Fiction", 1965));
	library.addBook(Book("Frankenstein", "Mary_Shelley", "Horror", 1818));
	library.addBook(Book("Dracula", "Bram_Stoker", "Horror", 1897));
	library.addBook(Book("The_Kite_Runner", "Khaled_Hosseini", "Fiction", 2003));
	library.addBook(Book("The_Book_Thief", "Markus_Zusak", "Historical", 2005));
	library.addBook(Book("The_Shining", "Stephen_King", "Horror", 1977));
	library.addBook(Book("It", "Stephen_King", "Horror", 1986));
	library.addBook(Book("The_Giver", "Lois_Lowry", "Dystopian", 1993));
	library.addBook(Book("Ender's_Game", "Orson_Scott_Card", "Science_Fiction", 1985));
	library.addBook(Book("A_Game_of_Thrones", "George_R.R._Martin", "Fantasy", 1996));
	library.addBook(Book("The_Name_of_the_Wind", "Patrick_Rothfuss", "Fantasy", 2007));
	library.addBook(Book("The_Girl_with_the_Dragon_Tattoo", "Stieg_Larsson", "Thriller", 2005));
	library.addBook(Book("Gone_Girl", "Gillian_Flynn", "Thriller", 2012));
}

int main()
{
	
	Library library;
	AddContent(library);
	while (true) {
		int choice;
		cout << "1. Add Book" << endl;
		cout << "2. Show Books" << endl;
		cout << "3. Search Books" << endl;
		cout << "4. Exit" << endl;
    
		cin >> choice;
		if (choice == 1) {
			string Titel, Genre, author, year;
			cout << "Add a Book!" << endl;
			cout << "Titel: "; cin >> Titel;
			cout << "Genre: "; cin >> Genre;
			cout << "Author: "; cin >> author;
			cout << "Year: "; cin >> year;
			
			library.addBook(Book(Titel, Genre, author, stoi(year)));

		}
		else if (choice == 2) {
			library.showBooks();
			
			
		}
		else if (choice == 3) {
			std::string keyword;
			cout << "\n";
			cout << "Enter Keyword for example author or genre" << endl;
			cout << "Instead of Space use underscore" << endl;
			cin >> keyword;
			cout << "Your keyword: " << keyword << endl;
			cout << "Results:" << endl;
			library.searchBook(keyword);
		}
		else if (choice == 4) {
			break;
		}
		else {
			cout << "Invalid Choice" << endl;
		}
	}
	
}
