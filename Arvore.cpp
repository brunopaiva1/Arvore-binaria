#include <stdio.h>
#include <stdlib.h>

struct mes{
    char *nome;
    unsigned num;
};

struct no{
    mes info;
    struct no* esq;
    struct no* dir;
};

int main(){
    struct mes Mes[12];
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].num = 1;
    Mes[1].nome = (char*) "Fevereiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].nome = (char*) "Janeiro";

}