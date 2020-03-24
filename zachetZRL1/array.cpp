#include <iostream>
 
using namespace std;
 
int main() {
    int static1array[6] = {1,2,3,4,5,6};
    for (int i = 0; i<6; i++) {
        int* ptr1 = &static1array[i];
        cout<<ptr1<<endl;
    }
    int static2array[2][3] = { {1,2,3}, {4,5,6}};
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<3; j++) {
            int* ptr2 = &static2array[i][j];
            cout<<ptr2<<endl;
        }
    }
    int* dynamic1array = new int[6];
    for (int i = 0; i<6; i++) {
       int* ptr3 = &dynamic1array[i];
       cout<<ptr3<<endl;
    }
    int** dynamic2array;
    dynamic2array = new int*[2];
    for(int i = 0; i<2; i++) {
        dynamic2array[i] = new int[3];
    }
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<3; j++) {
            int* ptr4 = &dynamic2array[i][j];
            cout<<ptr4<<endl;
        }
    }
}
