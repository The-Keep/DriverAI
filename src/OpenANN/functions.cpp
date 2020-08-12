#include "OpenANN/functions.h"

#include <math.h>
#include "Eigen/Core"
#include "Eigen/Dense"

using namespace Eigen;

namespace OpenANN
{
    float sigmoid(float x) { return 1 / (1 + exp(-x)); };

    float msa_loss(Vector<float, Dynamic> truth, Vector<float, Dynamic> prediction) {
        auto m = (truth - prediction).pow(2).mean();
    }
}  // namespace OpenANN