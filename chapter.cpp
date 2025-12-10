#include "chapter.h"
#include <iostream>

Chapter::Chapter() : title(""), author(Author("", "")), chapterNumber(0) {}

Chapter::Chapter(string chapterTitle, Author chapterAuthor, int number) 
    : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {}

Chapter::Chapter(Chapter &other) 
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}

Chapter::Chapter(Article &article) 
    : title(article.getTitle()), author(article.getAuthor()), chapterNumber(0) {}

void Chapter::displayInfo() {
    cout << "Chapter " << chapterNumber << ": " << title << endl;
    cout << "Author: ";
    author.print();
}  

string Chapter::getTitle() {
    return title;
}

Author Chapter::getAuthor() {
    return author;
}

int Chapter::getChapterNumber() {
    return chapterNumber;
}