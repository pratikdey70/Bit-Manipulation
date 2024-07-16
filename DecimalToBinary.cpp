#include<iostream>
#include<algorithm>
using namespace std;

string convertBinary(int n){
    if (n == 0) return "0";  // Special case for zero

    string res = "";
    while (n > 0) {
        if(n%2==1){
            res += '1';
        }
        else{
            res += '0';
        }
        //Divide n by 2 helps in moving to next part
        // like 13/2 => 6 with rem 1 get stored in res and agin move next
        // but this leads to count res from top to bottom
        // we need to reverse it coz counting is done from bottom to top
        n = n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    string binaryValue = convertBinary(n);
    cout << "The binary value is " << binaryValue << endl;
    return 0;
}