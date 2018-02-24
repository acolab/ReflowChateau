
// Plot the temperature vs. time setpoint and current temperature curves

#ifndef GRAPH_h
#define GRAPH_h

#include "ILI9341_t3.h"
#include "Adafruit_STMPE610.h"
#include "Configuration.h"


class Graph {  
  public:
    Graph(void);
    void set(float, float, float, float, float, float, 
             float, ILI9341_t3*, Adafruit_STMPE610*);
    void drawLines(void);
    float getSetpoint(float);
    void plotLine(float, float);
    void printValues(float, float);
    
  private:
    void openDoor(void);
    ILI9341_t3* ptr_tft;
    Adafruit_STMPE610* ptr_ctp;
    Point points[6];
    Point pointToDisplay(Point);
    float lastTime, lastTemp;
    float floatMap(float, float, float, float, float);
};


#endif // GRAPH_h

