#include <iostream>
#include "author.h"
using namespace std;
 
string Author:: getName(){
    return name;
}
string Author::getSurname(){
    return surname;
}
string Author:: toString(){
    return name + " " + surname;
}
void Author:: print(){
    cout<< name<<" "<<surname<<endl;
}
Author::Author(string n, string s):name(n),surname(s){
 
}
 