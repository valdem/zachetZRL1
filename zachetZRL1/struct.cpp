#include <iostream>

using namespace std;
 
struct withoutA1{
    bool first;
    int second;
    float third;
    bool fourth;
    char fifth[10];
};
//с выравниванием 2
#pragma pack(push, 1)
struct withA1{
    bool first;
    int second;
    float third;
    bool fourth;
    char fifth[10];
};
#pragma pack(pop)
//без выравнивания 2
  
struct withoutA2{
    bool first;
    bool fourth;
    char fifth[10];
    int second;
    float third;
};
//с выравниванием 1
  
#pragma pack(push, 1)
struct withA2{
    bool first;
    bool fourth;
    char fifth[10];
    int second;
    float third;
};
#pragma pack(pop)
//без выравнивания 1
  
 
int main () {
    withoutA1 withoutA1;
    withA1 withA1;
    withoutA2 withoutA2;
    withA2 withA2;
    cout << "Size of bool: " << sizeof(withoutA1.first)<<endl;
    cout << "Size of int: " << sizeof(withoutA1.second) << endl;
    cout << "Size of float: " << sizeof(withoutA1.third) << endl;
    cout << "Size of char:" << sizeof(withoutA1.fifth) << endl;
    cout << "Size of WithoutA1: " << sizeof(withoutA1) << endl;
    cout << "Size of WithA1: " << sizeof(withA1) << endl;
    cout << "Size of WithoutA2: " << sizeof(withoutA2) << endl;
    cout << "Size of WithA2: " << sizeof(withA2) << endl;
    cout << "Sum of fields in WithoutA1: " << sizeof(withoutA1.first) + sizeof(withoutA1.second) + sizeof(withoutA1.third) + sizeof(withoutA1.fourth) + sizeof(withoutA1.fifth)<< endl;
    cout << "Sum of fields in WithA1: " << sizeof(withA1.first) + sizeof(withA1.second) + sizeof(withA1.third) + sizeof(withA1.fourth) + sizeof(withA1.fifth)<< endl;
    cout << "Sum of fields in WithoutA2: " <<  sizeof(withoutA2.first) + sizeof(withoutA2.second) + sizeof(withoutA2.third) + sizeof(withoutA2.fourth) + sizeof(withoutA2.fifth)<< endl;
    cout << "Sum of fields in WithA2: " << sizeof(withA2.first) + sizeof(withA2.second) + sizeof(withA2.third) + sizeof(withA2.fourth) + sizeof(withA2.fifth)<< endl;
    cout << &withoutA1.first << "-bool" << " " << &withoutA1.second << "-int" << " " << &withoutA1.third << "-float" << " " << &withoutA1.fourth << "-bool" << " " << &withoutA1.fifth << "-char" << endl;
    cout << &withA1.first << "-bool" << " " << &withA1.second << "-int" << " " << &withA1.third << "-float" << " " << &withA1.fourth << "-bool" << " " << &withA1.fifth << "-char" << endl;
    cout << &withoutA2.first << "-bool" << " " << &withoutA2.second << "-int" << " " << &withoutA2.third << "-float" << " " << &withoutA2.fourth << "-bool" << " " << &withoutA2.fifth << "-char" << endl;
    cout << &withA2.first << "-bool" << " " << &withA2.second << "-int" << " " << &withA2.third << "-float" << " " << &withA2.fourth << "-bool" << " " << &withA2.fifth << "-char" << endl;
}

