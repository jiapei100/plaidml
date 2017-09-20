// Copyright 2017, Vertex.AI. CONFIDENTIAL

#include "tile/hal/opencl/executor.h"

namespace vertexai {
namespace tile {
namespace hal {
namespace opencl {

// Implements Executor::InitSharedMemory for systems that do not
// support the underlying shared memory OpenCL APIs.
void Executor::InitSharedMemory() {}

}  // namespace opencl
}  // namespace hal
}  // namespace tile
}  // namespace vertexai