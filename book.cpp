#include "book.h"
#include <iostream>

Book::Book() : title(""), author(Author("", "")), publicationYear(0) {}

Book::Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> &bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}

void Book::addChapter(Chapter &chapter) {
    chapters.push_back(chapter);
}

void Book::displayInfo() {
    cout << "Book: " << title << endl;
    cout << "Author: ";
    author.print();
    cout << "Publication Year: " << publicationYear << endl;
    cout << "Chapters: " << chapters.size() << endl;
    
    for (auto &chapter : chapters) {
        chapter.displayInfo();
    }
}

string Book::getTitle() {
    return title;
}

Author Book::getAuthor() {
    return author;
}

int Book::getPublicationYear() {
    return publicationYear;
}

vector<Chapter> Book::getChapters() {
    return chapters;
}