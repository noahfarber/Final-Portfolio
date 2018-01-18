#include <avr/pgmspace.h>

const uint8_t FarberK [] PROGMEM= {
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0x0C, 0x8C, 0x8C, 0x8C, 0x80, 0x00, 
  0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 
  0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xF8, 0x80, 0xC0, 0xE0, 0x78, 0x38, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 
  0x04, 0x04, 0x3F, 0x00, 0x3F, 0x04, 0x07, 0x3C, 0x00, 0x3F, 0x22, 0x23, 0x3E, 0x00, 0x3F, 0x24, 
  0x24, 0x20, 0x00, 0x3F, 0x04, 0x07, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x80, 0x78, 0x04, 0x04, 0x78, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x03, 0x07, 0x0E, 0x3C, 0x38, 0x00, 0x00, 
  0x3F, 0x20, 0x20, 0x3F, 0x00, 0x27, 0x24, 0x24, 0x3C, 0x00, 0x3F, 0x04, 0x04, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x21, 0xC2, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0xE0, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0xF0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x28, 0x48, 0x88, 0x08, 0x08, 0x08, 0x09, 0x0E, 0x30, 0x30, 0x60, 0x00, 
  0x00, 0x01, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x38, 0x08, 0x0F, 0x08, 0x08, 0x88, 0x48, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 
  0x44, 0xA4, 0x9C, 0x8C, 0x80, 0x80, 0x80, 0x40, 0xE0, 0x00, 0x00, 0xE0, 0x40, 0x80, 0x80, 0x8C, 
  0x8C, 0x9C, 0xA4, 0x44, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t UI [] PROGMEM= {
  0x00, 0xFE, 0xFA, 0xFA, 0x82, 0xFA, 0xFA, 0xFE, 0x82, 0xAA, 0xAA, 0xBA, 0xFE, 0x82, 0xFA, 0xF6, 
  0xFA, 0x82, 0xFE, 0x82, 0xEA, 0xE2, 0xFE, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x04, 0xD4, 0xC4, 0xFC, 
  0x0C, 0x7C, 0x0C, 0xFC, 0x0C, 0xAC, 0xFC, 0x0C, 0xAC, 0xFC, 0xFC, 0xAC, 0x04, 0xAC, 0x04, 0xAC, 
  0xFC, 0x00, 0x50, 0x00, 0xE0, 0x7C, 0x3E, 0x3E, 0x3E, 0x3E, 0x1F, 0x8F, 0x1E, 0x1E, 0x1C, 0xF8, 
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x80, 0x80, 0xFD, 0x81, 
  0x08, 0xDF, 0xD0, 0xC1, 0x01, 0x00, 0x80, 0xC0, 0xE0, 0x6F, 0x3F, 0x40, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xE0, 0x30, 0x98, 0xCE, 0x46, 0x23, 0x41, 0x80, 0x00, 0x01, 0x03, 0x00, 0x00, 0x02, 0x02, 0x03, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x8F, 0x06, 0x83, 0xC1, 0x60, 0x50, 0x50, 
  0x50, 0x60, 0xE1, 0xC2, 0x82, 0x00, 0x08, 0x10, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x40, 0x30, 0x1F, 
  0x9F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x01, 0x81, 
  0xE2, 0x26, 0x32, 0x23, 0x60, 0xC0, 0x80, 0x00, 0x02, 0x03, 0x03, 0x03, 
};

const uint8_t Guy [] PROGMEM= {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x03, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x07, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x3F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x7F, 0x03, 
  0x03, 0x03, 0x83, 0x83, 0x03, 0x03, 0x83, 0x83, 0x03, 0x03, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x81, 0xE1, 0x31, 0x30, 0x36, 
  0x3D, 0x31, 0x31, 0xC0, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 
  0x30, 0x38, 0x3B, 0x2E, 0x4C, 0x8F, 0x88, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x8F, 0xC8, 0x6F, 
  0x38, 0x18, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
};