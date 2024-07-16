#include<iostream>
using namespace std;

int convertDecimal(string str){
    int len = str.length();
    int pow2 = 1;
    int ans = 0;

    //Here we are iterating from the last character
    for(int i=len-1; i>=0 ; i--){
        if(str[i]=='1'){
            ans += pow2;
        }
        //pow2 *= pow2;
        pow2 = pow2*2;
    }
    return ans;
}

int main(){
    string str;
    cout << "Enter a binary number: ";
    cin >> str;

    int decimalValue = convertDecimal(str);
    cout << "The decimal value is " << decimalValue << endl;
    return 0;
}