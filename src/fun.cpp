// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t ans =x;
    int i;
    for ( i = 1; i < n; i++){
        ans = ans * x;
    }
    return ans;
}
