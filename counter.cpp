#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    int beginning;
    int ending;

    cout << "Enter the beginning point of the counter: ";

    cin >> beginning;

    cout << "Enter the ending point of the counter: ";

    cin >> ending;

    for(int i = beginning; i < ending; i++){
        cout << "The current count is " << i << "." << endl;
        sleep(1);
    }

    return 0;
}