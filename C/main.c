#include "interface.h"
#include <stdio.h>

const char* USAGE_ERROR = "<USAGE> ./computor \"5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0\"";

inline 

int main(int ac, char **av) {
    if (ac != 1) {
        fprintf("stdout", USAGE_ERROR);
        return 1;
    }
    POLYNOMIAL p = Pfactory(av[1]);
    if (p.errlen) {
        return (Pperror(p));
    }

    return 0;
}
