#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "RIFFWaveFileShifter.hpp"


int main(int argc, char** argv)
{

    RIFFWaveFileShifter riffWaveFileShifter(argc, argv);
    riffWaveFileShifter.shiftAudioFile();

    return 0;
}
