#ifndef BOARD_LEDCONTROLLER_CONFIG_H
#define BOARD_LEDCONTROLLER_CONFIG_H

/**
 * Do NOT edit this file!
 *
 * This is the default LedController config file.
 * You may provide your own implementation at project level.
 *
 * For this:
 * - Copy/paste this file into a folder named 'config' in
 *   you projects include/source directory.
 * - Add a compiler include path so that your file is seen
 *   before the default config file provided in the platform
 *   package.
 * - Adjust the content of your config file to your needs.
 * - Remove this comment in your config file.
 */

#include "main.h"       // To get GPIO user labels (LED0, LED1, etc.)

#define LEDCONTROLLER_TRACE_ENABLE      1

#endif // BOARD_LEDCONTROLLER_CONFIG_H
