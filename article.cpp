#include "article.h"
#include <iostream>

Article::Article() : title(""), author(Author("", "")), publicationYear(0), journal("") {}

Article::Article(string articleTitle, Author articleAuthor, int year, string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {}

Article::Article(Article &other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {}

void Article::displayInfo() {
    cout << "Article: " << title << endl;
    cout << "Author: ";
    author.print();
    cout << "Year: " << publicationYear << endl;
    cout << "Journal: " << journal << endl;
}

string Article::getTitle() {
    return title;
}

Author Article::getAuthor() {
    return author;
}

int Article::getPublicationYear() {
    return publicationYear;
}

string Article::getJournal() {
    return journal;
}