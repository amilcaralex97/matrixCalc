#include<iostream>
#include"matrizDinamica2D.h"
#include<stdlib.h>
using namespace std;

matrizDinamica2D::matrizDinamica2D(void){}

int** matrizDinamica2D::getPtrMatrizDinamica2D(void){return this ->ptrMatrizDinamica2D;}
int   matrizDinamica2D::getTamanoFilas(void){return this->tamanoFilas;}
int   matrizDinamica2D::getTamanoColumnas(void){return this->tamanoColumnas;}


void matrizDinamica2D::setPtrMatrizDinamica2D(int**m){this->ptrMatrizDinamica2D=m;}
void  matrizDinamica2D::setTamanoFilas(int x){ this->tamanoFilas=x ;}
void  matrizDinamica2D::setTamanoColumnas(int y){ this->tamanoColumnas=y ;}

void matrizDinamica2D::inicializarMatrizDinamica(int x, int y)
{this->tamanoFilas=x;
this->tamanoColumnas=y;	
this->ptrMatrizDinamica2D= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
this->ptrMatrizDinamica2D[i]= new int[this->tamanoColumnas]; }

void matrizDinamica2D::llenarMatrizDinamica(void)
{
int a;
for(int i=0; i<this->tamanoFilas; i++)
for(int j=0; j<this->tamanoColumnas; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>ptrMatrizDinamica2D[i][j];
        
        /*a=rand()%2;
(a==1)? this->ptrMatrizDinamica2D[i][j]=rand()%100 :this->ptrMatrizDinamica2D[i][j]=-rand()%100;*/}
}
void matrizDinamica2D::imprimirMatrizDinamica(void)
{
for(int i=0; i<this->tamanoFilas; i++){
for(int j=0; j<this->tamanoColumnas; j++)
cout<<this->ptrMatrizDinamica2D[i][j]<<"\t";
cout<<endl;}
cout<<endl;
cout<<endl;
}


