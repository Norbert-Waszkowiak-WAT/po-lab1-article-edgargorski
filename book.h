#ifndef BOOK
#define BOOK
#include <vector>
#include <iostream>
#include "article.h"
#include "author.h"
#include "chapter.h"
using namespace std;
class Book{
    private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;
    public:
    Book();
    Book(string bookTitle, Author bookAuthor, int year, const vector<Chapter> &bookChapter);
    void addChapter(Chapter newChapter);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    vector<Chapter> &getChapters();
 
 
};
#endif
 