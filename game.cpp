#include <iostream>
#include <cstdlib>
#include <ctime>

class Car {
public:
    Car() : speed(0) {}

    void accelerate() {
        speed += 10;
        std::cout << "You accelerated! Current speed: " << speed << " km/h" << std::endl;
    }

    void brake() {
        if (speed >= 10) {
            speed -= 10;
            std::cout << "You braked! Current speed: " << speed << " km/h" << std::endl;
        } else {
            speed = 0;
            std::cout << "You came to a stop! Current speed: " << speed << " km/h" << std::endl;
        }
    }

    int getSpeed() const {
        return speed;
    }

private:
    int speed;
};

int main() {
    Car playerCar;
    char choice;

    std::cout << "Welcome to the Car Racing Game!" << std::endl;
    std::cout << "Press 'a' to accelerate, 'b' to brake, or 'q' to quit." << std::endl;

    do {
        std::cout << "Your current speed: " << playerCar.getSpeed() << " km/h" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 'a':
                playerCar.accelerate();
                break;
            case 'b':
                playerCar.brake();
                break;
            case 'q':
                std::cout << "Thank you for playing!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please enter 'a', 'b', or 'q'." << std::endl;
        }
    } while (choice != 'q');

    return 0;
}