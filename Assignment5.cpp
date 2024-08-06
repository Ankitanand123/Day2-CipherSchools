#include <iostream>
#include <cmath>
using namespace std;


int squareRoot(int a) {
return sqrt(a);
}

int main() {
    int num1;
    cout<<"Enter That number ";
    cin>>num1;
    int square = squareRoot(num1);
    cout<<"The square Root of that number is " << square <<endl;
    
    
    return 0;
    
    
    
}
