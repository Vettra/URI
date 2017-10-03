////////////////////////////////////////
//////////////PROBLEM 1009//////////////
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
            char nome;
            double a, b, t;
    /////////////////////////////
    
    scanf("%s %lf %lf", &nome, &a, &b);//%s para variável char. guarda "letras"
    
    t = a + (b*0.15);//FORMULA PARA PAGAMENTO DO FUNCIONÁRIO(SALÁRIO FIXO + 15% DE COMISSÃO)
 
    printf("TOTAL = R$ %.2f\n", t);//2.lf PARA APENAS 2 CASAS DECIMAIS
    return 0;
}
