#include <iostream>
#include <thread>
using namespace std;

int main(){
    cout << "Welcome to thread \n ";
    thread t1([]
              { cout << "main thread" << endl;
       // cout << t1 << endl;
            });
    t1.join();
    return 0;
}