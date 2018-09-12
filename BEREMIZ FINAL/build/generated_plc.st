PROGRAM control
  VAR_EXTERNAL
    ocup1 : BOOL;
    ocup2 : BOOL;
    ocup3 : BOOL;
    ocup4 : BOOL;
    ocup5 : BOOL;
    ocup6 : BOOL;
    socup1 : BOOL;
    socup2 : BOOL;
    socup3 : BOOL;
    socup4 : BOOL;
    socup5 : BOOL;
    socup6 : BOOL;
    aux1 : BOOL;
    aux2 : BOOL;
    aux3 : BOOL;
    aux4 : BOOL;
    aux5 : BOOL;
    aux6 : BOOL;
    auxr : BOOL;
    ocupr : BOOL;
    socupr : BOOL;
    socupp1 : BOOL;
    socupp2 : BOOL;
    socupp3 : BOOL;
    ocupp1 : BOOL;
    ocupp2 : BOOL;
    ocupp3 : BOOL;
    auxp1 : BOOL;
    auxp2 : BOOL;
    auxp3 : BOOL;
  END_VAR

  INITIAL_STEP Step2:
    STEP2_INLINE1(N);
  END_STEP

  ACTION STEP2_INLINE1:
    socup1:=0;
  END_ACTION

  TRANSITION FROM Step2 TO Step3
    := ocup1;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE2(N);
  END_STEP

  ACTION STEP3_INLINE2:
    socup1:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step0
    := aux1;
  END_TRANSITION

  STEP Step0:
    STEP0_INLINE3(N);
  END_STEP

  ACTION STEP0_INLINE3:
    socup1:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step1
    := not aux1;
  END_TRANSITION

  STEP Step1:
  END_STEP

  TRANSITION FROM Step1 TO Step2
    := not ocup1;
  END_TRANSITION

  INITIAL_STEP Step5:
    STEP5_INLINE5(N);
  END_STEP

  ACTION STEP5_INLINE5:
    socup2:=0;
  END_ACTION

  TRANSITION FROM Step5 TO Step6
    := ocup2;
  END_TRANSITION

  STEP Step6:
    STEP6_INLINE6(N);
  END_STEP

  ACTION STEP6_INLINE6:
    socup2:=1;
  END_ACTION

  TRANSITION FROM Step6 TO Step7
    := aux2;
  END_TRANSITION

  STEP Step7:
    STEP7_INLINE4(N);
  END_STEP

  ACTION STEP7_INLINE4:
    socup2:=0;
  END_ACTION

  TRANSITION FROM Step7 TO Step4
    := not aux2;
  END_TRANSITION

  STEP Step4:
  END_STEP

  TRANSITION FROM Step4 TO Step5
    := not ocup2;
  END_TRANSITION

  INITIAL_STEP Step9:
    STEP9_INLINE11(N);
  END_STEP

  ACTION STEP9_INLINE11:
    socup3:=0;
  END_ACTION

  TRANSITION FROM Step9 TO Step10
    := ocup3;
  END_TRANSITION

  STEP Step10:
    STEP10_INLINE12(N);
  END_STEP

  ACTION STEP10_INLINE12:
    socup3:=1;
  END_ACTION

  TRANSITION FROM Step10 TO Step15
    := aux3;
  END_TRANSITION

  STEP Step15:
    STEP15_INLINE7(N);
  END_STEP

  ACTION STEP15_INLINE7:
    socup3:=0;
  END_ACTION

  TRANSITION FROM Step15 TO Step8
    := not aux3;
  END_TRANSITION

  STEP Step8:
  END_STEP

  TRANSITION FROM Step8 TO Step9
    := not ocup3;
  END_TRANSITION

  INITIAL_STEP Step12:
    STEP12_INLINE9(N);
  END_STEP

  ACTION STEP12_INLINE9:
    socup4:=0;
  END_ACTION

  TRANSITION FROM Step12 TO Step13
    := ocup4;
  END_TRANSITION

  STEP Step13:
    STEP13_INLINE10(N);
  END_STEP

  ACTION STEP13_INLINE10:
    socup4:=1;
  END_ACTION

  TRANSITION FROM Step13 TO Step14
    := aux4;
  END_TRANSITION

  STEP Step14:
    STEP14_INLINE8(N);
  END_STEP

  ACTION STEP14_INLINE8:
    socup4:=0;
  END_ACTION

  TRANSITION FROM Step14 TO Step11
    := not aux4;
  END_TRANSITION

  STEP Step11:
  END_STEP

  TRANSITION FROM Step11 TO Step12
    := not ocup4;
  END_TRANSITION

  INITIAL_STEP Step17:
    STEP17_INLINE17(N);
  END_STEP

  ACTION STEP17_INLINE17:
    socup5:=0;
  END_ACTION

  TRANSITION FROM Step17 TO Step18
    := ocup5;
  END_TRANSITION

  STEP Step18:
    STEP18_INLINE18(N);
  END_STEP

  ACTION STEP18_INLINE18:
    socup5:=1;
  END_ACTION

  TRANSITION FROM Step18 TO Step23
    := aux5;
  END_TRANSITION

  STEP Step23:
    STEP23_INLINE13(N);
  END_STEP

  ACTION STEP23_INLINE13:
    socup5:=0;
  END_ACTION

  TRANSITION FROM Step23 TO Step16
    := not aux5;
  END_TRANSITION

  STEP Step16:
  END_STEP

  TRANSITION FROM Step16 TO Step17
    := not ocup5;
  END_TRANSITION

  INITIAL_STEP Step20:
    STEP20_INLINE15(N);
  END_STEP

  ACTION STEP20_INLINE15:
    socup6:=0;
  END_ACTION

  TRANSITION FROM Step20 TO Step21
    := ocup6;
  END_TRANSITION

  STEP Step21:
    STEP21_INLINE16(N);
  END_STEP

  ACTION STEP21_INLINE16:
    socup6:=1;
  END_ACTION

  TRANSITION FROM Step21 TO Step22
    := aux6;
  END_TRANSITION

  STEP Step22:
    STEP22_INLINE14(N);
  END_STEP

  ACTION STEP22_INLINE14:
    socup6:=0;
  END_ACTION

  TRANSITION FROM Step22 TO Step19
    := not aux6;
  END_TRANSITION

  STEP Step19:
  END_STEP

  TRANSITION FROM Step19 TO Step20
    := not ocup6;
  END_TRANSITION

  INITIAL_STEP Step25:
    STEP25_INLINE20(N);
  END_STEP

  ACTION STEP25_INLINE20:
    socupr:=0;
  END_ACTION

  TRANSITION FROM Step25 TO Step26
    := ocupr;
  END_TRANSITION

  STEP Step26:
    STEP26_INLINE21(N);
  END_STEP

  ACTION STEP26_INLINE21:
    socupr:=1;
  END_ACTION

  TRANSITION FROM Step26 TO Step27
    := auxr;
  END_TRANSITION

  STEP Step27:
    STEP27_INLINE19(N);
  END_STEP

  ACTION STEP27_INLINE19:
    socupr:=0;
  END_ACTION

  TRANSITION FROM Step27 TO Step24
    := not auxr;
  END_TRANSITION

  STEP Step24:
  END_STEP

  TRANSITION FROM Step24 TO Step25
    := not ocupr;
  END_TRANSITION

  INITIAL_STEP Step29:
    STEP29_INLINE27(N);
  END_STEP

  ACTION STEP29_INLINE27:
    socupp1:=0;
  END_ACTION

  TRANSITION FROM Step29 TO Step30
    := ocupp1;
  END_TRANSITION

  STEP Step30:
    STEP30_INLINE28(N);
  END_STEP

  ACTION STEP30_INLINE28:
    socupp1:=1;
  END_ACTION

  TRANSITION FROM Step30 TO Step37
    := auxp1;
  END_TRANSITION

  STEP Step37:
    STEP37_INLINE22(N);
  END_STEP

  ACTION STEP37_INLINE22:
    socupp1:=0;
  END_ACTION

  TRANSITION FROM Step37 TO Step28
    := not auxp1;
  END_TRANSITION

  STEP Step28:
  END_STEP

  TRANSITION FROM Step28 TO Step29
    := not ocupp1;
  END_TRANSITION

  INITIAL_STEP Step32:
    STEP32_INLINE24(N);
  END_STEP

  ACTION STEP32_INLINE24:
    socupp2:=0;
  END_ACTION

  TRANSITION FROM Step32 TO Step33
    := ocupp2;
  END_TRANSITION

  STEP Step33:
    STEP33_INLINE25(N);
  END_STEP

  ACTION STEP33_INLINE25:
    socup2:=1;
  END_ACTION

  TRANSITION FROM Step33 TO Step34
    := auxp2;
  END_TRANSITION

  STEP Step34:
    STEP34_INLINE23(N);
  END_STEP

  ACTION STEP34_INLINE23:
    socupp2:=0;
  END_ACTION

  TRANSITION FROM Step34 TO Step31
    := not auxp2;
  END_TRANSITION

  STEP Step31:
  END_STEP

  TRANSITION FROM Step31 TO Step32
    := not ocupp2;
  END_TRANSITION

  INITIAL_STEP Step36:
    STEP36_INLINE29(N);
  END_STEP

  ACTION STEP36_INLINE29:
    socupp3:=0;
  END_ACTION

  TRANSITION FROM Step36 TO Step38
    := ocupp3;
  END_TRANSITION

  STEP Step38:
    STEP38_INLINE30(N);
  END_STEP

  ACTION STEP38_INLINE30:
    socupp3:=1;
  END_ACTION

  TRANSITION FROM Step38 TO Step39
    := auxp3;
  END_TRANSITION

  STEP Step39:
    STEP39_INLINE26(N);
  END_STEP

  ACTION STEP39_INLINE26:
    socupp3:=0;
  END_ACTION

  TRANSITION FROM Step39 TO Step35
    := not auxp3;
  END_TRANSITION

  STEP Step35:
  END_STEP

  TRANSITION FROM Step35 TO Step36
    := not ocupp3;
  END_TRANSITION

END_PROGRAM

FUNCTION_BLOCK SFC_LowDecision
  VAR_INPUT
    px : WORD;
    py : WORD;
    machine : INT;
    ready : BOOL;
  END_VAR
  VAR_OUTPUT
    px_o : WORD;
    py_o : WORD;
    next : BOOL;
    order_ready : BOOL;
  END_VAR
  VAR_INPUT
    order : BOOL;
  END_VAR

  INITIAL_STEP Step0:
    STEP0_INLINE1(N);
    STEP0_INLINE2(N);
  END_STEP

  ACTION STEP0_INLINE1:
    px_o:=0;py_o:=0;next:=0;
  END_ACTION

  ACTION STEP0_INLINE2:
    order_ready:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step1
    := px =1 and py =5 and machine = 1;
  END_TRANSITION

  STEP Step1:
    STEP1_INLINE3(N);
  END_STEP

  ACTION STEP1_INLINE3:
    px_o:=1;py_o:=3;next:=1;
  END_ACTION

  TRANSITION FROM Step1 TO Step39
    := ready;
  END_TRANSITION

  STEP Step39:
    STEP39_INLINE36(N);
  END_STEP

  ACTION STEP39_INLINE36:
    px_o:=3;py_o:=5;
  END_ACTION

  TRANSITION FROM Step39 TO Step2
    := not(ready);
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE4(N);
    STEP2_INLINE5(P0);
  END_STEP

  ACTION STEP2_INLINE4:
    next:=0;
  END_ACTION

  ACTION STEP2_INLINE5:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step40
    := ready ;
  END_TRANSITION

  STEP Step40:
  END_STEP

  TRANSITION FROM Step40 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step3
    := px= 2 and py=6 and machine=2;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE6(N);
  END_STEP

  ACTION STEP3_INLINE6:
    px_o:=2;py_o:=4;next:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step4
    := ready;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE7(N);
  END_STEP

  ACTION STEP4_INLINE7:
    px_o:=4;py_o:=6;
  END_ACTION

  TRANSITION FROM Step4 TO Step41
    := not(ready);
  END_TRANSITION

  STEP Step41:
    STEP41_INLINE37(N);
    STEP41_INLINE38(P0);
  END_STEP

  ACTION STEP41_INLINE37:
    next:=0;
  END_ACTION

  ACTION STEP41_INLINE38:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step41 TO Step42
    := ready;
  END_TRANSITION

  STEP Step42:
  END_STEP

  TRANSITION FROM Step42 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step5
    := px= 3 and py= 7 and machine= 1;
  END_TRANSITION

  STEP Step5:
    STEP5_INLINE8(N);
  END_STEP

  ACTION STEP5_INLINE8:
    px_o:=3;py_o:=5; next:=1;
  END_ACTION

  TRANSITION FROM Step5 TO Step37
    := ready;
  END_TRANSITION

  STEP Step37:
    STEP37_INLINE40(N);
  END_STEP

  ACTION STEP37_INLINE40:
    px_o:=5;py_o:=7;
  END_ACTION

  TRANSITION FROM Step37 TO Step6
    := not(ready);
  END_TRANSITION

  STEP Step6:
    STEP6_INLINE9(N);
    STEP6_INLINE10(P0);
  END_STEP

  ACTION STEP6_INLINE9:
    next:=0;
  END_ACTION

  ACTION STEP6_INLINE10:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step6 TO Step38
    := ready;
  END_TRANSITION

  STEP Step38:
  END_STEP

  TRANSITION FROM Step38 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step7
    := px=1 and py=7 and machine=1;
  END_TRANSITION

  STEP Step7:
    STEP7_INLINE11(N);
  END_STEP

  ACTION STEP7_INLINE11:
    px_o:=1;py_o:=3;next:=1;
  END_ACTION

  TRANSITION FROM Step7 TO Step36
    := ready;
  END_TRANSITION

  STEP Step36:
    STEP36_INLINE39(N);
  END_STEP

  ACTION STEP36_INLINE39:
    px_o:=3;py_o:=5;
  END_ACTION

  TRANSITION FROM Step36 TO Step5
    := not(ready);
  END_TRANSITION

  TRANSITION FROM Step0 TO Step13
    := px= 4 and py=8  and machine=2;
  END_TRANSITION

  STEP Step13:
    STEP13_INLINE12(N);
  END_STEP

  ACTION STEP13_INLINE12:
    px_o:=4;py_o:=6;next:=1;
  END_ACTION

  TRANSITION FROM Step13 TO Step8
    := ready;
  END_TRANSITION

  STEP Step8:
    STEP8_INLINE41(N);
  END_STEP

  ACTION STEP8_INLINE41:
    px_o:=6;py_o:=8;
  END_ACTION

  TRANSITION FROM Step8 TO Step14
    := not(ready);
  END_TRANSITION

  STEP Step14:
    STEP14_INLINE13(N);
    STEP14_INLINE14(P0);
  END_STEP

  ACTION STEP14_INLINE13:
    next:=0;
  END_ACTION

  ACTION STEP14_INLINE14:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step14 TO Step9
    := ready;
  END_TRANSITION

  STEP Step9:
  END_STEP

  TRANSITION FROM Step9 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step15
    := px=2 and py=8 and machine=2;
  END_TRANSITION

  STEP Step15:
    STEP15_INLINE15(N);
  END_STEP

  ACTION STEP15_INLINE15:
    px_o:=2;py_o:=4;next:=1;
  END_ACTION

  TRANSITION FROM Step15 TO Step10
    := ready;
  END_TRANSITION

  STEP Step10:
    STEP10_INLINE42(N);
  END_STEP

  ACTION STEP10_INLINE42:
    px_o:=4;py_o:=6;
  END_ACTION

  TRANSITION FROM Step10 TO Step13
    := not(ready);
  END_TRANSITION

  TRANSITION FROM Step0 TO Step25
    := px=1 and py=3 and machine=1;
  END_TRANSITION

  STEP Step25:
    STEP25_INLINE16(N);
    STEP25_INLINE17(P0);
  END_STEP

  ACTION STEP25_INLINE16:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP25_INLINE17:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step25 TO Step16
    := ready;
  END_TRANSITION

  STEP Step16:
  END_STEP

  TRANSITION FROM Step16 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step26
    := px=3 and py=5 and machine=1;
  END_TRANSITION

  STEP Step26:
    STEP26_INLINE18(N);
    STEP26_INLINE19(P0);
  END_STEP

  ACTION STEP26_INLINE18:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP26_INLINE19:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step26 TO Step17
    := ready;
  END_TRANSITION

  STEP Step17:
  END_STEP

  TRANSITION FROM Step17 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step28
    := px=5 and py=7 and machine=1;
  END_TRANSITION

  STEP Step28:
    STEP28_INLINE20(N);
    STEP28_INLINE21(P0);
  END_STEP

  ACTION STEP28_INLINE20:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP28_INLINE21:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step28 TO Step18
    := ready;
  END_TRANSITION

  STEP Step18:
  END_STEP

  TRANSITION FROM Step18 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step29
    := px=2 and py=4 and machine=2;
  END_TRANSITION

  STEP Step29:
    STEP29_INLINE22(N);
    STEP29_INLINE23(P0);
  END_STEP

  ACTION STEP29_INLINE22:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP29_INLINE23:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step29 TO Step19
    := ready;
  END_TRANSITION

  STEP Step19:
  END_STEP

  TRANSITION FROM Step19 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step30
    := px=4 and py=6 and machine=2;
  END_TRANSITION

  STEP Step30:
    STEP30_INLINE24(N);
    STEP30_INLINE25(P0);
  END_STEP

  ACTION STEP30_INLINE24:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP30_INLINE25:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step30 TO Step20
    := ready;
  END_TRANSITION

  STEP Step20:
  END_STEP

  TRANSITION FROM Step20 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step31
    := px=6 and py=8 and machine=2;
  END_TRANSITION

  STEP Step31:
    STEP31_INLINE26(N);
    STEP31_INLINE27(P0);
  END_STEP

  ACTION STEP31_INLINE26:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP31_INLINE27:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step31 TO Step21
    := ready;
  END_TRANSITION

  STEP Step21:
  END_STEP

  TRANSITION FROM Step21 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step32
    := px=7 and py=8 and machine = 3;
  END_TRANSITION

  STEP Step32:
    STEP32_INLINE28(N);
    STEP32_INLINE29(P0);
  END_STEP

  ACTION STEP32_INLINE28:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP32_INLINE29:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step32 TO Step22
    := ready;
  END_TRANSITION

  STEP Step22:
  END_STEP

  TRANSITION FROM Step22 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step33
    := px=8 and py=7 and machine = 3;
  END_TRANSITION

  STEP Step33:
    STEP33_INLINE30(N);
    STEP33_INLINE31(P0);
  END_STEP

  ACTION STEP33_INLINE30:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP33_INLINE31:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step33 TO Step23
    := ready;
  END_TRANSITION

  STEP Step23:
  END_STEP

  TRANSITION FROM Step23 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step34
    := px=7 and py=9 and machine = 3;
  END_TRANSITION

  STEP Step34:
    STEP34_INLINE32(N);
    STEP34_INLINE33(P0);
  END_STEP

  ACTION STEP34_INLINE32:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP34_INLINE33:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step34 TO Step24
    := ready;
  END_TRANSITION

  STEP Step24:
  END_STEP

  TRANSITION FROM Step24 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step35
    := px=8 and py=9 and machine = 3;
  END_TRANSITION

  STEP Step35:
    STEP35_INLINE34(N);
    STEP35_INLINE35(P0);
  END_STEP

  ACTION STEP35_INLINE34:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP35_INLINE35:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step35 TO Step27
    := ready;
  END_TRANSITION

  STEP Step27:
  END_STEP

  TRANSITION FROM Step27 TO Step0
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step11
    := px= 10 and py= 10 ;
  END_TRANSITION

  STEP Step11:
    STEP11_INLINE43(N);
    STEP11_INLINE44(P0);
  END_STEP

  ACTION STEP11_INLINE43:
    px_o:=px;py_o:=py;
  END_ACTION

  ACTION STEP11_INLINE44:
    order_ready:=1;
  END_ACTION

  TRANSITION FROM Step11 TO Step12
    := ready;
  END_TRANSITION

  STEP Step12:
  END_STEP

  TRANSITION FROM Step12 TO Step0
    := px=0 and py=0;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Tapete_Linear
  VAR_INPUT
    p : BOOL;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
    move_p : BOOL;
  END_VAR
  VAR_INPUT
    free_i : BOOL;
  END_VAR
  VAR_OUTPUT
    free_o : BOOL;
  END_VAR
  VAR_INPUT
    receiv : BOOL;
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
  END_VAR

  INITIAL_STEP Step1:
    STEP1_INLINE1(N);
  END_STEP

  ACTION STEP1_INLINE1:
    move_p:=0; take:=0; free_o:=1; rout:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step3
    := p;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE3(N);
  END_STEP

  ACTION STEP3_INLINE3:
    move_p:=0; rout:=0;
  END_ACTION

  TRANSITION FROM Step3 TO Step1
    := NOT(p);
  END_TRANSITION

  TRANSITION FROM Step3 TO Step2
    := free_i;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE5(N);
  END_STEP

  ACTION STEP2_INLINE5:
    take:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step4
    := rin;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE4(N);
  END_STEP

  ACTION STEP4_INLINE4:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step4 TO Step1
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step1 TO Step0
    := receiv;
  END_TRANSITION

  STEP Step0:
    STEP0_INLINE2(N);
  END_STEP

  ACTION STEP0_INLINE2:
    move_p:=1;rout:=1;free_o:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step3
    := p;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Tapete_Rotativo
  VAR_INPUT
    p : BOOL;
  END_VAR
  VAR
    aux : INT;
  END_VAR
  VAR_INPUT
    recive_vet : BOOL;
    recive_hor : BOOL;
    free_i1 : BOOL;
    free_i2 : BOOL;
    horiz : BOOL;
    vert : BOOL;
  END_VAR
  VAR_OUTPUT
    turn_h : BOOL;
    turn_v : BOOL;
    move_p : BOOL;
    free_o : BOOL;
    take : BOOL;
  END_VAR
  VAR_INPUT
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
    move_n : BOOL;
  END_VAR
  VAR_INPUT
    destino : WORD;
    rin2 : BOOL;
  END_VAR
  VAR_OUTPUT
    ctake : BOOL;
  END_VAR
  VAR_INPUT
    recive_hor2 : BOOL;
  END_VAR
  VAR_OUTPUT
    free_o2 : BOOL;
    rout2 : BOOL;
  END_VAR
  VAR_INPUT
    roboreceiv : BOOL;
  END_VAR
  VAR_OUTPUT
    frerobo : BOOL;
    routrobo : BOOL;
  END_VAR
  VAR_INPUT
    recive_vet2 : BOOL;
  END_VAR

  INITIAL_STEP Step0:
    STEP0_INLINE2(N);
    STEP0_INLINE3(N);
    STEP0_INLINE4(N);
  END_STEP

  ACTION STEP0_INLINE2:
    move_p:=0;take:=0; turn_v:=0;turn_h:=0;free_o:=1; rout:=0; ctake:=0; free_o2:=1; rout2:=0;
  END_ACTION

  ACTION STEP0_INLINE3:
    frerobo:=1; routrobo:=0;
  END_ACTION

  ACTION STEP0_INLINE4:
    aux:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step15
    := recive_vet ;
  END_TRANSITION

  STEP Step15:
    STEP15_INLINE13(N);
  END_STEP

  ACTION STEP15_INLINE13:
    move_p:=1; rout:=1;free_o:=0;
  END_ACTION

  TRANSITION FROM Step15 TO Step3
    := p;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE14(N);
  END_STEP

  ACTION STEP3_INLINE14:
    move_p:=0; rout:=0;  
  END_ACTION

  TRANSITION FROM Step3 TO Step16
    := destino=1;
  END_TRANSITION

  STEP Step16:
  END_STEP

  TRANSITION FROM Step16 TO Step17
    := free_i2;
  END_TRANSITION

  STEP Step17:
    STEP17_INLINE15(N);
  END_STEP

  ACTION STEP17_INLINE15:
    ctake:=1;
  END_ACTION

  TRANSITION FROM Step17 TO Step18
    := rin2;
  END_TRANSITION

  STEP Step18:
    STEP18_INLINE16(N);
    STEP18_INLINE17(N);
  END_STEP

  ACTION STEP18_INLINE16:
    Move_p:=1;
  END_ACTION

  ACTION STEP18_INLINE17:
    ctake:=0;
  END_ACTION

  TRANSITION FROM Step18 TO Step24
    := NOT rin2;
  END_TRANSITION

  STEP Step24:
    STEP24_INLINE22(N);
  END_STEP

  ACTION STEP24_INLINE22:
    Move_p:=0;rout:=0;
  END_ACTION

  TRANSITION FROM Step24 TO Step0
    := destino=2;
  END_TRANSITION

  TRANSITION FROM Step3 TO Step4
    := destino=0;
  END_TRANSITION

  STEP Step4:
  END_STEP

  TRANSITION FROM Step4 TO Step6
    := aux=0;
  END_TRANSITION

  STEP Step6:
    turn_h(N);
    STEP6_INLINE5(N);
  END_STEP

  ACTION STEP6_INLINE5:
    aux:=3;
  END_ACTION

  TRANSITION FROM Step6 TO Step5
    := horiz;
  END_TRANSITION

  STEP Step5:
  END_STEP

  TRANSITION FROM Step5 TO Step13
    := free_i1;
  END_TRANSITION

  STEP Step13:
    STEP13_INLINE8(N);
  END_STEP

  ACTION STEP13_INLINE8:
    take:=1;
  END_ACTION

  TRANSITION FROM Step13 TO Step10
    := rin;
  END_TRANSITION

  STEP Step10:
    move_p(N);
    STEP10_INLINE11(N);
  END_STEP

  ACTION STEP10_INLINE11:
    take:=0;
  END_ACTION

  TRANSITION FROM Step10 TO Step12
    := not rin;
  END_TRANSITION

  STEP Step12:
    turn_v(N);
  END_STEP

  TRANSITION FROM Step12 TO Step23
    := vert;
  END_TRANSITION

  STEP Step23:
  END_STEP

  TRANSITION FROM Step23 TO Step0
    := destino=2;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step25
    := roboreceiv;
  END_TRANSITION

  STEP Step25:
    STEP25_INLINE23(N);
  END_STEP

  ACTION STEP25_INLINE23:
    frerobo:=0; routrobo:=true;
  END_ACTION

  TRANSITION FROM Step25 TO Step26
    := p;
  END_TRANSITION

  STEP Step26:
    STEP26_INLINE24(N);
  END_STEP

  ACTION STEP26_INLINE24:
     routrobo:=false;
  END_ACTION

  TRANSITION FROM Step26 TO Step16
    := destino=1;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step2
    := recive_hor;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE1(N);
    turn_h(N);
  END_STEP

  ACTION STEP2_INLINE1:
    aux:=1; 
  END_ACTION

  TRANSITION FROM Step2 TO Step1
    := horiz;
  END_TRANSITION

  STEP Step1:
    STEP1_INLINE10(N);
  END_STEP

  ACTION STEP1_INLINE10:
    move_p:=1; rout:=1;free_o:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step9
    := p;
  END_TRANSITION

  STEP Step9:
    STEP9_INLINE9(N);
  END_STEP

  ACTION STEP9_INLINE9:
    move_p:=0; rout:=0; 
  END_ACTION

  TRANSITION FROM Step9 TO Step7
    := aux=1;
  END_TRANSITION

  STEP Step7:
    turn_v(N);
    STEP7_INLINE6(N);
  END_STEP

  ACTION STEP7_INLINE6:
    aux:=3;
  END_ACTION

  TRANSITION FROM Step7 TO Step8
    := vert;
  END_TRANSITION

  STEP Step8:
  END_STEP

  TRANSITION FROM Step8 TO Step11
    := free_i1;
  END_TRANSITION

  STEP Step11:
    STEP11_INLINE7(N);
  END_STEP

  ACTION STEP11_INLINE7:
    take:=1;
  END_ACTION

  TRANSITION FROM Step11 TO Step14
    := rin;
  END_TRANSITION

  STEP Step14:
    move_n(N);
    STEP14_INLINE12(N);
  END_STEP

  ACTION STEP14_INLINE12:
    take:=0;
  END_ACTION

  TRANSITION FROM Step14 TO Step0
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step19
    := recive_hor2 and (not recive_hor);
  END_TRANSITION

  STEP Step19:
    STEP19_INLINE19(N);
  END_STEP

  ACTION STEP19_INLINE19:
    move_n:=1; rout2:=1;free_o2:=0;
  END_ACTION

  TRANSITION FROM Step19 TO Step20
    := p;
  END_TRANSITION

  STEP Step20:
    STEP20_INLINE18(N);
  END_STEP

  ACTION STEP20_INLINE18:
    move_n:=0; rout2:=0; 
  END_ACTION

  TRANSITION FROM Step20 TO Step21
    := free_i1;
  END_TRANSITION

  STEP Step21:
    STEP21_INLINE21(N);
  END_STEP

  ACTION STEP21_INLINE21:
    take:=1;
  END_ACTION

  TRANSITION FROM Step21 TO Step22
    := rin;
  END_TRANSITION

  STEP Step22:
    move_n(N);
    STEP22_INLINE20(N);
  END_STEP

  ACTION STEP22_INLINE20:
    take:=0;
  END_ACTION

  TRANSITION FROM Step22 TO Step0
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step0 TO Step27
    := recive_vet2 and (not recive_vet);
  END_TRANSITION

  STEP Step27:
    STEP27_INLINE25(N);
  END_STEP

  ACTION STEP27_INLINE25:
    move_n:=1;rout2:=1;free_o2:=1;
  END_ACTION

  TRANSITION FROM Step27 TO Step28
    := p;
  END_TRANSITION

  STEP Step28:
    STEP28_INLINE26(N);
    turn_h(N);
  END_STEP

  ACTION STEP28_INLINE26:
    move_n:=0; rout2:=0;
  END_ACTION

  TRANSITION FROM Step28 TO Step31
    := horiz;
  END_TRANSITION

  STEP Step31:
  END_STEP

  TRANSITION FROM Step31 TO Step29
    := free_i1;
  END_TRANSITION

  STEP Step29:
    STEP29_INLINE27(N);
  END_STEP

  ACTION STEP29_INLINE27:
    take:=1;
  END_ACTION

  TRANSITION FROM Step29 TO Step30
    := rin;
  END_TRANSITION

  STEP Step30:
    move_p(N);
    STEP30_INLINE28(N);
  END_STEP

  ACTION STEP30_INLINE28:
    take:=0;
  END_ACTION

  TRANSITION FROM Step30 TO Step32
    := not rin;
  END_TRANSITION

  STEP Step32:
    turn_v(N);
  END_STEP

  TRANSITION FROM Step32 TO Step33
    := vert;
  END_TRANSITION

  STEP Step33:
  END_STEP

  TRANSITION FROM Step33 TO Step0
    := destino=2;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Maquina
  VAR_INPUT
    p : BOOL;
    px : WORD;
    py : WORD;
    p_tool : BOOL;
    ypos : BOOL;
    zpos : BOOL;
    yneg : BOOL;
    zneg : BOOL;
    receiv : BOOL;
  END_VAR
  VAR
    timer : TIME;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
  END_VAR
  VAR
    tool : INT := 0;
  END_VAR
  VAR_INPUT
    machine : INT;
  END_VAR
  VAR
    curr_tool : INT := 1;
  END_VAR
  VAR_INPUT
    free_i : BOOL;
  END_VAR
  VAR_OUTPUT
    move_ny : BOOL;
    move_py : BOOL;
    move_nz : BOOL;
    move_pz : BOOL;
    toolc_p : BOOL;
    toolc_n : BOOL;
    move_p : BOOL;
    toolr : BOOL;
    free_o : BOOL;
  END_VAR
  VAR
    tool_ready : BOOL;
    ready : BOOL;
  END_VAR
  VAR_INPUT
    dest : BOOL;
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
  END_VAR
  VAR
    stop : BOOL;
  END_VAR
  VAR_INPUT
    next : BOOL;
  END_VAR
  VAR_OUTPUT
    ready_o : BOOL;
  END_VAR
  VAR
    offset : BOOL;
  END_VAR
  VAR_OUTPUT
    maqlivre : BOOL;
  END_VAR

  INITIAL_STEP Step1:
    STEP1_INLINE1(N);
    STEP1_INLINE2(N);
    STEP1_INLINE3(N);
    STEP1_INLINE4(N);
  END_STEP

  ACTION STEP1_INLINE1:
    toolc_p:=0;toolr:=0;free_o:=1;rout:=0;take:=0;
  END_ACTION

  ACTION STEP1_INLINE2:
    tool_ready:=0;offset:=0;
  END_ACTION

  ACTION STEP1_INLINE3:
    move_p:=0;move_nz :=0;move_pz:=0;move_py:=0;move_ny:=0;
  END_ACTION

  ACTION STEP1_INLINE4:
    stop:=1;ready:=0;ready_o:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step0
    := receiv;
  END_TRANSITION

  STEP Step0:
    STEP0_INLINE5(N);
  END_STEP

  ACTION STEP0_INLINE5:
    move_p:=1;rout:=1;free_o:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step12
    := p;
  END_TRANSITION

  STEP Step12:
    STEP12_INLINE15(N);
  END_STEP

  ACTION STEP12_INLINE15:
    move_p:=0;rout:=0;
  END_ACTION

  TRANSITION FROM Step12 TO Step2
    := px>0 and py>0 and px<10 and py<10;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE6(N);
  END_STEP

  ACTION STEP2_INLINE6:
    move_ny:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step16
    := yneg;
  END_TRANSITION

  STEP Step16:
    STEP16_INLINE19(N);
    STEP16_INLINE20(P1);
    STEP16_INLINE21(P1);
    mach_ctrl(N);
  END_STEP

  ACTION STEP16_INLINE19:
    move_ny:=0;
  END_ACTION

  ACTION STEP16_INLINE20:
    ready:=0;
  END_ACTION

  ACTION STEP16_INLINE21:
    ready_o:=0;
  END_ACTION

  ACTION mach_ctrl:
    IF( px = 1 AND py = 3 AND machine = 1) THEN
      tool:=1;
      timer:=t#5s;
    ELSIF (px =2 AND py = 4 AND machine = 2) THEN
      tool:=1;
      timer:=t#10s;
    ELSIF ( px = 3 AND py = 5 AND machine = 1) THEN
      tool:=2;
      timer:=t#10s;
    ELSIF ( px = 4 AND py = 6 AND machine = 2) THEN
      tool:=2;
      timer:=t#5s;
    ELSIF ( px = 5 AND py = 7 AND machine = 1) THEN
      tool:=3;
      timer:=t#5s;
    ELSIF ( px = 8 AND py = 7 AND machine = 3) THEN
      tool:=2;
      timer:=t#20s;
    ELSIF ( px = 6 AND py = 8 AND machine = 2) THEN
      tool:=3;
      timer:=t#5s;
    ELSIF ( px = 7 AND py = 8 AND machine = 3) THEN
      tool:=1;
      timer:=t#20s;
    ELSIF ( px = 7 AND py = 9 AND machine = 3) THEN
      tool:=3;
      timer:=t#20s;
    ELSIF ( px = 8 AND py = 9 AND machine = 3) THEN
      tool:=3;
      timer:=t#20s;
      END_IF;  
      
    stop:= false;
  END_ACTION

  TRANSITION FROM Step16 TO Step3
    := NOT(stop);
  END_TRANSITION

  STEP Step3:
    move_nz(N);
    STEP3_INLINE7(P1);
  END_STEP

  ACTION STEP3_INLINE7:
    stop:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step5
    := zneg;
  END_TRANSITION

  STEP Step5:
    STEP5_INLINE13(N);
    tool_ctrl(P1);
  END_STEP

  ACTION STEP5_INLINE13:
    move_nz:=0;
  END_ACTION

  ACTION tool_ctrl:
    IF curr_tool > tool THEN
        toolc_n:=1;
        curr_tool:=curr_tool - 1;
    ELSIF curr_tool < tool THEN
      toolc_p:=1;
      curr_tool:=curr_tool +1;
    ELSIF curr_tool = tool THEN
      tool_ready:=true;
    END_IF;


  END_ACTION

  TRANSITION FROM Step5 TO Step15
    := not(p_tool) OR tool_ready;
  END_TRANSITION

  STEP Step15:
  END_STEP

  TRANSITION FROM Step15 TO Step5
    := p_tool and not(tool_ready);
  END_TRANSITION

  TRANSITION FROM Step15 TO Step4
    := p_tool and tool_ready ;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE8(P1);
    STEP4_INLINE9(P1);
    toolr(L, timer);
    STEP4_INLINE10(D, timer);
  END_STEP

  ACTION STEP4_INLINE8:
    tool_ready:=0;
  END_ACTION

  ACTION STEP4_INLINE9:
    toolc_n:=0;toolc_p:=0;
  END_ACTION

  ACTION STEP4_INLINE10:
    ready:=1;ready_o:=1;
  END_ACTION

  TRANSITION FROM Step4 TO Step16
    := ready and next;
  END_TRANSITION

  TRANSITION FROM Step4 TO Step7
    := ready and not(next);
  END_TRANSITION

  STEP Step7:
    move_pz(N);
    STEP7_INLINE11(N);
  END_STEP

  ACTION STEP7_INLINE11:
    ready_o:=0;
  END_ACTION

  TRANSITION FROM Step7 TO Step6
    := zpos;
  END_TRANSITION

  STEP Step6:
    move_py(N);
  END_STEP

  TRANSITION FROM Step6 TO Step8
    := ypos;
  END_TRANSITION

  STEP Step8:
  END_STEP

  TRANSITION FROM Step8 TO Step10
    := free_i;
  END_TRANSITION

  STEP Step10:
    STEP10_INLINE14(N);
  END_STEP

  ACTION STEP10_INLINE14:
    take:=1;
  END_ACTION

  TRANSITION FROM Step10 TO Step9
    := rin;
  END_TRANSITION

  STEP Step9:
    STEP9_INLINE12(N);
  END_STEP

  ACTION STEP9_INLINE12:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step9 TO Step18
    := not rin;
  END_TRANSITION

  STEP Step18:
    STEP18_INLINE24(N);
  END_STEP

  ACTION STEP18_INLINE24:
    move_p:=0;
  END_ACTION

  TRANSITION FROM Step18 TO Step1
    := px=0 and py=0;
  END_TRANSITION

  TRANSITION FROM Step12 TO Step11
    := py=10 and px=10;
  END_TRANSITION

  STEP Step11:
  END_STEP

  TRANSITION FROM Step11 TO Step14
    := free_i;
  END_TRANSITION

  STEP Step14:
    STEP14_INLINE16(N);
    STEP14_INLINE17(N);
  END_STEP

  ACTION STEP14_INLINE16:
    take:=1;
  END_ACTION

  ACTION STEP14_INLINE17:
    maqlivre:=1;
  END_ACTION

  TRANSITION FROM Step14 TO Step13
    := rin;
  END_TRANSITION

  STEP Step13:
    STEP13_INLINE18(N);
  END_STEP

  ACTION STEP13_INLINE18:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step13 TO Step17
    := not rin;
  END_TRANSITION

  STEP Step17:
    STEP17_INLINE22(N);
    STEP17_INLINE23(N);
  END_STEP

  ACTION STEP17_INLINE22:
    move_p:=0;
  END_ACTION

  ACTION STEP17_INLINE23:
    ready_o:=1;
  END_ACTION

  TRANSITION FROM Step17 TO Step1
    := px=0 and py=0;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Celula
  VAR
    Tapete_Linear0 : Tapete_Linear;
  END_VAR
  VAR_INPUT
    sp1 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap1 : BOOL;
  END_VAR
  VAR_INPUT
    sp2 : BOOL;
    sh2 : BOOL;
    sv2 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap2 : BOOL;
    ah2 : BOOL;
    av2 : BOOL;
  END_VAR
  VAR
    Tapete_Rotativo0 : Tapete_Rotativo;
  END_VAR
  VAR_INPUT
    sp3 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap3 : BOOL;
  END_VAR
  VAR
    Maquina0 : Maquina;
  END_VAR
  VAR_INPUT
    st3 : BOOL;
    sxp3 : BOOL;
    sxn3 : BOOL;
    szp3 : BOOL;
    szn3 : BOOL;
  END_VAR
  VAR
    Tapete_Linear1 : Tapete_Linear;
  END_VAR
  VAR_OUTPUT
    arp3 : BOOL;
    arn3 : BOOL;
    axn3 : BOOL;
    azn3 : BOOL;
    axp3 : BOOL;
    azp3 : BOOL;
    atool3 : BOOL;
  END_VAR
  VAR_INPUT
    destino : BOOL;
  END_VAR
  VAR
    Maquina1 : Maquina;
  END_VAR
  VAR_INPUT
    sp4 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap4 : BOOL;
  END_VAR
  VAR_INPUT
    st5 : BOOL;
    sxp5 : BOOL;
    szp5 : BOOL;
    sxn5 : BOOL;
    szn5 : BOOL;
    sp5 : BOOL;
  END_VAR
  VAR_OUTPUT
    axn5 : BOOL;
    atool5 : BOOL;
    axp5 : BOOL;
    azp5 : BOOL;
    azn5 : BOOL;
    ap5 : BOOL;
    an6 : BOOL;
    arp5 : BOOL;
    arn5 : BOOL;
  END_VAR
  VAR
    Tapete_Rotativo1 : Tapete_Rotativo;
  END_VAR
  VAR_INPUT
    sp6 : BOOL;
    sh6 : BOOL;
    sv6 : BOOL;
  END_VAR
  VAR_OUTPUT
    ah6 : BOOL;
    av6 : BOOL;
    ap6 : BOOL;
  END_VAR
  VAR
    Tapete_Linear2 : Tapete_Linear;
  END_VAR
  VAR_INPUT
    sp7 : BOOL;
  END_VAR
  VAR_OUTPUT
    av7 : BOOL;
  END_VAR
  VAR_INPUT
    creceiv : BOOL;
  END_VAR
  VAR_OUTPUT
    cfree_o : BOOL;
    crout : BOOL;
  END_VAR
  VAR_INPUT
    cfree_i2 : BOOL;
    dest : WORD;
  END_VAR
  VAR_OUTPUT
    ctake : BOOL;
  END_VAR
  VAR_INPUT
    crin : BOOL;
    crecivb : BOOL;
  END_VAR
  VAR_OUTPUT
    ctakeb : BOOL;
    cfree_ob : BOOL;
    croub : BOOL;
  END_VAR
  VAR_INPUT
    crinb : BOOL;
    cfree_ib : BOOL;
    px : WORD;
    py : WORD;
    px2 : WORD;
    py2 : WORD;
    machine1 : INT;
    machine2 : INT;
  END_VAR
  VAR
    SFC_LowDecision0 : SFC_LowDecision;
    SFC_LowDecision1 : SFC_LowDecision;
  END_VAR
  VAR_OUTPUT
    maqlivre1 : BOOL;
    maqlivre2 : BOOL;
  END_VAR

  Tapete_Linear0(p := sp1, free_i := Tapete_Rotativo0.free_o, receiv := creceiv, rin := Tapete_Rotativo0.rout);
  SFC_LowDecision1(px := px, py := py, machine := machine1, ready := Maquina0.ready_o);
  SFC_LowDecision0(px := px2, py := py2, machine := machine2, ready := Maquina1.ready_o);
  Tapete_Linear2(p := sp7, free_i := cfree_ib, receiv := Tapete_Rotativo1.take, rin := crinb);
  Tapete_Rotativo1(p := sp6, recive_hor := Maquina1.take, free_i1 := Tapete_Linear2.free_o, horiz := sh6, vert := sv6, rin := Tapete_Linear2.rout, recive_hor2 := crecivb);
  Maquina1(p := sp5, px := SFC_LowDecision0.px_o, py := SFC_LowDecision0.py_o, p_tool := st5, ypos := sxp5, zpos := szp5, yneg := sxn5, zneg := szn5, receiv := Tapete_Linear1.take, machine := machine2, free_i := Tapete_Rotativo1.free_o, dest := destino, rin := Tapete_Rotativo1.rout, next := SFC_LowDecision0.next);
  Tapete_Linear1(p := sp4, free_i := Maquina1.free_o, receiv := Maquina0.take, rin := Maquina1.rout);
  Maquina0(p := sp3, px := SFC_LowDecision1.px_o, py := SFC_LowDecision1.py_o, p_tool := st3, ypos := sxp3, zpos := szp3, yneg := sxn3, zneg := szn3, receiv := Tapete_Rotativo0.take, machine := machine1, free_i := Tapete_Linear1.free_o, dest := destino, rin := Tapete_Linear1.rout, next := SFC_LowDecision1.next);
  Tapete_Rotativo0(p := sp2, recive_vet := Tapete_Linear0.take, free_i1 := Maquina0.free_o, free_i2 := cfree_i2, horiz := sh2, vert := sv2, rin := Maquina0.rout, destino := dest, rin2 := crin);
  ah2 := Tapete_Rotativo0.turn_h;
  av6 := Tapete_Rotativo1.turn_h;
  ctakeb := Tapete_Linear2.take;
  axn3 := Maquina0.move_ny;
  av2 := Tapete_Rotativo0.turn_v;
  ap4 := Tapete_Linear1.move_p;
  axn5 := Maquina1.move_ny;
  axp3 := Maquina0.move_py;
  axp5 := Maquina1.move_py;
  ah6 := Tapete_Rotativo1.turn_v;
  av7 := Tapete_Linear2.move_p;
  ap1 := Tapete_Linear0.move_p;
  azp5 := Maquina1.move_nz;
  azn3 := Maquina0.move_nz;
  ap6 := Tapete_Rotativo1.move_p;
  cfree_o := Tapete_Linear0.free_o;
  ap2 := Tapete_Rotativo0.move_p;
  azp3 := Maquina0.move_pz;
  azn5 := Maquina1.move_pz;
  arn3 := Maquina0.toolc_n;
  arp3 := Maquina0.toolc_p;
  arp5 := Maquina1.toolc_p;
  arn5 := Maquina1.toolc_n;
  ap3 := Maquina0.move_p;
  ap5 := Maquina1.move_p;
  an6 := Tapete_Rotativo1.move_n;
  crout := Tapete_Linear0.rout;
  atool5 := Maquina1.toolr;
  atool3 := Maquina0.toolr;
  cfree_ob := Tapete_Rotativo1.free_o2;
  ctake := Tapete_Rotativo0.ctake;
  croub := Tapete_Rotativo1.rout2;
END_FUNCTION_BLOCK

FUNCTION_BLOCK Armazemsfx
  VAR_INPUT
    tapetein : BOOL;
    ordemin : BOOL;
    tapeteoutfree : BOOL;
  END_VAR
  VAR_OUTPUT
    tapetestore : BOOL;
    pecaadd : WORD;
  END_VAR
  VAR_INPUT
    ordem : WORD;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
  END_VAR
  VAR_INPUT
    receiv : BOOL;
  END_VAR
  VAR
    aux : BOOL;
    aux2 : BOOL;
  END_VAR
  VAR_INPUT
    inarm : BOOL;
  END_VAR
  VAR_OUTPUT
    outarm : BOOL;
  END_VAR

  INITIAL_STEP Step0:
    STEP0_INLINE3(P1);
    STEP0_INLINE4(N);
    STEP0_INLINE5(N);
    STEP0_INLINE6(N);
    STEP0_INLINE7(P1);
  END_STEP

  ACTION STEP0_INLINE3:
    pecaadd:=0;
  END_ACTION

  ACTION STEP0_INLINE4:
    aux2:=false;
  END_ACTION

  ACTION STEP0_INLINE5:
    receiv:=0;
  END_ACTION

  ACTION STEP0_INLINE6:
    take:=0;
  END_ACTION

  ACTION STEP0_INLINE7:
    tapetestore:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step3
    := tapetein;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE1(P1);
    STEP3_INLINE2(N);
  END_STEP

  ACTION STEP3_INLINE1:
    tapetestore:=1;
  END_ACTION

  ACTION STEP3_INLINE2:
    receiv:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step0
    := not (tapetein);
  END_TRANSITION

  TRANSITION FROM Step0 TO Step1
    := aux;
  END_TRANSITION

  STEP Step1:
  END_STEP

  TRANSITION FROM Step1 TO Step3
    := tapetein;
  END_TRANSITION

  TRANSITION FROM Step1 TO Step2
    := not(tapeteoutfree);
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE8(P1);
    STEP2_INLINE9(N);
  END_STEP

  ACTION STEP2_INLINE8:
    pecaadd:=ordem;
  END_ACTION

  ACTION STEP2_INLINE9:
    aux2:=true;
  END_ACTION

  TRANSITION FROM Step2 TO Step8
    := tapeteoutfree;
  END_TRANSITION

  STEP Step8:
    STEP8_INLINE14(N);
  END_STEP

  ACTION STEP8_INLINE14:
    outarm:=true;
  END_ACTION

  TRANSITION FROM Step8 TO Step4
    := inarm;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE10(P1);
  END_STEP

  ACTION STEP4_INLINE10:
    take:=1;outarm:=false;
  END_ACTION

  TRANSITION FROM Step4 TO Step0
    := 1;
  END_TRANSITION

  INITIAL_STEP Step5:
    STEP5_INLINE12(N);
  END_STEP

  ACTION STEP5_INLINE12:
    aux:=false;
  END_ACTION

  TRANSITION FROM Step5 TO Step6
    := ordemin;
  END_TRANSITION

  STEP Step6:
    STEP6_INLINE11(N);
  END_STEP

  ACTION STEP6_INLINE11:
    aux:=true;
  END_ACTION

  TRANSITION FROM Step6 TO Step7
    := aux2;
  END_TRANSITION

  STEP Step7:
    STEP7_INLINE13(N);
  END_STEP

  ACTION STEP7_INLINE13:
    aux:=false;
  END_ACTION

  TRANSITION FROM Step7 TO Step5
    := not ordemin;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Tapete_Arm
  VAR_INPUT
    p : BOOL;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
    move_p : BOOL;
  END_VAR
  VAR_INPUT
    free_i : BOOL;
  END_VAR
  VAR_OUTPUT
    free_o : BOOL;
  END_VAR
  VAR_INPUT
    receiv : BOOL;
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
  END_VAR
  VAR_INPUT
    reciiv2 : BOOL;
  END_VAR

  INITIAL_STEP Step1:
    STEP1_INLINE3(N);
    STEP1_INLINE4(N);
    STEP1_INLINE5(N);
    STEP1_INLINE6(N);
  END_STEP

  ACTION STEP1_INLINE3:
    move_p:=0;
  END_ACTION

  ACTION STEP1_INLINE4:
    rout:=0;
  END_ACTION

  ACTION STEP1_INLINE5:
    free_o:=1;
  END_ACTION

  ACTION STEP1_INLINE6:
    take:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step0
    := receiv;
  END_TRANSITION

  STEP Step0:
  END_STEP

  TRANSITION FROM Step0 TO Step2
    := free_i;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE2(N);
  END_STEP

  ACTION STEP2_INLINE2:
    take:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step4
    := rin;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE1(N);
  END_STEP

  ACTION STEP4_INLINE1:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step4 TO Step1
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step1 TO Step3
    := reciiv2;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE8(N);
  END_STEP

  ACTION STEP3_INLINE8:
    rout:=1;free_o:=0; move_p:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step5
    := p;
  END_TRANSITION

  STEP Step5:
    STEP5_INLINE7(N);
  END_STEP

  ACTION STEP5_INLINE7:
    move_p:=0; rout:=0;
  END_ACTION

  TRANSITION FROM Step5 TO Step1
    := not (p);
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Armazem
  VAR
    Armazemsfx0 : Armazemsfx;
  END_VAR
  VAR_INPUT
    tapetein : BOOL;
    ordemin : BOOL;
    tapeteoutfree : BOOL;
    ordem : WORD;
  END_VAR
  VAR_OUTPUT
    tapetestore : BOOL;
    pecaadd : WORD;
  END_VAR
  VAR_INPUT
    sp1 : BOOL;
  END_VAR
  VAR_OUTPUT
    a1 : BOOL;
  END_VAR
  VAR
    Tapete_Arm0 : Tapete_Arm;
  END_VAR
  VAR_OUTPUT
    ctake : BOOL;
  END_VAR
  VAR_INPUT
    crin : BOOL;
    cfree : BOOL;
  END_VAR
  VAR
    Tapete_Arm1 : Tapete_Arm;
  END_VAR
  VAR_INPUT
    sp2 : BOOL;
  END_VAR
  VAR_OUTPUT
    a2 : BOOL;
  END_VAR
  VAR_INPUT
    creceivb : BOOL;
  END_VAR
  VAR_OUTPUT
    croub : BOOL;
    cfreo_b : BOOL;
  END_VAR
  VAR_INPUT
    inarm : BOOL;
  END_VAR
  VAR_OUTPUT
    outarm : BOOL;
  END_VAR

  Tapete_Arm1(p := sp2, reciiv2 := creceivb);
  Armazemsfx0(tapetein := tapetein, ordemin := ordemin, tapeteoutfree := tapeteoutfree, ordem := ordem, receiv := Tapete_Arm1.take, inarm := inarm);
  Tapete_Arm0(p := sp1, free_i := cfree, receiv := Armazemsfx0.take, rin := crin);
  ctake := Tapete_Arm0.take;
  tapetestore := Armazemsfx0.tapetestore;
  a1 := Tapete_Arm0.move_p;
  pecaadd := Armazemsfx0.pecaadd;
  outarm := Armazemsfx0.outarm;
  a2 := Tapete_Arm1.move_p;
  croub := Tapete_Arm1.rout;
  cfreo_b := Tapete_Arm1.free_o;
END_FUNCTION_BLOCK

FUNCTION_BLOCK Intoout
  VAR_INPUT
    x1 : BOOL;
    x2 : BOOL;
    x3 : BOOL;
    x4 : BOOL;
    x5 : BOOL;
    x6 : BOOL;
    x7 : BOOL;
    x8 : BOOL;
    x9 : BOOL;
  END_VAR
  VAR_OUTPUT
    y1 : BOOL;
    y2 : BOOL;
    y3 : BOOL;
    y4 : BOOL;
    y5 : BOOL;
    y6 : BOOL;
    y7 : BOOL;
    y8 : BOOL;
    y9 : BOOL;
  END_VAR
  VAR_INPUT
    mi1 : BOOL;
    mi2 : BOOL;
    mi3 : BOOL;
    mi4 : BOOL;
    mi5 : BOOL;
    mi6 : BOOL;
  END_VAR
  VAR_OUTPUT
    mo1 : BOOL;
    mo2 : BOOL;
    mo3 : BOOL;
    mo4 : BOOL;
    mo5 : BOOL;
    mo6 : BOOL;
  END_VAR
  VAR_INPUT
    si : BOOL;
  END_VAR
  VAR_OUTPUT
    so : BOOL;
  END_VAR
  VAR_INPUT
    x10 : BOOL;
    x11 : BOOL;
    x12 : BOOL;
    x13 : BOOL;
    x14 : BOOL;
  END_VAR
  VAR_OUTPUT
    y10 : BOOL;
    y11 : BOOL;
    y12 : BOOL;
    y13 : BOOL;
    y14 : BOOL;
    y20 : BOOL;
    y21 : BOOL;
  END_VAR
  VAR_INPUT
    x20 : BOOL;
    x21 : BOOL;
  END_VAR

  y1:=x1;
  y2:=x2;
  y3:=x3;
  y4:=x4;
  y5:=x5;
  y6:=x6;
  y7:=x7;
  y8:=x8;
  y9:=x9;
  mo1:=mi1;
  mo2:=mi2;
  mo3:=mi3;
  mo4:=mi4;
  mo5:=mi5;
  mo6:=mi6;
  so:=si;
  y10:=x10;
  y11:=x11;
  y12:=x12;
  y13:=x13;
  y14:=x14;
  y20:=x20;
  y21:=x21;
END_FUNCTION_BLOCK

FUNCTION_BLOCK robot
  VAR_OUTPUT
    mxp : BOOL;
    mxn : BOOL;
    myp : BOOL;
    myn : BOOL;
    mzp : BOOL;
    mzn : BOOL;
    grab : BOOL;
  END_VAR
  VAR_INPUT
    sx0 : BOOL;
    sx1 : BOOL;
    sy0 : BOOL;
    sy1 : BOOL;
    sy2 : BOOL;
    sy3 : BOOL;
    sy4 : BOOL;
    sztop : BOOL;
    szbot : BOOL;
    piece : BOOL;
  END_VAR
  VAR
    aux : BOOL;
    aux2 : BOOL := 0;
  END_VAR
  VAR_INPUT
    s1 : BOOL := 0;
    s2 : BOOL := 0;
    s3 : BOOL := 0;
  END_VAR
  VAR_OUTPUT
    a1 : BOOL := 0;
    a2 : BOOL := 0;
    a3 : BOOL := 0;
    a4 : BOOL := 0;
    take : BOOL := 0;
    ready_o : BOOL := 0;
    free_o : BOOL := 0;
  END_VAR
  VAR_INPUT
    receiv : BOOL := 0;
    free_i : BOOL := 0;
    rout : BOOL := 0;
  END_VAR
  VAR
    aux3 : BOOL := 0;
    aux4 : BOOL := 0;
  END_VAR
  VAR_INPUT
    mespermition : BOOL := 0;
  END_VAR
  VAR_OUTPUT
    permisao : BOOL := 0;
    robotake : BOOL := 0;
  END_VAR
  VAR_INPUT
    free_rob : BOOL := 0;
    receiv_rob : BOOL := 0;
    p : BOOL := 0;
  END_VAR
  VAR_OUTPUT
    receiv_rob1 : BOOL := 0;
    auxr : BOOL := 0;
  END_VAR

  INITIAL_STEP Step0:
  END_STEP

  TRANSITION FROM Step0 TO (Step2, Step4, Step6)
    := 1;
  END_TRANSITION

  STEP Step2:
    myp(L, t#13s);
  END_STEP

  TRANSITION FROM Step2 TO Step3
    := aux;
  END_TRANSITION

  STEP Step3:
    myn(N);
  END_STEP

  TRANSITION FROM Step3 TO Step5
    := sy3;
  END_TRANSITION

  STEP Step5:
  END_STEP

  TRANSITION FROM (Step8, Step5, Step1) TO Step9
    := 1;
  END_TRANSITION

  STEP Step9:
    STEP9_INLINE2(N);
    STEP9_INLINE3(N);
    STEP9_INLINE4(N);
  END_STEP

  ACTION STEP9_INLINE2:
     take:=0; free_o:=1; ready_o:=0;
  END_ACTION

  ACTION STEP9_INLINE3:
    robotake:=0;
  END_ACTION

  ACTION STEP9_INLINE4:
    a1:=0; a2:=0; a3:=0;a4:=0; 
  END_ACTION

  TRANSITION FROM Step9 TO Step10
    := receiv;
  END_TRANSITION

  STEP Step10:
    STEP10_INLINE5(N);
    STEP10_INLINE6(N);
  END_STEP

  ACTION STEP10_INLINE5:
    ready_o:=1;free_o:=0;
  END_ACTION

  ACTION STEP10_INLINE6:
    a2:=true; a4:=true;
  END_ACTION

  TRANSITION FROM Step10 TO Step11
    := s1;
  END_TRANSITION

  STEP Step11:
    STEP11_INLINE7(N);
  END_STEP

  ACTION STEP11_INLINE7:
    ready_o:=0;
  END_ACTION

  TRANSITION FROM Step11 TO (Step12, Step17)
    := s3;
  END_TRANSITION

  STEP Step12:
    STEP12_INLINE8(N);
  END_STEP

  ACTION STEP12_INLINE8:
    a4:=false; mzn:=true;a2:=false;free_o:=1;
  END_ACTION

  TRANSITION FROM Step12 TO Step13
    := szbot;
  END_TRANSITION

  STEP Step13:
    STEP13_INLINE9(N);
  END_STEP

  ACTION STEP13_INLINE9:
     mzn:=false; grab:=true;
  END_ACTION

  TRANSITION FROM Step13 TO Step14
    := piece;
  END_TRANSITION

  STEP Step14:
    STEP14_INLINE10(N);
    aux3(D, t#5s);
  END_STEP

  ACTION STEP14_INLINE10:
     grab:=true;
  END_ACTION

  TRANSITION FROM Step14 TO Step16
    := aux3;
  END_TRANSITION

  STEP Step16:
    STEP16_INLINE13(N);
  END_STEP

  ACTION STEP16_INLINE13:
    aux3:=false; mzp:=true;
  END_ACTION

  TRANSITION FROM Step16 TO (Step15, Step23)
    := sztop;
  END_TRANSITION

  STEP Step15:
    STEP15_INLINE11(N);
    STEP15_INLINE12(N);
  END_STEP

  ACTION STEP15_INLINE11:
     mzp:=false;
  END_ACTION

  ACTION STEP15_INLINE12:
    mxn:=true;
  END_ACTION

  TRANSITION FROM Step15 TO Step21
    := sx0;
  END_TRANSITION

  STEP Step21:
    STEP21_INLINE18(N);
  END_STEP

  ACTION STEP21_INLINE18:
    mxn:=false;
  END_ACTION

  TRANSITION FROM (Step21, Step24) TO Step31
    := 1;
  END_TRANSITION

  STEP Step31:
    STEP31_INLINE27(N);
  END_STEP

  ACTION STEP31_INLINE27:
     mzn:=true;
  END_ACTION

  TRANSITION FROM Step31 TO Step25
    := szbot;
  END_TRANSITION

  STEP Step25:
    STEP25_INLINE28(N);
    aux4(D, t#1s);
  END_STEP

  ACTION STEP25_INLINE28:
    grab:=false; mzn:=false;
  END_ACTION

  TRANSITION FROM Step25 TO Step32
    := aux4;
  END_TRANSITION

  STEP Step32:
    STEP32_INLINE30(N);
  END_STEP

  ACTION STEP32_INLINE30:
     mzp:=true; aux4:=false;
  END_ACTION

  TRANSITION FROM Step32 TO Step33
    := sztop;
  END_TRANSITION

  STEP Step33:
    STEP33_INLINE29(N);
  END_STEP

  ACTION STEP33_INLINE29:
     mzp:=false;
  END_ACTION

  TRANSITION FROM Step33 TO Step34
    := not mzp;
  END_TRANSITION

  STEP Step34:
  END_STEP

  TRANSITION FROM (Step34, Step20) TO Step22
    := 1;
  END_TRANSITION

  STEP Step22:
    STEP22_INLINE21(N);
  END_STEP

  ACTION STEP22_INLINE21:
    mxp:=true;
  END_ACTION

  TRANSITION FROM Step22 TO Step26
    := sx1;
  END_TRANSITION

  STEP Step26:
    STEP26_INLINE22(N);
  END_STEP

  ACTION STEP26_INLINE22:
    mxp:=false; mzn:=true;a2:=false;
  END_ACTION

  TRANSITION FROM Step26 TO Step27
    := szbot;
  END_TRANSITION

  STEP Step27:
    STEP27_INLINE23(N);
  END_STEP

  ACTION STEP27_INLINE23:
     mzn:=false; grab:=true;
  END_ACTION

  TRANSITION FROM Step27 TO Step28
    := piece;
  END_TRANSITION

  STEP Step28:
    STEP28_INLINE24(N);
    aux3(D, t#5s);
  END_STEP

  ACTION STEP28_INLINE24:
     grab:=true;
  END_ACTION

  TRANSITION FROM Step28 TO Step29
    := aux3;
  END_TRANSITION

  STEP Step29:
    STEP29_INLINE25(N);
  END_STEP

  ACTION STEP29_INLINE25:
    aux3:=false; mzp:=true;
  END_ACTION

  TRANSITION FROM Step29 TO Step30
    := sztop;
  END_TRANSITION

  STEP Step30:
    STEP30_INLINE26(N);
  END_STEP

  ACTION STEP30_INLINE26:
    aux3:=false; mzp:=false; mxn:=true;
  END_ACTION

  TRANSITION FROM Step30 TO Step35
    := sx0;
  END_TRANSITION

  STEP Step35:
    STEP35_INLINE31(N);
  END_STEP

  ACTION STEP35_INLINE31:
    mxn:=false; mzn:=true;
  END_ACTION

  TRANSITION FROM Step35 TO Step49
    := szbot;
  END_TRANSITION

  STEP Step49:
    STEP49_INLINE42(N);
    aux4(D, t#1s);
  END_STEP

  ACTION STEP49_INLINE42:
    grab:=false; mzn:=false;
  END_ACTION

  TRANSITION FROM Step49 TO Step50
    := aux4;
  END_TRANSITION

  STEP Step50:
    STEP50_INLINE43(N);
  END_STEP

  ACTION STEP50_INLINE43:
     mzp:=true; aux4:=false;
  END_ACTION

  TRANSITION FROM Step50 TO Step48
    := sztop;
  END_TRANSITION

  STEP Step48:
    STEP48_INLINE44(N);
  END_STEP

  ACTION STEP48_INLINE44:
     mzp:=false; mzn:=true;
  END_ACTION

  TRANSITION FROM Step48 TO Step51
    := szbot;
  END_TRANSITION

  STEP Step51:
    STEP51_INLINE45(N);
  END_STEP

  ACTION STEP51_INLINE45:
     mzn:=false; grab:=true;
  END_ACTION

  TRANSITION FROM Step51 TO Step52
    := piece;
  END_TRANSITION

  STEP Step52:
    STEP52_INLINE46(N);
    aux3(D, t#5s);
  END_STEP

  ACTION STEP52_INLINE46:
     grab:=true;
  END_ACTION

  TRANSITION FROM Step52 TO Step53
    := aux3;
  END_TRANSITION

  STEP Step53:
    STEP53_INLINE47(N);
  END_STEP

  ACTION STEP53_INLINE47:
    aux3:=false; mzp:=true;
  END_ACTION

  TRANSITION FROM Step53 TO Step37
    := sztop;
  END_TRANSITION

  STEP Step37:
    STEP37_INLINE32(N);
  END_STEP

  ACTION STEP37_INLINE32:
     mzp:=false;
  END_ACTION

  TRANSITION FROM Step37 TO (Step38, Step40)
    := 1;
  END_TRANSITION

  STEP Step38:
    STEP38_INLINE33(N);
  END_STEP

  ACTION STEP38_INLINE33:
    mxp:=true;
  END_ACTION

  TRANSITION FROM Step38 TO Step39
    := sx1;
  END_TRANSITION

  STEP Step39:
    STEP39_INLINE34(N);
  END_STEP

  ACTION STEP39_INLINE34:
    mxp:=false;
  END_ACTION

  TRANSITION FROM (Step39, Step41) TO Step56
    := 1;
  END_TRANSITION

  STEP Step56:
    STEP56_INLINE51(N);
  END_STEP

  ACTION STEP56_INLINE51:
    permisao:=true;
  END_ACTION

  TRANSITION FROM Step56 TO Step36
    := mespermition;
  END_TRANSITION

  STEP Step36:
    STEP36_INLINE52(N);
  END_STEP

  ACTION STEP36_INLINE52:
    permisao:=false;
  END_ACTION

  TRANSITION FROM Step36 TO Step45
    := free_rob;
  END_TRANSITION

  STEP Step45:
    STEP45_INLINE40(N);
  END_STEP

  ACTION STEP45_INLINE40:
    robotake:=1; mzn:=true;
  END_ACTION

  TRANSITION FROM Step45 TO Step43
    := szbot;
  END_TRANSITION

  STEP Step43:
    STEP43_INLINE37(N);
    aux4(D, t#1s);
  END_STEP

  ACTION STEP43_INLINE37:
    grab:=false; mzn:=false; robotake:=0;
  END_ACTION

  TRANSITION FROM Step43 TO Step44
    := aux4;
  END_TRANSITION

  STEP Step44:
    STEP44_INLINE38(N);
    STEP44_INLINE39(N);
  END_STEP

  ACTION STEP44_INLINE38:
    aux4:=false;mzp:=true;
  END_ACTION

  ACTION STEP44_INLINE39:
    auxr:=true;
  END_ACTION

  TRANSITION FROM Step44 TO (Step42, Step54)
    := sztop;
  END_TRANSITION

  STEP Step42:
  END_STEP

  TRANSITION FROM Step42 TO Step46
    := 1;
  END_TRANSITION

  STEP Step46:
    STEP46_INLINE41(N);
  END_STEP

  ACTION STEP46_INLINE41:
    robotake:=0;
  END_ACTION

  TRANSITION FROM Step46 TO Step47
    := 1;
  END_TRANSITION

  STEP Step47:
  END_STEP

  TRANSITION FROM (Step47, Step55) TO Step9
    := 1;
  END_TRANSITION

  STEP Step54:
    STEP54_INLINE48(N);
    STEP54_INLINE49(N);
  END_STEP

  ACTION STEP54_INLINE48:
    myp:=true; mzp:=false;
  END_ACTION

  ACTION STEP54_INLINE49:
    auxr:=false;
  END_ACTION

  TRANSITION FROM Step54 TO Step55
    := sy3;
  END_TRANSITION

  STEP Step55:
    STEP55_INLINE50(N);
  END_STEP

  ACTION STEP55_INLINE50:
    myp:=false;
  END_ACTION

  STEP Step40:
    STEP40_INLINE35(N);
  END_STEP

  ACTION STEP40_INLINE35:
     myn:=true;
  END_ACTION

  TRANSITION FROM Step40 TO Step41
    := sy0;
  END_TRANSITION

  STEP Step41:
    STEP41_INLINE36(N);
  END_STEP

  ACTION STEP41_INLINE36:
    myn:=false;
  END_ACTION

  STEP Step23:
    STEP23_INLINE19(N);
  END_STEP

  ACTION STEP23_INLINE19:
     myn:=true;
  END_ACTION

  TRANSITION FROM Step23 TO Step24
    := sy2;
  END_TRANSITION

  STEP Step24:
    STEP24_INLINE20(N);
  END_STEP

  ACTION STEP24_INLINE20:
    myn:=false;
  END_ACTION

  STEP Step17:
  END_STEP

  TRANSITION FROM Step17 TO Step18
    := receiv;
  END_TRANSITION

  STEP Step18:
    STEP18_INLINE14(N);
    STEP18_INLINE15(N);
  END_STEP

  ACTION STEP18_INLINE14:
    ready_o:=1;free_o:=0;
  END_ACTION

  ACTION STEP18_INLINE15:
    a2:=true; 
  END_ACTION

  TRANSITION FROM Step18 TO Step19
    := s1;
  END_TRANSITION

  STEP Step19:
    STEP19_INLINE16(N);
  END_STEP

  ACTION STEP19_INLINE16:
    ready_o:=0;
  END_ACTION

  TRANSITION FROM Step19 TO Step20
    := s2;
  END_TRANSITION

  STEP Step20:
    STEP20_INLINE17(N);
  END_STEP

  ACTION STEP20_INLINE17:
    a2:=false; a4:=false;
  END_ACTION

  TRANSITION FROM Step2 TO Step5
    := sy3;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE1(DS, t#14s);
  END_STEP

  ACTION STEP4_INLINE1:
    aux:=true;
  END_ACTION

  TRANSITION FROM Step4 TO Step8
    := aux;
  END_TRANSITION

  STEP Step8:
  END_STEP

  STEP Step6:
    mxp(L, t#13s);
  END_STEP

  TRANSITION FROM Step6 TO Step7
    := aux;
  END_TRANSITION

  STEP Step7:
    mxn(N);
  END_STEP

  TRANSITION FROM Step7 TO Step1
    := sx1;
  END_TRANSITION

  STEP Step1:
  END_STEP

  TRANSITION FROM Step6 TO Step1
    := sx1;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Celula_robot
  VAR_INPUT
    sp1 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap1 : BOOL;
  END_VAR
  VAR_INPUT
    sp2 : BOOL;
    sh2 : BOOL;
    sv2 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap2 : BOOL;
    ah2 : BOOL;
    av2 : BOOL;
    an6 : BOOL;
  END_VAR
  VAR_INPUT
    sp6 : BOOL;
    sh6 : BOOL;
    sv6 : BOOL;
  END_VAR
  VAR_OUTPUT
    ah6 : BOOL;
    av6 : BOOL;
    ap6 : BOOL;
  END_VAR
  VAR_INPUT
    sp7 : BOOL;
  END_VAR
  VAR_OUTPUT
    av7 : BOOL;
  END_VAR
  VAR_INPUT
    creceiv : BOOL;
  END_VAR
  VAR_OUTPUT
    cfree_o : BOOL;
    crout : BOOL;
  END_VAR
  VAR_INPUT
    cfree_i2 : BOOL;
    dest : WORD;
  END_VAR
  VAR_OUTPUT
    ctake : BOOL;
  END_VAR
  VAR_INPUT
    crin : BOOL;
    crecivb : BOOL;
  END_VAR
  VAR_OUTPUT
    ctakeb : BOOL;
    cfree_ob : BOOL;
    croub : BOOL;
  END_VAR
  VAR_INPUT
    crinb : BOOL;
    cfree_ib : BOOL;
  END_VAR
  VAR
    Tapete_Linear1 : Tapete_Linear;
    Tapete_Rotativo2 : Tapete_Rotativo;
    Tapete_Rotativo3 : Tapete_Rotativo;
    Tapete_Linear3 : Tapete_Linear;
  END_VAR
  VAR_OUTPUT
    mxp : BOOL;
    mxn : BOOL;
    myp : BOOL;
    myn : BOOL;
    mzp : BOOL;
    mzn : BOOL;
    grab : BOOL;
  END_VAR
  VAR_INPUT
    sx0 : BOOL;
    sx1 : BOOL;
    sy0 : BOOL;
    sy1 : BOOL;
    sy2 : BOOL;
    sy3 : BOOL;
    sy4 : BOOL;
    zbot : BOOL;
    ztop : BOOL;
    piece : BOOL;
  END_VAR
  VAR
    robot0 : robot;
  END_VAR
  VAR_INPUT
    s1 : BOOL;
    s2 : BOOL;
    s3 : BOOL;
  END_VAR
  VAR_OUTPUT
    a1 : BOOL;
    a2 : BOOL;
    a3 : BOOL;
    a4 : BOOL;
    auxr : BOOL;
    tomes : BOOL;
  END_VAR
  VAR_INPUT
    frommes : BOOL;
  END_VAR

  Tapete_Linear1(p := sp1, free_i := Tapete_Rotativo2.free_o, receiv := creceiv, rin := Tapete_Rotativo2.rout);
  robot0(sx0 := sx0, sx1 := sx1, sy0 := sy0, sy1 := sy1, sy2 := sy2, sy3 := sy3, sy4 := sy4, sztop := ztop, szbot := zbot, piece := piece, s1 := s1, s2 := s2, s3 := s3, receiv := Tapete_Rotativo2.take, mespermition := frommes, free_rob := Tapete_Rotativo2.frerobo, receiv_rob := Tapete_Rotativo2.routrobo);
  Tapete_Rotativo2(p := sp2, recive_vet := Tapete_Linear1.take, free_i1 := robot0.free_o, free_i2 := cfree_i2, horiz := sh2, vert := sv2, rin := robot0.ready_o, destino := dest, rin2 := crin, roboreceiv := robot0.robotake);
  ah2 := Tapete_Rotativo2.turn_h;
  Tapete_Linear3(p := sp7, free_i := cfree_ib, receiv := Tapete_Rotativo3.take, rin := crinb);
  Tapete_Rotativo3(p := sp6, free_i1 := Tapete_Linear3.free_o, horiz := sh6, vert := sv6, rin := Tapete_Linear3.rout, recive_hor2 := crecivb);
  av6 := Tapete_Rotativo3.turn_h;
  ctakeb := Tapete_Linear3.take;
  mxp := robot0.mxp;
  ah6 := Tapete_Rotativo3.turn_v;
  av2 := Tapete_Rotativo2.turn_v;
  av7 := Tapete_Linear3.move_p;
  ap1 := Tapete_Linear1.move_p;
  mxn := robot0.mxn;
  ap6 := Tapete_Rotativo3.move_p;
  myp := robot0.myp;
  ap2 := Tapete_Rotativo2.move_p;
  cfree_o := Tapete_Linear1.free_o;
  an6 := Tapete_Rotativo3.move_n;
  myn := robot0.myn;
  crout := Tapete_Linear1.rout;
  cfree_ob := Tapete_Rotativo3.free_o2;
  mzp := robot0.mzp;
  ctake := Tapete_Rotativo2.ctake;
  croub := Tapete_Rotativo3.rout2;
  mzn := robot0.mzn;
  grab := robot0.grab;
  a1 := robot0.a1;
  a2 := robot0.a2;
  a3 := robot0.a3;
  a4 := robot0.a4;
  tomes := robot0.permisao;
  auxr := robot0.auxr;
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusher
  VAR_INPUT
    p : BOOL;
    rest : BOOL;
    pushed : BOOL;
    receiv : BOOL;
    free_i : BOOL;
    p_out : WORD;
  END_VAR
  VAR_OUTPUT
    push : BOOL;
    retreat : BOOL;
    yn : BOOL;
    take : BOOL;
    free_o : BOOL;
    rout : BOOL;
  END_VAR
  VAR_INPUT
    rin : BOOL;
    p_roller : BOOL;
  END_VAR
  VAR_OUTPUT
    rolerocup : BOOL;
  END_VAR
  VAR
    aux : BOOL;
  END_VAR

  INITIAL_STEP Iddle:
    IDDLE_INLINE1(N);
  END_STEP

  ACTION IDDLE_INLINE1:
    push:=0;retreat:=0;yn:=0;free_o:=1;take:=0;
  END_ACTION

  TRANSITION FROM Iddle TO Step1
    := receiv;
  END_TRANSITION

  STEP Step1:
    yn(N);
    STEP1_INLINE2(N);
  END_STEP

  ACTION STEP1_INLINE2:
    free_o:=0;rout:=1;
  END_ACTION

  TRANSITION FROM Step1 TO Step2
    := p;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE3(N);
  END_STEP

  ACTION STEP2_INLINE3:
    rout:=0;
  END_ACTION

  TRANSITION FROM Step2 TO Step3
    := p_out = 0 and not(p_roller);
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE4(N);
  END_STEP

  ACTION STEP3_INLINE4:
    push:=1;
  END_ACTION

  TRANSITION FROM Step3 TO Step5
    := pushed;
  END_TRANSITION

  STEP Step5:
    STEP5_INLINE5(N);
    retreat(N);
  END_STEP

  ACTION STEP5_INLINE5:
    push:=0; 
  END_ACTION

  TRANSITION FROM Step5 TO Step7
    := rest;
  END_TRANSITION

  STEP Step7:
  END_STEP

  TRANSITION FROM Step7 TO Iddle
    := p_out=2;
  END_TRANSITION

  TRANSITION FROM Step2 TO Step4
    := p_out =  1 AND free_i;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE6(N);
  END_STEP

  ACTION STEP4_INLINE6:
    take:=1;
  END_ACTION

  TRANSITION FROM Step4 TO Step6
    := rin;
  END_TRANSITION

  STEP Step6:
    STEP6_INLINE7(N);
  END_STEP

  ACTION STEP6_INLINE7:
    yn:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step6 TO Step0
    := not(rin);
  END_TRANSITION

  STEP Step0:
  END_STEP

  TRANSITION FROM Step0 TO Iddle
    := p_out=2;
  END_TRANSITION

  INITIAL_STEP Step8:
    STEP8_INLINE8(N);
  END_STEP

  ACTION STEP8_INLINE8:
    rolerocup:=0;
  END_ACTION

  TRANSITION FROM Step8 TO Step9
    := p_roller;
  END_TRANSITION

  STEP Step9:
    STEP9_INLINE9(D, t#3s);
  END_STEP

  ACTION STEP9_INLINE9:
    aux:=true;
  END_ACTION

  TRANSITION FROM Step9 TO Step8
    := not p_roller;
  END_TRANSITION

  TRANSITION FROM Step9 TO Step10
    := aux;
  END_TRANSITION

  STEP Step10:
    STEP10_INLINE10(N);
  END_STEP

  ACTION STEP10_INLINE10:
    rolerocup:=1;
  END_ACTION

  TRANSITION FROM Step10 TO Step8
    := not p_roller;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK CT3
  VAR_INPUT
    p : BOOL;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
    move_p : BOOL;
  END_VAR
  VAR_INPUT
    free_i : BOOL;
  END_VAR
  VAR_OUTPUT
    free_o : BOOL;
  END_VAR
  VAR_INPUT
    receiv : BOOL;
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
    move_n : BOOL;
  END_VAR
  VAR
    aux : INT;
  END_VAR
  VAR_INPUT
    cargadescp : BOOL;
  END_VAR
  VAR_OUTPUT
    Scp1 : BOOL;
  END_VAR
  VAR
    flag : BOOL;
  END_VAR

  INITIAL_STEP Step1:
    STEP1_INLINE1(N);
    STEP1_INLINE2(N);
    STEP1_INLINE3(N);
  END_STEP

  ACTION STEP1_INLINE1:
    move_p:=0; take:=0; free_o:=1; rout:=0;
  END_ACTION

  ACTION STEP1_INLINE2:
    flag:=0;
  END_ACTION

  ACTION STEP1_INLINE3:
    aux:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step7
    := p;
  END_TRANSITION

  STEP Step7:
    STEP7_INLINE12(P1);
  END_STEP

  ACTION STEP7_INLINE12:
    flag:=1;
  END_ACTION

  TRANSITION FROM Step7 TO Step3
    := cargadescp;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE6(N);
    STEP3_INLINE7(N);
  END_STEP

  ACTION STEP3_INLINE6:
    move_n:=0; rout:=0;
  END_ACTION

  ACTION STEP3_INLINE7:
    flag:=0;
  END_ACTION

  TRANSITION FROM Step3 TO Step1
    := NOT(p);
  END_TRANSITION

  TRANSITION FROM Step3 TO Step2
    := free_i  AND aux = 0;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE9(N);
  END_STEP

  ACTION STEP2_INLINE9:
    take:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step4
    := rin;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE8(N);
  END_STEP

  ACTION STEP4_INLINE8:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step4 TO Step1
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step1 TO Step0
    := receiv;
  END_TRANSITION

  STEP Step0:
    STEP0_INLINE4(N);
    STEP0_INLINE5(N);
  END_STEP

  ACTION STEP0_INLINE4:
    move_n:=1;rout:=1;free_o:=0;
  END_ACTION

  ACTION STEP0_INLINE5:
    aux:=1;
  END_ACTION

  TRANSITION FROM Step0 TO Step3
    := p;
  END_TRANSITION

  INITIAL_STEP Step5:
    STEP5_INLINE10(N);
  END_STEP

  ACTION STEP5_INLINE10:
    Scp1:=1;
  END_ACTION

  TRANSITION FROM Step5 TO Step6
    := flag;
  END_TRANSITION

  STEP Step6:
    STEP6_INLINE11(N);
  END_STEP

  ACTION STEP6_INLINE11:
    Scp1:=0;
  END_ACTION

  TRANSITION FROM Step6 TO Step5
    := cargadescp;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK CT9
  VAR_INPUT
    p : BOOL;
  END_VAR
  VAR_OUTPUT
    take : BOOL;
    move_p : BOOL;
  END_VAR
  VAR_INPUT
    free_i : BOOL;
  END_VAR
  VAR_OUTPUT
    free_o : BOOL;
  END_VAR
  VAR_INPUT
    receiv : BOOL;
    rin : BOOL;
  END_VAR
  VAR_OUTPUT
    rout : BOOL;
    Scp2 : BOOL;
  END_VAR
  VAR_INPUT
    cargadescp2 : BOOL;
  END_VAR
  VAR
    flag : BOOL;
  END_VAR

  INITIAL_STEP Step1:
    STEP1_INLINE1(N);
    STEP1_INLINE2(N);
  END_STEP

  ACTION STEP1_INLINE1:
    move_p:=0; take:=0; free_o:=1; rout:=0;
  END_ACTION

  ACTION STEP1_INLINE2:
    flag:=0;
  END_ACTION

  TRANSITION FROM Step1 TO Step7
    := p;
  END_TRANSITION

  STEP Step7:
    STEP7_INLINE10(P1);
  END_STEP

  ACTION STEP7_INLINE10:
    flag:=1;
  END_ACTION

  TRANSITION FROM Step7 TO Step3
    := cargadescp2;
  END_TRANSITION

  STEP Step3:
    STEP3_INLINE4(N);
    STEP3_INLINE5(N);
  END_STEP

  ACTION STEP3_INLINE4:
    move_p:=0; rout:=0;
  END_ACTION

  ACTION STEP3_INLINE5:
    flag:=0;
  END_ACTION

  TRANSITION FROM Step3 TO Step1
    := NOT(p);
  END_TRANSITION

  TRANSITION FROM Step3 TO Step2
    := free_i;
  END_TRANSITION

  STEP Step2:
    STEP2_INLINE7(N);
  END_STEP

  ACTION STEP2_INLINE7:
    take:=1;
  END_ACTION

  TRANSITION FROM Step2 TO Step4
    := rin;
  END_TRANSITION

  STEP Step4:
    STEP4_INLINE6(N);
  END_STEP

  ACTION STEP4_INLINE6:
    move_p:=1;take:=0;
  END_ACTION

  TRANSITION FROM Step4 TO Step1
    := not rin;
  END_TRANSITION

  TRANSITION FROM Step1 TO Step0
    := receiv;
  END_TRANSITION

  STEP Step0:
    STEP0_INLINE3(N);
  END_STEP

  ACTION STEP0_INLINE3:
    move_p:=1;rout:=1;free_o:=0;
  END_ACTION

  TRANSITION FROM Step0 TO Step3
    := p;
  END_TRANSITION

  INITIAL_STEP Step6:
    STEP6_INLINE8(N);
  END_STEP

  ACTION STEP6_INLINE8:
    Scp2:=1;
  END_ACTION

  TRANSITION FROM Step6 TO Step5
    := flag;
  END_TRANSITION

  STEP Step5:
    STEP5_INLINE9(N);
  END_STEP

  ACTION STEP5_INLINE9:
    Scp2:=0;
  END_ACTION

  TRANSITION FROM Step5 TO Step6
    := cargadescp2;
  END_TRANSITION

END_FUNCTION_BLOCK

FUNCTION_BLOCK Carga_Descarga
  VAR
    Tapete_Linear0 : Tapete_Linear;
  END_VAR
  VAR_INPUT
    sp1 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap1 : BOOL;
  END_VAR
  VAR_INPUT
    sp2 : BOOL;
    sh2 : BOOL;
    sv2 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap2 : BOOL;
    ah2 : BOOL;
    av2 : BOOL;
    an2 : BOOL;
  END_VAR
  VAR
    Tapete_Rotativo0 : Tapete_Rotativo;
  END_VAR
  VAR_OUTPUT
    an6 : BOOL;
  END_VAR
  VAR
    Tapete_Rotativo1 : Tapete_Rotativo;
  END_VAR
  VAR_INPUT
    sp6 : BOOL;
    sh6 : BOOL;
    sv6 : BOOL;
  END_VAR
  VAR_OUTPUT
    ah6 : BOOL;
    av6 : BOOL;
    ap6 : BOOL;
  END_VAR
  VAR
    Tapete_Linear2 : Tapete_Linear;
  END_VAR
  VAR_INPUT
    sp7 : BOOL;
  END_VAR
  VAR_OUTPUT
    av7 : BOOL;
  END_VAR
  VAR_INPUT
    creceiv : BOOL;
  END_VAR
  VAR_OUTPUT
    cfree_o : BOOL;
    crout : BOOL;
  END_VAR
  VAR_INPUT
    dest : WORD;
  END_VAR
  VAR_OUTPUT
    ctakeb : BOOL;
  END_VAR
  VAR_INPUT
    crinb : BOOL;
    cfree_ib : BOOL;
  END_VAR
  VAR
    Pusher0 : Pusher;
    Pusher1 : Pusher;
    Pusher2 : Pusher;
  END_VAR
  VAR_INPUT
    sp3 : BOOL;
    srest3 : BOOL;
    spush3 : BOOL;
    p_out1 : WORD;
    spr3 : BOOL;
  END_VAR
  VAR_OUTPUT
    an3 : BOOL;
    apush3 : BOOL;
    aret3 : BOOL;
  END_VAR
  VAR_INPUT
    sp4 : BOOL;
  END_VAR
  VAR_OUTPUT
    ap4 : BOOL;
    an4 : BOOL;
  END_VAR
  VAR_INPUT
    sp5 : BOOL;
    srest5 : BOOL;
    spush5 : BOOL;
    p_out2 : WORD;
    spr5 : BOOL;
  END_VAR
  VAR_OUTPUT
    apush5 : BOOL;
    aret5 : BOOL;
    an5 : BOOL;
  END_VAR
  VAR_INPUT
    sp8 : BOOL;
    srest8 : BOOL;
    spush8 : BOOL;
    p_out3 : WORD;
    spr8 : BOOL;
  END_VAR
  VAR_OUTPUT
    apush8 : BOOL;
    aret8 : BOOL;
    an8 : BOOL;
  END_VAR
  VAR_INPUT
    sp9 : BOOL;
  END_VAR
  VAR_OUTPUT
    an9 : BOOL;
  END_VAR
  VAR
    PM10 : CT3;
  END_VAR
  VAR_INPUT
    cargadescp : BOOL;
    cargadescp2 : BOOL;
  END_VAR
  VAR_OUTPUT
    Scp1 : BOOL;
    Scp2 : BOOL;
    rollerocup1 : BOOL;
    rollerocup2 : BOOL;
    rollerocup3 : BOOL;
  END_VAR
  VAR
    CT90 : CT9;
  END_VAR

  Tapete_Linear0(p := sp1, free_i := Tapete_Rotativo0.free_o, receiv := creceiv, rin := Tapete_Rotativo0.rout);
  Tapete_Linear2(p := sp7, free_i := cfree_ib, receiv := Tapete_Rotativo1.take, rin := crinb);
  CT90(p := sp9, free_i := Tapete_Rotativo1.free_o2, rin := Tapete_Rotativo1.rout2, cargadescp2 := cargadescp2);
  Tapete_Rotativo1(p := sp6, recive_hor := Pusher2.take, free_i1 := Tapete_Linear2.free_o, horiz := sh6, vert := sv6, rin := Tapete_Linear2.rout, recive_hor2 := CT90.take);
  Pusher2(p := sp8, rest := srest8, pushed := spush8, receiv := Pusher1.take, free_i := Tapete_Rotativo1.free_o, p_out := p_out3, rin := Tapete_Rotativo1.rout, p_roller := spr8);
  Pusher1(p := sp5, rest := srest5, pushed := spush5, receiv := Pusher0.take, free_i := Pusher2.free_o, p_out := p_out2, rin := Pusher2.rout, p_roller := spr5);
  Pusher0(p := sp3, rest := srest3, pushed := spush3, receiv := Tapete_Rotativo0.take, free_i := Pusher1.free_o, p_out := p_out1, rin := Pusher1.rout, p_roller := spr3);
  PM10(p := sp4, free_i := Tapete_Rotativo0.free_o2, receiv := Tapete_Rotativo0.ctake, rin := Tapete_Rotativo0.rout2, cargadescp := cargadescp);
  Tapete_Rotativo0(p := sp2, recive_vet := Tapete_Linear0.take, free_i1 := Pusher0.free_o, free_i2 := PM10.free_o, horiz := sh2, vert := sv2, rin := Pusher0.rout, destino := dest, rin2 := PM10.rout, recive_vet2 := PM10.take);
  ah2 := Tapete_Rotativo0.turn_h;
  av2 := Tapete_Rotativo0.turn_v;
  ap1 := Tapete_Linear0.move_p;
  cfree_o := Tapete_Linear0.free_o;
  ap2 := Tapete_Rotativo0.move_p;
  ap4 := PM10.move_p;
  crout := Tapete_Linear0.rout;
  an2 := Tapete_Rotativo0.move_n;
  an4 := PM10.move_n;
  Scp1 := PM10.Scp1;
  apush3 := Pusher0.push;
  aret3 := Pusher0.retreat;
  an3 := Pusher0.yn;
  rollerocup1 := Pusher0.rolerocup;
  apush5 := Pusher1.push;
  aret5 := Pusher1.retreat;
  an5 := Pusher1.yn;
  rollerocup2 := Pusher1.rolerocup;
  apush8 := Pusher2.push;
  aret8 := Pusher2.retreat;
  an8 := Pusher2.yn;
  rollerocup3 := Pusher2.rolerocup;
  ctakeb := Tapete_Linear2.take;
  ah6 := Tapete_Rotativo1.turn_h;
  av6 := Tapete_Rotativo1.turn_v;
  av7 := Tapete_Linear2.move_p;
  ap6 := Tapete_Rotativo1.move_p;
  an6 := Tapete_Rotativo1.move_n;
  an9 := CT90.move_p;
  Scp2 := CT90.Scp2;
END_FUNCTION_BLOCK

PROGRAM program1
  VAR
    S0 AT %IX0.0.0.0 : BOOL;
    S1 AT %IX0.0.0.1 : BOOL;
    S2 AT %IX0.0.0.2 : BOOL;
    S3 AT %IX0.0.0.3 : BOOL;
    S4 AT %IX0.0.0.4 : BOOL;
    S5 AT %IX0.0.0.5 : BOOL;
    S6 AT %IX0.0.0.6 : BOOL;
    S7 AT %IX0.0.0.7 : BOOL;
    S8 AT %IX0.0.0.8 : BOOL;
    S9 AT %IX0.0.0.9 : BOOL;
    S10 AT %IX0.0.0.10 : BOOL;
    S11 AT %IX0.0.0.11 : BOOL;
    S12 AT %IX0.0.0.12 : BOOL;
    S13 AT %IX0.0.0.13 : BOOL;
    S14 AT %IX0.0.0.14 : BOOL;
    S15 AT %IX0.0.0.15 : BOOL;
    S16 AT %IX0.0.0.16 : BOOL;
    S17 AT %IX0.0.0.17 : BOOL;
    S18 AT %IX0.0.0.18 : BOOL;
    S19 AT %IX0.0.0.19 : BOOL;
    S20 AT %IX0.0.0.20 : BOOL;
    S21 AT %IX0.0.0.21 : BOOL;
    S22 AT %IX0.0.0.22 : BOOL;
    S23 AT %IX0.0.0.23 : BOOL;
    S24 AT %IX0.0.0.24 : BOOL;
    S25 AT %IX0.0.0.25 : BOOL;
    S26 AT %IX0.0.0.26 : BOOL;
    S27 AT %IX0.0.0.27 : BOOL;
    S28 AT %IX0.0.0.28 : BOOL;
    S29 AT %IX0.0.0.29 : BOOL;
    S30 AT %IX0.0.0.30 : BOOL;
    S31 AT %IX0.0.0.31 : BOOL;
    S32 AT %IX0.0.0.32 : BOOL;
    S33 AT %IX0.0.0.33 : BOOL;
    S34 AT %IX0.0.0.34 : BOOL;
    S35 AT %IX0.0.0.35 : BOOL;
    S36 AT %IX0.0.0.36 : BOOL;
    S37 AT %IX0.0.0.37 : BOOL;
    S38 AT %IX0.0.0.38 : BOOL;
    S39 AT %IX0.0.0.39 : BOOL;
    S40 AT %IX0.0.0.40 : BOOL;
    S41 AT %IX0.0.0.41 : BOOL;
    S42 AT %IX0.0.0.42 : BOOL;
    S43 AT %IX0.0.0.43 : BOOL;
    S44 AT %IX0.0.0.44 : BOOL;
    S45 AT %IX0.0.0.45 : BOOL;
    S46 AT %IX0.0.0.46 : BOOL;
    S47 AT %IX0.0.0.47 : BOOL;
    S48 AT %IX0.0.0.48 : BOOL;
    S49 AT %IX0.0.0.49 : BOOL;
    S50 AT %IX0.0.0.50 : BOOL;
    S51 AT %IX0.0.0.51 : BOOL;
    S52 AT %IX0.0.0.52 : BOOL;
    S53 AT %IX0.0.0.53 : BOOL;
    S54 AT %IX0.0.0.54 : BOOL;
    S55 AT %IX0.0.0.55 : BOOL;
    S56 AT %IX0.0.0.56 : BOOL;
    S57 AT %IX0.0.0.57 : BOOL;
    S58 AT %IX0.0.0.58 : BOOL;
    S59 AT %IX0.0.0.59 : BOOL;
    S60 AT %IX0.0.0.60 : BOOL;
    S61 AT %IX0.0.0.61 : BOOL;
    S62 AT %IX0.0.0.62 : BOOL;
    S63 AT %IX0.0.0.63 : BOOL;
    S64 AT %IX0.0.0.64 : BOOL;
    S65 AT %IX0.0.0.65 : BOOL;
    S66 AT %IX0.0.0.66 : BOOL;
    S67 AT %IX0.0.0.67 : BOOL;
    S68 AT %IX0.0.0.68 : BOOL;
    S69 AT %IX0.0.0.69 : BOOL;
    S70 AT %IX0.0.0.70 : BOOL;
    S71 AT %IX0.0.0.71 : BOOL;
    S72 AT %IX0.0.0.72 : BOOL;
    S73 AT %IX0.0.0.73 : BOOL;
    S74 AT %IX0.0.0.74 : BOOL;
    S75 AT %IX0.0.0.75 : BOOL;
    S76 AT %IX0.0.0.76 : BOOL;
    S77 AT %IX0.0.0.77 : BOOL;
    S78 AT %IX0.0.0.78 : BOOL;
    S79 AT %IX0.0.0.79 : BOOL;
    S80 AT %IX0.0.0.80 : BOOL;
    S81 AT %IX0.0.0.81 : BOOL;
    S82 AT %IX0.0.0.82 : BOOL;
    S83 AT %IX0.0.0.83 : BOOL;
    S84 AT %IX0.0.0.84 : BOOL;
    S85 AT %IX0.0.0.85 : BOOL;
    S86 AT %IX0.0.0.86 : BOOL;
    S87 AT %IX0.0.0.87 : BOOL;
    S88 AT %IX0.0.0.88 : BOOL;
    S89 AT %IX0.0.0.89 : BOOL;
    S90 AT %IX0.0.0.90 : BOOL;
    S91 AT %IX0.0.0.91 : BOOL;
    S92 AT %IX0.0.0.92 : BOOL;
    S93 AT %IX0.0.0.93 : BOOL;
    S94 AT %IX0.0.0.94 : BOOL;
    S95 AT %IX0.0.0.95 : BOOL;
    S96 AT %IX0.0.0.96 : BOOL;
    S97 AT %IX0.0.0.97 : BOOL;
    S98 AT %IX0.0.0.98 : BOOL;
    S99 AT %IX0.0.0.99 : BOOL;
    S100 AT %IX0.0.0.100 : BOOL;
    S101 AT %IX0.0.0.101 : BOOL;
    S102 AT %IX0.0.0.102 : BOOL;
    S103 AT %IX0.0.0.103 : BOOL;
    S104 AT %IX0.0.0.104 : BOOL;
    S105 AT %IX0.0.0.105 : BOOL;
    S106 AT %IX0.0.0.106 : BOOL;
    S107 AT %IX0.0.0.107 : BOOL;
    S108 AT %IX0.0.0.108 : BOOL;
    S109 AT %IX0.0.0.109 : BOOL;
    S110 AT %IX0.0.0.110 : BOOL;
    Q0 AT %QX0.0.1.0 : BOOL;
    Q1 AT %QX0.0.1.1 : BOOL;
    Q2 AT %QX0.0.1.2 : BOOL;
    Q3 AT %QX0.0.1.3 : BOOL;
    Q4 AT %QX0.0.1.4 : BOOL;
    Q5 AT %QX0.0.1.5 : BOOL;
    Q6 AT %QX0.0.1.6 : BOOL;
    Q7 AT %QX0.0.1.7 : BOOL;
    Q8 AT %QX0.0.1.8 : BOOL;
    Q9 AT %QX0.0.1.9 : BOOL;
    Q10 AT %QX0.0.1.10 : BOOL;
    Q11 AT %QX0.0.1.11 : BOOL;
    Q12 AT %QX0.0.1.12 : BOOL;
    Q13 AT %QX0.0.1.13 : BOOL;
    Q14 AT %QX0.0.1.14 : BOOL;
    Q15 AT %QX0.0.1.15 : BOOL;
    Q16 AT %QX0.0.1.16 : BOOL;
    Q17 AT %QX0.0.1.17 : BOOL;
    Q18 AT %QX0.0.1.18 : BOOL;
    Q19 AT %QX0.0.1.19 : BOOL;
    Q20 AT %QX0.0.1.20 : BOOL;
    Q21 AT %QX0.0.1.21 : BOOL;
    Q22 AT %QX0.0.1.22 : BOOL;
    Q23 AT %QX0.0.1.23 : BOOL;
    Q24 AT %QX0.0.1.24 : BOOL;
    Q25 AT %QX0.0.1.25 : BOOL;
    Q26 AT %QX0.0.1.26 : BOOL;
    Q27 AT %QX0.0.1.27 : BOOL;
    Q28 AT %QX0.0.1.28 : BOOL;
    Q29 AT %QX0.0.1.29 : BOOL;
    Q30 AT %QX0.0.1.30 : BOOL;
    Q31 AT %QX0.0.1.31 : BOOL;
    Q32 AT %QX0.0.1.32 : BOOL;
    Q33 AT %QX0.0.1.33 : BOOL;
    Q34 AT %QX0.0.1.34 : BOOL;
    Q35 AT %QX0.0.1.35 : BOOL;
    Q36 AT %QX0.0.1.36 : BOOL;
    Q37 AT %QX0.0.1.37 : BOOL;
    Q38 AT %QX0.0.1.38 : BOOL;
    Q39 AT %QX0.0.1.39 : BOOL;
    Q40 AT %QX0.0.1.40 : BOOL;
    Q41 AT %QX0.0.1.41 : BOOL;
    Q42 AT %QX0.0.1.42 : BOOL;
    Q43 AT %QX0.0.1.43 : BOOL;
    Q44 AT %QX0.0.1.44 : BOOL;
    Q45 AT %QX0.0.1.45 : BOOL;
    Q46 AT %QX0.0.1.46 : BOOL;
    Q47 AT %QX0.0.1.47 : BOOL;
    Q48 AT %QX0.0.1.48 : BOOL;
    Q49 AT %QX0.0.1.49 : BOOL;
    Q50 AT %QX0.0.1.50 : BOOL;
    Q51 AT %QX0.0.1.51 : BOOL;
    Q52 AT %QX0.0.1.52 : BOOL;
    Q53 AT %QX0.0.1.53 : BOOL;
    Q54 AT %QX0.0.1.54 : BOOL;
    Q55 AT %QX0.0.1.55 : BOOL;
    Q56 AT %QX0.0.1.56 : BOOL;
    Q57 AT %QX0.0.1.57 : BOOL;
    Q58 AT %QX0.0.1.58 : BOOL;
    Q59 AT %QX0.0.1.59 : BOOL;
    Q60 AT %QX0.0.1.60 : BOOL;
    Q61 AT %QX0.0.1.61 : BOOL;
    Q62 AT %QX0.0.1.62 : BOOL;
    Q63 AT %QX0.0.1.63 : BOOL;
    Q64 AT %QX0.0.1.64 : BOOL;
    Q65 AT %QX0.0.1.65 : BOOL;
    Q66 AT %QX0.0.1.66 : BOOL;
    Q67 AT %QX0.0.1.67 : BOOL;
    Q68 AT %QX0.0.1.68 : BOOL;
    Q69 AT %QX0.0.1.69 : BOOL;
    Q70 AT %QX0.0.1.70 : BOOL;
    Q71 AT %QX0.0.1.71 : BOOL;
    Q72 AT %QX0.0.1.72 : BOOL;
    Q73 AT %QX0.0.1.73 : BOOL;
    Q74 AT %QX0.0.1.74 : BOOL;
    Q75 AT %QX0.0.1.75 : BOOL;
    Q76 AT %QX0.0.1.76 : BOOL;
    Q77 AT %QX0.0.1.77 : BOOL;
    Q78 AT %QX0.0.1.78 : BOOL;
    Q79 AT %QX0.0.1.79 : BOOL;
    Q80 AT %QX0.0.1.80 : BOOL;
    Q81 AT %QX0.0.1.81 : BOOL;
    Q82 AT %QX0.0.1.82 : BOOL;
    Q83 AT %QX0.0.1.83 : BOOL;
    Q84 AT %QX0.0.1.84 : BOOL;
    Q85 AT %QX0.0.1.85 : BOOL;
    Q86 AT %QX0.0.1.86 : BOOL;
    Q87 AT %QX0.0.1.87 : BOOL;
    Q88 AT %QX0.0.1.88 : BOOL;
    Q89 AT %QX0.0.1.89 : BOOL;
    Q90 AT %QX0.0.1.90 : BOOL;
    Q91 AT %QX0.0.1.91 : BOOL;
    Q92 AT %QX0.0.1.92 : BOOL;
    Q93 AT %QX0.0.1.93 : BOOL;
    Q94 AT %QX0.0.1.94 : BOOL;
    Q95 AT %QX0.0.1.95 : BOOL;
    Q96 AT %QX0.0.1.96 : BOOL;
    Q97 AT %QX0.0.1.97 : BOOL;
    Q98 AT %QX0.0.1.98 : BOOL;
    Q99 AT %QX0.0.1.99 : BOOL;
    Q100 AT %QX0.0.1.100 : BOOL;
    Q101 AT %QX0.0.1.101 : BOOL;
    Q102 AT %QX0.0.1.102 : BOOL;
    Q103 AT %QX0.0.1.103 : BOOL;
    Q104 AT %QX0.0.1.104 : BOOL;
    Q105 AT %QX0.0.1.105 : BOOL;
    Q106 AT %QX0.0.1.106 : BOOL;
    Q107 AT %QX0.0.1.107 : BOOL;
    Q108 AT %QX0.0.1.108 : BOOL;
    Q109 AT %QX0.0.1.109 : BOOL;
    Q110 AT %QX0.0.1.110 : BOOL;
    Q111 AT %QX0.0.1.111 : BOOL;
    Q112 AT %QX0.0.1.112 : BOOL;
    Q113 AT %QX0.0.1.113 : BOOL;
    Q114 AT %QX0.0.1.114 : BOOL;
    Q115 AT %QX0.0.1.115 : BOOL;
    Q116 AT %QX0.0.1.116 : BOOL;
    Q117 AT %QX0.0.1.117 : BOOL;
    Q118 AT %QX0.0.1.118 : BOOL;
    Q119 AT %QX0.0.1.119 : BOOL;
    Q120 AT %QX0.0.1.120 : BOOL;
    Q121 AT %QX0.0.1.121 : BOOL;
    Q122 AT %QX0.0.1.122 : BOOL;
    Q123 AT %QX0.0.1.123 : BOOL;
    Q124 AT %QX0.0.1.124 : BOOL;
    Q125 AT %QX0.0.1.125 : BOOL;
    Q126 AT %QX0.0.1.126 : BOOL;
    Q127 AT %QX0.0.1.127 : BOOL;
    Q128 AT %QX0.0.1.128 : BOOL;
    Q129 AT %QX0.0.1.129 : BOOL;
    Q130 AT %QX0.0.1.130 : BOOL;
    Q131 AT %QX0.0.1.131 : BOOL;
    Q132 AT %QX0.0.1.132 : BOOL;
    Q133 AT %QX0.0.1.133 : BOOL;
    Q134 AT %QX0.0.1.134 : BOOL;
    Q135 AT %QX0.0.1.135 : BOOL;
    Q136 AT %QX0.0.1.136 : BOOL;
    Q137 AT %QX0.0.1.137 : BOOL;
    Q138 AT %QX0.0.1.138 : BOOL;
    Q139 AT %QX0.0.1.139 : BOOL;
    Q140 AT %QX0.0.1.140 : BOOL;
    Q141 AT %QX0.0.1.141 : BOOL;
    Q142 AT %QX0.0.1.142 : BOOL;
    Q143 AT %QX0.0.1.143 : BOOL;
    Q144 AT %QX0.0.1.144 : BOOL;
    Q145 AT %QX0.0.1.145 : BOOL;
    Q146 AT %QX0.0.1.146 : BOOL;
    Q147 AT %QX0.0.1.147 : BOOL;
    Q148 AT %QX0.0.1.148 : BOOL;
    Q149 AT %QX0.0.1.149 : BOOL;
    Q150 AT %QX0.0.1.150 : BOOL;
    Q151 AT %QX0.0.1.151 : BOOL;
  END_VAR
  VAR
    Tapete_Linear0 : Tapete_Linear;
    Tapete_Rotativo0 : Tapete_Rotativo;
    Tapete_Linear1 : Tapete_Linear;
    Tapete_Linear2 : Tapete_Linear;
    Tapete_Linear3 : Tapete_Linear;
    Tapete_Linear4 : Tapete_Linear;
    Tapete_Rotativo1 : Tapete_Rotativo;
    Tapete_Linear5 : Tapete_Linear;
    path : BOOL;
    Celula0 : Celula;
    Celula1 : Celula;
    Celula2 : Celula;
    Armazem0 : Armazem;
  END_VAR
  VAR
    ordem AT %MW0.0.2.0 : WORD;
    in AT %IX0.1.0.0 : BOOL;
    ordemMES AT %IW0.1.1.0 : WORD;
    destino1 AT %IW0.1.1.1 : WORD;
    destino2 AT %IW0.1.1.6 : WORD;
    destino3 AT %IW0.1.1.11 : WORD;
    destino4 AT %IW0.1.1.16 : WORD;
    destino5 AT %IW0.1.1.17 : WORD;
    destino6 AT %IW0.1.1.18 : WORD;
    destino7 AT %IW0.1.1.19 : WORD;
    destino8 AT %IW0.1.1.20 : WORD;
    px1 AT %IW0.1.1.2 : WORD;
    py1 AT %IW0.1.1.3 : WORD;
    px2 AT %IW0.1.1.4 : WORD;
    px3 AT %IW0.1.1.7 : WORD;
    px4 AT %IW0.1.1.9 : WORD;
    px5 AT %IW0.1.1.12 : WORD;
    px6 AT %IW0.1.1.14 : WORD;
    py2 AT %IW0.1.1.5 : WORD;
    py3 AT %IW0.1.1.8 : WORD;
    py4 AT %IW0.1.1.10 : WORD;
    py5 AT %IW0.1.1.13 : WORD;
    py6 AT %IW0.1.1.15 : WORD;
  END_VAR
  VAR_EXTERNAL
    ocup1 : BOOL;
    ocup2 : BOOL;
    ocup3 : BOOL;
    ocup4 : BOOL;
    ocup5 : BOOL;
    ocup6 : BOOL;
    socup1 : BOOL;
    socup2 : BOOL;
    socup3 : BOOL;
    socup4 : BOOL;
    socup5 : BOOL;
    socup6 : BOOL;
  END_VAR
  VAR
    smaq1 AT %QX0.2.0.9 : BOOL;
    smaq2 AT %QX0.2.0.10 : BOOL;
    smaq3 AT %QX0.2.0.11 : BOOL;
    smaq4 AT %QX0.2.0.12 : BOOL;
    smaq5 AT %QX0.2.0.13 : BOOL;
    smaq6 AT %QX0.2.0.14 : BOOL;
    sentrada AT %QX0.2.0.15 : BOOL;
    srot1 AT %QX0.2.0.6 : BOOL;
    srot2 AT %QX0.2.0.7 : BOOL;
    srot3 AT %QX0.2.0.8 : BOOL;
    srot4 AT %QX0.2.0.25 : BOOL;
    srot5 AT %QX0.2.0.26 : BOOL;
    spush1 AT %QX0.2.0.27 : BOOL;
    spush2 AT %QX0.2.0.28 : BOOL;
    spush3 AT %QX0.2.0.29 : BOOL;
  END_VAR
  VAR
    Intoout0 : Intoout;
  END_VAR
  VAR_EXTERNAL
    aux1 : BOOL;
    aux2 : BOOL;
    aux3 : BOOL;
    aux4 : BOOL;
    aux5 : BOOL;
    aux6 : BOOL;
  END_VAR
  VAR
    Celula_robot0 : Celula_robot;
    Carga_Descarga0 : Carga_Descarga;
    p_out1 : WORD;
    p_out2 : WORD;
    p_out3 : WORD;
  END_VAR
  VAR_EXTERNAL
    auxr : BOOL;
    socupr : BOOL;
    ocupr : BOOL;
  END_VAR
  VAR
    robdescp AT %IX0.1.0.8 : BOOL;
    robodesc AT %QX0.2.0.17 : BOOL;
    carga1 AT %QX0.2.0.21 : BOOL;
    carga2 AT %QX0.2.0.22 : BOOL;
    cargadescp AT %IX0.1.0.12 : BOOL;
    cargadescp2 AT %IX0.1.0.13 : BOOL;
    spc1 AT %QX0.2.0.23 : BOOL;
    spc2 AT %QX0.2.0.24 : BOOL;
  END_VAR
  VAR_EXTERNAL
    auxp1 : BOOL;
    auxp2 : BOOL;
    auxp3 : BOOL;
    ocupp1 : BOOL;
    ocupp2 : BOOL;
    ocupp3 : BOOL;
    socupp1 : BOOL;
    socupp2 : BOOL;
    socupp3 : BOOL;
  END_VAR
  VAR
    sroller1 AT %QX0.2.0.30 : BOOL;
    sroller2 AT %QX0.2.0.31 : BOOL;
    sroller3 AT %QX0.2.0.32 : BOOL;
    inarm AT %IX0.1.0.14 : BOOL;
    outarm AT %QX0.2.0.33 : BOOL;
  END_VAR

  Armazem0(tapetein := S1, ordemin := in, tapeteoutfree := S0, ordem := ordemMES, sp1 := S0, crin := Celula0.crout, cfree := Celula0.cfree_o, sp2 := S1, creceivb := Celula0.ctakeb, inarm := inarm);
  Celula0(sp1 := S2, sp2 := S3, sh2 := S5, sv2 := S4, sp3 := S6, st3 := S7, sxp3 := S8, sxn3 := S9, szp3 := S10, szn3 := S11, destino := 1, sp4 := S12, st5 := S14, sxp5 := S15, szp5 := S17, sxn5 := S16, szn5 := S18, sp5 := S13, sp6 := S19, sh6 := S21, sv6 := S20, sp7 := S22, creceiv := Armazem0.ctake, cfree_i2 := Celula1.cfree_o, dest := destino1, crin := Celula1.crout, crecivb := Celula1.ctakeb, crinb := Armazem0.croub, cfree_ib := Armazem0.cfreo_b, px := px1, py := py1, px2 := px2, py2 := py2, machine1 := 1, machine2 := 3);
  Carga_Descarga0(sp1 := S89, sp2 := S90, sh2 := S92, sv2 := S91, sp6 := S104, sh6 := S106, sv6 := S105, sp7 := S103, creceiv := Celula_robot0.ctake, dest := destino5, crinb := Celula_robot0.croub, cfree_ib := Celula_robot0.cfree_ob, sp3 := S94, srest3 := S95, spush3 := S96, p_out1 := destino6, spr3 := S108, sp4 := S93, sp5 := S97, srest5 := S98, spush5 := S99, p_out2 := destino7, spr5 := S109, sp8 := S100, srest8 := S101, spush8 := S102, p_out3 := destino8, spr8 := S110, sp9 := S107, cargadescp := cargadescp, cargadescp2 := cargadescp2);
  Celula_robot0(sp1 := S65, sp2 := S66, sh2 := S68, sv2 := S67, sp6 := S73, sh6 := S75, sv6 := S74, sp7 := S72, creceiv := Celula2.ctake, cfree_i2 := Carga_Descarga0.cfree_o, dest := destino4, crin := Carga_Descarga0.crout, crecivb := Carga_Descarga0.ctakeb, crinb := Celula2.croub, cfree_ib := Celula2.cfree_ob, sx0 := S79, sx1 := S80, sy0 := S81, sy1 := S82, sy2 := S83, sy3 := S84, sy4 := S85, zbot := S86, ztop := S87, piece := S88, s1 := S69, s2 := S70, s3 := S71, frommes := robdescp);
  Celula2(sp1 := S44, sp2 := S45, sh2 := S47, sv2 := S46, sp3 := S48, st3 := S49, sxp3 := S50, sxn3 := S51, szp3 := S52, szn3 := S53, destino := 1, sp4 := S54, st5 := S56, sxp5 := S57, szp5 := S59, sxn5 := S58, szn5 := S60, sp5 := S55, sp6 := S61, sh6 := S63, sv6 := S62, sp7 := S64, creceiv := Celula1.ctake, cfree_i2 := Celula_robot0.cfree_o, dest := destino3, crin := Celula_robot0.crout, crecivb := Celula_robot0.ctakeb, crinb := Celula1.croub, cfree_ib := Celula1.cfree_ob, px := px5, py := py5, px2 := px6, py2 := py6, machine1 := 2, machine2 := 3);
  Celula1(sp1 := S23, sp2 := S24, sh2 := S26, sv2 := S25, sp3 := S27, st3 := S28, sxp3 := S29, sxn3 := S30, szp3 := S31, szn3 := S32, destino := 1, sp4 := S33, st5 := S35, sxp5 := S36, szp5 := S38, sxn5 := S37, szn5 := S39, sp5 := S34, sp6 := S40, sh6 := S42, sv6 := S41, sp7 := S43, creceiv := Celula0.ctake, cfree_i2 := Celula2.cfree_o, dest := destino2, crin := Celula2.crout, crecivb := Celula2.ctakeb, crinb := Celula0.croub, cfree_ib := Celula0.cfree_ob, px := px3, py := py3, px2 := px4, py2 := py4, machine1 := 1, machine2 := 3);
  Q38 := Celula1.ap1;
  Q70 := Celula2.ap1;
  Q6 := Celula0.ap1;
  Q102 := Celula_robot0.ap1;
  Q125 := Carga_Descarga0.ap1;
  Q4 := Armazem0.tapetestore;
  Q8 := Celula0.ap2;
  Q40 := Celula1.ap2;
  Q72 := Celula2.ap2;
  Q127 := Carga_Descarga0.ap2;
  Q1 := Armazem0.a1;
  Q10 := Celula0.ah2;
  Q42 := Celula1.ah2;
  Q74 := Celula2.ah2;
  Q104 := Celula_robot0.ap2;
  Q129 := Carga_Descarga0.ah2;
  ordem := Armazem0.pecaadd;
  Q9 := Celula0.av2;
  Q41 := Celula1.av2;
  Q73 := Celula2.av2;
  Q106 := Celula_robot0.ah2;
  Q128 := Carga_Descarga0.av2;
  Q12 := Celula0.ap3;
  Q44 := Celula1.ap3;
  Q76 := Celula2.ap3;
  Q105 := Celula_robot0.av2;
  Q126 := Carga_Descarga0.an2;
  Q2 := Armazem0.a2;
  Q14 := Celula0.arp3;
  Q46 := Celula1.arp3;
  Q45 := Celula1.arn3;
  Q78 := Celula2.arp3;
  Q13 := Celula0.arn3;
  Q77 := Celula2.arn3;
  Q113 := Celula_robot0.an6;
  Q146 := Carga_Descarga0.an6;
  Q16 := Celula0.axn3;
  Q48 := Celula1.axn3;
  Q80 := Celula2.axn3;
  Q19 := Celula0.azn3;
  Q51 := Celula1.azn3;
  Q83 := Celula2.azn3;
  Q149 := Carga_Descarga0.ah6;
  outarm := Armazem0.outarm;
  Q116 := Celula_robot0.ah6;
  Q17 := Celula0.axp3;
  Q49 := Celula1.axp3;
  Q81 := Celula2.axp3;
  Q148 := Carga_Descarga0.av6;
  Q18 := Celula0.azp3;
  Q50 := Celula1.azp3;
  Q115 := Celula_robot0.av6;
  Q82 := Celula2.azp3;
  Q147 := Carga_Descarga0.ap6;
  Q114 := Celula_robot0.ap6;
  Q15 := Celula0.atool3;
  Q47 := Celula1.atool3;
  Q79 := Celula2.atool3;
  Q144 := Carga_Descarga0.av7;
  Q21 := Celula0.ap4;
  Q53 := Celula1.ap4;
  Q85 := Celula2.ap4;
  Q111 := Celula_robot0.av7;
  Q27 := Celula0.axn5;
  Q59 := Celula1.axn5;
  Q91 := Celula2.axn5;
  Q58 := Celula1.atool5;
  Q90 := Celula2.atool5;
  Q26 := Celula0.atool5;
  Q60 := Celula1.axp5;
  Q92 := Celula2.axp5;
  Q28 := Celula0.axp5;
  Q62 := Celula1.azp5;
  Q94 := Celula2.azp5;
  Q30 := Celula0.azp5;
  Q61 := Celula1.azn5;
  Q133 := Carga_Descarga0.an3;
  Q93 := Celula2.azn5;
  Q29 := Celula0.azn5;
  Q55 := Celula1.ap5;
  Q23 := Celula0.ap5;
  Q87 := Celula2.ap5;
  Q135 := Carga_Descarga0.apush3;
  Q63 := Celula1.an6;
  Q95 := Celula2.an6;
  Q31 := Celula0.an6;
  Q134 := Carga_Descarga0.aret3;
  Q56 := Celula1.arn5;
  Q24 := Celula0.arn5;
  Q65 := Celula1.ah6;
  Q130 := Carga_Descarga0.ap4;
  Q25 := Celula0.arp5;
  Q97 := Celula2.ah6;
  Q33 := Celula0.ah6;
  Q57 := Celula1.arp5;
  Q66 := Celula1.av6;
  Q89 := Celula2.arp5;
  Q98 := Celula2.av6;
  Q131 := Carga_Descarga0.an4;
  Q34 := Celula0.av6;
  Q64 := Celula1.ap6;
  Q88 := Celula2.arn5;
  Q96 := Celula2.ap6;
  Q139 := Carga_Descarga0.apush5;
  Q32 := Celula0.ap6;
  Q117 := Celula_robot0.mxp;
  Q138 := Carga_Descarga0.aret5;
  Q35 := Celula0.av7;
  Q67 := Celula1.av7;
  Q99 := Celula2.av7;
  Q118 := Celula_robot0.mxn;
  Q137 := Carga_Descarga0.an5;
  Q143 := Carga_Descarga0.apush8;
  Q119 := Celula_robot0.myp;
  Q142 := Carga_Descarga0.aret8;
  Q120 := Celula_robot0.myn;
  Q141 := Carga_Descarga0.an8;
  Q121 := Celula_robot0.mzp;
  Q150 := Carga_Descarga0.an9;
  Q122 := Celula_robot0.mzn;
  spc1 := Carga_Descarga0.Scp1;
  Q123 := Celula_robot0.grab;
  spc2 := Carga_Descarga0.Scp2;
  Q107 := Celula_robot0.a1;
  sroller1 := Carga_Descarga0.rollerocup1;
  sroller2 := Carga_Descarga0.rollerocup2;
  Q108 := Celula_robot0.a2;
  sroller3 := Carga_Descarga0.rollerocup3;
  Q109 := Celula_robot0.a3;
  Q110 := Celula_robot0.a4;
  auxr := Celula_robot0.auxr;
  robodesc := Celula_robot0.tomes;
  Intoout0(x1 := s3, x2 := s6, x3 := s13, x4 := s24, x5 := s27, x6 := s34, x7 := s45, x8 := s48, x9 := s55, mi1 := s6, mi2 := s13, mi3 := s27, mi4 := s34, mi5 := s48, mi6 := s55, si := s0, x10 := S66, x11 := S90, x12 := S94, x13 := S97, x14 := S100, x20 := S103, x21 := S107);
  srot1 := Intoout0.y1;
  srot2 := Intoout0.y4;
  srot3 := Intoout0.y7;
  smaq1 := Intoout0.y2;
  smaq2 := Intoout0.y3;
  smaq3 := Intoout0.y5;
  smaq4 := Intoout0.y6;
  smaq5 := Intoout0.y8;
  smaq6 := Intoout0.y9;
  aux1 := Intoout0.mo1;
  aux2 := Intoout0.mo2;
  aux3 := Intoout0.mo3;
  aux4 := Intoout0.mo4;
  aux5 := Intoout0.mo5;
  aux6 := Intoout0.mo6;
  sentrada := Intoout0.so;
  srot4 := Intoout0.y10;
  srot5 := Intoout0.y11;
  spush1 := Intoout0.y12;
  spush2 := Intoout0.y13;
  spush3 := Intoout0.y14;
  carga2 := Intoout0.y21;
END_PROGRAM


CONFIGURATION config

  RESOURCE resource1 ON PLC
    VAR_GLOBAL
      ocup1 AT %IX0.1.0.1 : BOOL;
      ocup2 AT %IX0.1.0.2 : BOOL;
      ocup3 AT %IX0.1.0.3 : BOOL;
      ocup4 AT %IX0.1.0.4 : BOOL;
      ocup5 AT %IX0.1.0.5 : BOOL;
      ocup6 AT %IX0.1.0.6 : BOOL;
      socup1 AT %QX0.2.0.0 : BOOL;
      socup2 AT %QX0.2.0.1 : BOOL;
      socup3 AT %QX0.2.0.2 : BOOL;
      socup4 AT %QX0.2.0.3 : BOOL;
      socup5 AT %QX0.2.0.4 : BOOL;
      socup6 AT %QX0.2.0.5 : BOOL;
      aux1 : BOOL;
      aux2 : BOOL;
      aux3 : BOOL;
      aux4 : BOOL;
      aux5 : BOOL;
      aux6 : BOOL;
      auxr : BOOL;
      ocupr AT %IX0.1.0.7 : BOOL;
      socupr AT %QX0.2.0.16 : BOOL;
      auxp1 : BOOL;
      auxp2 : BOOL;
      auxp3 : BOOL;
      socupp1 AT %QX0.2.0.18 : BOOL;
      socupp2 AT %QX0.2.0.19 : BOOL;
      socupp3 AT %QX0.2.0.20 : BOOL;
      ocupp1 AT %IX0.1.0.9 : BOOL;
      ocupp2 AT %IX0.1.0.10 : BOOL;
      ocupp3 AT %IX0.1.0.11 : BOOL;
    END_VAR
    TASK x(INTERVAL := T#30ms,PRIORITY := 0);
    TASK y(INTERVAL := T#30ms,PRIORITY := 0);
    PROGRAM prog1 WITH x : program1;
    PROGRAM cl WITH y : control;
  END_RESOURCE
END_CONFIGURATION
