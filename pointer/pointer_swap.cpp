#include <iostream>
using namespace std;
// ฟังชั่นสลับค่าด้วย pointer
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int tar01_power = 9000;
    int bot_power = 10;

    cout << "Before Swap:" << endl;
    cout << "TAR-01: " << tar01_power << " | BOT: " << bot_power << endl;
    // สลับค่ากัน
    swap(&tar01_power, &bot_power);
    cout << "After Swap (The Manual Override!):" << endl;
    cout << "TAR-01: " << tar01_power << " | BOT: " << bot_power << endl;
    return 0;
}
