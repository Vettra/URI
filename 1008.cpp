////////////////////////////////////////
//////////////PROBLEM 1008//////////////
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
          int a;
          double b, c, t;
    /////////////////////////////
    
    scanf("%d %lf %lf", &a, &b, &c);
    
    t = b*c;//EVITE FAZER CONTAS COM VÁRIAVEIS INT E DOUBLE, CASO O RESULTADO FINAL TENHA CASAS DECIMAIS TRANSFORME TODAS VARIÁVEIS EM DOUBLE.
 
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, t);//ORDENE AS VARIÁVEIS DEPOIS DAS (" ",) NESTE CASO ''A'' PRIMEIRO ''T'' DEPOIS
    return 0;
}
