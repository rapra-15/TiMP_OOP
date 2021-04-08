﻿// 2lab_Filter_Out.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

using namespace std;

#include "Container.h"

int main(int argc, char* argv[])
{
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command in_file out_file"
            << endl;
        exit(1);
    }
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);
    cout << "Start" << endl;

    Container c;

    c.In(ifst);
    ofst << "Filled container. " << endl;
    c.Out(ofst);

    c.Out_Only_Fish(ofst);

    c.Clear();
    ofst << "Empty container. " << endl;
    c.Out(ofst);

    cout << "Stop" << endl;
    system("pause");
    return 0;
}
