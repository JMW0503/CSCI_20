#include <random>
#include <chrono>
//In main include the following:

int randomNumber = 0; // This variable will hold the random number

// Declare random number generator object and seed it with current time
std::default_random_engine rng{static_cast<uint_fast32_t>(std::chrono::system_clock::now().time_since_epoch().count())};

// Sets the range for the random number. In this case, between 1 and 10 (inclusive)
std::uniform_int_distribution<int> dist{1, 10};

// Generate and store random number in variable
randomNumber = dist(rng);
//Subsequent calls to dist(rng) will produce more random numbers. For example:

randomNumber1 = dist(rng); // generates and stores first random number
randomNumber2 = dist(rng); // generates and stores second random number
randomNumber3 = dist(rng); // generates and stores third random number
// and so on