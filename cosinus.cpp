#include <iostream>
#include <stdlib.h>
int fact(int i, int x, int y, int f){
    y = 1;
    for (i = 1; i < x - 1; i++) {
        y = y * (x - i);
    } 
    f = x * y;
    return f;
}
float puiss(float a, float c, int k, int b){
c = a;
for (k = 1; k < b; k++){
    a *= c;
}
    return a;
}
int main()
{
    float an, anr, c_o_s, f, p_1, p_2, p_3, p_4;
    int e, u, v, w, f1, f2, f3, f4, p, i = 0;
    std::cout << "Entrer la valeur de l'angle dont vous voullez le cosinus:  ";
    std::cin >> an;
    anr = (an * 3.14) / 180;
    p = 2;
    p_1 = puiss(anr, f, i, p );
    p = 4;
    p_2 = puiss(anr, f, i, p);        
    p = 6;
    p_3 = puiss(anr, f, i, p);
    p = 8;
    p_4 = puiss(anr, f, i, p);
    u = 2;
    f1 = fact(e, u, v, w);
    u = 4;
    f2 = fact(e, u, v, w);     
    u = 6;
    f3 = fact(e, u, v, w);
    u = 8;
    f4 = fact(e, u, v, w);
    c_o_s = 1 - (p_1 / f1) + (p_2 / f2) - (p_3 / f3) + (p_4 / f4);
    std::cout << "Le cosinus est: " << c_o_s;
    return 0;
}


