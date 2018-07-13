



#ifndef CUSTOM_FONT_H
#define CUSTOM_FONT_H

#include <Arduino.h>



class CustomFont65k{
private:
protected:
public:

	uint16_t cursor_x, cursor_y;
	uint16_t margin_x, margin_y;
	uint16_t reset_x, reset_y;

	boolean _prevWriteCausedNewline;

	CustomFont65k();

	

	virtual uint8_t * getBMP(uint8_t val, uint16_t screen_width, uint16_t screen_height);
	virtual uint8_t * getAlpha(uint8_t val, uint16_t screen_width, uint16_t screen_height);
	virtual uint8_t * getFrameData(uint8_t val, uint16_t screen_width, uint16_t screen_height);
	virtual bool advanceState(uint8_t val, uint16_t screen_width, uint16_t screen_height);
	void setCursorValues(uint16_t x, uint16_t y, uint16_t xReset, uint16_t yReset, uint16_t xMargin, uint16_t yMargin);
};


#endif /* CUSTOM_FONT_H */