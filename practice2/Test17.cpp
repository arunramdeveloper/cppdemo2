#include <iostream>
#include <thread>
using namespace std;

void meth3(){
    cout << "thread called ";
}
int main(){
    cout << "Welcome to thread \n";
    thread t(meth3);
    cout << t.get_id() << "thread t.getid \n";
    t.join();
    cout << "c++ thread finished execution ";
    return 0;
}