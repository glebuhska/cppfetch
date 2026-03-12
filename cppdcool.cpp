#include <iostream>
#include <string>
#include <thread> 
#include <chrono> 

void clearConsole() {

    std::cout << "\033[H";
}

int main() {
    int y = 0;


    std::cout << "\033[?25l";

    while (true) {
        clearConsole();


        std::string empty = "                                      ";
        

        std::string f0 = empty, a0 = empty, b0 = empty, c0 = empty;
        std::string f1 = empty, a1 = empty, b1 = empty, c1 = empty;
        std::string f2 = empty, a2 = empty, b2 = empty, c2 = empty;
        std::string f3 = empty, a3 = empty, b3 = empty, c3 = empty;


        if (y == 0) {
            a3 = "                   000000             ";
            b3 = "                  00000000            ";
            c3 = "                   000000             ";
        } else if (y == 1) {
            f3 = "                   000000             ";
            a3 = "                  00000000            ";
            b3 = "                   000000             ";
        } else if (y == 2) {
            c2 = "                   000000             ";
            f3 = "                   000000             ";
            a3 = "                   000000             ";
            b3 = "                   000000             ";
        } else if (y == 3) {
            f2 = "                   000000             ";
            a2 = "                   000000             ";
            b2 = "                   000000             ";
            c2 = "                   000000             ";
            f3 = "                   000000             ";
            a3 = "                   000000             ";
        } else if (y == 4) {
            b1 = "                   000000             ";
            c1 = "                   000000             ";
            f2 = "                   000000             ";
            a2 = "                   000000             ";
            b2 = "                   000000             ";
            c2 = "                   000000             ";
        } else if (y == 5) {
            c1 = "                   0000000             ";
            f2 = "                   0000000             ";
            a2 = "                   0000000             ";
        }


        std::cout << f0 << "\n" << a0 << "\n" << b0 << "\n" << c0 << "\n"
                  << f1 << "\n" << a1 << "\n" << b1 << "\n" << c1 << "\n"
                  << f2 << "\n" << a2 << "\n" << b2 << "\n" << c2 << "\n"
                  << f3 << "\n" << a3 << "\n" << b3 << "\n" << c3 << std::endl;

        y++;
        if (y > 5) y = 0;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}