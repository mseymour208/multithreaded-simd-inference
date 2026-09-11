#include "network.h"

vector<float> forward_layer(int rows, int cols, const vector<float>& input, 
                          const vector<float>& weights, const vector<float>& bias) {

    // Initialize dot product to zero
    float dot = 0;
    vector<float> result = {};

    // Iterate over the rows of the weight matrix
    for (int i = 0; i < rows; i++) {
        dot = 0;
        // Iterate over the input vector
        for (int j = 0; j < input.size(); j++) {
            dot += input[j] * weights[i * cols + j];
        }

        dot += bias[i];
        result.push_back(dot);
    }

    return result;

}