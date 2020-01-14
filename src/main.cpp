#include "main.h"
#include <adm/adm.hpp>
#include <bw64/bw64.hpp>

int main(int argc, char *argv[]){
    auto doc = adm::Document::create();
    auto reader = bw64::readFile("this_path/this_file.wav");

    return 0;
}