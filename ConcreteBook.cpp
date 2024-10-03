#include "ConcreteBook.h"
#include <iostream>

ConcreteBook::ConcreteBook(std::string t, std::string a, int i, int y) 
    : title(t), author(a), isbn(i), yearPublished(y) {}

std::string ConcreteBook::getTitle() const {
    return title;
}

std::string ConcreteBook::getAuthor() const {
    return author;
}

int ConcreteBook::getIsbn() const {
    return isbn;
}

int ConcreteBook::getYearPublished() const {
    return yearPublished;
}

void ConcreteBook::showBook() const {
    std::cout << "Title: " << this->getTitle() 
        << ", Author: " << this->getAuthor() 
        << ", Isbn: " << this->getIsbn()
        << ", Published Year: " << this->getYearPublished()  << std::endl;
}