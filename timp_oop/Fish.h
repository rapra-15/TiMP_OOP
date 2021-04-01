#ifndef FISH_H
#define FISH_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ���
class Fish : public Animal {
    string Name; //�������� ����

    //����� �������� ����
    enum  Habitat {
        RIVER,
        SEA,
        OCEAN
    };

    Habitat H;
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � ����
    Fish() {};
};

#endif // FISH_H
