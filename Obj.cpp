//
// Created by Cephas Svosve on 15/4/2022.
//

#include "Obj.h"


vector<double>
Obj::run(){
//agsbs
    vector<double> result ={};
    watch clock(watch::one_second);
    clock.start();

    int val =0;
    while(clock.current_time() < 10){
        if(val < int(clock.current_time())) {
            result.push_back( val);
            val++;
        }
    }
    return result;
}
