#ifndef  arregloDinamico_h
#define  arregloDinamico_h
class arregloDinamico
{
protected:
//atributos
protected: 
int *ptrArregloDinamico;
int tamanoArregloDinamico;

public:

arregloDinamico(void);

int* getPtrArregloDinamico(void);
int getTamanoArregloDinamico(void);

void setPtrArregloDinamico(int*);
void setTamanoArregloDinamico(int);

void inicializarArregloDinamico(int);
void llenarArregloDinamico(void);
void imprimirArregloDinamico(void);

};
#endif

