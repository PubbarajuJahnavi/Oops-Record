#include<iostream>
using namespace std;
class time1
{
    int hrs;
    int mins;
public:
void gettime(int h,int m)
{
    hrs = h;
    mins = m;
}
void puttime(void)
{
cout<<hrs<<endl;
cout<<mins<<endl;
}
void sum(time1,time1);
};
void time1::sum(time1 t1,time1 t2)
{
    mins = t1.mins+t2.mins;
    hrs=mins/60;
    mins=mins%60;
    hrs = hrs+t1.hrs+t2.hrs;
}
int main()
{
    time1 t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,50);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();
    return 0;
} 
