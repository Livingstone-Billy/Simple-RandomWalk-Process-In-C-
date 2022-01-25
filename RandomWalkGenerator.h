#ifndef __CppOptions__RandomWalkGenerator__
#define __CppOptions__RandomWalkGenerator__

#include<vector>

using namespace std;

class RandomWalkGenerator
{
    public:
        //cpnstructors
        RandomWalkGenerator(int size, double start, double step);
        RandomWalkGenerator(const RandomWalkGenerator &p);

        //destructor
        ~RandomWalkGenerator();

        //assignment operator
        RandomWalkGenerator &operator= (const RandomWalkGenerator &p);

        vector<double>generateWalk(); //container to store simulated value

        //returns a single step of the random walk
        double computeRandomStep(double currentPrice);

    private:
        int m_numSteps;
        double m_stepSize;
        double m_initialPrice;
};

#endif