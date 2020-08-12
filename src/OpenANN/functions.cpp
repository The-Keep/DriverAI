#include "OpenANN/functions.h"

#include "OpenANN/neuron.h"
#include <math.h>
#include "Eigen/Core"
#include "Eigen/Dense"

using namespace Eigen;

namespace OpenANN
{
    float sigmoid(float x) { return 1 / (1 + exp(-x)); };

    // float msa_loss(ArrayF truth, ArrayF prediction) {
    //     ArrayF result = (truth - prediction).pow(2);
    //     return result.mean();
    // }
}  // namespace OpenANN