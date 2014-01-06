#ifndef MI0283QT9_h
#define MI0283QT9_h


#include <inttypes.h>
#include "../GraphicsLib/GraphicsLib.h"


class MI0283QT9 : public GraphicsLib
{
  public:
    MI0283QT9();

    void begin(uint_least8_t clock_div, uint_least8_t rst_pin);
    void begin(uint_least8_t clock_div);
    void begin(void);
    void led(uint_least8_t power);
    void setOrientation(uint_least16_t o);
    void setArea(int_least16_t x0, int_least16_t y0, int_least16_t x1, int_least16_t y1);
    void fillScreen(uint_least16_t color);
    void drawStart(void);
    void draw(uint_least16_t color);
    void drawStop(void);

  private:
    void reset(uint_least8_t clock_div, uint_least8_t rst_pin);
    void wr_cmd(uint_least8_t cmd);
    void wr_data16(uint_least16_t data);
    void wr_data(uint_least8_t data);
    void wr_spi(uint_least8_t data);
};


#endif //MI0283QT9_h
