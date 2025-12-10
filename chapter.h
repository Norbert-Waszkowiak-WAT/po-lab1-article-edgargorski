#ifndef CHAPTER
#define CHAPTER

#include <string>
#include "author.h"
#include "article.h"
using namespace std;

class Chapter {
private:
    string title;
    Author author;
    int chapterNumber;

public:
    Chapter();
    Chapter(string chapterTitle, Author chapterAuthor, int number);
    Chapter(Chapter &other);
    Chapter(Article &article);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getChapterNumber();
};

#endif
