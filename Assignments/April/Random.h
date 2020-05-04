#ifndef _RANDOM_H_
#define _RANDOM_H_

// File:  Random.h
// Version: 3
// class declaration

#include <unordered_map>

// For exception handling
#include <stdexcept>

// For random number generator
#include <random>

class Random
{
    private:

    int _low;
    int _diff;
    static std::default_random_engine _rng;
    std::uniform_int_distribution<int> _dist{1,10};
    
    public:

    Random(int l, int h);
    int get();
};

#endif
