#ifndef matrizDinamica2D_h
#define matrizDinamica2D_h
class matrizDinamica2D {
protected:
//atributos
int **ptrMatrizDinamica2D;
int tamanoFilas;
int tamanoColumnas;

public:
matrizDinamica2D(void);

int** getPtrMatrizDinamica2D(void);
int getTamanoFilas(void);
int getTamanoColumnas(void);
void setPtrMatrizDinamica2D(int**);
void setTamanoFilas(int);
void setTamanoColumnas(int);

void inicializarMatrizDinamica(int,int);
void llenarMatrizDinamica(void);
void imprimirMatrizDinamica(void);
};
#endif

