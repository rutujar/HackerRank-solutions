#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

//Write MyBook class
class MyBook : Book{
    private:
    int price;
    public:
    MyBook(string t,string a,int price):Book(t,a){
        this->price = price;
    }
    void display(){
        cout << "Title: " << title << endl << "Author: " << author << endl << "Price: " << price << endl;
    }

};
