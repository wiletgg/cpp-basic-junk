#include<iostream>
using namespace std;

int main(){
    int x = 50;
    int* ptr = &x;  // ให้ ptr ชี้ไปที่ x
    
    cout << "address: " << ptr << endl;
    cout << "value: " << *ptr << endl;  // แสดงค่าข้างในที่ ptr ชี้อยู่
    
    *ptr = 999;  // เปลี่ยนค่า x ผ่าน ptr
    cout << "x is now: " << x << endl;
    
    return 0;
}
