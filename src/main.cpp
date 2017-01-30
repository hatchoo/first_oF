#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){

    ofSetupOpenGL(400, 400, OF_WINDOW);
    ofRunApp(new ofApp());
    
    string name = "";
    int age = 0;
    
    cout << "Hello World \n";
    //ofSetupOpenGL(100,100);
    
    cout << "Please enter your name: \n";
    cin >> name;
    
    cout << "Please enter your age: \n";
    cin >> age;
    
    cout << "Your name is " << name << ", your age is " << age << ".";
    
    return 0;
}
