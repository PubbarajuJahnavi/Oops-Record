#include<iostream>
using namespace std;
class fam{
    public:
    string NAME;
    int n;
void display(){
    cout<<"name:"<<NAME;
}
};
int main(){
    fam n1;
    n1.NAME="SAANVI";
    n1.display();
    return 0;
}