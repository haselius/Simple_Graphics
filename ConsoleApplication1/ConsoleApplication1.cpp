// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "msoftcon.h"

class circle 
{
protected:
    int xCo, yCo,x1,x2;
    int radius;
    color fillcolor;
    fstyle fillstyle;
public:
    void set(int x, int y, int r, color fc, fstyle fs,int ix1,int ix2) 
    {
        xCo = x;
        yCo = y;
        radius = r;
        fillcolor = fc;
        fillstyle = fs;
        x1 = ix1;
        x2 = ix2;
    }

    void draw() 
    {
        set_color(fillcolor);
        set_fill_style(fillstyle);
        draw_rectangle(xCo,yCo,x1,x2);
    }
};
int main()
{
    init_graphics();
    circle c1;
    circle c2;
    circle c3;

    c1.set(15, 7, 5, cBLUE, X_FILL,18,22);
    c2.set(41,12,7,cRED,O_FILL, 17, 21);
    c3.set(65,18,4,cGREEN,MEDIUM_FILL, 30, 25);
    c1.draw();
    c2.draw();
    c3.draw();
    set_cursor_pos(1, 25);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
