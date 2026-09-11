#include "network.h"

using namespace std;

int main() {

    int num_neurons = 3;
    vector<float> weights = {1, 2, 9, 2, 1, 2};
    vector<float> input = {3, 1};
    vector<float> result = {};

    vector<float> hidden_bias = {0.1f, 0.2f, 0.3f};

    


    for (float element : result) {
        cout << element << " ";
    }

    return 0;
}