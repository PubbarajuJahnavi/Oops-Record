#include<iostream>
using namespace std;
template <class T>
class calculator{
    T num1,num2;
    public:
    calculator(T n1,T n2):num1(n1),num2(n2){}
void display(){
    cout<<"sum="<<num1+num2<<endl;
}
};
int main(){
    calculator<int>c1(10,20);
    calculator<float>c2(2.5,3.5);
    c1.display();
    c2.display();
    return 0;
}
