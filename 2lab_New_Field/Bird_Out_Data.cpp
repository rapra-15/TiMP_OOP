#include "Bird.h"

void Bird::Out_Data(ofstream& ofst) {
    ofst << "It's a Bird: " << Name << endl;
    ofst << "Is it a migration bird: "; //������� �������� �����

    //������� ���������� � ���, ��������� �� �����
    if (Migration)
    {
        ofst << "Yes" << endl;
    }
    else
    {
        ofst << "No" << endl;
    }

    ofst << "Bird's age is " << Age << endl;
}