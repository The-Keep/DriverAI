#ifndef _LAYERS_H
#define _LAYERS_H

#include <iostream>
#include <vector>

#include "../Eigen/Core"
#include "../Eigen/Dense"
#include "neuron.h"

namespace OpenANN
{
    class Layer
    {
       private:
        std::vector<Neuron*> neurons;

       public:
        Layer();
        ~Layer();
    };
}  // namespace OpenANN

#endif