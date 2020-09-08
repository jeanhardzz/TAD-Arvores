#ifndef FILA_ARRANJO
#define FILA_ARRANJO

#include "fila.h"
#include "tipono.h"
class FilaArranjo : public Fila
{
    public:
        FilaArranjo();
        void Enfileira(TipoNo* item);
        TipoNo* Desenfileira();
        void Limpa();
    private:
        int frente;
        int tras;
        static const int MAXTAM = 8;
        TipoNo itens[MAXTAM];
};

#endif