
# Q3 - Bitwise Device Status Register

## 1. Introduction
A bitwise device status register stores the ON/OFF status of multiple devices using individual bits.

## 2. Bitwise Operators

- OR (|): Sets a particular bit to 1.
- AND (&): Clears a selected bit using an inverted mask.
- XOR (^): Toggles a selected bit.
- NOT (~): Inverts all bits.
- Right Shift (>>): Shifts bits towards the right.

## 3. Device Representation

| Device | Bit Position |
| LIGHT | 0 |
| FAN | 1 |
| AC | 2 |
| HEATER | 3 |
| PUMP | 4 |

## 4. Program Operations

Initially, all bits are zero.

LIGHT and AC are switched ON.
FAN is toggled.
LIGHT is switched OFF.

The final register is 00000110.

## 5. Signedness
Unsigned char is used to represent the 8-bit register.
Unsigned masks help avoid complications caused by signed bit shifting.

## 6. Alternative Approach
An array of variables can store device states separately.
However, a bitwise register requires less memory and supports efficient bit operations.

## 7. Conclusion
Bitwise operations provide an efficient method for managing multiple device states using a single register.
