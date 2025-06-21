#include <iostream>
#include <thread>

void printMessage() {
    std::cout << "Hello from a thread!" << std::endl;
}

int main() {
    std::thread t1(printMessage);  // Start the thread

    // Do something in the main thread
    std::cout << "Hello from the main function!" << std::endl;

    t1.join();  // Wait for thread t1 to finish
    return 0;
}
