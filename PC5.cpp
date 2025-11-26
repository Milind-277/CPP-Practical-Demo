//Create two classes StepsTracker and CaloriesTracker to simulate the conversion of fitness data between different health metrics in a wearable fitness application. Implement class-to-class type conversion as follows : 1. Source Class (StepsTracker): Stores the number of steps recorded by the user, 2. Target Class (CaloriesTracker): Represents an estimate of calories burned, converted from the step count.


#include <iostream>
using namespace std;

class stepstracker {
    private:
        int steps;

    public:
        stepstracker() {
            steps = 0;
        }

        stepstracker(int s) {
            steps = s;
        }

        void inputSteps() {
            cout << "Enter number of steps : ";
            cin >> steps;
        }

        int getSteps() const {
            return steps;
        }
};

class caloriestracker {
    private:
        float calories;

    public:
        caloriestracker() {
            calories = 0.0;
        }

    caloriestracker(stepstracker s) {
        calories = s.getSteps()*0.04;
    }

    void displayCalories() {
        cout << "Estimated Calories Burned : " <<calories <<" kcal" <<endl;
    }
};

int main() {
    stepstracker stepsObj;
    stepsObj.inputSteps();

    caloriestracker calObj = stepsObj;

    calObj.displayCalories();

    return 0;
    
}
