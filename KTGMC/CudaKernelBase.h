#pragma once

#include <windows.h>
#include "avisynth.h"

#include "CommonFunctions.h"

// CUDAカーネル実装の共通処理
class CudaKernelBase
{
protected:
  IScriptEnvironment2* env;
  cudaStream_t stream;
public:

  void SetEnv(IScriptEnvironment2* env)
  {
    this->env = env;
    stream = static_cast<cudaStream_t>(env->GetDeviceStream());
  }

  void DebugSync()
  {
#ifndef NDEBUG
//#if 1
    CUDA_CHECK(cudaGetLastError());
    CUDA_CHECK(cudaDeviceSynchronize());
#endif
  }

  void VerifyCUDAPointer(void* ptr)
  {
#ifndef NDEBUG
    cudaPointerAttributes attr;
    CUDA_CHECK(cudaPointerGetAttributes(&attr, ptr));
    if (attr.memoryType != cudaMemoryTypeDevice) {
      env->ThrowError("[CUDA Error] Not valid devicce pointer");
    }
#endif
  }
};

