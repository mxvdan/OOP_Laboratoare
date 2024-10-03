#include "Library.h"
#include "ConcreteBook.h"

int main() {
    int testIsbn = 59407544;

    Library library;

    library.addBook(new ConcreteBook("Difference", "Whole Lotta Swag", 12454546, 2024));
    library.addBook(new ConcreteBook("Rampart Range", "Bones", testIsbn, 2020));

    library.showBooks();
    library.removeBook(59407544);
    library.showBooks();
    

    return 0;
}
