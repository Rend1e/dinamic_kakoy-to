#include <iostream>
#include "Dinamic.h"
#include "Dinamic.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Dinamic Dic;
    int work = 1, command, i = 0, cop = 0, vol = 0, a = 0, sch = 0, b = 0;
    while (work)
    {
        
        Dic.menu();
        cout << endl << "������� ����� ��������>";
        cin >> command;

        switch (command)
        {
        case 1:
            cop = 1;
            cout << "���������� ��������!" << endl;
            break;

        case 2:
            if (cop == 1)
            {
                cop = 0;
                cout << "���������� ���������!" << endl;
                work = 0;
            }
            else cout << "���������� ��� ���������!" << endl;
            break;

        case 3:
            Dic.get_volume(vol);
            a = 0;
            Dic.get_a(a);
            if (vol == 100) cout << "����. ���������!";
            else {
                vol++;
                cout << "��������� " << vol << endl;
            }
            sch++;
            if (sch % 2 == 1) b++;
            Dic.get_min(b);
            break;

        case 4:
            Dic.get_volume(vol);
            a = 1;
            Dic.get_a(a);
            if (vol == 0) cout << "��������� 0" << endl;
            else {
                vol--;
                cout << "��������� " << vol << endl;
            }
            sch++;
            if (sch % 2 == 1) b++;
            Dic.get_min(b);
            break;

        case 5:
            cout << "���������� ����� �������� " << Dic.get_timeWork() << " �����" << endl;
            break;

        case 6:
            cout << "����� ������� " << Dic.get_BatCap() << "" << endl;
            break;
        }

        if (Dic.get_BatCap() == 15) cout << "������� ������ ������� 15% ����������� ���������� �������� ����������" << endl;
        if (Dic.get_BatCap() == 5) cout << "������� ������ ������� 5% ���������� �������� ����������" << endl;
        if (Dic.get_BatCap() <= 0) work = 0;
    }
    return 0;

}
