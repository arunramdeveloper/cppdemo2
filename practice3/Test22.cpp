#include <iostream>
#include <thread>
using namespace std;
int main(){
    cout << "Welcome to c++ thread \n";
    thread t1([]
              { cout << " t1 thread \n"; });
    thread t2([]
              { cout << "t2 thread \n"; });
    thread t3([]
              { cout << "t3 thread \n "; });

    t3.join();
    cout << "t3 thread finished \n ";
    t2.join();
      cout << "t2 thread finished \n ";
    t1.join();
      cout << "t1 thread finished \n ";
    return 0;
}