#include <iostream>
using namespace std;

int main() {
     int n = 4;
//  char ch='A'; o/p ABCD EFGH IJKL MNOP
     for(int i=0; i<n; i++){  //outer loop
       char ch='A';
        for(int j=0; j<n; j++){  //inner loop -> start line
           cout << ch;
           ch = ch + 1;
        }
        cout << endl;
     }
     return 0;
}

