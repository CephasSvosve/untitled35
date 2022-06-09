//
// Created by Cephas Svosve on 24/4/2022.
//

#ifndef UNTITLED35_WATCH_H
#define UNTITLED35_WATCH_H

#include <chrono>


using namespace std::chrono;

class watch{

private:

    time_point<std::chrono::steady_clock, std::chrono::duration<long long int, std::ratio<1, 1000000000>>>
            start_time,
            creation_time;



public:
    enum dt {one_microsecond = 0, one_millisecond=1, one_second=2, one_minute=3};
    dt day_length;


    explicit watch(dt day_length):creation_time(std::chrono::high_resolution_clock::now()){
        this->day_length = day_length;
    }

    void start();

    double
    current_time();

    time_point<std::chrono::steady_clock, std::chrono::duration<long long int, std::ratio<1, 1000000000>>>
    get_creation_time();

    void reset();

};

#endif //UNTITLED35_WATCH_H
