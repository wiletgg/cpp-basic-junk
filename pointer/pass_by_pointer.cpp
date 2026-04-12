#include<iostream>
using namespace std;

void addTen(int* ptr){
    if (ptr != NULL) //ใส่ null กันไว้
    *ptr = *ptr + 10;
}

int main(){
    int x = 50;
    addTen(&x);  
    cout << x << endl;  //x จะได้ 60
    return 0;
}
