#include <cstdlib>
#include <iostream>  //indispensable pour cout, cin, cerr
#include <sstream>   //needed by stringstream to concatenate string and int
using namespace std; //permet d'ecrire directement cout
                     //si on n'utilise pas ce using namespace on serait obligé d'ecrire std::cout

int main(void) {
    string hello = "Hello";

    int age;
    cout << "Enter your age: ";
    cin >> age;  //put the number in age
    cin.clear(); //need to clear the input stream to remove the remaining '\n'

    string name;
    cout << "Enter your name: ";
    getline(cin >> ws,name); //cin stop at each separator -> need to use getline to catch a sentence ended by \n
    
    //print all
    cout << hello << " '" << name << "' You are " << age << " years old" << endl;

    return(1);
}
