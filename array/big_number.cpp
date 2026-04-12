#include <iostream>

int main() {
    int items[] = {12, 45, 7, 92, 33}; //ตู้เก็บ item ขนาดต่าง ๆ
    int size = 5;
    int maxVal = items[0]; //สมมติว่าตัวแรกใหญ่สุดไว้ก่อน
    for(int i = 0; i < size; i++){
        if(items[i] > maxVal){
        maxVal = items[i];
        }
    }
    std::cout << "big number item is: " << maxVal << std::endl;
    return 0;
}
