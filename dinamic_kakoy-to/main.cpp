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
        cout << endl << "Введите номер команды¬>";
        cin >> command;

        switch (command)
        {
        case 1:
            cop = 1;
            cout << "Устройство Включено!" << endl;
            break;

        case 2:
            if (cop == 1)
            {
                cop = 0;
                cout << "Устройство выключено!" << endl;
                work = 0;
            }
            else cout << "Устройство уже выключено!" << endl;
            break;

        case 3:
            Dic.get_volume(vol);
            a = 0;
            Dic.get_a(a);
            if (vol == 100) cout << "Макс. Громкость!";
            else {
                vol++;
                cout << "Громкость " << vol << endl;
            }
            sch++;
            if (sch % 2 == 1) b++;
            Dic.get_min(b);
            break;

        case 4:
            Dic.get_volume(vol);
            a = 1;
            Dic.get_a(a);
            if (vol == 0) cout << "Громкость 0" << endl;
            else {
                vol--;
                cout << "Громкость " << vol << endl;
            }
            sch++;
            if (sch % 2 == 1) b++;
            Dic.get_min(b);
            break;

        case 5:
            cout << "Устройство будет работать " << Dic.get_timeWork() << " часов" << endl;
            break;

        case 6:
            cout << "Заряд батареи " << Dic.get_BatCap() << "" << endl;
            break;
        }

        if (Dic.get_BatCap() == 15) cout << "Процент заряда батареи 15% Рекомендуем подключить зарядное устройство" << endl;
        if (Dic.get_BatCap() == 5) cout << "Процент заряда батареи 5% подключите зарядное устройство" << endl;
        if (Dic.get_BatCap() <= 0) work = 0;
    }
    return 0;

}
