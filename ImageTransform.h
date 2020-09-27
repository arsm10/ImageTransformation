#pragma once

#include "uiuc/PNG.h"
#include "uiuc/HSLAPixel.h"
using namespace uiuc;


PNG grayscale(PNG image);
PNG createSpotlight(PNG image, int centerX, int centerY);
PNG illinify(PNG image);
PNG watermark(PNG firstImage, PNG secondImage);