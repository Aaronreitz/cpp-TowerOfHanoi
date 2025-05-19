#include<iostream>
#include"Tower.h"
#include"tower_utillities.h"

using namespace std;

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    Tower towerA("A");
    Tower towerB("B");
    Tower towerC("C");
    reset(towerA, towerB, towerC, numDisks);
    print(towerA);
}