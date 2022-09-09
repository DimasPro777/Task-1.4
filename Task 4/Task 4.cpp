#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    bool afternoon, curtain, light;

    cout << "День?" << std::endl;
    cin >> afternoon;
    cout << "Шторы" << std::endl;
    cin >> curtain;
    cout << "Свет" << std::endl;
    cin >> light;

    if (afternoon and curtain == true or light == true)
    {
        cout << "В комнате светло." << std::endl;
    }
    else
    {
        cout << "В комнате не светло." << std::endl;
    }
}