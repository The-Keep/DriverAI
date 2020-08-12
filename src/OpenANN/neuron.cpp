#include "OpenANN/neuron.h"
#include "OpenANN/activations.h"

using namespace std;

namespace OpenANN
{
    Neuron::Neuron(ArrayF weights, size_t bias) {
        this->bias = bias;
        this->weights = weights;
    }

    float Neuron::feedForward(ArrayF inputs, activation activation_func) {
        return activation_func(this->weights.dot(inputs) + this->bias);
    }
}  // namespace OpenANN