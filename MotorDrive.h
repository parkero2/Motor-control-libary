#ifndef MotorDrive_h
#define MotorDrive_h
#include "Arduino.h"

class MotorDrive {
    public:
        void definePins(int Lsp, int Lf, int Lb, int Rsp, int Rf, int Rb);
        void changeSpeed(int newSpeed);
        void setOffset(int LMotorPercent);
        void Left();
        void Right();
        void Forward();
        void Backward();
        void swerve(int offset);
        void stop();        
};
#endif