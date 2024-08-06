
#include <iostream>
using namespace std;


int addThreeNumbers(int a,int b,int c) {
return a+b+c;
}

int main() {
    int num1,num2,num3;
    cout<<"Enter First number ";
    cin>>num1;
    cout<<"Enter Second number ";
    cin>>num2;
    cout<<"Enter Third number ";
    cin>>num3;
    int sum = addThreeNumbers(num1,num2,num3);
    cout<<"The sum of all three numbers are " << sum <<endl;
    return 0;
    
    
    
}
