#include "Area.h"

    Area::Area(int x, int y, int width, int height, int isTaken){
        this->x = x; 
        this->y = y; 
        this->width = width; 
        this->height = height; 
        this->isTaken = isTaken; 
        this->insideRectangle = new ofRectangle(x, y, width, height);
    }
    Area::Area(int x, int y, int width, int height){
        this->x = x; 
        this->y = y; 
        this->width = width; 
        this->height = height; 
        this->isTaken = false; 
        this->insideRectangle = new ofRectangle(x, y, width, height);
    }

    int Area::getX(){
        return this->x; 
    }
    int Area::getY(){
        return this->y; 
    }
    int Area::getWidth(){
        return this->width; 
    }
    int Area::getHeight(){
        return this->height; 
    }
    ofImage Area::getInsideImage(){
        return this->insideImage; 
    }

    void Area::setX(int newX){
        this->x = newX; 
    }
    void Area::setY(int newY){
        this->y = newY; 
    }
    void Area::setInsideImage(ofImage image){
        this->insideImage = image; 
    }
    void Area::setIsTaken(bool itsTaken){
        this->isTaken = itsTaken;
    } 
    
    void Area::draw(){
        ofSetColor(ofColor::aquamarine);
        ofDrawRectangle(this->getX(), this->getY(), this->getWidth(), this->getHeight()); 
        if(this->isTaken){
            insideImage.draw(this->getX(), this->getY(), this->getWidth(), this->getHeight());
        }
        
        
    }
    ofRectangle* Area::getInsideRectangle(){
        return this->insideRectangle; 
    }

    
    
    void Area::processKeys(int x, int y, ofImage temp, vector<Area*> newVect){
        for(Area* a : newVect){
            if(a->getInsideRectangle()->inside(x, y)){
                if(!a->isTaken){
                    a->setIsTaken(true); 
                    a->setInsideImage(temp);
                }
            }
        }
    }
    

    //hacer method 
