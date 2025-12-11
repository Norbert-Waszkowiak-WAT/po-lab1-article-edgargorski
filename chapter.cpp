#include "chapter.h"
#include <iostream>
using namespace std;
Chapter::Chapter(): title(""), author(Author("","")), chapterNumber(1){
}
Chapter::Chapter(string chapterTitle, Author chapterAuthor, int chapterNumber):title( chapterTitle), author(chapterAuthor), chapterNumber(chapterNumber){}
Chapter::Chapter(const Chapter &other):title( other.title), author(other.author), chapterNumber(other.chapterNumber) {}
Chapter::Chapter(Article &article):title( article.getTitle()), author(article.getAuthor()), chapterNumber(1) {}
void Chapter::displayInfo(){
    cout<<"Chapter " << chapterNumber<< ": " <<title<< " by "<< author.toString()<< endl;
}
string Chapter::getTitle(){
    return title;
}
Author Chapter::getAuthor(){
    return author;
}
int Chapter::getChapterNumber(){
    return chapterNumber;
}
 