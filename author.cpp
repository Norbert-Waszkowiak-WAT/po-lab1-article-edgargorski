#include "author.h"
#include <iostream>

Author::Author(string name, string surname) : name(name), surname(surname) {}

void Author::print() {
    cout << name << " " << surname << endl;
}

string Author::toString() {
    return name + " " + surname;
    
}

string Author::getName() {
    return name;
}

string Author::getSurname() {
    return surname;
}