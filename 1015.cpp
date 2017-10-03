///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1012//////////
//////////Gustavo B. Ruiz//////////
///////////////////////////////////
 
///////////////////////////////////
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <locale>
#include <map>
#include <math.h>
#include <set>
#include <sstream>
#include <string>
#include <vector>
///////////////////////////////////
 
int main()
{
 
    //////////VÁRIAVEIS//////////
        double x1, y1, x2, y2, t;
    /////////////////////////////
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);//%lf PARA DOUBLE
    
    
    t = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2));//POW PARA POTENCIA E SQRT PARA RAIZ, AMBAS PRESENTES EM MATH.H
    
    printf("%.4lf\n", t);//%.4lf PARA 4 CASAS DECIMAIS
    return 0;
}
