#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // ofRandom(..);
    // ofRandom(10);  // 0-10
    // ofRandom(-1,1); //
//    for (int i = 0; i < 100; i++){
//        cout << ofRandom(0,100) << endl;
//    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    cout << " ------- " << endl;
    
    ofSeedRandom(0);
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            ofDrawCircle(i*50, j*50, ofRandom(10,40));
        }
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
