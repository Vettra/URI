////////////////////////////////////////
//////////////PROBLEM 1006//////////////
///////////////BY:VETTRA////////////////
////////////////////////////////////////
//////////////BIBLIOTECAS///////////////
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
///////////////////////////////////////// 
 
int main()
{
    
    //////////VÁRIAVEIS//////////
            double a, b, c, t;
    /////////////////////////////
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    a = a*2;//MULTIPLICAR PELO PESO DA NOTA A
    b = b*3;//MULTIPLICAR PELO PESO DA NOTA B
    c = c*5;//MULTIPLICAR PELO PESO DA NOTA C
    t = (a+b+c)/10;//DIVIDIR PELO PESO TOTAL A SOMA DAS NOTAS
 
    printf("MEDIA = %.1lf\n", t);//%."NUMERO"lf, NUMERO são as casas decimais que você quer
    return 0;
}
