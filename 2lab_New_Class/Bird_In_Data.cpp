#include  "Bird.h"

void Bird::In_Data(ifstream& ifst) {
    ifst >> Name; //��������� �������� �����
    ifst >> Migration; //��������� ���������� � ���, ��������� �� ���
}