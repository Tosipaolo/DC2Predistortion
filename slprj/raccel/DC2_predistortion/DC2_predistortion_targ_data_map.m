    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 21;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 33;
            section.data(33)  = dumData; %prealloc

                    ;% rtP.Gamma
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.K
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.numberofCoefficients
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.predistortionCoefficients
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.smoothing
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 24;

                    ;% rtP.MemorylessS3_p
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 25;

                    ;% rtP.MemorylessS20_p
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 26;

                    ;% rtP.MemorylessNonlinearity_vsat
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 27;

                    ;% rtP.MemorylessNonlinearity1_vsat
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

                    ;% rtP.MemorylessS3_vsat
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 29;

                    ;% rtP.MemorylessS20_vsat
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 30;

                    ;% rtP.RandomNumber_Mean
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 31;

                    ;% rtP.RandomNumber_StdDev
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtP.RandomNumber_Seed
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 33;

                    ;% rtP.RandomNumber1_Mean
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 34;

                    ;% rtP.RandomNumber1_StdDev
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 35;

                    ;% rtP.RandomNumber1_Seed
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 36;

                    ;% rtP.FIRInterpolation_FILTER_COEFF
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 37;

                    ;% rtP.Saturation_UpperSat
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 685;

                    ;% rtP.Saturation_LowerSat
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 686;

                    ;% rtP.Gain_Gain
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 687;

                    ;% rtP.Merge_InitialOutput
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 688;

                    ;% rtP.Gain_Gain_i2t5tgo53m
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 689;

                    ;% rtP.Merge_InitialOutput_g5nqz3hux4
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 690;

                    ;% rtP.Gain_Gain_en43eij3nc
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 691;

                    ;% rtP.Merge_InitialOutput_jvxvc1fdjr
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 692;

                    ;% rtP.Gain_Gain_bqwr1ngiox
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 693;

                    ;% rtP.Merge_InitialOutput_ptx5e4hsry
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 694;

                    ;% rtP.Constant_Value
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 695;

                    ;% rtP.LAMBDA_Value
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 696;

                    ;% rtP.Constant_Value_a523d0oiup
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 697;

                    ;% rtP.Constant_Value_n0nww2vh5c
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 698;

                    ;% rtP.Constant_Value_cbj5azvbu2
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 699;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.m5sexzzsxy.InputGain_Gain
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.m5sexzzsxy.OutputGain_Gain
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.m5sexzzsxy.Constant2_Value
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.ky1gbhg5rq.InputGain_Gain
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ky1gbhg5rq.Gain_Gain
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ky1gbhg5rq.Gain1_Gain
                    section.data(3).logicalSrcIdx = 38;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ky1gbhg5rq.Gain2_Gain
                    section.data(4).logicalSrcIdx = 39;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ky1gbhg5rq.Gain_Gain_ocaarxko02
                    section.data(5).logicalSrcIdx = 40;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ky1gbhg5rq.Gain1_Gain_iobf1zjibi
                    section.data(6).logicalSrcIdx = 41;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ky1gbhg5rq.Gain2_Gain_dprcbktiwb
                    section.data(7).logicalSrcIdx = 42;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ky1gbhg5rq.OutputGain_Gain
                    section.data(8).logicalSrcIdx = 43;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.ky1gbhg5rq.Constant_Value
                    section.data(9).logicalSrcIdx = 44;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.ky1gbhg5rq.Constant1_Value
                    section.data(10).logicalSrcIdx = 45;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.ky1gbhg5rq.Constant_Value_ppghtlfurx
                    section.data(11).logicalSrcIdx = 46;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.ky1gbhg5rq.Constant1_Value_d44dmqnago
                    section.data(12).logicalSrcIdx = 47;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.nupi545oen.InputGain_Gain
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.nupi545oen.Gain2_Gain
                    section.data(2).logicalSrcIdx = 49;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.nupi545oen.Gain3_Gain
                    section.data(3).logicalSrcIdx = 50;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.nupi545oen.Gain_Gain
                    section.data(4).logicalSrcIdx = 51;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.nupi545oen.Gain1_Gain
                    section.data(5).logicalSrcIdx = 52;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.nupi545oen.OutputGain_Gain
                    section.data(6).logicalSrcIdx = 53;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.nupi545oen.Constant1_Value
                    section.data(7).logicalSrcIdx = 54;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.nupi545oen.Constant_Value
                    section.data(8).logicalSrcIdx = 55;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.lgb24eydta.dBConversion_R
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.lgb24eydta.InputGain2_Gain
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.lgb24eydta.RescaleinputforAMPMlowerlimit_Gain
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.lgb24eydta.Gain_Gain
                    section.data(4).logicalSrcIdx = 59;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.lgb24eydta.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(5).logicalSrcIdx = 60;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.lgb24eydta.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(6).logicalSrcIdx = 61;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.lgb24eydta.ConvertdBmtoradians_Gain
                    section.data(7).logicalSrcIdx = 62;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.lgb24eydta.OutputGain2_Gain
                    section.data(8).logicalSrcIdx = 63;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.lgb24eydta.Constant_Value
                    section.data(9).logicalSrcIdx = 64;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.lgb24eydta.Constant1_Value
                    section.data(10).logicalSrcIdx = 65;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtP.itlpj4fodu.dBConversion_R
                    section.data(1).logicalSrcIdx = 66;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.itlpj4fodu.InputGain1_Gain
                    section.data(2).logicalSrcIdx = 67;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.itlpj4fodu.SaturationI_UpperSat
                    section.data(3).logicalSrcIdx = 68;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.itlpj4fodu.SaturationI_LowerSat
                    section.data(4).logicalSrcIdx = 69;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.itlpj4fodu.Gain_Gain
                    section.data(5).logicalSrcIdx = 70;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.itlpj4fodu.RescaleinputforAMPMlowerlimit_Gain
                    section.data(6).logicalSrcIdx = 71;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.itlpj4fodu.Gain_Gain_ayvcaxgx4h
                    section.data(7).logicalSrcIdx = 72;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.itlpj4fodu.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(8).logicalSrcIdx = 73;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.itlpj4fodu.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(9).logicalSrcIdx = 74;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.itlpj4fodu.ConvertdBmtoradians_Gain
                    section.data(10).logicalSrcIdx = 75;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.itlpj4fodu.OutputGain1_Gain
                    section.data(11).logicalSrcIdx = 76;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.itlpj4fodu.Constant_Value
                    section.data(12).logicalSrcIdx = 77;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.itlpj4fodu.Constant_Value_cvizqzux0h
                    section.data(13).logicalSrcIdx = 78;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.itlpj4fodu.Constant1_Value
                    section.data(14).logicalSrcIdx = 79;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.g5asqdbxd2.InputGain_Gain
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.g5asqdbxd2.OutputGain_Gain
                    section.data(2).logicalSrcIdx = 81;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.g5asqdbxd2.Constant2_Value
                    section.data(3).logicalSrcIdx = 82;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.cnoquaiecb.InputGain_Gain
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.cnoquaiecb.Gain_Gain
                    section.data(2).logicalSrcIdx = 84;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.cnoquaiecb.Gain1_Gain
                    section.data(3).logicalSrcIdx = 85;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.cnoquaiecb.Gain2_Gain
                    section.data(4).logicalSrcIdx = 86;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.cnoquaiecb.Gain_Gain_ocaarxko02
                    section.data(5).logicalSrcIdx = 87;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.cnoquaiecb.Gain1_Gain_iobf1zjibi
                    section.data(6).logicalSrcIdx = 88;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.cnoquaiecb.Gain2_Gain_dprcbktiwb
                    section.data(7).logicalSrcIdx = 89;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.cnoquaiecb.OutputGain_Gain
                    section.data(8).logicalSrcIdx = 90;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.cnoquaiecb.Constant_Value
                    section.data(9).logicalSrcIdx = 91;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.cnoquaiecb.Constant1_Value
                    section.data(10).logicalSrcIdx = 92;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.cnoquaiecb.Constant_Value_ppghtlfurx
                    section.data(11).logicalSrcIdx = 93;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.cnoquaiecb.Constant1_Value_d44dmqnago
                    section.data(12).logicalSrcIdx = 94;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.bxzsvnh1aw.InputGain_Gain
                    section.data(1).logicalSrcIdx = 95;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.bxzsvnh1aw.Gain2_Gain
                    section.data(2).logicalSrcIdx = 96;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.bxzsvnh1aw.Gain3_Gain
                    section.data(3).logicalSrcIdx = 97;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.bxzsvnh1aw.Gain_Gain
                    section.data(4).logicalSrcIdx = 98;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.bxzsvnh1aw.Gain1_Gain
                    section.data(5).logicalSrcIdx = 99;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.bxzsvnh1aw.OutputGain_Gain
                    section.data(6).logicalSrcIdx = 100;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.bxzsvnh1aw.Constant1_Value
                    section.data(7).logicalSrcIdx = 101;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.bxzsvnh1aw.Constant_Value
                    section.data(8).logicalSrcIdx = 102;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.ohwibl0oik.dBConversion_R
                    section.data(1).logicalSrcIdx = 103;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ohwibl0oik.InputGain2_Gain
                    section.data(2).logicalSrcIdx = 104;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ohwibl0oik.RescaleinputforAMPMlowerlimit_Gain
                    section.data(3).logicalSrcIdx = 105;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ohwibl0oik.Gain_Gain
                    section.data(4).logicalSrcIdx = 106;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ohwibl0oik.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(5).logicalSrcIdx = 107;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ohwibl0oik.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(6).logicalSrcIdx = 108;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ohwibl0oik.ConvertdBmtoradians_Gain
                    section.data(7).logicalSrcIdx = 109;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ohwibl0oik.OutputGain2_Gain
                    section.data(8).logicalSrcIdx = 110;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.ohwibl0oik.Constant_Value
                    section.data(9).logicalSrcIdx = 111;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.ohwibl0oik.Constant1_Value
                    section.data(10).logicalSrcIdx = 112;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtP.oxx5igb303.dBConversion_R
                    section.data(1).logicalSrcIdx = 113;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.oxx5igb303.InputGain1_Gain
                    section.data(2).logicalSrcIdx = 114;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.oxx5igb303.SaturationI_UpperSat
                    section.data(3).logicalSrcIdx = 115;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.oxx5igb303.SaturationI_LowerSat
                    section.data(4).logicalSrcIdx = 116;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.oxx5igb303.Gain_Gain
                    section.data(5).logicalSrcIdx = 117;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.oxx5igb303.RescaleinputforAMPMlowerlimit_Gain
                    section.data(6).logicalSrcIdx = 118;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.oxx5igb303.Gain_Gain_ayvcaxgx4h
                    section.data(7).logicalSrcIdx = 119;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.oxx5igb303.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(8).logicalSrcIdx = 120;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.oxx5igb303.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(9).logicalSrcIdx = 121;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.oxx5igb303.ConvertdBmtoradians_Gain
                    section.data(10).logicalSrcIdx = 122;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.oxx5igb303.OutputGain1_Gain
                    section.data(11).logicalSrcIdx = 123;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.oxx5igb303.Constant_Value
                    section.data(12).logicalSrcIdx = 124;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.oxx5igb303.Constant_Value_cvizqzux0h
                    section.data(13).logicalSrcIdx = 125;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.oxx5igb303.Constant1_Value
                    section.data(14).logicalSrcIdx = 126;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.la2ioretvo.InputGain_Gain
                    section.data(1).logicalSrcIdx = 127;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.la2ioretvo.OutputGain_Gain
                    section.data(2).logicalSrcIdx = 128;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.la2ioretvo.Constant2_Value
                    section.data(3).logicalSrcIdx = 129;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.m0wf3m1kcq.InputGain_Gain
                    section.data(1).logicalSrcIdx = 130;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.m0wf3m1kcq.Gain_Gain
                    section.data(2).logicalSrcIdx = 131;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.m0wf3m1kcq.Gain1_Gain
                    section.data(3).logicalSrcIdx = 132;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.m0wf3m1kcq.Gain2_Gain
                    section.data(4).logicalSrcIdx = 133;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.m0wf3m1kcq.Gain_Gain_ocaarxko02
                    section.data(5).logicalSrcIdx = 134;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.m0wf3m1kcq.Gain1_Gain_iobf1zjibi
                    section.data(6).logicalSrcIdx = 135;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.m0wf3m1kcq.Gain2_Gain_dprcbktiwb
                    section.data(7).logicalSrcIdx = 136;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.m0wf3m1kcq.OutputGain_Gain
                    section.data(8).logicalSrcIdx = 137;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.m0wf3m1kcq.Constant_Value
                    section.data(9).logicalSrcIdx = 138;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.m0wf3m1kcq.Constant1_Value
                    section.data(10).logicalSrcIdx = 139;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.m0wf3m1kcq.Constant_Value_ppghtlfurx
                    section.data(11).logicalSrcIdx = 140;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.m0wf3m1kcq.Constant1_Value_d44dmqnago
                    section.data(12).logicalSrcIdx = 141;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.mw5ylf2af1.InputGain_Gain
                    section.data(1).logicalSrcIdx = 142;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.mw5ylf2af1.Gain2_Gain
                    section.data(2).logicalSrcIdx = 143;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.mw5ylf2af1.Gain3_Gain
                    section.data(3).logicalSrcIdx = 144;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.mw5ylf2af1.Gain_Gain
                    section.data(4).logicalSrcIdx = 145;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.mw5ylf2af1.Gain1_Gain
                    section.data(5).logicalSrcIdx = 146;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.mw5ylf2af1.OutputGain_Gain
                    section.data(6).logicalSrcIdx = 147;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.mw5ylf2af1.Constant1_Value
                    section.data(7).logicalSrcIdx = 148;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.mw5ylf2af1.Constant_Value
                    section.data(8).logicalSrcIdx = 149;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(14) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.b31ukzlbiz.dBConversion_R
                    section.data(1).logicalSrcIdx = 150;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.b31ukzlbiz.InputGain2_Gain
                    section.data(2).logicalSrcIdx = 151;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.b31ukzlbiz.RescaleinputforAMPMlowerlimit_Gain
                    section.data(3).logicalSrcIdx = 152;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.b31ukzlbiz.Gain_Gain
                    section.data(4).logicalSrcIdx = 153;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.b31ukzlbiz.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(5).logicalSrcIdx = 154;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.b31ukzlbiz.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(6).logicalSrcIdx = 155;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.b31ukzlbiz.ConvertdBmtoradians_Gain
                    section.data(7).logicalSrcIdx = 156;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.b31ukzlbiz.OutputGain2_Gain
                    section.data(8).logicalSrcIdx = 157;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.b31ukzlbiz.Constant_Value
                    section.data(9).logicalSrcIdx = 158;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.b31ukzlbiz.Constant1_Value
                    section.data(10).logicalSrcIdx = 159;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(15) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtP.h11e1j2gz5.dBConversion_R
                    section.data(1).logicalSrcIdx = 160;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.h11e1j2gz5.InputGain1_Gain
                    section.data(2).logicalSrcIdx = 161;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.h11e1j2gz5.SaturationI_UpperSat
                    section.data(3).logicalSrcIdx = 162;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.h11e1j2gz5.SaturationI_LowerSat
                    section.data(4).logicalSrcIdx = 163;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.h11e1j2gz5.Gain_Gain
                    section.data(5).logicalSrcIdx = 164;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.h11e1j2gz5.RescaleinputforAMPMlowerlimit_Gain
                    section.data(6).logicalSrcIdx = 165;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.h11e1j2gz5.Gain_Gain_ayvcaxgx4h
                    section.data(7).logicalSrcIdx = 166;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.h11e1j2gz5.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(8).logicalSrcIdx = 167;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.h11e1j2gz5.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(9).logicalSrcIdx = 168;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.h11e1j2gz5.ConvertdBmtoradians_Gain
                    section.data(10).logicalSrcIdx = 169;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.h11e1j2gz5.OutputGain1_Gain
                    section.data(11).logicalSrcIdx = 170;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.h11e1j2gz5.Constant_Value
                    section.data(12).logicalSrcIdx = 171;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.h11e1j2gz5.Constant_Value_cvizqzux0h
                    section.data(13).logicalSrcIdx = 172;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.h11e1j2gz5.Constant1_Value
                    section.data(14).logicalSrcIdx = 173;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            paramMap.sections(16) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.a2ydei5a12c.InputGain_Gain
                    section.data(1).logicalSrcIdx = 174;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.a2ydei5a12c.OutputGain_Gain
                    section.data(2).logicalSrcIdx = 175;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.a2ydei5a12c.Constant2_Value
                    section.data(3).logicalSrcIdx = 176;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(17) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.i3mmrklbhsy.InputGain_Gain
                    section.data(1).logicalSrcIdx = 177;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.i3mmrklbhsy.Gain_Gain
                    section.data(2).logicalSrcIdx = 178;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.i3mmrklbhsy.Gain1_Gain
                    section.data(3).logicalSrcIdx = 179;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.i3mmrklbhsy.Gain2_Gain
                    section.data(4).logicalSrcIdx = 180;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.i3mmrklbhsy.Gain_Gain_ocaarxko02
                    section.data(5).logicalSrcIdx = 181;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.i3mmrklbhsy.Gain1_Gain_iobf1zjibi
                    section.data(6).logicalSrcIdx = 182;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.i3mmrklbhsy.Gain2_Gain_dprcbktiwb
                    section.data(7).logicalSrcIdx = 183;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.i3mmrklbhsy.OutputGain_Gain
                    section.data(8).logicalSrcIdx = 184;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.i3mmrklbhsy.Constant_Value
                    section.data(9).logicalSrcIdx = 185;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.i3mmrklbhsy.Constant1_Value
                    section.data(10).logicalSrcIdx = 186;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.i3mmrklbhsy.Constant_Value_ppghtlfurx
                    section.data(11).logicalSrcIdx = 187;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.i3mmrklbhsy.Constant1_Value_d44dmqnago
                    section.data(12).logicalSrcIdx = 188;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(18) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.jlq4jj2wgyy.InputGain_Gain
                    section.data(1).logicalSrcIdx = 189;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.jlq4jj2wgyy.Gain2_Gain
                    section.data(2).logicalSrcIdx = 190;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.jlq4jj2wgyy.Gain3_Gain
                    section.data(3).logicalSrcIdx = 191;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.jlq4jj2wgyy.Gain_Gain
                    section.data(4).logicalSrcIdx = 192;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.jlq4jj2wgyy.Gain1_Gain
                    section.data(5).logicalSrcIdx = 193;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.jlq4jj2wgyy.OutputGain_Gain
                    section.data(6).logicalSrcIdx = 194;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.jlq4jj2wgyy.Constant1_Value
                    section.data(7).logicalSrcIdx = 195;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.jlq4jj2wgyy.Constant_Value
                    section.data(8).logicalSrcIdx = 196;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(19) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.h2dghdnqpmo.dBConversion_R
                    section.data(1).logicalSrcIdx = 197;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.h2dghdnqpmo.InputGain2_Gain
                    section.data(2).logicalSrcIdx = 198;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.h2dghdnqpmo.RescaleinputforAMPMlowerlimit_Gain
                    section.data(3).logicalSrcIdx = 199;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.h2dghdnqpmo.Gain_Gain
                    section.data(4).logicalSrcIdx = 200;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.h2dghdnqpmo.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(5).logicalSrcIdx = 201;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.h2dghdnqpmo.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(6).logicalSrcIdx = 202;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.h2dghdnqpmo.ConvertdBmtoradians_Gain
                    section.data(7).logicalSrcIdx = 203;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.h2dghdnqpmo.OutputGain2_Gain
                    section.data(8).logicalSrcIdx = 204;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.h2dghdnqpmo.Constant_Value
                    section.data(9).logicalSrcIdx = 205;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.h2dghdnqpmo.Constant1_Value
                    section.data(10).logicalSrcIdx = 206;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(20) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtP.gjgjhmx54tp.dBConversion_R
                    section.data(1).logicalSrcIdx = 207;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.gjgjhmx54tp.InputGain1_Gain
                    section.data(2).logicalSrcIdx = 208;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.gjgjhmx54tp.SaturationI_UpperSat
                    section.data(3).logicalSrcIdx = 209;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.gjgjhmx54tp.SaturationI_LowerSat
                    section.data(4).logicalSrcIdx = 210;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.gjgjhmx54tp.Gain_Gain
                    section.data(5).logicalSrcIdx = 211;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.gjgjhmx54tp.RescaleinputforAMPMlowerlimit_Gain
                    section.data(6).logicalSrcIdx = 212;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.gjgjhmx54tp.Gain_Gain_ayvcaxgx4h
                    section.data(7).logicalSrcIdx = 213;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.gjgjhmx54tp.ClipinputpowertoAMPMupperlimit_UpperSat
                    section.data(8).logicalSrcIdx = 214;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.gjgjhmx54tp.ClipinputpowertoAMPMupperlimit_LowerSat
                    section.data(9).logicalSrcIdx = 215;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.gjgjhmx54tp.ConvertdBmtoradians_Gain
                    section.data(10).logicalSrcIdx = 216;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.gjgjhmx54tp.OutputGain1_Gain
                    section.data(11).logicalSrcIdx = 217;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.gjgjhmx54tp.Constant_Value
                    section.data(12).logicalSrcIdx = 218;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.gjgjhmx54tp.Constant_Value_cvizqzux0h
                    section.data(13).logicalSrcIdx = 219;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.gjgjhmx54tp.Constant1_Value
                    section.data(14).logicalSrcIdx = 220;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            paramMap.sections(21) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtB.kymkdfxsdf
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.fkot4ufw2s
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 21;

                    ;% rtB.izmnfo20bh
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 22;

                    ;% rtB.isvafp3kpr
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 23;

                    ;% rtB.kiqaumkd25
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 24;

                    ;% rtB.p3vgaf2auy
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 25;

                    ;% rtB.hctnnyx5m3
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 26;

                    ;% rtB.h1jjlm1sm0
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 27;

                    ;% rtB.aoricz1svq
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtB.fwlyf33y4r
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.g3h0ozjzik
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.jfgwhn4umm
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.liv1jyvf4j
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.d5bujks5vf
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.pydzara4tv
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.ji2qyseycq
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.feffd0v2lg
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 26;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.plgnzuu14l
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cmrwiwvhv2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 80;

                    ;% rtDW.chpwd4mva5
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 96;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.isga1tvhed
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cjfen0irxn
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.lrtzqomyil
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.kd4y1awxlb
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 650;

                    ;% rtDW.lwbuog4m4q
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 1946;

                    ;% rtDW.ngc1ln2x4x
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 3242;

                    ;% rtDW.kr1gfvkwbz
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 3243;

                    ;% rtDW.o0b2xe44us
                    section.data(8).logicalSrcIdx = 10;
                    section.data(8).dtTransOffset = 3244;

                    ;% rtDW.lhdyhtvix0
                    section.data(9).logicalSrcIdx = 11;
                    section.data(9).dtTransOffset = 3245;

                    ;% rtDW.cf5q1i4rqo
                    section.data(10).logicalSrcIdx = 12;
                    section.data(10).dtTransOffset = 3246;

                    ;% rtDW.kzbxs50x2c
                    section.data(11).logicalSrcIdx = 13;
                    section.data(11).dtTransOffset = 3247;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.fau3j3pljx
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nkjleonipu
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.j5nte5je4m
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.l2kgcq0re2
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cx41hv41j3
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cqvxq0wzsw
                    section.data(4).logicalSrcIdx = 19;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ngu3sock5e
                    section.data(5).logicalSrcIdx = 20;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.hvueaarh1x
                    section.data(6).logicalSrcIdx = 21;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.mlcl0axizw
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ckmkptbrit
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.agdsuxy0ad
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ng5noqhlxy
                    section.data(4).logicalSrcIdx = 25;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.iahe4vgmns
                    section.data(5).logicalSrcIdx = 26;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cxchwz3w2x
                    section.data(6).logicalSrcIdx = 27;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.kwitn1ejt4
                    section.data(7).logicalSrcIdx = 28;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.liejrqzwm0
                    section.data(8).logicalSrcIdx = 29;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ivl3pyl0kb
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.m5sexzzsxy.cejkopwbtv
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ky1gbhg5rq.fibqjkqnjk
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nupi545oen.p5zzsmsop2
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.lgb24eydta.ktphnd4lwv
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lgb24eydta.hagga0ljnk
                    section.data(2).logicalSrcIdx = 35;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.itlpj4fodu.ddfnl1zb3v
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.itlpj4fodu.kcg44srdmp
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g5asqdbxd2.cejkopwbtv
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.cnoquaiecb.fibqjkqnjk
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bxzsvnh1aw.p5zzsmsop2
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ohwibl0oik.ktphnd4lwv
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ohwibl0oik.hagga0ljnk
                    section.data(2).logicalSrcIdx = 42;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.oxx5igb303.ddfnl1zb3v
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oxx5igb303.kcg44srdmp
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.la2ioretvo.cejkopwbtv
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.m0wf3m1kcq.fibqjkqnjk
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.mw5ylf2af1.p5zzsmsop2
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.b31ukzlbiz.ktphnd4lwv
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.b31ukzlbiz.hagga0ljnk
                    section.data(2).logicalSrcIdx = 49;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.h11e1j2gz5.ddfnl1zb3v
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.h11e1j2gz5.kcg44srdmp
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.a2ydei5a12c.cejkopwbtv
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.i3mmrklbhsy.fibqjkqnjk
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jlq4jj2wgyy.p5zzsmsop2
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.h2dghdnqpmo.ktphnd4lwv
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.h2dghdnqpmo.hagga0ljnk
                    section.data(2).logicalSrcIdx = 56;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.gjgjhmx54tp.ddfnl1zb3v
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gjgjhmx54tp.kcg44srdmp
                    section.data(2).logicalSrcIdx = 58;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 4214834857;
    targMap.checksum1 = 3103436890;
    targMap.checksum2 = 27036291;
    targMap.checksum3 = 4290645429;

