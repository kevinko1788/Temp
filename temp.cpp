#include <iostream>

using namespace std;
void SwapPointer(int *(&a), int *(&b)){
	int *temp = a;
	a = b;
	b = temp;



}
int main(void){
    int val1 = 1;
    int val2 = 2; 
    int *ptr1 = &val1;
    int *ptr2 = &val2;
    int &ref1 = val1;
    int &ref2 = val2;
    cout<< &val1 << ' ' <<&val2 << endl;
    cout<< &(*ptr1) << ' ' <<*ptr2 << endl;
    cout<< &ref1 << ' ' <<&ref2 << endl;
    return 0;
}