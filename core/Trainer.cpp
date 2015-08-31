//
// Created by Adrian Antoci on 31/08/2015.
//

#include "Trainer.h"

Trainer::Trainer(double x, double y, int a) {
    inputs.push_back(x);
    inputs.push_back(y);
    inputs.push_back(1);
    answer = a;
}

std::vector<double> Trainer::getInputs() {
   return inputs;
}

int Trainer::getAnsware() {
    return answer;
}
