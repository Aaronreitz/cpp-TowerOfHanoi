#include"Tower.h"
#include"tower_utillities.h"
#include <vector>
#include<string>
#include<iostream>

using namespace std;

Tower::Tower(const string &tower_name): name(tower_name){};

void Tower::addDisk(int disk) {
            disks.push_back(disk);
        }

int Tower::removeDisk(int disk) {
            if (disks.empty()) {
                throw runtime_error("Empty disk list");
            }
            int topDisk = disks.back();
            disks.pop_back();
            return topDisk;
        };

string Tower::getName() const {
    return name;
}

int Tower::size() const {
    return disks.size();
}

int Tower::topDisk() const {
    return disks.back();
}

void Tower::clear() {
    disks.clear();
}

void reset(Tower& towerA, Tower& towerB, Tower& towerC,int n) {
    towerA.clear();
    towerB.clear();
    towerC.clear();
    for(int i = n; i  > 0; i--) {
        towerA.addDisk(i);
    }
}

void print(Tower& tower) {
    for(int i = tower.size(); i > 0; i--) {
        cout << tower.topDisk() << endl;
    }
}


