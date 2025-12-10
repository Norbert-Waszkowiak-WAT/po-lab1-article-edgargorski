#ifndef BOOK
#define BOOK

#include <string>
#include <vector>
#include "author.h"
#include "chapter.h"
using namespace std;

class Book {
private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;

public:
    Book();
    Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> &bookChapters);
    void addChapter(Chapter &chapter);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    vector<Chapter> getChapters();
};

#endif