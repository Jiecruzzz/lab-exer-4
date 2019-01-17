#include <iostream>
using namespace std;


int main () {
    int ar1 [5];
    int* ptr = ar1;
    
    cout << "First number  : ";
    cin  >> ar1 [0];
    cout << "Second number :";
    cin  >> ar1 [1];
    cout <<"Third number   : ";
    cin  >> ar1 [2];
    cout << "fourth number : ";
    cin  >> ar1[3];
    cout << "fifth number : ";
    cin  >> ar1 [4];
    
    
    for (int i = 0; i <=4; i++){
        cout << *ptr << endl;
        ptr++;
    }
	
	
	
	return 0;
}
