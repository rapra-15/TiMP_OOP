#ifndef BEAST_H
#define BEAST_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ������
class Beast : public Animal {
    string Name; //�������� �����

    //��� �����
    enum Beast_Type {
        PREDATOR,
        HERBIVORE,
        INSECTIVOROUS
    };

    Beast_Type B_T;
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � ����
    Beast() {};
};

#endif // BEAST_H
