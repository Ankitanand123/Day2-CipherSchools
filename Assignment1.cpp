
#include <iostream>
using namespace std;


int main() {
    char c;
    bool isLowerCaseVowel,isUpperCaseVowel;
    cout<<"Enter the word ";
    cin>>c;
    
    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (isLowerCaseVowel || isUpperCaseVowel){
        cout<<"The word is vowel";
        }else {
            cout<<"The Word is consonant";
        }
    
    
   
    return 0;
}
