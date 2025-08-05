#pragma once
typedef struct polynomial POLYNOMIAL;
typedef struct message MESSAGE;
typedef struct solution SOLUTION;
typedef struct complex COMPLEX;

typedef MESSAGE ERROR;

struct polynomial
{
    int coef[256];
    ERROR *err;
};

struct solution
{
    double descriminent;
    int len;
    COMPLEX x[2];
    MESSAGE *msg;
};

/**
 */
POLYNOMIAL PFactory(const char* s);



/**
 */
SOLUTION PSolve


struct message
{
    int len;
    char *msg[256];
};

/**
 */
void MPrintAll(const MESSAGE *m);



struct complex{
    double real;
    double ideal;
};

/**
 */
void CPrint(const COMPLEX c);