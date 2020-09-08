#ifndef TIPO_NO
#define TIPO_NO

#include "tipoitem.h"
class TipoNo{
    public:
        TipoNo();
    private:
        TipoItem item;
        TipoNo *esq;
        TipoNo *dir;
    friend class ArvoreBinaria;
};

#endif