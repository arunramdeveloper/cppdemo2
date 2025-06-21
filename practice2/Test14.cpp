#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool isFirstTurn = true; // Controls which thread runs

void firstThreadFunc() {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return isFirstTurn; });

        std::cout << "firstThread printing" << std::endl;

        isFirstTurn = false;
        cv.notify_one(); // Wake second thread
    }
}

void secondThreadFunc() {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !isFirstTurn; });

        std::cout << "secondThread printing" << std::endl;

        isFirstTurn = true;
        cv.notify_one(); // Wake first thread
    }
}

int main() {
    std::thread t1(firstThreadFunc);
    std::thread t2(secondThreadFunc);

    t1.join();
    t2.join();

    return 0;
}
