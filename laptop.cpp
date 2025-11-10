#include<iostream>
using namespace std;
class laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<<brand<<endl;
        cout<<"processor:"<<processor<<endl;
        cout<<"ram:"<<ram<<endl;
    }
};
int main(){
    laptop l1,l2;
    l1.brand="dell";
    l1.processor="intel i5";
    l1.ram =8;
    l2.brand="hp";
    l2.processor="amd";
    l2.ram =16;
    l1.display();
    l2.display();
    return 0;
}