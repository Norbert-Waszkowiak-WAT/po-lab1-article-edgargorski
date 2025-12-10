#ifndef ARTICLE
#define ARTICLE

#include <string>
#include "author.h"
using namespace std;

class Article {
private:
    string title;
    Author author;
    int publicationYear;
    string journal;

public:
    Article();
    Article(string articleTitle, Author articleAuthor, int year, string journalName);
    Article(Article &other);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    string getJournal();
};

#endif