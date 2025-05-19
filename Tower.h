#ifndef Tower_h
#define Tower_h

#include <vector>
#include<string>
#include<iostream>
using namespace std;

class Tower {
    public: //Konstruktor
    explicit Tower(const string& tower_name);
    void addDisk(int disk);                                                                                     //Methode zum Hinzufügen einer Scheibe
    int removeDisk(int disk);                                                                                  //Methode um Scheiben zu entfernen
    string getName() const;//Methode um den Namen zu erhalten
    int size() const;                                                                                              //Methode um die Anzahl der Scheiben zu erhalten
    int topDisk() const;//Methode um die oberste Scheibe anzuschauen, ohne sie zu entfernen
    void clear();

    private:
    vector<int> disks;                                                                                            // Der Vektor, der die Scheiben speichert
    string name;                                                                                                   // Name des jeweiligen Turmes
};


#endif //Tower_H
