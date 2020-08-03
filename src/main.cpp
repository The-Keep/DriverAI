#include <filesystem>
#include <iostream>
#include <paths.h>
#include <stdio.h>
#include <stdlib.h>

#include "anyoption.h"
#include "darknet.h"
#include "json.h"

using namespace std;

int main(int argc, char* argv[]) {
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

    return 0;
} // namespace fs=std::filesintmain(intargc,char*argv[])