#include"matrizDinamica2D.h"

class matriz_matriz: public matrizDinamica2D {
public:
int** mat;
int** resultado;
int tamfil_re;
int tamcol_re;

matriz_matriz(void);

void iniciar(int, int);
void llenar(void);
void imprimir(void);
void imre(void);

};

