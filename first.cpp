#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    float price;
    void display(){
        cout<<"title:"<<title<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main(){
    book b1,b2;
    b1.title = "c++ programming";
    b1.author="blarne";
    b1.price=750.50;
    b2.title = "data structure";
    b2.author="mark";
    b2.price=600.50;
    b1.display();
    b2.display();
    return 0;
}
