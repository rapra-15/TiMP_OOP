#include "Fish.h"

void Fish::In_Data(ifstream& ifst) {
    ifst >> Name;

    string Temp_K = ""; //������, �������� ���������� � ����� �������� ����

    ifst >> Temp_K; //��������� ���������� � ����� ��������

    //����������, ��� ������� �����
    if (Temp_K == "River")
    {
        H = Fish::RIVER;
    }
    else if (Temp_K == "Sea")
    {
        H = Fish::SEA;
    }
    else if (Temp_K == "Ocean")
    {
        H = Fish::OCEAN;
    }
}