#include <iostream>
#include <thread>
using namespace std;

int main(){
    thread t1([] {});
    thread t2([] {});
    thread t3([] {});
    t1.join();
    t2.join();
    t3.join();
    cout << "Welcome to thread " << endl;
    return 0;
}