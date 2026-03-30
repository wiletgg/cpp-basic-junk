// คำนวณว่าอาหารที่กินไปทั้งหมดเท่าไหร่ Goal ค่าอาหารที่ต้องกินให้ถึง รวมตอนนี้และตอนกลางคืน และ คำนวนว่าขาดเท่าไหร่
#include <iostream>

int main(){
    using namespace std;
    double goal; // กำหนดค่าเป้าหมายแคลอรี
    double current; // แคลอรีที่กินไปตอนนี้
    double night; // แคลอรีที่กินไปตอนกลางคืน
    double total; // แคลอรีรวม
    double deficit; // แคลอรีที่ขาด

    cout <<" Calories Goal?" <<endl;
    cin >> goal;
    cout << "How much did you eat so far?: ";
    cin >> current;
    cout << "How much did you eat at night?: ";
    cin >> night;

    // คำนวนผลลัพธ์
    total = current + night;
    deficit = goal - total;
    cout << total <<" Total calories now"<<endl;
    deficit = goal - total;
    cout << deficit << " Deficit"<<endl;
    return 0;
}
