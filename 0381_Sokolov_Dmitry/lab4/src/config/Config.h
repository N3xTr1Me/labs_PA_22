#ifndef PA_LAB2_CONFIG_H
#define PA_LAB2_CONFIG_H

#include <string>
#include <iostream>


class Config {
public:
    static const int R;
    static const int C;

    // matrix generation
    static const int generation_ceiling;

    // file handler
    static const std::string Data_path;
    static const std::string summed;

    //Threads
    static const int min_threads;
    static const int max_threads;

    static const int summator_threads;
    static const int iterations;

    //Buffer
    static const int max_size;
    static const int threads;

    static void log_config();

};



#endif //PA_LAB2_CONFIG_H
