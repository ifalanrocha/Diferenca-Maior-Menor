#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    Repetir:

        cout<<"Digite o primeiro Número ? \n" ;
        cin >>a;

        cout<<"Digite o segundo Número ?  \n" ;
        cin >>b;
    
        if (a>b)
        { 
        cout<<"A diferença do maior para o menor é: " << a-b;
        }
    
        else
        {
        cout<<"A diferença do maior para o menor é: "<< b-a;
        }
    
        cout <<"\n"; 

    cout<<"quer fazer mais contas ou encerrar ?(1 para sim e 2 para não\n";
    cin>>c;

    if(c==1){
    goto Repetir;
    }else{
    return(0);
    }
    
        system("pause");
}
