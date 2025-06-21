#include <iostream>
#include <thread>
using namespace std;

void meth(){
    cout << "meth calling \n";
}
int main(){
    cout << "C++ thread example \n";
    thread objthread(meth);
    cout << "main thread created \n";
    objthread.join();
    cout << " main thread finished ";
    return 0;
}