#include "Library.h"
#include <iostream>
#include <algorithm>

void Library::addBook(Book* book) {
    books.push_back(book);
}

void Library::removeBook(int isbn) {
    auto it = std::remove_if(books.begin(), books.end(),
        [isbn](Book* book) { return book->getIsbn() == isbn; });
    
    if (it != books.end()) {
        delete *it;
        books.erase(it, books.end());
        std::cout << "Book with IBSN " << isbn << " has been removed." << std::endl;
    } else {
        std::cout << "No book found with IBSN " << isbn << "." << std::endl;
    }
}

void Library::showBooks() const {
    for (const auto& book : books) {
        book->showBook();
    }
}

Library::~Library() {
    for (auto book : books) {
        delete book;
    }
}