#ifndef FILA
#define FILA

#include "tipoitem.h"
#include "tipono.h"

class Fila
{
    public:
        Fila() {tamanho = 0;};
        int GetTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};
        virtual void Enfileira(TipoNo* item) = 0;
        virtual TipoNo* Desenfileira() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};

#endif