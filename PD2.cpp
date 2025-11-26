//Create a base class SmartDevice that holds universal device properties (like power status). Derive three classes: SmartLight, SmartFan, and SmartAC, each with unique attributes. Demonstrate how each device behaves independently while sharing base control features.


#include <iostream>
#include <iostream>
using namespace std;

class SmartDevice {
    protected:
        bool powerStatus;

    public:
        SmartDevice() {
            powerStatus = false;
        }

        void turnOn() {
            powerStatus = true;
            cout << "Device turned ON\n";
        }

        void turnOff() {
            powerStatus = false;
            cout << "Device turned OFF\n";
        }

        void showStatus(){
            cout << "Power Status : " <<(powerStatus ? "ON" : "OFF") <<endl;
        }
};

class SmartLight : public SmartDevice {
    private:
        int brightness;

    public:
        SmartLight() {
            brightness = 50;
        }

        void setBrightness(int level) {
            brightness = level;
            cout << "Light Brightness set to " <<brightness << "%\n";
        }

        void showLightInfo() {
            cout << "\n=== Smart Light ===\n";
            showStatus();
            cout << "Brightness : " <<brightness <<"%\n";
        }
};

class SmartFan : public SmartDevice {
    private:
        int speed;

    public:
        SmartFan() {
            speed = 1;
        }

        void setSpeed(int level) {
            speed = level;
            cout << "Fan Speed set to Level " <<speed <<endl;
        }

        void showFanInfo() {
            cout << "\n=== Smart Fan ===\n";
            showStatus();
            cout << "Speed Level : " <<speed <<endl;
        }
};

class SmartAC : public SmartDevice {
    private:
        int temperature;

    public:
        SmartAC() {
            temperature = 24;
        }

        void setTemperature(int temp) {
            temperature = temp;
            cout << "AC Temperature set to " <<temperature <<"Â°C\n";
        }

        void showACInfo() {
            cout << "\n=== Smart AC ===\n";
            showStatus();
            cout << "Temperature : " <<temperature <<"Â°C\n";
        }
};

int main() {
    SmartLight light;
    SmartFan fan;
    SmartAC ac;

    light.turnOn();
    light.setBrightness(80);
    light.showLightInfo();

    fan.turnOn();
    fan.setSpeed(3);
    fan.showFanInfo();

    ac.turnOn();
    ac.setTemperature(20);
    ac.showACInfo();

    return 0;
    
}