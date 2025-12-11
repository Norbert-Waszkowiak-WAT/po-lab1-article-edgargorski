#ifndef AUTHOR
#define AUTHOR
#include <string>
using namespace std;
class Author{
    private:
    string name;
    string surname;
    public:
    Author(string n, string s);
    void print();
    string toString();
    string getName();
    string getSurname();
 
};
#endif
 