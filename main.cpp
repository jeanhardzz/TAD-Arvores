#include <iostream>
#include "arvore-binaria.h"
#include "tipono.h"

main(){
    std::cout<<"oi"<<std::endl;
    ArvoreBinaria T;
    TipoItem x;

    x.SetChave(5);
    T.Insere(x);
    x.SetChave(3);
    T.Insere(x);
    x.SetChave(8);
    T.Insere(x);
    x.SetChave(1);
    T.Insere(x);
    x.SetChave(6);
    T.Insere(x);
    x.SetChave(7);
    T.Insere(x);

    TipoNo *raiz = T.GetRaiz();
    std::cout<<T.FazAlgo(raiz)<<std::endl;
}