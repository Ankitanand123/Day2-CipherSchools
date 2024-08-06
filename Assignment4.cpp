#include <iostream>
using namespace std;


int squareof(int a) {
return a*a;
}

int main() {
    int num1;
    cout<<"Enter That number ";
    cin>>num1;
    int square = squareof(num1);
    cout<<"The square of that number is " << square <<endl;  
    return 0;      
}
