#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include <fstream>
#include <iostream>

#include "Eigen/Core"
#include "Eigen/Dense"
#include "OpenANN/functions.h"
#include "OpenANN/neuron.h"
#include "anyoption.h"
#include "json.h"
#include "screenshot.h"

using namespace std;
using namespace Eigen;

typedef Eigen::Matrix<uint8_t, Eigen::Dynamic, Eigen::Dynamic> NeuroMatrix;

int main(int argc, char* argv[]) {
    // AnyOption* args = new AnyOption();
    // string output_path = "./prediction.png";

    // HWND win = GetDesktopWindow();
    // HDC dc = GetDC(win);
    // std::cout << "Taking Screenshot...\n";
    // HDCToFile(output_path.c_str(), dc, {0, 0, 2256, 1504});
    // ReleaseDC(win, dc);

    Eigen::Vector<float, 2> weights(0, 1);
    Eigen::Vector<float, 2> input(2, 3);
    OpenANN::Neuron* neuron = new OpenANN::Neuron(weights, 4);

    cout << neuron->feedForward(input, OpenANN::sigmoid);

    return 0;
}

void parseArgs(int argc, char* argv[]) {
    AnyOption* args = new AnyOption();
    string output_path = "./prediction.png";

    args->addUsage("Self Driving AI. By S. Rahman\n");
    args->addUsage("--help\t\t| -h\t\tShows CLI usage");
    args->addUsage("--conf*\t\t| -c\t\tPath to data path config file.");
    args->addUsage("--weight*\t| -w\t\tPath to weights file.");
    args->addUsage("--input*\t| -i\t\tPath to input image.");
    args->addUsage("--output\t| -o\t\tPath to output image. Leave blank if not required.");

    args->setFlag("help", 'h');
    args->setOption("conf", 'c');
    args->setOption("weight", 'w');

    args->processCommandArgs(argc, argv);

    if (args->hasOptions() == false) {
        std::cout << "No args Provided\n";
    } else {
        if (args->getFlag("help")) {
            args->printUsage();
        }
        if (args->getValue("conf") != NULL) {
            // load network
        }
        if (args->getValue("weight") != NULL) {
            // load weights
        }
        if (args->getValue("input") != NULL) {
            // load image
        }
        if (args->getValue("output") != NULL) {
            // use custom output path
            output_path.clear();
            output_path.assign(args->getValue('o'));
        }
    }
}