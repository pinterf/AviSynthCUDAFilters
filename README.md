# AviSynth CUDA Filters

CUDA implementation filter plugin for [AviSynth+].
The following projects are available.

- KTGMC (CUDA version of QTGMC)
- KNNEDI3 (CUDA version of NNEDI3 - as submodule)
- KFM (proprietary filter)
- AvsCUDA (CUDA compatible version of some AviSynth internal filters)
- GRunT (Neo compatible version GrunT)
- KMaskTools (CUDA Version of lut and lutxy from masktools  - as submodule)

# How to use

[AviSynth+ v3.7 cuda-build-test required] (https://github.com/Avisynth/AviSynthPlus) is required.

In English: see documentation folder

Original links to Nekopanda's wiki:

[Avisynth Neo documentation](https://github.com/nekopanda/AviSynthPlus/wiki/Avisynth-Neo)valami

[KTGMC documentation](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KTGMC)

[KFM documentation](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFM) for how to use the filters.

Most of the functions can be used around deinterlacing by using [KFMDeint](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFMDeint).

#License
- KTGMC: GPL
- KNNEDI3: GPL
- KFM: ** MIT **
- AvsCUDA: GPL
- GRunT: GPL

Original content in Japanese
# AviSynth CUDA Filters

[AviSynthNeo](https://github.com/nekopanda/AviSynthPlus/wiki/Avisynth-Neo)用のCUDA実装フィルタプラグインです。
以下のプロジェクトがあります。

- KTGMC (QTGMCのCUDA版)
- KNNEDI3 (NNEDI3のCUDA版)
- KFM (独自実装のフィルタ)
- AvsCUDA（AviSynth内部フィルタのCUDA対応版）
- GRunT（Neo対応版GrunT）

# 使い方

[AviSynthNeo](https://github.com/nekopanda/AviSynthPlus/wiki/Avisynth-Neo)が必要です。フィルタの使い方は[KTGMCドキュメント](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KTGMC)、[KFMドキュメント](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFM)を参照。インターレース解除周りは[KFMDeint](https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFMDeint)を使えばほとんどの機能が使えます。

# ライセンス
- KTGMC: GPL
- KNNEDI3: GPL
- KFM: **MIT**
- AvsCUDA: GPL
- GRunT: GPL
