/*!
 * @file WipperSnapper_Component_I2C.h
 *
 * This component initiates I2C operations
 * using the Arduino generic TwoWire driver.
 *
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 * Copyright (c) Brent Rubell 2021 for Adafruit Industries.
 *
 * BSD license, all text here must be included in any redistribution.
 *
 */
#ifndef WipperSnapper_Component_I2C_H
#define WipperSnapper_Component_I2C_H

#include "Wippersnapper.h"
#include <Wire.h>

// forward decl.
class Wippersnapper;

class WipperSnapper_Component_I2C() {
    public:
        WipperSnapper_Component_I2C();
        ~WipperSnapper_Component_I2C();
        void initI2C(uint32_t frequency, int32_t sdaPin, int32_t sclPin, int32_t busId);
        bool scanForAddress(uint32_t address);
        bool setFrequency(uint32_t frequency, int32_t busId);

    private:
        TwoWire *_i2c0;
        TwoWire *_i2c1;
        bool _isInitBus0;
        bool _isInitBus1;

};
extern Wippersnapper WS;

#endif //WipperSnapper_Component_I2C_H