
// Draw a little "Duke ECE" screensaver to bounce around the display

#ifndef SCREENSAVER_h
#define SCREENSAVER_h

#include "ILI9341_t3.h"
#include "Adafruit_STMPE610.h"
#include "Configuration.h"


class Screensaver {
  public:
    Screensaver(ILI9341_t3*, Adafruit_STMPE610*);
    void drawMe(void);

  private:
    ILI9341_t3* ptr_tft;
    Adafruit_STMPE610* ptr_ctp;
};

#endif // SCREENSAVER_h

