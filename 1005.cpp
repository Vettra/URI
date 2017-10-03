////////////////////////////////////////
//////////////PROBLEM 1005//////////////
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
            double a, b, c;
    /////////////////////////////
    
    scanf("%lf %lf", &a, &b);
    
    a = a*3.5;//MULTIPLICAR PELO PESO DA NOTA A
    b = b*7.5;//MULTIPLICAR PELO PESO DA NOTA B
    c = (a+b)/11;//DIVIDIR PELO PESO TOTAL A SOMA DAS NOTAS
 
    printf("MEDIA = %.5lf\n", c);//%."NUMERO"lf, NUMERO são as casas decimais que você quer
    return 0;
}
