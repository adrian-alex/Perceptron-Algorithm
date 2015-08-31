#include <iostream>
#include "./core/Perception.h"
#include "core/Trainer.h"


long random(int i, int i1);

float f(float x) {
    return x; //2*x+1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<Trainer*> trainerArray;

    int width = 500;
    int height = 500;

    for (int t = 0; t < 2000; t++) {

        float x = random(-width/2,width/2);
        float y = random(-height/2,height/2);

        int answer = 1;

        if (y < f(x)){
            answer = -1;
        }

        Trainer *trainer = new Trainer(x, y, answer);
        trainerArray.push_back(trainer);
    }

    Perception perception(3);

    for ( Trainer *trainer : trainerArray){
        perception.train(trainer->getInputs(), trainer->getAnsware());
    }

    std::cout<<"test"<<std::endl;
    std::vector<double> testData = {1,-3,1};
    int guess = perception.feedforward(testData);

    std::cout<<"result: "<<guess<<std::endl;

    return 0;
}

long random(int min, int max) {
    return rand()%(max-min + 1) + min;
}