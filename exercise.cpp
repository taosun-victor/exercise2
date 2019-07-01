#include <iostream>
#include <string>
#include "exercise.h"

using namespace std;

int exercises::say_hello(int input){
    string input_str = to_string(input);
    cout << "saying hello " << input_str << endl;
}

void exercises::tell_next_step(int next) {
    string next_str = to_string(next);
    cout << "the next step is " << next_str << endl;
}

int main() {
    exercises * a = new exercises();
    a->say_hello(5);
    delete a;
    return 1;
}
