#include "ofMain.h"


class Area{

    private: 
        int x;
        int y; 
        int width;
        int height; 
        ofRectangle* insideRectangle; 

        bool isTaken; 
        ofImage insideImage; 


    public: 

        Area(int x, int y, int width, int height, int isTaken);
        Area(int x, int y, int width, int height);

        int getX();
        int getY();
        int getWidth(); 
        int getHeight(); 
        ofImage getInsideImage(); 

        void setX(int newX);
        void setY(int newY);

        void setInsideImage(ofImage image);
        void setIsTaken(bool itsTaken); 
        
        ofRectangle* getInsideRectangle(); 

        void draw(); 
        static void processKeys(int x, int y, ofImage temp, vector<Area*> newVect);

    
};
