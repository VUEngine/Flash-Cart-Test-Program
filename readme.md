# Flash Cart Test Program

A test program to write to Virtual Boy flash carts during QA to quickly test for hardware faults.

Boots directly to a test screen which writes and then reads a value to/from SRAM and outputs the result on the screen. Also tries to initially reads SRAM to see if a previously written value was held.

Outputs some audio clues as well so peeking into the VB isn't even necessary for testing:

- Double success sound: Successful read/write test and previous value could be read
- Single success sound: Successful read/write test, but no previous value could be read
- Failure sound: Read/write test failed

Has branches with versions for various flash carts:
- FlashBoy Plus (main)
- HyperFlash32 (hyperflash32)
- HyperBoy (hyperboy)

![](screenshot.png?raw=true)

## License

This software is licensed under the MIT license.

For the full copyright and license information, please view the LICENSE file
that was distributed with this source code.