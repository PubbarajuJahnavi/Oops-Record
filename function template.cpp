#include <iostream>
using namespace std;
template <typename T >
T add(T a, T b) {
return a + b;
}
int main() {
cout <<"sum(int):"<<add(10,20)<<endl;
cout <<"sum(float):"<<add(10.5,20.5)<<endl;
return 0;
}