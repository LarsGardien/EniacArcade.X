/* 
 * File:   LED-API.h
 * Author: larsg
 *
 * Created on 20 maart 2016, 9:35
 */

#ifndef LED_API_H
#define	LED_API_H

#include <xc.h>

extern void on(unsigned char column, unsigned char row);
extern void rowOn(unsigned char row);
extern void off(unsigned char column, unsigned char row);
extern void rowOff(unsigned char row);
extern void drawSymbol(unsigned char chosenSymbol, unsigned char offSetX);
extern void turnAllOff();
extern void initializeLED();
extern void refresh();

#endif	/* LED_API_H */

