#include "arvore-binaria.h"
#include "fila-arranjo.h"

ArvoreBinaria::ArvoreBinaria(){
    raiz = 0;
}

ArvoreBinaria::~ArvoreBinaria(){
    Limpa();
}

void ArvoreBinaria::Insere(TipoItem item){
    InsereRecursivo(raiz,item);
}

void ArvoreBinaria::InsereRecursivo(TipoNo* &p, TipoItem item){
    //pior caso O(n)
    //melhor caso O(log(n))
    if(p==0){
        p = new TipoNo();
        p->item = item;
    }
    else{
        if(item.GetChave() < p->item.GetChave()){
            InsereRecursivo(p->esq, item);
        }
        else{
            InsereRecursivo(p->dir, item);
        }
    }
}

void ArvoreBinaria::PreOrdem(TipoNo *p){
    //visita o no, depois os filhos da esquerda e depois os da direita
    if(p!=0){
        p->item.Imprime();
        PreOrdem(p->esq);
        PreOrdem(p->dir);
    }
}

void ArvoreBinaria::InOrdem(TipoNo *p){
    //Visita o filho da esquerda, o nó, e depois o filho da direita
    if(p!=0){
        InOrdem(p->esq);
        p->item.Imprime();
        InOrdem(p->dir);
    }
}

void ArvoreBinaria::PosOrdem(TipoNo *p){
    //Visita os filhos da esquerda e da direita e depois o nó
    if(p!=0){
        PosOrdem(p->esq);
        PosOrdem(p->dir);
        p->item.Imprime();
    }
}

void ArvoreBinaria::CaminhaNivel(){
    //Visita os nodos de cada nível em sequência
    FilaArranjo F; // fila de apontadores para nos
    TipoNo *p;
    F.Enfileira(raiz);
    while(!F.Vazia()) {
        p = F.Desenfileira();
        if(p!=0) {
            p->item.Imprime();
            F.Enfileira(p->esq);
            F.Enfileira(p->dir);
        }
    }
}


/*
 Pré-Ordem: 5, 3, 2, 1, 4, 7, 6
 Central: 1, 2, 3, 4, 5, 6 , 7
 Pós-Ordem: 1, 2, 4, 3, 6, 7, 5
 Por nível: 5, 3, 7, 2, 4, 6, 1
*/

void ArvoreBinaria::Limpa(){
    ApagaRecursivo(raiz);
    raiz = 0;
}

void ArvoreBinaria::ApagaRecursivo(TipoNo *p){
    if(p!=0){
        ApagaRecursivo(p->esq);
        ApagaRecursivo(p->dir);
        delete p;
    }
}