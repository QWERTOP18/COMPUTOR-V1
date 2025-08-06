#include "interface.h"
#include <stdio.h>

const char* USAGE_ERROR = "<USAGE> ./computor \"5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0\"";

int main(int ac, char **av) {
    if (ac != 1) {
        fprintf(stdout,"%s\n", USAGE_ERROR);
        return 1;
    }
    POLYNOMIAL p = PFactory(av[1]);
    if (ELen(p.err)) {
        MPrintAll(p.err);
        return 1;
    }
    SOLUTION s = PSolve(p);
    if (ELen(p.err)) {
        MPrintAll(p.err);
        return 1;
    } 
    SPrint(s);
    return 0;
}
