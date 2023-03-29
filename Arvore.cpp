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
    Mes[1].num = 2;
    Mes[2].nome = (char*) "Março";
    Mes[2].num = 3;
    Mes[3].nome = (char*) "Abril";
    Mes[3].num = 4;
    Mes[4].nome = (char*) "Maio";
    Mes[4].num = 5;
    Mes[5].nome = (char*) "Setembro";
    Mes[5].num = 9;
    Mes[6].nome = (char*) "Agosto";
    Mes[6].num = 8;
    Mes[7].nome = (char*) "Junho";
    Mes[7].num = 6;
    Mes[8].nome = (char*) "Outubro";
    Mes[8].num = 10;
    Mes[9].nome = (char*) "Dezembro";
    Mes[9].num = 12;
    Mes[10].nome = (char*) "Julho";
    Mes[10].num = 7;
    Mes[11].nome = (char*) "Novembro";
    Mes[11].num = 11;

    struct no N[12];
    N[0].info = Mes[0];
    N[1].info = Mes[1];
    N[2].info = Mes[2];
    N[3].info = Mes[3];
    N[4].info = Mes[4];
    N[5].info = Mes[5];
    N[6].info = Mes[6];
    N[7].info = Mes[7];
    N[8].info = Mes[8];
    N[9].info = Mes[9];
    N[10].info = Mes[10];
    N[11].info = Mes[11];
    
    N[0].esq = &N[1];
    N[0].dir = &N[2];
    N[1].esq = &N[3];
    N[2].esq = &N[4];
    N[2].dir = &N[5];
    N[3].dir = &N[6];
    N[4].esq = &N[7];
    N[5].esq = &N[8];
    N[6].dir = &N[9];
    N[7].esq = &N[10];
    N[8].esq = &N[11];

    return 0;
}