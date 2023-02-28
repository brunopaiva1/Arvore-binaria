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