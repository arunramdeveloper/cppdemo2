#include <iostream>
#include <thread>
using namespace std;

void sayHello(){
    cout << "hello from thread \n";
}
int main(){
    //create thread
    thread t(sayHello);
    t.join(); //wait for thread to finish
    return 0;
}