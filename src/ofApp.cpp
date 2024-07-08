#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    turnCounter = 0; 

    titleFont.load("Coffee Spark.ttf", 50);
    initialWallpaper.load("bin\\data\\images\\tic-tac-toe wallpaper 1.jpg");
    exes.load("bin\\data\\images\\x.png"); 
    os.load("bin\\data\\images\\o.png"); 

    for(double y = 100.0; y <= ofGetHeight()* (2.0/3.0) + 101.0 ; y += ofGetHeight()*(1.0/3.0)){ //Las y
        for(double x = 10.0; x <= 650.0; x += 320.0){ //Las x
            Area* temp = new Area(x, y, 310, ofGetHeight()*(1.0/3.0)-10); 
            listOfAreas.push_back(temp); 
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    if(turnCounter%2==0){
        currentImage = exes; 
    }
    else{
        currentImage = os; 
    }

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(ofColor::white);
    initialWallpaper.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight()); 
    // ofDrawBitmapString("this is x-> " + to_string(xCoord), 1000, 200);
    // ofDrawBitmapString("this is y-> " + to_string(yCoord), 1000, 250);

    ofSetColor(ofColor::darkBlue); 

    titleFont.drawString("Welcome to my Tic-Tac-Toe!", 1000, 100);
    for(int i = 0; i < listOfAreas.size(); i++){
        listOfAreas[i]->draw();
        
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){


    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    Area::processKeys(x, y, currentImage, listOfAreas);
    turnCounter++; 
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
