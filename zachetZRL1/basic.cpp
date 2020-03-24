#include <iostream>
 
using namespace std;
 
int global;
 
int main() {
    int local;
    int* dynamic = new int;
    int* pointerGlobal = &global;
    int* pointerLocal = &local;
    cout<<pointerLocal<<endl;
    cout<<pointerGlobal<<endl;
    cout<<dynamic<<endl;
} 
