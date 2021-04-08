#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ����
class Bird : public Animal {
    string Name; //�������� �����
    bool Migration; //��������� �� ���
    int Age;
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � �����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � �����
    Bird() {};
};

#endif // BIRD_H
