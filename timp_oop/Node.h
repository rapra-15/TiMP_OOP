#ifndef NODE_H
#define NODE_H

#include "Animal.h"

//���� ����������
struct Node {
    Node* Next; //��������� �� ��������� ����
    Animal* Cont; //��������� �� ����� ��������
};

#endif //NODE_H