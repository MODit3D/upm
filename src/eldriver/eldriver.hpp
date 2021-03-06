/*
 * Author: Zion Orent <sorent@ics.com>
 * Copyright (c) 2015 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <mraa/gpio.h>

#define HIGH      1
#define LOW       0

namespace upm {
  /**
   * @brief EL Driver Module
   * @defgroup eldriver libupm-eldriver
   * @ingroup seeed gpio electric
   */

  /**
   * @library eldriver
   * @sensor eldriver
   * @comname Electroluminescent Wire (EL) Driver
   * @type electric
   * @man seeed
   * @con gpio
   *
   * @brief API for the  EL Driver Module
   * 
   * The  EL Driver allows you to easily light up an
   * EL wire with just one single  cable.
   *
   * @image html eldriver.jpg 
   * @snippet eldriver.cxx Interesting
   */
  class ElDriver {
  public:
    /**
     *  EL Driver constructor
     *
     * @param pin Digital pin to use
     */
    ElDriver(int pin);
    /**
     *  EL Driver destructor
     */
    ~ElDriver();
    /**
     * Turns the EL wire on
     */
     void on();
    /**
     * Turns the EL wire off
     */
     void off();

  private:
        mraa_gpio_context m_gpio;
	};
}
