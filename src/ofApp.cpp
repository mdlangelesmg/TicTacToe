#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    turnCounter = 0; 
    clickOnRegionA = false; 
    clickOnRegionB = false;
    clickOnRegionC = false;
    clickOnRegionD = false;
    clickOnRegionE = false;
    clickOnRegionF = false;
    clickOnRegionG = false;
    clickOnRegionH = false;
    clickOnRegionI = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //Horizontal Lines
    double screenWidth1 = 50;
    double screenWidth2 = 1000;
    ofDrawLine(screenWidth1, ofGetScreenHeight()/3, screenWidth2, ofGetScreenHeight()/3); 
    ofDrawLine(screenWidth1, ofGetScreenHeight()*2/3, screenWidth2, ofGetScreenHeight()*2/3); 

    //Vertical Lines
    double screenHeight1 = screenWidth1; 
    double screenHeight2 = screenWidth2;
    ofDrawLine(250, screenHeight1, 250, screenHeight2);
    ofDrawLine(750, screenHeight1, 750, screenHeight2);

    ofSetColor(ofColor::white); 



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
