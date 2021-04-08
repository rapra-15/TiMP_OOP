#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include <fstream>

using namespace std;

//����������
class Container {
    Node* Head; //��������� �� ������ ������
    int Len; //����������� ����������
public:
    void In(ifstream& ifst); //������� ����� �������� � ���������
    void Out(ofstream& ofst); //������� ������ �������� �� ����������
    void Clear(); //������� �������� ����������
    void Out_Only_Fish(ofstream& ofst);
    Container(); //����������� (�� ���� ������������� ����������)
    ~Container() { Clear(); } //����������
};

#endif //CONTAINER_H