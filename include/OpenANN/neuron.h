#ifndef _NEURON_H
#define _NEURON_H

#include <iostream>
#include <vector>
#include "functions.h"
#include "Eigen/Core"
#include "Eigen/Dense"

namespace OpenANN
{
    typedef Eigen::Vector<float, Eigen::Dynamic> ArrayF;

    class Neuron
    {
       private:
        ArrayF weights;
        size_t bias;

       public:
        Neuron(ArrayF weights, size_t bias);
        ~Neuron();
        float feedForward(ArrayF inputs, activation activation_func);
    };
}  // namespace OpenANN

#endif