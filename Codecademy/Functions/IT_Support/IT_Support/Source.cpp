#include <iostream>


void conduct_it_support() {
    std::string on_off_attempt = "n";
    bool attempt = false;
    std::cout << "Hello. IT.\n";
    while (attempt==false) {
        std::cout << "Have you tried turning it off and on again? y/n\n";
        std::cin >> on_off_attempt;
        if (on_off_attempt == "y"|| on_off_attempt == "Y") {
            std::cout << "I'll get back to you.\n";
            attempt = true;
        }
        else {
            attempt = false;
        }
    }
}

int main() {

    // Conduct IT support
    conduct_it_support();



    // Check in with Jenn
    std::cout << "Oh hi Jen!\n";

    // Conduct IT support again...
    conduct_it_support();

    // Check in with Roy
    std::cout << "You stole the stress machine? But that's stealing!\n";

    // Conduct IT support yet again...zzzz...
    conduct_it_support();

}