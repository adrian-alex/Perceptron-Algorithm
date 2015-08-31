//
// Created by Adrian Antoci on 30/08/2015.
//

#ifndef NEURALNET_PERCEPTION_H
#define NEURALNET_PERCEPTION_H

#include <unordered_set>
#include <vector>

class Perception {
public:
    Perception(int n);

    int feedforward(std::vector<double>);
    void train(std::vector<double> inputs, int desired);

private :
    std::vector<double> weights;

    float random(int min, int max);

    int activate(double sum);

    float c = 0.01;

};


#endif //NEURALNET_PERCEPTION_H
