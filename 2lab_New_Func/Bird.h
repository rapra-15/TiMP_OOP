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
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � �����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � �����
    int Amount();
    Bird() {};
};

#endif // BIRD_H