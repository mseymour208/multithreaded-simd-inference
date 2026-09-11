#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num_neurons = 3;
    int product = 0;
    int dot_product = 0;
    vector<int> weights = {1, 2, 9, 2, 1, 2};
    vector<int> input = {3, 3};
    vector<int> result = {};
    
    int total_cols = num_neurons * input.size();
    int rows = num_neurons;
    int cols = input.size();

    for (int i = 0; i < rows; i++) {
        dot_product = 0;
        for (int j = 0; j < input.size(); j++) {
            product = input[j] * weights[i * cols + j];
            dot_product += product;
        }
        result.push_back(dot_product);

    }

    for (int element : result) {
        cout << element << " ";
    }

    return 0;
}