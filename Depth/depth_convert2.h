#pragma once

#ifndef ZIMG_DEPTH_DEPTH_CONVERT2_H_
#define ZIMG_DEPTH_DEPTH_CONVERT2_H_

#include "Common/zfilter.h"

namespace zimg {;

struct PixelFormat;

enum class PixelType;
enum class CPUClass;

namespace depth {;

typedef void (*depth_convert_func)(const void *src, void *dst, float scale, float offset, unsigned left, unsigned right);
typedef void (*depth_f16c_func)(const void *src, void *dst, unsigned left, unsigned right);

IZimgFilter *create_depth_convert2(unsigned width, unsigned height, const PixelFormat &pixel_in, const PixelFormat &pixel_out, CPUClass cpu);

} // namespace depth
} // namespace zimg

#endif // ZIMG_DEPTH_DEPTH_CONVERT2_H_
