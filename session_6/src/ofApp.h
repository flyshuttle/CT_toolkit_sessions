#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
    // drunkards walk demo
    vector<ofVec2f> drunkardsSteps; // a vector - list to contain out x,y set values
    
    void addStep(); 
    void addStagger();
    void addNoiseStep();
    
    int staggerSize;
   // bool b_drawGui;
    
    // make the lines draw and display in 3D
    // ofEasyCam cam;
    // ofTrueTypeFont font;
};

