#include "tipono.h"

class ArvoreBinaria
{
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void Insere(TipoItem item);
        void Caminha(int tipo);
        void CaminhaNivel();
        void Limpa();
        int FazAlgo(TipoNo *no);
        TipoNo* GetRaiz();
    private:
        void InsereRecursivo(TipoNo* &p, TipoItem item);
        void ApagaRecursivo(TipoNo* p);
        void PorNivel();
        void PreOrdem(TipoNo* p);
        void InOrdem(TipoNo* p);
        void PosOrdem(TipoNo* p);
        TipoNo *raiz;
};