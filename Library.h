#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book*> books;

public:
    void addBook(Book* book);
    void removeBook(int isbn);
    void showBooks() const;
    ~Library();
};

#endif
