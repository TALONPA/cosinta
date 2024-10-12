#include <iostream>
#include <stdio.h>
float puiss(float a, float c, int k, int b){
c = a;
for (k = 1; k < b; k++){
    a *= c;
}
    return a;
}
int main()
{
   
    float an, anr, t_a_n, p_1, p_2, van, p, p_3, f, p_4, p_5;
    int  i = 0;
    // ce programme n'est valable que pour |x|<90.
    std::cout << "Entrer la valeur  de l'angle dont vous voullez la tangente:  ";
    std::cin >> an;
    if (an < 0) {
        van = -1 * an;
        if (van > 90) {
            std::cout << "Ce programme n'est pas valide  pour ce cas mathematiquement";
        }
        else {
            anr = (an * 3.14) / 180;
            p = 3;
            p_1 = puiss(anr, f, i, p);
            p = 5;
            p_2 = puiss(anr, f, i, p);
            p = 7;
            p_3 = puiss(anr, f, i, p);
            p = 9;
            p_4 = puiss(anr, f, i, p);
            p = 11;
            p_5 = puiss(anr, f, i, p);
            t_a_n = anr + ((p_1) / 3) + ((2 * p_2) / 15) + ((17 * p_3) / 315) + (62 * p_4 / 2835) + (1382 * p_5 /155925);
            std::cout << "La tangente est: " << t_a_n;
        }
    }
    else {
        if (an > 90) {
            std::cout << "Ce programme n'est pas valide  pour ce cas mathematiquement";
        }
        else {
            anr = (an * 3.14) / 180;
            p = 3;
            p_1 = puiss(anr, f, i, p);
            p = 5;
            p_2 = puiss(anr, f, i, p);
            p = 7;
            p_3 = puiss(anr, f, i, p);
            p = 9;
            p_4 = puiss(anr, f, i, p);
            p = 11;
            p_5 = puiss(anr, f, i, p);
            t_a_n = anr + ((p_1) / 3) + ((2 * p_2) / 15) + ((17 * p_3) / 315) + (62 * p_4 / 2835) + (1382 * p_5 / 155925);
            std::cout << "La tangente est: " << t_a_n;
        }
    }
   
    return 0;
}


