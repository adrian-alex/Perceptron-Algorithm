//
// Created by Adrian Antoci on 30/08/2015.
//

#include <stdlib.h>
#include <iostream>
#include "Perception.h"

Perception::Perception(int n) {
    for (int i = 0; i < n; i++) {
        float rand = random(-1,1);
        weights.push_back(rand);
    }
}


int Perception::activate(double sum) {
    if (sum > 0) return 1;
    else return -1;
}

float Perception::random(int min, int max) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return min + r;
}

int Perception::feedforward(std::vector<double> inputs) {
    float sum = 0;
    for (int i = 0; i < weights.size(); i++) {
        sum += inputs.at(i)* weights.at(i);
    }
    return activate(sum);
}

void Perception::train(std::vector<double> inputs, int desired) {
    std::cout<<"training point "<<inputs.at(0)<<" "<<inputs.at(0)<<std::endl;

    std::cout<<"desired "<<desired<<std::endl;

    int guess = feedforward(inputs);

    std::cout<<"guessed "<<guess<<std::endl;

    float error = desired - guess;

    std::cout<<"error "<<error<<std::endl;

    for (int i = 0; i < weights.size(); i++) {
        weights.at(i) += c * error * inputs[i];
    }
}
