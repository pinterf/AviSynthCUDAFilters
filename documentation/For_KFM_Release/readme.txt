KFM by Nekopanda
https://github.com/pinterf/AviSynthCUDAFilters

document
https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFM
or documents folder

- Change log
* 2021-02-11 0.4.6.1
  -- Port to Avisynth+ (pinterf)
* 2018-11-23 0.4.6
  --VFR output support
    --Implemented timecode output on KFM Switch
    --Added KFM Decimate
    --KFMDeint mode = 0, pass = 3 outputs VFR frame
  --Fixed KFM not working in non-AVX compatible environment
  --Fixed that the frame of the reference QP table of KDeblock was sometimes misaligned.
  --Fixed KFMDeint to use Yadifmod2 instead of TDeint when Decombe UCF is enabled
* 2018-09-24 0.4.5
  --Added deblocking filter KDeblock mainly for MPEG2 source
* 2018-09-02 0.4.4
  --KPatchCombe now supports 30p
  --Added mode = 3 (mode to return 3 clips of 24p, 30p, 60p) to KFMDeint
* 2018-07-08 0.4.3
  --Fixed that MT was not set properly
  --Slightly faster CPU version
  --SVP compatible
* 2018-06-24 0.4.2
  --Added KFM DumpFM
* 2018-06-24 0.4.1
  --Implemented 2-pass reverse telecine
  --Fixed a bug related to the number of frames of KDecomb UCF60
  --Improved KFMDeint script
* 2018-05-31 0.4.0
  --Avisynth Neo version
  --Completely rewrite the area around the reverse telecine to a new combing judgment algorithm base
  --Ported Decomb UCF
  --Added a script to easily use KFM and KTGMC (KFMDeint.avsi)
  --Resurrected the 32-bit version
* 2018-02-17 0.3.3
  --Implemented a new combing judgment algorithm in KRemoveCombe
   (As a result, the arguments of KRemoveCombe and KFMSwitch have changed.)
  --32bit version abolished (because CUDA no longer supports 32bit)
* 2017-12-24 0.3.1
  --Added UV processing to edge level adjustment
  --Separate KFM from KTGMC
  
Original content in Japanese:

KFM
https://github.com/nekopanda/AviSynthCUDAFilters

ドキュメント
https://github.com/nekopanda/AviSynthCUDAFilters/wiki/KFM

- 更新履歴

※ 2018-11-23 0.4.6
  - VFR出力サポート
    - KFMSwitchにタイムコード出力を実装
    - KFMDecimate追加
    - KFMDeintのmode=0,pass=3がVFRフレームを出力
  - AVX非対応環境でKFMが動かないのを修正
  - KDeblockの参照QPテーブルのフレームがズレることがあったのを修正
  - KFMDeintがDecombeUCF有効時にTDeintの代わりにYadifmod2を使うように修正
※ 2018-09-24 0.4.5
  - 主にMPEG2ソース用のデブロッキングフィルタKDeblockを追加
※ 2018-09-02 0.4.4
  - KPatchCombeを30pに対応
  - KFMDeintにmode=3（24p,30p,60pの3クリップを返すモード）追加
※ 2018-07-08 0.4.3
  - MTを適切に設定していなかったのを修正
  - CPU版を少し高速化
  - SVP対応
※ 2018-06-24 0.4.2
  - KFMDumpFMを追加
※ 2018-06-24 0.4.1
  - 2パス逆テレシネを実装
  - KDecombUCF60のフレーム数関係のバグを修正
  - KFMDeintスクリプトを改良
※ 2018-05-31 0.4.0
  - AvisynthNeo版
  - 逆テレシネ周りを新しいコーミング判定アルゴリズムベースに全面的に書き換え
  - DecombUCFを移植
  - KFMとKTGMCを簡単に使うためのスクリプトを追加(KFMDeint.avsi)
  - 32bit版を復活
※ 2018-02-17 0.3.3
  - KRemoveCombeに新しいコーミング判定アルゴリズムを実装
   （その影響でKRemoveCombeとKFMSwitchの引数が変わっています。）
  - 32bit版を廃止（CUDAが32bitをサポートしなくなったので）
※ 2017-12-24 0.3.1
  - エッジレベル調整にUV処理を追加
  - KFMをKTGMCから分離
