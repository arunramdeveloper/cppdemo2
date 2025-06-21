#include <iostream>
#include <thread>
using namespace std;

int main(){
    thread newThread([]
                     { 
                        cout << "hello from the new thread \n";
                        //cout << this << endl;
                     });

    newThread.join();
    cout << "newthread finished execution \n";
    return 0;
}