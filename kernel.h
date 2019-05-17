#ifndef KERNEL_H
#define KERNEL_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cuda.h"
#include "cuda_device_runtime_api.h"
#include "device_launch_parameters.h"
#include "cuda_runtime.h"
#include "cuda_runtime_api.h"
#include "cuda_gl_interop.h"

struct uchar4;
struct int2;

void kernelLauncher(uchar4 *d_out, int w, int h, float param, int sys);
#endif


