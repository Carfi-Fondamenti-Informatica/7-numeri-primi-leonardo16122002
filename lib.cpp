//
// Created by leona on 29/11/2021.
//

#include "lib.h"

bool primo(int a){
    int i,j,k;

    i=2;

    while(i<=a/2){
        //std::cout<<"a="<<a<<"  %  "<<"i="<<i<<" = "<<a%i<<std::endl;
        if(a%i==0){
            return false;
        }
        i++;
    }
    return true;
}

