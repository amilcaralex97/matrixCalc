#include<iostream>
#include"arregloDinamico.h"
#include<stdlib.h>

using namespace std;

arregloDinamico::arregloDinamico(void)
{
this->ptrArregloDinamico= NULL;
this->tamanoArregloDinamico=0;
}

int* arregloDinamico::getPtrArregloDinamico(void){return this->ptrArregloDinamico;}
int arregloDinamico::getTamanoArregloDinamico(void){return this->tamanoArregloDinamico;}
void arregloDinamico::setPtrArregloDinamico(int*n){this->ptrArregloDinamico=n;}
void arregloDinamico::setTamanoArregloDinamico(int x){ this->tamanoArregloDinamico=x ;}


void arregloDinamico::inicializarArregloDinamico(int x)
{this->tamanoArregloDinamico=x;
if ((*this).ptrArregloDinamico==NULL)
this->ptrArregloDinamico= new int[this->tamanoArregloDinamico];
else{this->ptrArregloDinamico=NULL;
 this->ptrArregloDinamico= new int[this->tamanoArregloDinamico];} }

void arregloDinamico::llenarArregloDinamico(void)
{
	
int a;
for(int i=tamanoArregloDinamico-1; i>=0; i--)	
{a=rand()%2;
(a==1)? this->ptrArregloDinamico[i]=rand()%100 :this->ptrArregloDinamico[i]=-rand()%100;}


}

void arregloDinamico::imprimirArregloDinamico(void)
{for(int i=tamanoArregloDinamico-1; i>=0; i--)
cout<<this->ptrArregloDinamico[i]<<"\t";}

