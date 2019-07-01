#include <iostream>
#include <string>
#include "exercise.h"

using namespace std;

int exercises::say_hello(int input){
    string input_str = to_string(input);
    cout << "saying hello " << input_str << endl;
}

int main() {
    exercises * a = new exercises();
    a->say_hello(5);
    delete a;
    return 1;
}
