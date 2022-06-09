#include <iostream>
#include <cmath>
#include <map>
#include <thread>
#include <omp.h>
#include "Obj.h"
using namespace std;

int main(){

    std::map<int,vector<double>> result;
    int param = 0;
    //omp_set_num_threads(4);
    #pragma omp parallel
    {
    //int ID = omp_get_thread_num();
        #pragma omp for
        for(param = 1; param <= 4; param++){
            Obj x(param);
            if (result.find(param) == result.end()) {
                result.emplace(param, x.run());
            }
        }
    }
    for(auto &[i,v]:result){
        std::cout<<i<<": ";
        for(auto elem:v){
            std::cout<<elem<<" ";
        }
        std::cout<<std::endl;
    }
return 0;
}