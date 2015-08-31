//
// Created by Adrian Antoci on 31/08/2015.
//

#ifndef NEURALNET_TRAINER_H
#define NEURALNET_TRAINER_H


#include <vector>

class Trainer {
public:
    std::vector<double> inputs;

    int answer;
    Trainer(double x, double y, int a);

    std::vector<double> getInputs();

    int getAnsware();
};


#endif //NEURALNET_TRAINER_H
