#ifndef MESIN_H
#define MESIN_H

class Mesin {
private:
    int rpm;

public:
    Mesin() : rpm(0) {}
    void setRPM(int newRPM);
    int getRPM();
};

void Mesin::setRPM(int newRPM) {
    rpm = newRPM;
}

int Mesin::getRPM() {
    return rpm;
}

#endif
