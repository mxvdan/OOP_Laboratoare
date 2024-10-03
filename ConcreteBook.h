#ifndef CONCRETEBOOK_H
#define CONCRETEBOOK_H

#include "Book.h"

class ConcreteBook : public Book {
private:
    std::string title;
    std::string author;
    int isbn;
    int yearPublished;

public:
    ConcreteBook(std::string t, std::string a, int i, int y);
    std::string getTitle() const override;
    std::string getAuthor() const override;
    int getIsbn() const override;
    int getYearPublished() const;
    void showBook() const override;
};

#endif