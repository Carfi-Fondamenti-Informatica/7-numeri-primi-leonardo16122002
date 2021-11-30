//
// Created by leona on 29/11/2021.
//

#include "lib.h"

bool ric(int i, int n){
    if(i==n||n==1){
        return true;
    }
    else if(n%i==0){
        return false;
    }
    else {
        return ric(i+1,n);
    }
}
