#ifndef MEMORY_H
#define MEMORY_H

#include "../../include/global.h"

using namespace std;

class Memory
{
    public:
        Memory();

        uint8_t read(uint16_t address);  // Lê um byte da memória
        void write(uint16_t address, uint8_t data);  // Escreve um byte na memória

    private:
        vector<uint8_t> ram; // Simula os 2 KB de RAM do NES
};

#endif // MEMORY_H
