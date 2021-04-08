#ifndef ANIMAL_H
#define ANIMAL_H

#include <fstream>

using namespace std;

class Animal {
public:
    static Animal* In(ifstream& ifst); //������� ����� ���������� � ��������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ����������
                                              //� ��������, ��� ����� ���������� ���
                                              //������� ������ ���������
    virtual void Out_Data(ofstream& ofst) = 0; //����� ����������� ������� ������ ����������
                                              //� ��������, ��� ����� ���������� ���
                                              //������� ������ ���������
    virtual void Out_Only_Fish(ofstream& ofst);
protected:
    Animal() {};
};

#endif // ANIMAL_H
