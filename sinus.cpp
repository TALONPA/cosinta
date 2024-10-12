#include <iostream>
#include <stdio.h>
int fact(int i, int x, int y, int f) {
    y = 1;
    for (i = 1; i < x - 1; i++) {
        y = y * (x - i);
    }
    f = x * y;
    return f;
}
float puiss(float a, float c, int k, int b) {
    c = a;
    for (k = 1; k < b; k++) {
        a *= c;
    }
    return a;
}
int main()
{
    float an, anr, s_i_n, p_1, p_2, p_3, f, p_4;
    int e, u, v, w, f1, f2, f3, p, i = 0, f4;
    std::cout << "Entrer la valeur  de l'angle dont vous voullez le sinus:  ";
    std::cin >> an;
    anr = (an * 3.14) / 180;
    p = 3;
    p_1 = puiss(anr, f, i, p);
    p = 5;
    p_2 = puiss(anr, f, i, p);
    p = 7;
    p_3 = puiss(anr, f, i, p);
    p = 9;
    p_4 = puiss(anr, f, i, p);
    u = 3;
    f1 = fact(e, u, v, w);
    u = 5;
    f2 = fact(e, u, v, w);
    u = 7;
    f3 = fact(e, u, v, w);
    u = 9;
    f4 = fact(e, u, v, w);
    s_i_n = (((anr * f1) - p_1)/ f1) + (p_2 / f2) - (p_3 / f3) + (p_4 / f4);
    std::cout << "Le sinus de cet angle est: " << s_i_n;
    return 0;
}


