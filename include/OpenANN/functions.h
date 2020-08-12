#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

namespace OpenANN
{
    typedef float (*activation)(float x);

    float sigmoid(float x);
    // float msa_loss(float truth, float prediction);
}  // namespace OpenANN

#endif