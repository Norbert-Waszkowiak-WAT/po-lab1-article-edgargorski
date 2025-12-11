#include "author.h"
#include "chapter.h"
#include "book.h"
#include <iostream>
using namespace std;
Book::Book(): title(""), author(Author("","")), publicationYear(0){}
Book::Book(string bookTitle, Author bookAuthor, int year, const vector<Chapter> &bookChapter):
title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapter){}
void Book::addChapter(Chapter newChapter){
    chapters.push_back(newChapter);
}
    vector<Chapter> &Book::getChapters(){
return chapters;
    }
    string Book::getTitle(){
        return title;
    }
    Author Book::getAuthor(){
        return author;
    }
    int Book::getPublicationYear(){
        return publicationYear;
    }
    void Book::displayInfo(){
        cout<<"Title: "<<title<<"\nAuthor: "<<author.toString()<<"\nYear: "<<publicationYear<<"\n";
        for(size_t i=0;i<chapters.size();++i){
            cout<<"Chapter "<<chapters[i].getChapterNumber()<<": "<<chapters[i].getTitle()<<"\n";
        }
    }
 