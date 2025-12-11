#ifndef CHAPTER
#define CHAPTER
#include <string>
#include "article.h"
#include "author.h"
using namespace std;
class Chapter{
    private:
    string title;
    Author author;
    int chapterNumber;
    public:
    Chapter();
    Chapter(string chapterTitle, Author chapterAuthor, int number);
    Chapter(const Chapter &other);
    Chapter(Article &article);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getChapterNumber();
};
#endif
 