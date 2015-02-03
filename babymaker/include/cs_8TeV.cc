//Source: https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SUSYCrossSections8TeVgluglu
//This is at 8 TeV!
//The second number is a percentage!!

#include "looper.h"

val_err_t gluino_cs(float mGluino){  
  val_err_t result = {0, 0};
  if (mGluino == 200){ result.value = 1010.1; result.error = 15.3749; }
  if (mGluino ==  205 ){ result.value =   888.038 ; result.error =    15.3143 ; }
  if (mGluino ==  210 ){ result.value =   782.82  ; result.error =    15.247  ; }
  if (mGluino ==  215 ){ result.value =   690.67  ; result.error =    15.183  ; }
  if (mGluino ==  220 ){ result.value =   610.177 ; result.error =    15.1551 ; }
  if (mGluino ==  225 ){ result.value =   540.437 ; result.error =    15.0907 ; }
  if (mGluino ==  230 ){ result.value =   479.688 ; result.error =    15.1381 ; }
  if (mGluino ==  235 ){ result.value =   426.694 ; result.error =    15.0219 ; }
  if (mGluino ==  240 ){ result.value =   379.598 ; result.error =    15.088  ; }
  if (mGluino ==  245 ){ result.value =   338.228 ; result.error =    14.9509 ; }
  if (mGluino ==  250 ){ result.value =   302.3   ; result.error =    14.8648 ; }
  if (mGluino ==  255 ){ result.value =   270.569 ; result.error =    15.0585 ; }
  if (mGluino ==  260 ){ result.value =   242.843 ; result.error =    14.8413 ; }
  if (mGluino ==  265 ){ result.value =   217.628 ; result.error =    14.772  ; }
  if (mGluino ==  270 ){ result.value =   195.926 ; result.error =    14.8812 ; }
  if (mGluino ==  275 ){ result.value =   176.213 ; result.error =    14.9861 ; }
  if (mGluino ==  280 ){ result.value =   158.621 ; result.error =    15.0729 ; }
  if (mGluino ==  285 ){ result.value =   143.51  ; result.error =    14.6896 ; }
  if (mGluino ==  290 ){ result.value =   129.421 ; result.error =    15.0685 ; }
  if (mGluino ==  295 ){ result.value =   117.331 ; result.error =    14.5477 ; }
  if (mGluino ==  300 ){ result.value =   106.269 ; result.error =    14.848  ; }
  if (mGluino ==  305 ){ result.value =   96.4393 ; result.error =    14.8794 ; }
  if (mGluino ==  310 ){ result.value =   87.6653 ; result.error =    14.816  ; }
  if (mGluino ==  315 ){ result.value =   79.7744 ; result.error =    14.8206 ; }
  if (mGluino ==  320 ){ result.value =   72.687  ; result.error =    14.8953 ; }
  if (mGluino ==  325 ){ result.value =   66.2653 ; result.error =    14.9073 ; }
  if (mGluino ==  330 ){ result.value =   60.5336 ; result.error =    14.8466 ; }
  if (mGluino ==  335 ){ result.value =   55.369  ; result.error =    14.8622 ; }
  if (mGluino ==  340 ){ result.value =   50.6463 ; result.error =    14.925  ; }
  if (mGluino ==  345 ){ result.value =   46.4307 ; result.error =    15.0063 ; }
  if (mGluino ==  350 ){ result.value =   42.5663 ; result.error =    14.9279 ; }
  if (mGluino ==  355 ){ result.value =   39.0611 ; result.error =    14.9393 ; }
  if (mGluino ==  360 ){ result.value =   35.9491 ; result.error =    14.906  ; }
  if (mGluino ==  365 ){ result.value =   33.0444 ; result.error =    14.8652 ; }
  if (mGluino ==  370 ){ result.value =   30.435  ; result.error =    15.1122 ; }
  if (mGluino ==  375 ){ result.value =   28.0354 ; result.error =    15.0177 ; }
  if (mGluino ==  380 ){ result.value =   25.88   ; result.error =    15.0576 ; }
  if (mGluino ==  385 ){ result.value =   23.8782 ; result.error =    14.9156 ; }
  if (mGluino ==  390 ){ result.value =   22.073  ; result.error =    15.1048 ; }
  if (mGluino ==  395 ){ result.value =   20.4283 ; result.error =    15.1019 ; }
  if (mGluino ==  400 ){ result.value =   18.8721 ; result.error =    15.0928 ; }
  if (mGluino ==  405 ){ result.value =   17.4227 ; result.error =    15.0661 ; }
  if (mGluino ==  410 ){ result.value =   16.1707 ; result.error =    14.9522 ; }
  if (mGluino ==  415 ){ result.value =   14.9804 ; result.error =    15.1417 ; }
  if (mGluino ==  420 ){ result.value =   13.8804 ; result.error =    15.3588 ; }
  if (mGluino ==  425 ){ result.value =   12.8817 ; result.error =    14.8223 ; }
  if (mGluino ==  430 ){ result.value =   11.9789 ; result.error =    15.015  ; }
  if (mGluino ==  435 ){ result.value =   11.0855 ; result.error =    15.2702 ; }
  if (mGluino ==  440 ){ result.value =   10.3321 ; result.error =    14.9422 ; }
  if (mGluino ==  445 ){ result.value =   9.59091 ; result.error =    14.9413 ; }
  if (mGluino ==  450 ){ result.value =   8.93257 ; result.error =    15.0053 ; }
  if (mGluino ==  455 ){ result.value =   8.32507 ; result.error =    15.0735 ; }
  if (mGluino ==  460 ){ result.value =   7.75814 ; result.error =    15.1709 ; }
  if (mGluino ==  465 ){ result.value =   7.24166 ; result.error =    15.2336 ; }
  if (mGluino ==  470 ){ result.value =   6.76031 ; result.error =    15.2982 ; }
  if (mGluino ==  475 ){ result.value =   6.31553 ; result.error =    15.3793 ; }
  if (mGluino ==  480 ){ result.value =   5.89981 ; result.error =    15.4448 ; }
  if (mGluino ==  485 ){ result.value =   5.51473 ; result.error =    15.5158 ; }
  if (mGluino ==  490 ){ result.value =   5.16376 ; result.error =    15.5803 ; }
  if (mGluino ==  495 ){ result.value =   4.82913 ; result.error =    15.6821 ; }
  if (mGluino ==  500 ){ result.value =   4.52485 ; result.error =    15.7449 ; }
  if (mGluino ==  505 ){ result.value =   4.24081 ; result.error =    15.808  ; }
  if (mGluino ==  510 ){ result.value =   3.96713 ; result.error =    15.892  ; }
  if (mGluino ==  515 ){ result.value =   3.71672 ; result.error =    15.9768 ; }
  if (mGluino ==  520 ){ result.value =   3.49333 ; result.error =    16.0268 ; }
  if (mGluino ==  525 ){ result.value =   3.27008 ; result.error =    16.1175 ; }
  if (mGluino ==  530 ){ result.value =   3.0669  ; result.error =    16.1858 ; }
  if (mGluino ==  535 ){ result.value =   2.88611 ; result.error =    16.2489 ; }
  if (mGluino ==  540 ){ result.value =   2.70371 ; result.error =    16.3596 ; }
  if (mGluino ==  545 ){ result.value =   2.54097 ; result.error =    16.4316 ; }
  if (mGluino ==  550 ){ result.value =   2.38869 ; result.error =    16.4895 ; }
  if (mGluino ==  555 ){ result.value =   2.24732 ; result.error =    16.5305 ; }
  if (mGluino ==  560 ){ result.value =   2.11612 ; result.error =    16.6508 ; }
  if (mGluino ==  565 ){ result.value =   1.99418 ; result.error =    16.7097 ; }
  if (mGluino ==  570 ){ result.value =   1.87218 ; result.error =    16.7973 ; }
  if (mGluino ==  575 ){ result.value =   1.76075 ; result.error =    16.8606 ; }
  if (mGluino ==  580 ){ result.value =   1.65934 ; result.error =    16.9328 ; }
  if (mGluino ==  585 ){ result.value =   1.56783 ; result.error =    16.993  ; }
  if (mGluino ==  590 ){ result.value =   1.47661 ; result.error =    17.1088 ; }
  if (mGluino ==  595 ){ result.value =   1.39575 ; result.error =    17.1259 ; }
  if (mGluino ==  600 ){ result.value =   1.31429 ; result.error =    17.2269 ; }
  if (mGluino ==  605 ){ result.value =   1.24324 ; result.error =    17.3003 ; }
  if (mGluino ==  610 ){ result.value =   1.17213 ; result.error =    17.3466 ; }
  if (mGluino ==  615 ){ result.value =   1.10066 ; result.error =    17.4716 ; }
  if (mGluino ==  620 ){ result.value =   1.04006 ; result.error =    17.5739 ; }
  if (mGluino ==  625 ){ result.value =   0.985407    ; result.error =    17.5919 ; }
  if (mGluino ==  630 ){ result.value =   0.931497    ; result.error =    17.6817 ; }
  if (mGluino ==  635 ){ result.value =   0.880476    ; result.error =    17.7587 ; }
  if (mGluino ==  640 ){ result.value =   0.832847    ; result.error =    17.7948 ; }
  if (mGluino ==  645 ){ result.value =   0.786926    ; result.error =    17.8762 ; }
  if (mGluino ==  650 ){ result.value =   0.744472    ; result.error =    18.0043 ; }
  if (mGluino ==  655 ){ result.value =   0.704916    ; result.error =    18.0369 ; }
  if (mGluino ==  660 ){ result.value =   0.667058    ; result.error =    18.1326 ; }
  if (mGluino ==  665 ){ result.value =   0.631306    ; result.error =    18.2113 ; }
  if (mGluino ==  670 ){ result.value =   0.597843    ; result.error =    18.2496 ; }
  if (mGluino ==  675 ){ result.value =   0.56624 ; result.error =    18.3422 ; }
  if (mGluino ==  680 ){ result.value =   0.536593    ; result.error =    18.4245 ; }
  if (mGluino ==  685 ){ result.value =   0.50942 ; result.error =    18.4902 ; }
  if (mGluino ==  690 ){ result.value =   0.482843    ; result.error =    18.5676 ; }
  if (mGluino ==  695 ){ result.value =   0.457432    ; result.error =    18.6079 ; }
  if (mGluino ==  700 ){ result.value =   0.433971    ; result.error =    18.6986 ; }
  if (mGluino ==  705 ){ result.value =   0.411416    ; result.error =    18.7936 ; }
  if (mGluino ==  710 ){ result.value =   0.390086    ; result.error =    18.829  ; }
  if (mGluino ==  715 ){ result.value =   0.370645    ; result.error =    18.9111 ; }
  if (mGluino ==  720 ){ result.value =   0.352514    ; result.error =    18.9679 ; }
  if (mGluino ==  725 ){ result.value =   0.33408 ; result.error =    19.0508 ; }
  if (mGluino ==  730 ){ result.value =   0.317737    ; result.error =    19.1467 ; }
  if (mGluino ==  735 ){ result.value =   0.301462    ; result.error =    19.1863 ; }
  if (mGluino ==  740 ){ result.value =   0.286089    ; result.error =    19.2731 ; }
  if (mGluino ==  745 ){ result.value =   0.271852    ; result.error =    19.2968 ; }
  if (mGluino ==  750 ){ result.value =   0.258598    ; result.error =    19.4346 ; }
  if (mGluino ==  755 ){ result.value =   0.24633 ; result.error =    19.5161 ; }
  if (mGluino ==  760 ){ result.value =   0.234109    ; result.error =    19.5609 ; }
  if (mGluino ==  765 ){ result.value =   0.222826    ; result.error =    19.6315 ; }
  if (mGluino ==  770 ){ result.value =   0.211617    ; result.error =    19.6785 ; }
  if (mGluino ==  775 ){ result.value =   0.201354    ; result.error =    19.7494 ; }
  if (mGluino ==  780 ){ result.value =   0.191111    ; result.error =    19.8564 ; }
  if (mGluino ==  785 ){ result.value =   0.18202 ; result.error =    19.9151 ; }
  if (mGluino ==  790 ){ result.value =   0.173801    ; result.error =    19.987  ; }
  if (mGluino ==  795 ){ result.value =   0.165647    ; result.error =    20.0114 ; }
  if (mGluino ==  800 ){ result.value =   0.157399    ; result.error =    20.1277 ; }
  if (mGluino ==  805 ){ result.value =   0.150172    ; result.error =    20.2259 ; }
  if (mGluino ==  810 ){ result.value =   0.142838    ; result.error =    20.4439 ; }
  if (mGluino ==  815 ){ result.value =   0.135881    ; result.error =    20.3414 ; }
  if (mGluino ==  820 ){ result.value =   0.129292    ; result.error =    20.8895 ; }
  if (mGluino ==  825 ){ result.value =   0.123451    ; result.error =    20.6589 ; }
  if (mGluino ==  830 ){ result.value =   0.117155    ; result.error =    20.8985 ; }
  if (mGluino ==  835 ){ result.value =   0.11198 ; result.error =    21.0456 ; }
  if (mGluino ==  840 ){ result.value =   0.106724    ; result.error =    21.2607 ; }
  if (mGluino ==  845 ){ result.value =   0.101468    ; result.error =    21.2567 ; }
  if (mGluino ==  850 ){ result.value =   0.0966803   ; result.error =    21.2994 ; }
  if (mGluino ==  855 ){ result.value =   0.0922606   ; result.error =    21.4722 ; }
  if (mGluino ==  860 ){ result.value =   0.0878851   ; result.error =    21.6719 ; }
  if (mGluino ==  865 ){ result.value =   0.0837802   ; result.error =    21.7595 ; }
  if (mGluino ==  870 ){ result.value =   0.0799422   ; result.error =    21.9007 ; }
  if (mGluino ==  875 ){ result.value =   0.0762312   ; result.error =    22.019  ; }
  if (mGluino ==  880 ){ result.value =   0.072704    ; result.error =    22.1713 ; }
  if (mGluino ==  885 ){ result.value =   0.0693676   ; result.error =    22.2927 ; }
  if (mGluino ==  890 ){ result.value =   0.0661977   ; result.error =    22.3601 ; }
  if (mGluino ==  895 ){ result.value =   0.0631751   ; result.error =    22.5385 ; }
  if (mGluino ==  900 ){ result.value =   0.060276    ; result.error =    22.6836 ; }
  if (mGluino ==  905 ){ result.value =   0.0575238   ; result.error =    22.7399 ; }
  if (mGluino ==  910 ){ result.value =   0.054922    ; result.error =    22.916  ; }
  if (mGluino ==  915 ){ result.value =   0.052471    ; result.error =    23.1002 ; }
  if (mGluino ==  920 ){ result.value =   0.0500914   ; result.error =    23.2393 ; }
  if (mGluino ==  925 ){ result.value =   0.0478794   ; result.error =    23.4801 ; }
  if (mGluino ==  930 ){ result.value =   0.0457437   ; result.error =    23.5378 ; }
  if (mGluino ==  935 ){ result.value =   0.0436802   ; result.error =    23.6783 ; }
  if (mGluino ==  940 ){ result.value =   0.0417248   ; result.error =    23.8237 ; }
  if (mGluino ==  945 ){ result.value =   0.0398759   ; result.error =    24.0298 ; }
  if (mGluino ==  950 ){ result.value =   0.0381246   ; result.error =    24.1578 ; }
  if (mGluino ==  955 ){ result.value =   0.0364316   ; result.error =    24.4395 ; }
  if (mGluino ==  960 ){ result.value =   0.0348221   ; result.error =    24.4519 ; }
  if (mGluino ==  965 ){ result.value =   0.033282    ; result.error =    24.5795 ; }
  if (mGluino ==  970 ){ result.value =   0.0318672   ; result.error =    24.7222 ; }
  if (mGluino ==  975 ){ result.value =   0.0304177   ; result.error =    24.9003 ; }
  if (mGluino ==  980 ){ result.value =   0.0290889   ; result.error =    24.9951 ; }
  if (mGluino ==  985 ){ result.value =   0.0278154   ; result.error =    25.3006 ; }
  if (mGluino ==  990 ){ result.value =   0.0265993   ; result.error =    25.4447 ; }
  if (mGluino ==  995 ){ result.value =   0.0254762   ; result.error =    25.5674 ; }
  if (mGluino ==  1000 ){ result.value =   0.0243547   ; result.error =    25.6713 ; }
  if (mGluino ==  1005 ){ result.value =   0.0233412   ; result.error =    25.729  ; }
  if (mGluino ==  1010 ){ result.value =   0.0222816   ; result.error =    26.1486 ; }
  if (mGluino ==  1015 ){ result.value =   0.0213092   ; result.error =    25.9706 ; }
  if (mGluino ==  1020 ){ result.value =   0.0204008   ; result.error =    26.0441 ; }
  if (mGluino ==  1025 ){ result.value =   0.0195439   ; result.error =    26.3787 ; }
  if (mGluino ==  1030 ){ result.value =   0.0186399   ; result.error =    26.4928 ; }
  if (mGluino ==  1035 ){ result.value =   0.0178964   ; result.error =    26.7975 ; }
  if (mGluino ==  1040 ){ result.value =   0.0170845   ; result.error =    26.896  ; }
  if (mGluino ==  1045 ){ result.value =   0.0163849   ; result.error =    26.9164 ; }
  if (mGluino ==  1050 ){ result.value =   0.0156931   ; result.error =    26.929  ; }
  if (mGluino ==  1055 ){ result.value =   0.0149871   ; result.error =    26.9811 ; }
  if (mGluino ==  1060 ){ result.value =   0.0143428   ; result.error =    27.3367 ; }
  if (mGluino ==  1065 ){ result.value =   0.0137535   ; result.error =    27.3472 ; }
  if (mGluino ==  1070 ){ result.value =   0.0131578   ; result.error =    27.3129 ; }
  if (mGluino ==  1075 ){ result.value =   0.0126249   ; result.error =    27.6365 ; }
  if (mGluino ==  1080 ){ result.value =   0.0120916   ; result.error =    28.0459 ; }
  if (mGluino ==  1085 ){ result.value =   0.0115882   ; result.error =    28.1145 ; }
  if (mGluino ==  1090 ){ result.value =   0.0110906   ; result.error =    28.085  ; }
  if (mGluino ==  1095 ){ result.value =   0.0105972   ; result.error =    28.1071 ; }
  if (mGluino ==  1100 ){ result.value =   0.0101744   ; result.error =    28.3906 ; }
  if (mGluino ==  1105 ){ result.value =   0.00975322  ; result.error =    28.5344 ; }
  if (mGluino ==  1110 ){ result.value =   0.00934364  ; result.error =    28.7555 ; }
  if (mGluino ==  1115 ){ result.value =   0.00895424  ; result.error =    28.8933 ; }
  if (mGluino ==  1120 ){ result.value =   0.00858597  ; result.error =    29.0192 ; }
  if (mGluino ==  1125 ){ result.value =   0.00823026  ; result.error =    29.2287 ; }
  if (mGluino ==  1130 ){ result.value =   0.00788948  ; result.error =    29.4086 ; }
  if (mGluino ==  1135 ){ result.value =   0.00756671  ; result.error =    29.5561 ; }
  if (mGluino ==  1140 ){ result.value =   0.00724917  ; result.error =    29.6991 ; }
  if (mGluino ==  1145 ){ result.value =   0.00695169  ; result.error =    29.8705 ; }
  if (mGluino ==  1150 ){ result.value =   0.00666673  ; result.error =    30.0712 ; }
  if (mGluino ==  1155 ){ result.value =   0.00639182  ; result.error =    30.1806 ; }
  if (mGluino ==  1160 ){ result.value =   0.00613149  ; result.error =    30.4126 ; }
  if (mGluino ==  1165 ){ result.value =   0.00588262  ; result.error =    30.4988 ; }
  if (mGluino ==  1170 ){ result.value =   0.0056425   ; result.error =    30.7713 ; }
  if (mGluino ==  1175 ){ result.value =   0.0054104   ; result.error =    30.9359 ; }
  if (mGluino ==  1180 ){ result.value =   0.00519563  ; result.error =    31.0761 ; }
  if (mGluino ==  1185 ){ result.value =   0.00498468  ; result.error =    31.2172 ; }
  if (mGluino ==  1190 ){ result.value =   0.00477732  ; result.error =    31.4369 ; }
  if (mGluino ==  1195 ){ result.value =   0.00458673  ; result.error =    31.5987 ; }
  if (mGluino ==  1200 ){ result.value =   0.00440078  ; result.error =    31.7987 ; }
  if (mGluino ==  1205 ){ result.value =   0.00422593  ; result.error =    31.9773 ; }
  if (mGluino ==  1210 ){ result.value =   0.0040514   ; result.error =    32.2519 ; }
  if (mGluino ==  1215 ){ result.value =   0.00389138  ; result.error =    32.2853 ; }
  if (mGluino ==  1220 ){ result.value =   0.00372785  ; result.error =    32.562  ; }
  if (mGluino ==  1225 ){ result.value =   0.00357858  ; result.error =    32.5751 ; }
  if (mGluino ==  1230 ){ result.value =   0.00343744  ; result.error =    32.7486 ; }
  if (mGluino ==  1235 ){ result.value =   0.00330131  ; result.error =    33.1174 ; }
  if (mGluino ==  1240 ){ result.value =   0.0031691   ; result.error =    33.2696 ; }
  if (mGluino ==  1245 ){ result.value =   0.00303793  ; result.error =    33.4577 ; }
  if (mGluino ==  1250 ){ result.value =   0.00291565  ; result.error =    33.6088 ; }
  if (mGluino ==  1255 ){ result.value =   0.00280625  ; result.error =    33.7125 ; }
  if (mGluino ==  1260 ){ result.value =   0.00269022  ; result.error =    34.0592 ; }
  if (mGluino ==  1265 ){ result.value =   0.00258061  ; result.error =    34.2096 ; }
  if (mGluino ==  1270 ){ result.value =   0.00248068  ; result.error =    34.2609 ; }
  if (mGluino ==  1275 ){ result.value =   0.00238091  ; result.error =    34.3786 ; }
  if (mGluino ==  1280 ){ result.value =   0.00228827  ; result.error =    34.6776 ; }
  if (mGluino ==  1285 ){ result.value =   0.00219864  ; result.error =    34.7331 ; }
  if (mGluino ==  1290 ){ result.value =   0.00210573  ; result.error =    35.0623 ; }
  if (mGluino ==  1295 ){ result.value =   0.00202657  ; result.error =    35.0509 ; }
  if (mGluino ==  1300 ){ result.value =   0.00194443  ; result.error =    35.3454 ; }
  if (mGluino ==  1305 ){ result.value =   0.00186692  ; result.error =    35.3372 ; }
  if (mGluino ==  1310 ){ result.value =   0.00179418  ; result.error =    35.5952 ; }
  if (mGluino ==  1315 ){ result.value =   0.00172271  ; result.error =    35.8598 ; }
  if (mGluino ==  1320 ){ result.value =   0.00165064  ; result.error =    36.181  ; }
  if (mGluino ==  1325 ){ result.value =   0.00158945  ; result.error =    36.3322 ; }
  if (mGluino ==  1330 ){ result.value =   0.00152847  ; result.error =    36.6043 ; }
  if (mGluino ==  1335 ){ result.value =   0.0014675   ; result.error =    36.838  ; }
  if (mGluino ==  1340 ){ result.value =   0.0014106   ; result.error =    36.6295 ; }
  if (mGluino ==  1345 ){ result.value =   0.0013492   ; result.error =    36.9211 ; }
  if (mGluino ==  1350 ){ result.value =   0.00129951  ; result.error =    37.0468 ; }
  if (mGluino ==  1355 ){ result.value =   0.00124801  ; result.error =    37.2732 ; }
  if (mGluino ==  1360 ){ result.value =   0.0011984   ; result.error =    37.3879 ; }
  if (mGluino ==  1365 ){ result.value =   0.00114871  ; result.error =    37.5039 ; }
  if (mGluino ==  1370 ){ result.value =   0.00110711  ; result.error =    37.7908 ; }
  if (mGluino ==  1375 ){ result.value =   0.00106538  ; result.error =    38.1495 ; }
  if (mGluino ==  1380 ){ result.value =   0.00102485  ; result.error =    38.3903 ; }
  if (mGluino ==  1385 ){ result.value =   0.00098222  ; result.error =    38.3992 ; }
  if (mGluino ==  1390 ){ result.value =   0.000943754 ; result.error =    38.5307 ; }
  if (mGluino ==  1395 ){ result.value =   0.000906445 ; result.error =    38.7225 ; }
  if (mGluino ==  1400 ){ result.value =   0.000871201 ; result.error =    38.9186 ; }
  if (mGluino ==  1405 ){ result.value =   0.00083687  ; result.error =    39.1534 ; }
  if (mGluino ==  1410 ){ result.value =   0.000804842 ; result.error =    39.3134 ; }
  if (mGluino ==  1415 ){ result.value =   0.000773344 ; result.error =    39.4673 ; }
  if (mGluino ==  1420 ){ result.value =   0.000743009 ; result.error =    39.6856 ; }
  if (mGluino ==  1425 ){ result.value =   0.000714083 ; result.error =    39.8536 ; }
  if (mGluino ==  1430 ){ result.value =   0.000686632 ; result.error =    40.1044 ; }
  if (mGluino ==  1435 ){ result.value =   0.000659782 ; result.error =    40.2328 ; }
  if (mGluino ==  1440 ){ result.value =   0.000634212 ; result.error =    40.4424 ; }
  if (mGluino ==  1445 ){ result.value =   0.000609136 ; result.error =    40.6256 ; }
  if (mGluino ==  1450 ){ result.value =   0.00058599  ; result.error =    40.8174 ; }
  if (mGluino ==  1455 ){ result.value =   0.00056309  ; result.error =    40.9579 ; }
  if (mGluino ==  1460 ){ result.value =   0.000541725 ; result.error =    41.2293 ; }
  if (mGluino ==  1465 ){ result.value =   0.000520546 ; result.error =    41.4388 ; }
  if (mGluino ==  1470 ){ result.value =   0.000500264 ; result.error =    41.587  ; }
  if (mGluino ==  1475 ){ result.value =   0.000481062 ; result.error =    41.8322 ; }
  if (mGluino ==  1480 ){ result.value =   0.000462071 ; result.error =    41.9992 ; }
  if (mGluino ==  1485 ){ result.value =   0.000443875 ; result.error =    42.2248 ; }
  if (mGluino ==  1490 ){ result.value =   0.000426659 ; result.error =    42.4615 ; }
  if (mGluino ==  1495 ){ result.value =   0.000410737 ; result.error =    42.6225 ; }
  if (mGluino ==  1500 ){ result.value =   0.000394612 ; result.error =    42.8374 ; }
  if (mGluino ==  1505 ){ result.value =   0.000379584 ; result.error =    43.0121 ; }
  if (mGluino ==  1510 ){ result.value =   0.000364688 ; result.error =    43.163  ; }
  if (mGluino ==  1515 ){ result.value =   0.000350346 ; result.error =    43.4704 ; }
  if (mGluino ==  1520 ){ result.value =   0.000337197 ; result.error =    43.6989 ; }
  if (mGluino ==  1525 ){ result.value =   0.000323984 ; result.error =    43.9886 ; }
  if (mGluino ==  1530 ){ result.value =   0.000311214 ; result.error =    44.0585 ; }
  if (mGluino ==  1535 ){ result.value =   0.000299031 ; result.error =    44.3182 ; }
  if (mGluino ==  1540 ){ result.value =   0.000287604 ; result.error =    44.7194 ; }
  if (mGluino ==  1545 ){ result.value =   0.00027663  ; result.error =    44.8875 ; }
  if (mGluino ==  1550 ){ result.value =   0.000265533 ; result.error =    45.1206 ; }
  if (mGluino ==  1555 ){ result.value =   0.000255837 ; result.error =    45.2454 ; }
  if (mGluino ==  1560 ){ result.value =   0.000245873 ; result.error =    45.3983 ; }
  if (mGluino ==  1565 ){ result.value =   0.000236606 ; result.error =    45.7461 ; }
  if (mGluino ==  1570 ){ result.value =   0.000227404 ; result.error =    46.0533 ; }
  if (mGluino ==  1575 ){ result.value =   0.000218539 ; result.error =    46.1454 ; }
  if (mGluino ==  1580 ){ result.value =   0.000209696 ; result.error =    46.2467 ; }
  if (mGluino ==  1585 ){ result.value =   0.00020156  ; result.error =    46.5183 ; }
  if (mGluino ==  1590 ){ result.value =   0.000194171 ; result.error =    47.0692 ; }
  if (mGluino ==  1595 ){ result.value =   0.000186477 ; result.error =    47.0494 ; }
  if (mGluino ==  1600 ){ result.value =   0.000179423 ; result.error =    47.269  ; }
  if (mGluino ==  1605 ){ result.value =   0.000172361 ; result.error =    47.4992 ; }
  if (mGluino ==  1610 ){ result.value =   0.000165332 ; result.error =    47.74   ; }
  if (mGluino ==  1615 ){ result.value =   0.000159471 ; result.error =    47.8837 ; }
  if (mGluino ==  1620 ){ result.value =   0.000153392 ; result.error =    48.1321 ; }
  if (mGluino ==  1625 ){ result.value =   0.000147446 ; result.error =    48.273  ; }
  if (mGluino ==  1630 ){ result.value =   0.000141507 ; result.error =    48.3977 ; }
  if (mGluino ==  1635 ){ result.value =   0.000136462 ; result.error =    48.7077 ; }
  if (mGluino ==  1640 ){ result.value =   0.000131372 ; result.error =    49.0001 ; }
  if (mGluino ==  1645 ){ result.value =   0.000126312 ; result.error =    49.2408 ; }
  if (mGluino ==  1650 ){ result.value =   0.000121361 ; result.error =    49.3527 ; }
  if (mGluino ==  1655 ){ result.value =   0.000116488 ; result.error =    49.4938 ; }
  if (mGluino ==  1660 ){ result.value =   0.000112313 ; result.error =    49.8886 ; }
  if (mGluino ==  1665 ){ result.value =   0.000107505 ; result.error =    49.8101 ; }
  if (mGluino ==  1670 ){ result.value =   0.000103502 ; result.error =    50.0869 ; }
  if (mGluino ==  1675 ){ result.value =   9.96E-05    ; result.error =    50.3339 ; }
  if (mGluino ==  1680 ){ result.value =   9.57E-05    ; result.error =    50.4918 ; }
  if (mGluino ==  1685 ){ result.value =   9.20E-05    ; result.error =    50.734  ; }
  if (mGluino ==  1690 ){ result.value =   8.85E-05    ; result.error =    50.9087 ; }
  if (mGluino ==  1695 ){ result.value =   8.51E-05    ; result.error =    51.1242 ; }
  if (mGluino ==  1700 ){ result.value =   8.18E-05    ; result.error =    51.3378 ; }
  if (mGluino ==  1705 ){ result.value =   7.86E-05    ; result.error =    51.5767 ; }
  if (mGluino ==  1710 ){ result.value =   7.56E-05    ; result.error =    51.7333 ; }
  if (mGluino ==  1715 ){ result.value =   7.26E-05    ; result.error =    52.0188 ; }
  if (mGluino ==  1720 ){ result.value =   6.99E-05    ; result.error =    52.2189 ; }
  if (mGluino ==  1725 ){ result.value =   6.71E-05    ; result.error =    52.4157 ; }
  if (mGluino ==  1730 ){ result.value =   6.46E-05    ; result.error =    52.6517 ; }
  if (mGluino ==  1735 ){ result.value =   6.21E-05    ; result.error =    52.8214 ; }
  if (mGluino ==  1740 ){ result.value =   5.97E-05    ; result.error =    53.1281 ; }
  if (mGluino ==  1745 ){ result.value =   5.74E-05    ; result.error =    53.3812 ; }
  if (mGluino ==  1750 ){ result.value =   5.51E-05    ; result.error =    53.4636 ; }
  if (mGluino ==  1755 ){ result.value =   5.30E-05    ; result.error =    53.7555 ; }
  if (mGluino ==  1760 ){ result.value =   5.10E-05    ; result.error =    53.9836 ; }
  if (mGluino ==  1765 ){ result.value =   4.90E-05    ; result.error =    54.2153 ; }
  if (mGluino ==  1770 ){ result.value =   4.71E-05    ; result.error =    54.4355 ; }
  if (mGluino ==  1775 ){ result.value =   4.53E-05    ; result.error =    54.7372 ; }
  if (mGluino ==  1780 ){ result.value =   4.35E-05    ; result.error =    54.8848 ; }
  if (mGluino ==  1785 ){ result.value =   4.19E-05    ; result.error =    55.2468 ; }
  if (mGluino ==  1790 ){ result.value =   4.02E-05    ; result.error =    55.3865 ; }
  if (mGluino ==  1795 ){ result.value =   3.87E-05    ; result.error =    55.6656 ; }
  if (mGluino ==  1800 ){ result.value =   3.72E-05    ; result.error =    55.8389 ; }
  if (mGluino ==  1805 ){ result.value =   3.58E-05    ; result.error =    56.127  ; }
  if (mGluino ==  1810 ){ result.value =   3.44E-05    ; result.error =    56.386  ; }
  if (mGluino ==  1815 ){ result.value =   3.30E-05    ; result.error =    56.4997 ; }
  if (mGluino ==  1820 ){ result.value =   3.17E-05    ; result.error =    56.8528 ; }
  if (mGluino ==  1825 ){ result.value =   3.05E-05    ; result.error =    56.8583 ; }
  if (mGluino ==  1830 ){ result.value =   2.93E-05    ; result.error =    57.3577 ; }
  if (mGluino ==  1835 ){ result.value =   2.81E-05    ; result.error =    57.5468 ; }
  if (mGluino ==  1840 ){ result.value =   2.71E-05    ; result.error =    57.6241 ; }
  if (mGluino ==  1845 ){ result.value =   2.60E-05    ; result.error =    58.0405 ; }
  if (mGluino ==  1850 ){ result.value =   2.50E-05    ; result.error =    58.2816 ; }
  if (mGluino ==  1855 ){ result.value =   2.40E-05    ; result.error =    58.5301 ; }
  if (mGluino ==  1860 ){ result.value =   2.31E-05    ; result.error =    58.6138 ; }
  if (mGluino ==  1865 ){ result.value =   2.22E-05    ; result.error =    59.0514 ; }
  if (mGluino ==  1870 ){ result.value =   2.13E-05    ; result.error =    59.2072 ; }
  if (mGluino ==  1875 ){ result.value =   2.05E-05    ; result.error =    59.5237 ; }
  if (mGluino ==  1880 ){ result.value =   1.97E-05    ; result.error =    59.4866 ; }
  if (mGluino ==  1885 ){ result.value =   1.89E-05    ; result.error =    59.7809 ; }
  if (mGluino ==  1890 ){ result.value =   1.82E-05    ; result.error =    60.0879 ; }
  if (mGluino ==  1895 ){ result.value =   1.75E-05    ; result.error =    60.3347 ; }
  if (mGluino ==  1900 ){ result.value =   1.68E-05    ; result.error =    60.518  ; }
  if (mGluino ==  1905 ){ result.value =   1.61E-05    ; result.error =    60.667  ; }
  if (mGluino ==  1910 ){ result.value =   1.55E-05    ; result.error =    60.9301 ; }
  if (mGluino ==  1915 ){ result.value =   1.49E-05    ; result.error =    61.1518 ; }
  if (mGluino ==  1920 ){ result.value =   1.43E-05    ; result.error =    61.3804 ; }
  if (mGluino ==  1925 ){ result.value =   1.38E-05    ; result.error =    61.6823 ; }
  if (mGluino ==  1930 ){ result.value =   1.32E-05    ; result.error =    62.0392 ; }
  if (mGluino ==  1935 ){ result.value =   1.27E-05    ; result.error =    62.0765 ; }
  if (mGluino ==  1940 ){ result.value =   1.22E-05    ; result.error =    62.2383 ; }
  if (mGluino ==  1945 ){ result.value =   1.17E-05    ; result.error =    62.6928 ; }
  if (mGluino ==  1950 ){ result.value =   1.12E-05    ; result.error =    62.789  ; }
  if (mGluino ==  1955 ){ result.value =   1.08E-05    ; result.error =    63.1447 ; }
  if (mGluino ==  1960 ){ result.value =   1.04E-05    ; result.error =    63.4321 ; }
  if (mGluino ==  1965 ){ result.value =   9.98E-06    ; result.error =    63.4885 ; }
  if (mGluino ==  1970 ){ result.value =   9.59E-06    ; result.error =    63.7209 ; }
  if (mGluino ==  1975 ){ result.value =   9.21E-06    ; result.error =    64.0165 ; }
  if (mGluino ==  1980 ){ result.value =   8.85E-06    ; result.error =    64.1813 ; }
  if (mGluino ==  1985 ){ result.value =   8.50E-06    ; result.error =    64.4633 ; }
  if (mGluino ==  1990 ){ result.value =   8.15E-06    ; result.error =    64.6832 ; }
  if (mGluino ==  1995 ){ result.value =   7.84E-06    ; result.error =    64.9299 ; }
  if (mGluino ==  2000 ){ result.value =   7.53E-06    ; result.error =    65.128  ; } 
  return result;
}

val_err_t stop_sbottom_cs(float mStopSbottom){
  val_err_t result = {0, 0};
  if (mStopSbottom == 100){ result.value = 559.757; result.error = 16.1085; }
  if (mStopSbottom == 105){ result.value = 448.456; result.error = 15.9732; }
  if (mStopSbottom == 110){ result.value = 361.917; result.error = 16.1134; }
  if (mStopSbottom == 115){ result.value = 293.281; result.error = 15.9763; }
  if (mStopSbottom == 120){ result.value = 240.077; result.error = 15.9212; }
  if (mStopSbottom == 125){ result.value = 197.122; result.error = 15.7303; }
  if (mStopSbottom == 130){ result.value = 163.376; result.error = 15.8101; }
  if (mStopSbottom == 135){ result.value = 135.791; result.error = 15.8086; }
  if (mStopSbottom == 140){ result.value = 113.319; result.error = 15.7234; }
  if (mStopSbottom == 145){ result.value = 95.0292; result.error = 15.6490; }
  if (mStopSbottom == 150){ result.value = 80.268 ; result.error = 15.5946; }
  if (mStopSbottom == 155){ result.value = 68.0456; result.error = 15.5232; }
  if (mStopSbottom == 160){ result.value = 58.01  ; result.error = 15.3899; }
  if (mStopSbottom == 165){ result.value = 49.6639; result.error = 15.3711; }
  if (mStopSbottom == 170){ result.value = 42.6441; result.error = 15.3017; }
  if (mStopSbottom == 175){ result.value = 36.7994; result.error = 15.1749; }
  if (mStopSbottom == 180){ result.value = 31.8695; result.error = 15.2449; }
  if (mStopSbottom == 185){ result.value = 27.7028; result.error = 15.0630; }
  if (mStopSbottom == 190){ result.value = 24.1585; result.error = 15.1600; }
  if (mStopSbottom == 195){ result.value = 21.1597; result.error = 14.9422; }
  if (mStopSbottom == 200){ result.value = 18.5245; result.error = 14.9147; }
  if (mStopSbottom == 205){ result.value = 16.2439; result.error = 15.1170; }
  if (mStopSbottom == 210){ result.value = 14.3201; result.error = 14.8495; }
  if (mStopSbottom == 215){ result.value = 12.6497; result.error = 14.8689; }
  if (mStopSbottom == 220){ result.value = 11.1808; result.error = 14.9108; }
  if (mStopSbottom == 225){ result.value = 9.90959; result.error = 14.9662; }
  if (mStopSbottom == 230){ result.value = 8.78125; result.error = 14.7960; }
  if (mStopSbottom == 235){ result.value = 7.81646; result.error = 14.7983; }
  if (mStopSbottom == 240){ result.value = 6.96892; result.error = 14.7878; }
  if (mStopSbottom == 245){ result.value = 6.22701; result.error = 14.7897; }
  if (mStopSbottom == 250){ result.value = 5.57596; result.error = 14.7529; }
  if (mStopSbottom == 255){ result.value = 5.00108; result.error = 14.7290; }
  if (mStopSbottom == 260){ result.value = 4.48773; result.error = 14.6782; }
  if (mStopSbottom == 265){ result.value = 4.03416; result.error = 14.7964; }
  if (mStopSbottom == 270){ result.value = 3.63085; result.error = 14.6565; }
  if (mStopSbottom == 275){ result.value = 3.2781 ; result.error = 14.7341; }
  if (mStopSbottom == 280){ result.value = 2.95613; result.error = 14.7816; }
  if (mStopSbottom == 285){ result.value = 2.67442; result.error = 14.7661; }
  if (mStopSbottom == 290){ result.value = 2.42299; result.error = 14.6805; }
  if (mStopSbottom == 295){ result.value = 2.19684; result.error = 14.8465; }
  if (mStopSbottom == 300){ result.value = 1.99608; result.error = 14.6905; }
  if (mStopSbottom == 305){ result.value = 1.81486; result.error = 14.4434; }
  if (mStopSbottom == 310){ result.value = 1.64956; result.error = 14.4769; }
  if (mStopSbottom == 315){ result.value = 1.50385; result.error = 14.4549; }
  if (mStopSbottom == 320){ result.value = 1.3733 ; result.error = 14.7503; }
  if (mStopSbottom == 325){ result.value = 1.25277; result.error = 14.2875; }
  if (mStopSbottom == 330){ result.value = 1.14277; result.error = 14.5780; }
  if (mStopSbottom == 335){ result.value = 1.04713; result.error = 14.3659; }
  if (mStopSbottom == 340){ result.value = 0.959617; result.error = 14.3896; }
  if (mStopSbottom == 345){ result.value = 0.879793; result.error = 14.3881; }
  if (mStopSbottom == 350){ result.value = 0.807323; result.error = 14.3597; }
  if (mStopSbottom == 355){ result.value = 0.74141 ;  result.error = 14.3680; }
  if (mStopSbottom == 360){ result.value = 0.681346;  result.error = 14.3357; }
  if (mStopSbottom == 365){ result.value = 0.626913;  result.error = 14.3627; }
  if (mStopSbottom == 370){ result.value = 0.576882;  result.error = 14.2712; }
  if (mStopSbottom == 375){ result.value = 0.531443;  result.error = 14.2660; }
  if (mStopSbottom == 380){ result.value = 0.489973;  result.error = 14.3962; }
  if (mStopSbottom == 385){ result.value = 0.452072;  result.error = 14.2234; }
  if (mStopSbottom == 390){ result.value = 0.4176  ;  result.error = 14.3166; }
  if (mStopSbottom == 395){ result.value = 0.385775;  result.error = 14.3112; }
  if (mStopSbottom == 400){ result.value = 0.35683 ;  result.error = 14.2848; }
  if (mStopSbottom == 405){ result.value = 0.329881;  result.error = 14.2072; }
  if (mStopSbottom == 410){ result.value = 0.305512;  result.error = 14.2648; }
  if (mStopSbottom == 415){ result.value = 0.283519;  result.error = 14.1020; }
  if (mStopSbottom == 420){ result.value = 0.262683;  result.error = 14.3075; }
  if (mStopSbottom == 425){ result.value = 0.243755;  result.error = 14.0504; }
  if (mStopSbottom == 430){ result.value = 0.226367;  result.error = 14.0494; }
  if (mStopSbottom == 435){ result.value = 0.209966;  result.error = 14.0334; }
  if (mStopSbottom == 440){ result.value = 0.195812;  result.error = 14.0772; }
  if (mStopSbottom == 445){ result.value = 0.181783;  result.error = 14.1771; }
  if (mStopSbottom == 450){ result.value = 0.169668;  result.error = 14.2368; }
  if (mStopSbottom == 455){ result.value = 0.158567;  result.error = 14.2609; }
  if (mStopSbottom == 460){ result.value = 0.147492;  result.error = 14.4105; }
  if (mStopSbottom == 465){ result.value = 0.137392;  result.error = 14.4772; }
  if (mStopSbottom == 470){ result.value = 0.128326;  result.error = 14.5144; }
  if (mStopSbottom == 475){ result.value = 0.119275;  result.error = 14.6664; }
  if (mStopSbottom == 480){ result.value = 0.112241;  result.error = 14.6307; }
  if (mStopSbottom == 485){ result.value = 0.104155;  result.error = 14.7581; }
  if (mStopSbottom == 490){ result.value = 0.0977878  ; result.error = 14.7977; }
  if (mStopSbottom == 495){ result.value = 0.091451   ; result.error = 14.8963; }
  if (mStopSbottom == 500){ result.value = 0.0855847  ; result.error = 14.9611; }
  if (mStopSbottom == 505){ result.value = 0.0801322  ; result.error = 15.0389; }
  if (mStopSbottom == 510){ result.value = 0.0751004  ; result.error = 15.1402; }
  if (mStopSbottom == 515){ result.value = 0.0703432  ; result.error = 15.2139; }
  if (mStopSbottom == 520){ result.value = 0.0660189  ; result.error = 15.3368; }
  if (mStopSbottom == 525){ result.value = 0.0618641  ; result.error = 15.4135; }
  if (mStopSbottom == 530){ result.value = 0.0580348  ; result.error = 15.4422; }
  if (mStopSbottom == 535){ result.value = 0.0545113  ; result.error = 15.5446; }
  if (mStopSbottom == 540){ result.value = 0.0511747  ; result.error = 15.6283; }
  if (mStopSbottom == 545){ result.value = 0.0481537  ; result.error = 15.7260; }
  if (mStopSbottom == 550){ result.value = 0.0452067  ; result.error = 15.8177; }
  if (mStopSbottom == 555){ result.value = 0.0424781  ; result.error = 15.9022; }
  if (mStopSbottom == 560){ result.value = 0.0399591  ; result.error = 16.0067; }
  if (mStopSbottom == 565){ result.value = 0.0376398  ; result.error = 16.0367; }
  if (mStopSbottom == 570){ result.value = 0.0354242  ; result.error = 16.1370; }
  if (mStopSbottom == 575){ result.value = 0.0333988  ; result.error = 16.2132; }
  if (mStopSbottom == 580){ result.value = 0.0313654  ; result.error = 16.3135; }
  if (mStopSbottom == 585){ result.value = 0.0295471  ; result.error = 16.4264; }
  if (mStopSbottom == 590){ result.value = 0.0279395  ; result.error = 16.4546; }
  if (mStopSbottom == 595){ result.value = 0.0263263  ; result.error = 16.5670; }
  if (mStopSbottom == 600){ result.value = 0.0248009  ; result.error = 16.6406; }
  if (mStopSbottom == 605){ result.value = 0.0233806  ; result.error = 16.7295; }
  if (mStopSbottom == 610){ result.value = 0.0220672  ; result.error = 16.8447; }
  if (mStopSbottom == 615){ result.value = 0.0208461  ; result.error = 16.9276; }
  if (mStopSbottom == 620){ result.value = 0.0196331  ; result.error = 17.0459; }
  if (mStopSbottom == 625){ result.value = 0.0185257  ; result.error = 17.0835; }
  if (mStopSbottom == 630){ result.value = 0.0175075  ; result.error = 17.1478; }
  if (mStopSbottom == 635){ result.value = 0.0164955  ; result.error = 17.2753; }
  if (mStopSbottom == 640){ result.value = 0.0155809  ; result.error = 17.3814; }
  if (mStopSbottom == 645){ result.value = 0.0147721  ; result.error = 17.4885; }
  if (mStopSbottom == 650){ result.value = 0.0139566  ; result.error = 17.5600; }
  if (mStopSbottom == 655){ result.value = 0.0132456  ; result.error = 17.6129; }
  if (mStopSbottom == 660){ result.value = 0.0125393  ; result.error = 17.7363; }
  if (mStopSbottom == 665){ result.value = 0.0118287  ; result.error = 17.7959; }
  if (mStopSbottom == 670){ result.value = 0.0112223  ; result.error = 17.8974; }
  if (mStopSbottom == 675){ result.value = 0.0106123  ; result.error = 17.9891; }
  if (mStopSbottom == 680){ result.value = 0.0100516  ; result.error = 18.0618; }
  if (mStopSbottom == 685){ result.value = 0.0095256  ; result.error = 18.1714; }
  if (mStopSbottom == 690){ result.value = 0.0090306  ; result.error = 18.2108; }
  if (mStopSbottom == 695){ result.value = 0.00856339 ; result.error = 18.3365; }
  if (mStopSbottom == 700){ result.value = 0.0081141  ; result.error = 18.4146; }
  if (mStopSbottom == 705){ result.value = 0.00769525 ; result.error = 18.4937; }
  if (mStopSbottom == 710){ result.value = 0.00730084 ; result.error = 18.6195; }
  if (mStopSbottom == 715){ result.value = 0.00692243 ; result.error = 18.7005; }
  if (mStopSbottom == 720){ result.value = 0.00656729 ; result.error = 18.8190; }
  if (mStopSbottom == 725){ result.value = 0.00623244 ; result.error = 18.8796; }
  if (mStopSbottom == 730){ result.value = 0.00591771 ; result.error = 18.9960; }
  if (mStopSbottom == 735){ result.value = 0.00561049 ; result.error = 19.0787; }
  if (mStopSbottom == 740){ result.value = 0.00532605 ; result.error = 19.1995; }
  if (mStopSbottom == 745){ result.value = 0.00506044 ; result.error = 19.2916; }
  if (mStopSbottom == 750){ result.value = 0.00480639 ; result.error = 19.4088; }
  if (mStopSbottom == 755){ result.value = 0.00455979 ; result.error = 19.5080; }
  if (mStopSbottom == 760){ result.value = 0.00433688 ; result.error = 19.6320; }
  if (mStopSbottom == 765){ result.value = 0.00412174 ; result.error = 19.7141; }
  if (mStopSbottom == 770){ result.value = 0.00391839 ; result.error = 19.8299; }
  if (mStopSbottom == 775){ result.value = 0.00372717 ; result.error = 19.9097; }
  if (mStopSbottom == 780){ result.value = 0.00354211 ; result.error = 20.0016; }
  if (mStopSbottom == 785){ result.value = 0.00336904 ; result.error = 20.1230; }
  if (mStopSbottom == 790){ result.value = 0.00320476 ; result.error = 20.2271; }
  if (mStopSbottom == 795){ result.value = 0.00304935 ; result.error = 20.4479; }
  if (mStopSbottom == 800){ result.value = 0.00289588 ; result.error = 20.5160; }
  if (mStopSbottom == 805){ result.value = 0.00275424 ; result.error = 20.5444; }
  if (mStopSbottom == 810){ result.value = 0.0026184  ; result.error = 20.8204; }
  if (mStopSbottom == 815){ result.value = 0.00249291 ; result.error = 21.0063; }
  if (mStopSbottom == 820){ result.value = 0.00237168 ; result.error = 21.0865; }
  if (mStopSbottom == 825){ result.value = 0.00226163 ; result.error = 21.0511; }
  if (mStopSbottom == 830){ result.value = 0.00214607 ; result.error = 21.3705; }
  if (mStopSbottom == 835){ result.value = 0.00204589 ; result.error = 21.3026; }
  if (mStopSbottom == 840){ result.value = 0.00195172 ; result.error = 21.6053; }
  if (mStopSbottom == 845){ result.value = 0.0018573  ; result.error = 21.8177; }
  if (mStopSbottom == 850){ result.value = 0.00176742 ; result.error = 21.8360; }
  if (mStopSbottom == 855){ result.value = 0.00168383 ; result.error = 22.1411; }
  if (mStopSbottom == 860){ result.value = 0.00160403 ; result.error = 22.0506; }
  if (mStopSbottom == 865){ result.value = 0.00153063 ; result.error = 22.3461; }
  if (mStopSbottom == 870){ result.value = 0.00145772 ; result.error = 22.6206; }
  if (mStopSbottom == 875){ result.value = 0.0013878  ; result.error = 22.5422; }
  if (mStopSbottom == 880){ result.value = 0.00132077 ; result.error = 23.2161; }
  if (mStopSbottom == 885){ result.value = 0.00126234 ; result.error = 23.1283; }
  if (mStopSbottom == 890){ result.value = 0.00120568 ; result.error = 23.8404; }
  if (mStopSbottom == 895){ result.value = 0.00114627 ; result.error = 23.7327; }
  if (mStopSbottom == 900){ result.value = 0.00109501 ; result.error = 23.9439; }
  if (mStopSbottom == 905){ result.value = 0.001044   ; result.error = 24.1049; }
  if (mStopSbottom == 910){ result.value = 0.000996193; result.error = 24.2789; }
  if (mStopSbottom == 915){ result.value = 0.00095071 ; result.error = 24.5443; }
  if (mStopSbottom == 920){ result.value = 0.000907494; result.error = 24.7597; }
  if (mStopSbottom == 925){ result.value = 0.000866391; result.error = 24.8770; }
  if (mStopSbottom == 930){ result.value = 0.000826533; result.error = 25.0849; }
  if (mStopSbottom == 935){ result.value = 0.000789573; result.error = 25.2885; }
  if (mStopSbottom == 940){ result.value = 0.000753768; result.error = 25.4768; }
  if (mStopSbottom == 945){ result.value = 0.000719675; result.error = 25.6582; }
  if (mStopSbottom == 950){ result.value = 0.000687022; result.error = 25.8341; }
  if (mStopSbottom == 955){ result.value = 0.000656279; result.error = 26.0372; }
  if (mStopSbottom == 960){ result.value = 0.000626876; result.error = 26.2059; }
  if (mStopSbottom == 965){ result.value = 0.000598955; result.error = 26.3653; }
  if (mStopSbottom == 970){ result.value = 0.000571551; result.error = 26.5169; }
  if (mStopSbottom == 975){ result.value = 0.000546728; result.error = 26.7985; }
  if (mStopSbottom == 980){ result.value = 0.000522495; result.error = 26.9218; }
  if (mStopSbottom == 985){ result.value = 0.000499017; result.error = 27.1036; }
  if (mStopSbottom == 990){ result.value = 0.000476255; result.error = 27.3032; }
  if (mStopSbottom == 995){ result.value = 0.000455959; result.error = 27.4544; }
  if (mStopSbottom == 1000){ result.value = 0.000435488; result.error = 27.6595; }
  if (mStopSbottom == 1005){ result.value = 0.000416116; result.error = 27.8649; }
  if (mStopSbottom == 1010){ result.value = 0.00039791 ; result.error = 27.9983; }
  if (mStopSbottom == 1015){ result.value = 0.000379994; result.error = 28.2833; }
  if (mStopSbottom == 1020){ result.value = 0.000363934; result.error = 28.4046; }
  if (mStopSbottom == 1025){ result.value = 0.000347646; result.error = 28.5755; }
  if (mStopSbottom == 1030){ result.value = 0.00033204 ; result.error = 28.8856; }
  if (mStopSbottom == 1035){ result.value = 0.000318049; result.error = 28.9792; }
  if (mStopSbottom == 1040){ result.value = 0.000303756; result.error = 29.0799; }
  if (mStopSbottom == 1045){ result.value = 0.000290392; result.error = 29.3415; }
  if (mStopSbottom == 1050){ result.value = 0.000277943; result.error = 29.6252; }
  if (mStopSbottom == 1055){ result.value = 0.000265929; result.error = 29.7061; }
  if (mStopSbottom == 1060){ result.value = 0.000254659; result.error = 29.9460; }
  if (mStopSbottom == 1065){ result.value = 0.000243251; result.error = 30.2370; }
  if (mStopSbottom == 1070){ result.value = 0.00023289 ; result.error = 30.4322; }
  if (mStopSbottom == 1075){ result.value = 0.000222651; result.error = 30.6837; }
  if (mStopSbottom == 1080){ result.value = 0.000213396; result.error = 30.9264; }
  if (mStopSbottom == 1085){ result.value = 0.000204211; result.error = 31.1401; }
  if (mStopSbottom == 1090){ result.value = 0.000196038; result.error = 31.3673; }
  if (mStopSbottom == 1095){ result.value = 0.000187913; result.error = 31.5579; }
  if (mStopSbottom == 1100){ result.value = 0.000179699; result.error = 31.8291; }
  if (mStopSbottom == 1105){ result.value = 0.000172125; result.error = 32.3718; }
  if (mStopSbottom == 1110){ result.value = 0.000165045; result.error = 32.5508; }
  if (mStopSbottom == 1115){ result.value = 0.000157905; result.error = 32.8048; }
  if (mStopSbottom == 1120){ result.value = 0.000151236; result.error = 32.6359; }
  if (mStopSbottom == 1125){ result.value = 0.000144737; result.error = 33.2161; }
  if (mStopSbottom == 1130){ result.value = 0.000138657; result.error = 33.4105; }
  if (mStopSbottom == 1135){ result.value = 0.000133343; result.error = 33.9387; }
  if (mStopSbottom == 1140){ result.value = 0.000127478; result.error = 33.9505; }
  if (mStopSbottom == 1145){ result.value = 0.00012234 ; result.error = 34.2228; }
  if (mStopSbottom == 1150){ result.value = 0.000117215; result.error = 34.5171; }
  if (mStopSbottom == 1155){ result.value = 0.000112199; result.error = 34.6636; }
  if (mStopSbottom == 1160){ result.value = 0.000107256; result.error = 34.7177; }
  if (mStopSbottom == 1165){ result.value = 0.000103046; result.error = 35.1400; }
  if (mStopSbottom == 1170){ result.value = 9.86633E-05; result.error = 35.2448; }
  if (mStopSbottom == 1175){ result.value = 9.44977E-05; result.error = 35.4910; }
  if (mStopSbottom == 1180){ result.value = 9.05131E-05; result.error = 35.6874; }
  if (mStopSbottom == 1185){ result.value = 8.67972E-05; result.error = 35.8364; }
  if (mStopSbottom == 1190){ result.value = 8.31669E-05; result.error = 36.0309; }
  if (mStopSbottom == 1195){ result.value = 7.96568E-05; result.error = 36.1691; }
  if (mStopSbottom == 1200){ result.value = 7.63052E-05; result.error = 36.4029; }
  if (mStopSbottom == 1205){ result.value = 7.31846E-05; result.error = 36.5593; }
  if (mStopSbottom == 1210){ result.value = 7.00987E-05; result.error = 36.8407; }
  if (mStopSbottom == 1215){ result.value = 6.72666E-05; result.error = 37.0524; }
  if (mStopSbottom == 1220){ result.value = 6.44711E-05; result.error = 37.2551; }
  if (mStopSbottom == 1225){ result.value = 6.18495E-05; result.error = 37.4468; }
  if (mStopSbottom == 1230){ result.value = 5.93775E-05; result.error = 37.7300; }
  if (mStopSbottom == 1235){ result.value = 5.69258E-05; result.error = 37.9974; }
  if (mStopSbottom == 1240){ result.value = 5.46007E-05; result.error = 38.1849; }
  if (mStopSbottom == 1245){ result.value = 5.23902E-05; result.error = 38.4532; }
  if (mStopSbottom == 1250){ result.value = 5.02385E-05; result.error = 38.7169; }
  if (mStopSbottom == 1255){ result.value = 4.81984E-05; result.error = 38.9583; }
  if (mStopSbottom == 1260){ result.value = 0.000046268; result.error = 39.2950; }
  if (mStopSbottom == 1265){ result.value = 4.43332E-05; result.error = 39.5330; }
  if (mStopSbottom == 1270){ result.value = 4.25134E-05; result.error = 39.7556; }
  if (mStopSbottom == 1275){ result.value = 4.07881E-05; result.error = 40.0677; }
  if (mStopSbottom == 1280){ result.value = 3.91417E-05; result.error = 40.3688; }
  if (mStopSbottom == 1285){ result.value = 3.75567E-05; result.error = 40.5687; }
  if (mStopSbottom == 1290){ result.value = 3.60147E-05; result.error = 40.8636; }
  if (mStopSbottom == 1295){ result.value = 0.000034617; result.error = 41.1110; }
  if (mStopSbottom == 1300){ result.value = 3.31856E-05; result.error = 41.3826; }
  if (mStopSbottom == 1305){ result.value = 3.18643E-05; result.error = 41.6171; }
  if (mStopSbottom == 1310){ result.value = 3.05669E-05; result.error = 41.8635; }
  if (mStopSbottom == 1315){ result.value = 2.93562E-05; result.error = 42.0558; }
  if (mStopSbottom == 1320){ result.value = 2.81652E-05; result.error = 42.2681; }
  if (mStopSbottom == 1325){ result.value = 2.70203E-05; result.error = 42.6434; }
  if (mStopSbottom == 1330){ result.value = 2.59296E-05; result.error = 42.8496; }
  if (mStopSbottom == 1335){ result.value = 2.49015E-05; result.error = 43.1496; }
  if (mStopSbottom == 1340){ result.value = 2.39221E-05; result.error = 43.2927; }
  if (mStopSbottom == 1345){ result.value = 2.29308E-05; result.error = 43.3701; }
  if (mStopSbottom == 1350){ result.value = 2.20166E-05; result.error = 43.7141; }
  if (mStopSbottom == 1355){ result.value = 2.11331E-05; result.error = 43.7576; }
  if (mStopSbottom == 1360){ result.value = 2.02909E-05; result.error = 44.2750; }
  if (mStopSbottom == 1365){ result.value = 1.94752E-05; result.error = 44.5547; }
  if (mStopSbottom == 1370){ result.value = 0.000018714; result.error = 44.4890; }
  if (mStopSbottom == 1375){ result.value = 1.79681E-05; result.error = 45.0069; }
  if (mStopSbottom == 1380){ result.value = 1.72697E-05; result.error = 45.2231; }
  if (mStopSbottom == 1385){ result.value = 1.65664E-05; result.error = 45.3811; }
  if (mStopSbottom == 1390){ result.value = 1.58669E-05; result.error = 45.6290; }
  if (mStopSbottom == 1395){ result.value = 1.52759E-05; result.error = 45.6655; }
  if (mStopSbottom == 1400){ result.value = 1.46673E-05; result.error = 45.9932; }
  if (mStopSbottom == 1405){ result.value = 1.40698E-05; result.error = 46.2074; }
  if (mStopSbottom == 1410){ result.value = 1.35484E-05; result.error = 46.5574; }
  if (mStopSbottom == 1415){ result.value = 1.30386E-05; result.error = 46.9138; }
  if (mStopSbottom == 1420){ result.value = 0.00001253 ; result.error = 47.2350; }
  if (mStopSbottom == 1425){ result.value = 1.20335E-05; result.error = 47.4376; }
  if (mStopSbottom == 1430){ result.value = 1.15351E-05; result.error = 47.6339; }
  if (mStopSbottom == 1435){ result.value = 1.11127E-05; result.error = 48.0539; }
  if (mStopSbottom == 1440){ result.value = 1.06301E-05; result.error = 48.0551; }
  if (mStopSbottom == 1445){ result.value = 1.02226E-05; result.error = 48.3748; }
  if (mStopSbottom == 1450){ result.value = 9.84287E-06; result.error = 48.7594; }
  if (mStopSbottom == 1455){ result.value = 9.45889E-06; result.error = 49.0619; }
  if (mStopSbottom == 1460){ result.value = 9.09124E-06; result.error = 49.2373; }
  if (mStopSbottom == 1465){ result.value = 8.73208E-06; result.error = 49.5338; }
  if (mStopSbottom == 1470){ result.value = 8.38911E-06; result.error = 49.7994; }
  if (mStopSbottom == 1475){ result.value = 8.05993E-06; result.error = 50.0207; }
  if (mStopSbottom == 1480){ result.value = 7.74413E-06; result.error = 50.3417; }
  if (mStopSbottom == 1485){ result.value = 7.44538E-06; result.error = 50.5264; }
  if (mStopSbottom == 1490){ result.value = 7.14898E-06; result.error = 50.7934; }
  if (mStopSbottom == 1495){ result.value = 6.86798E-06; result.error = 51.0213; }
  if (mStopSbottom == 1500){ result.value = 6.59698E-06; result.error = 51.2711; }
  if (mStopSbottom == 1505){ result.value = 6.33638E-06; result.error = 51.4848; }
  if (mStopSbottom == 1510){ result.value = 6.08509E-06; result.error = 51.7365; }
  if (mStopSbottom == 1515){ result.value = 5.84265E-06; result.error = 51.9947; }
  if (mStopSbottom == 1520){ result.value = 5.6093E-06 ; result.error = 52.2054; }
  if (mStopSbottom == 1525){ result.value = 5.38651E-06; result.error = 52.4747; }
  if (mStopSbottom == 1530){ result.value = 5.1742E-06 ; result.error = 52.7563; }
  if (mStopSbottom == 1535){ result.value = 4.97273E-06; result.error = 52.9922; }
  if (mStopSbottom == 1540){ result.value = 4.77117E-06; result.error = 53.2497; }
  if (mStopSbottom == 1545){ result.value = 4.58178E-06; result.error = 53.4133; }
  if (mStopSbottom == 1550){ result.value = 4.39875E-06; result.error = 53.7199; }
  if (mStopSbottom == 1555){ result.value = 4.22724E-06; result.error = 53.9776; }
  if (mStopSbottom == 1560){ result.value = 4.05582E-06; result.error = 54.2081; }
  if (mStopSbottom == 1565){ result.value = 3.89113E-06; result.error = 54.5909; }
  if (mStopSbottom == 1570){ result.value = 3.72963E-06; result.error = 54.8285; }
  if (mStopSbottom == 1575){ result.value = 3.58102E-06; result.error = 54.9611; }
  if (mStopSbottom == 1580){ result.value = 3.43895E-06; result.error = 55.2433; }
  if (mStopSbottom == 1585){ result.value = 3.29773E-06; result.error = 55.5563; }
  if (mStopSbottom == 1590){ result.value = 3.16675E-06; result.error = 55.7857; }
  if (mStopSbottom == 1595){ result.value = 3.03589E-06; result.error = 55.9798; }
  if (mStopSbottom == 1600){ result.value = 2.91221E-06; result.error = 56.3512; }
  if (mStopSbottom == 1605){ result.value = 2.79219E-06; result.error = 56.5093; }
  if (mStopSbottom == 1610){ result.value = 2.66816E-06; result.error = 56.8717; }
  if (mStopSbottom == 1615){ result.value = 2.55964E-06; result.error = 56.9442; }
  if (mStopSbottom == 1620){ result.value = 2.44758E-06; result.error = 57.2952; }
  if (mStopSbottom == 1625){ result.value = 2.34644E-06; result.error = 57.5294; }
  if (mStopSbottom == 1630){ result.value = 2.24557E-06; result.error = 57.7382; }
  if (mStopSbottom == 1635){ result.value = 2.15574E-06; result.error = 57.8618; }
  if (mStopSbottom == 1640){ result.value = 2.0669E-06 ; result.error = 58.0160; }
  if (mStopSbottom == 1645){ result.value = 1.98515E-06; result.error = 58.2828; }
  if (mStopSbottom == 1650){ result.value = 1.90249E-06; result.error = 58.6510; }
  if (mStopSbottom == 1655){ result.value = 1.83115E-06; result.error = 58.9189; }
  if (mStopSbottom == 1660){ result.value = 1.76963E-06; result.error = 59.2455; }
  if (mStopSbottom == 1665){ result.value = 1.70036E-06; result.error = 59.4164; }
  if (mStopSbottom == 1670){ result.value = 1.63964E-06; result.error = 59.6636; }
  if (mStopSbottom == 1675){ result.value = 1.58714E-06; result.error = 60.0861; }
  if (mStopSbottom == 1680){ result.value = 1.52765E-06; result.error = 60.2995; }
  if (mStopSbottom == 1685){ result.value = 1.47645E-06; result.error = 60.5926; }
  if (mStopSbottom == 1690){ result.value = 1.42533E-06; result.error = 60.8999; }
  if (mStopSbottom == 1695){ result.value = 1.37529E-06; result.error = 61.1528; }
  if (mStopSbottom == 1700){ result.value = 1.32467E-06; result.error = 61.3920; }
  if (mStopSbottom == 1705){ result.value = 1.27389E-06; result.error = 61.6317; }
  if (mStopSbottom == 1710){ result.value = 1.22407E-06; result.error = 61.8075; }
  if (mStopSbottom == 1715){ result.value = 1.18167E-06; result.error = 62.2826; }
  if (mStopSbottom == 1720){ result.value = 1.13218E-06; result.error = 62.4136; }
  if (mStopSbottom == 1725){ result.value = 1.09086E-06; result.error = 62.7163; }
  if (mStopSbottom == 1730){ result.value = 1.04182E-06; result.error = 62.7379; }
  if (mStopSbottom == 1735){ result.value = 1.00428E-06; result.error = 63.1036; }
  if (mStopSbottom == 1740){ result.value = 9.64964E-07; result.error = 63.3464; }
  if (mStopSbottom == 1745){ result.value = 9.26859E-07; result.error = 63.6113; }
  if (mStopSbottom == 1750){ result.value = 8.90605E-07; result.error = 63.8391; }
  if (mStopSbottom == 1755){ result.value = 8.56319E-07; result.error = 64.0747; }
  if (mStopSbottom == 1760){ result.value = 8.2246E-07 ; result.error = 64.3035; }
  if (mStopSbottom == 1765){ result.value = 7.90884E-07; result.error = 64.5973; }
  if (mStopSbottom == 1770){ result.value = 7.59995E-07; result.error = 64.8419; }
  if (mStopSbottom == 1775){ result.value = 7.3087E-07 ; result.error = 65.0354; }
  if (mStopSbottom == 1780){ result.value = 7.02001E-07; result.error = 65.3007; }
  if (mStopSbottom == 1785){ result.value = 6.75402E-07; result.error = 65.5868; }
  if (mStopSbottom == 1790){ result.value = 6.49168E-07; result.error = 65.7934; }
  if (mStopSbottom == 1795){ result.value = 6.24339E-07; result.error = 66.0476; }
  if (mStopSbottom == 1800){ result.value = 6.00052E-07; result.error = 66.2636; }
  if (mStopSbottom == 1805){ result.value = 5.76531E-07; result.error = 66.5428; }
  if (mStopSbottom == 1810){ result.value = 5.5474E-07 ; result.error = 66.8028; }
  if (mStopSbottom == 1815){ result.value = 5.33316E-07; result.error = 67.0617; }
  if (mStopSbottom == 1820){ result.value = 5.129E-07  ; result.error = 67.2985; }
  if (mStopSbottom == 1825){ result.value = 4.93338E-07; result.error = 67.6074; }
  if (mStopSbottom == 1830){ result.value = 4.74104E-07; result.error = 67.7943; }
  if (mStopSbottom == 1835){ result.value = 4.55409E-07; result.error = 68.0365; }
  if (mStopSbottom == 1840){ result.value = 4.37889E-07; result.error = 68.3383; }
  if (mStopSbottom == 1845){ result.value = 4.21436E-07; result.error = 68.6014; }
  if (mStopSbottom == 1850){ result.value = 4.04973E-07; result.error = 68.8823; }
  if (mStopSbottom == 1855){ result.value = 3.89723E-07; result.error = 69.0800; }
  if (mStopSbottom == 1860){ result.value = 3.7399E-07 ; result.error = 69.4608; }
  if (mStopSbottom == 1865){ result.value = 3.59977E-07; result.error = 69.5443; }
  if (mStopSbottom == 1870){ result.value = 3.45452E-07; result.error = 69.8554; }
  if (mStopSbottom == 1875){ result.value = 3.32155E-07; result.error = 70.0667; }
  if (mStopSbottom == 1880){ result.value = 3.19667E-07; result.error = 70.3694; }
  if (mStopSbottom == 1885){ result.value = 3.06274E-07; result.error = 70.6069; }
  if (mStopSbottom == 1890){ result.value = 2.95073E-07; result.error = 70.7798; }
  if (mStopSbottom == 1895){ result.value = 2.83743E-07; result.error = 70.9919; }
  if (mStopSbottom == 1900){ result.value = 2.724E-07  ; result.error = 71.2184; }
  if (mStopSbottom == 1905){ result.value = 2.62039E-07; result.error = 71.4803; }
  if (mStopSbottom == 1910){ result.value = 2.51734E-07; result.error = 71.6697; }
  if (mStopSbottom == 1915){ result.value = 2.4149E-07 ; result.error = 71.8236; }
  if (mStopSbottom == 1920){ result.value = 2.32237E-07; result.error = 72.0760; }
  if (mStopSbottom == 1925){ result.value = 2.23897E-07; result.error = 72.3551; }
  if (mStopSbottom == 1930){ result.value = 2.14605E-07; result.error = 72.5351; }
  if (mStopSbottom == 1935){ result.value = 2.06292E-07; result.error = 72.7478; }
  if (mStopSbottom == 1940){ result.value = 1.99019E-07; result.error = 73.0776; }
  if (mStopSbottom == 1945){ result.value = 1.90756E-07; result.error = 73.2183; }
  if (mStopSbottom == 1950){ result.value = 1.83446E-07; result.error = 73.4612; }
  if (mStopSbottom == 1955){ result.value = 1.7615E-07 ; result.error = 73.6804; }
  if (mStopSbottom == 1960){ result.value = 1.69813E-07; result.error = 73.9751; }
  if (mStopSbottom == 1965){ result.value = 1.62682E-07; result.error = 74.0833; }
  if (mStopSbottom == 1970){ result.value = 1.56389E-07; result.error = 74.3243; }
  if (mStopSbottom == 1975){ result.value = 1.51029E-07; result.error = 74.6914; }
  if (mStopSbottom == 1980){ result.value = 1.44807E-07; result.error = 74.8288; }
  if (mStopSbottom == 1985){ result.value = 1.39563E-07; result.error = 75.1522; }
  if (mStopSbottom == 1990){ result.value = 1.34259E-07; result.error = 75.4315; }
  if (mStopSbottom == 1995){ result.value = 1.29026E-07; result.error = 75.6265; }
  if (mStopSbottom == 2000){ result.value = 1.23774E-07; result.error = 75.8327; }
  return result;
}
