#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    virtual std::string getTitle() const = 0;
    virtual std::string getAuthor() const = 0;
    virtual int getIsbn() const = 0;
    virtual void showBook() const = 0;
    virtual ~Book() {}
};

#endif