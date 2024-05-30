#ifndef MOBIL_H
#define MOBIL_H

#include "mesin.h" // Sertakan definisi kelas Mesin
#include <iostream>

class Mobil {
private:
    int kecepatan;
    Mesin *mesin;

public:
    Mobil() : kecepatan(0), mesin(nullptr) {}

    void pasangMesin(Mesin &engine) {
        mesin = &engine;
    }

    void percepat(int jumlah) {
        if (mesin != nullptr) {
            kecepatan += jumlah;
            mesin->setRPM(kecepatan * 100); // RPM tergantung pada kecepatan mobil
        }
    }

    void info() {
        std::cout << "Kecepatan mobil: " << kecepatan << " km/h\n";
        if (mesin != nullptr) {
            std::cout << "RPM mesin: " << mesin->getRPM() << "\n";
        }
    }
};

#endif
