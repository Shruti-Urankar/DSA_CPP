#include <iostream>
using namespace std;

int main() {
     int n = 4;
     
     for(int i=0; i<n; i++){  //outer loop

        for(int j=0; j<i+1; j++){  //inner loop

          cout<< (i+1);
        
        }

        cout<< endl;
     }
     return 0;
}

// Home Work 

// #include <iostream>
// using namespace std;

// int main() {
//      int n = 4;
//      char ch='A';
//      for(int i=0; i<n; i++){  //outer loop

//         for(int j=0; j<i+1; j++){  //inner loop

//           cout<< ch << " ";
         
//         }

//         cout<< endl;
//         ch++;
//      }
//      return 0;
// }