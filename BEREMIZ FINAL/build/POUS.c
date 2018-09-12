void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->ADD10_OUT,0,retain)
  __INIT_VAR(data__->EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SEL15_OUT,0,retain)
  __INIT_VAR(data__->AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->ADD10_OUT,)));
  __SET_VAR(data__->,SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (UINT)__GET_VAR(data__->ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->SEL15_OUT,));
  __SET_VAR(data__->,AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void GETBOOLSTRING_init__(GETBOOLSTRING *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VALUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
}

// Code part
void GETBOOLSTRING_body__(GETBOOLSTRING *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if (__GET_VAR(data__->VALUE,)) {
    __SET_VAR(data__->,CODE,,__STRING_LITERAL(4,"True"));
  } else {
    __SET_VAR(data__->,CODE,,__STRING_LITERAL(5,"False"));
  };

  goto __end;

__end:
  return;
} // GETBOOLSTRING_body__() 





void BUTTON_init__(BUTTON *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->BACK_ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->SELE_ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TOGGLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SET_STATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE_IN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE_OUT,__BOOL_LITERAL(FALSE),retain)
  PYTHON_EVAL_init__(&data__->INIT_COMMAND,retain);
  GETBOOLSTRING_init__(&data__->GETBUTTONSTATE,retain);
  PYTHON_EVAL_init__(&data__->SETSTATE_COMMAND,retain);
  PYTHON_POLL_init__(&data__->GETSTATE_COMMAND,retain);
  GETBOOLSTRING_init__(&data__->GETBUTTONTOGGLE,retain);
  __INIT_VAR(data__->CONCAT2_OUT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->CONCAT22_OUT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STRING_TO_INT25_OUT,0,retain)
  __INIT_VAR(data__->INT_TO_BOOL26_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND31_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONCAT7_OUT,__STRING_LITERAL(0,""),retain)
}

// Code part
void BUTTON_body__(BUTTON *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->GETBUTTONTOGGLE.,VALUE,,__GET_VAR(data__->TOGGLE,));
  GETBOOLSTRING_body__(&data__->GETBUTTONTOGGLE);
  __SET_VAR(data__->,CONCAT2_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)7,
    (STRING)__STRING_LITERAL(37,"createSVGUIControl(\"button\",back_id=\""),
    (STRING)__GET_VAR(data__->BACK_ID,),
    (STRING)__STRING_LITERAL(11,"\",sele_id=\""),
    (STRING)__GET_VAR(data__->SELE_ID,),
    (STRING)__STRING_LITERAL(9,"\",toggle="),
    (STRING)__GET_VAR(data__->GETBUTTONTOGGLE.CODE,),
    (STRING)__STRING_LITERAL(13,",active=True)")));
  __SET_VAR(data__->INIT_COMMAND.,TRIG,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->INIT_COMMAND.,CODE,,__GET_VAR(data__->CONCAT2_OUT,));
  PYTHON_EVAL_body__(&data__->INIT_COMMAND);
  __SET_VAR(data__->,ID,,__GET_VAR(data__->INIT_COMMAND.RESULT,));
  __SET_VAR(data__->,CONCAT22_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)3,
    (STRING)__STRING_LITERAL(12,"int(getAttr("),
    (STRING)__GET_VAR(data__->ID,),
    (STRING)__STRING_LITERAL(16,",\"state\",False))")));
  __SET_VAR(data__->GETSTATE_COMMAND.,TRIG,,__GET_VAR(data__->INIT_COMMAND.ACK,));
  __SET_VAR(data__->GETSTATE_COMMAND.,CODE,,__GET_VAR(data__->CONCAT22_OUT,));
  PYTHON_POLL_body__(&data__->GETSTATE_COMMAND);
  __SET_VAR(data__->,STRING_TO_INT25_OUT,,STRING_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->GETSTATE_COMMAND.RESULT,)));
  __SET_VAR(data__->,INT_TO_BOOL26_OUT,,INT_TO_BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->STRING_TO_INT25_OUT,)));
  __SET_VAR(data__->,STATE_OUT,,__GET_VAR(data__->INT_TO_BOOL26_OUT,));
  __SET_VAR(data__->,AND31_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->INIT_COMMAND.ACK,),
    (BOOL)__GET_VAR(data__->SET_STATE,)));
  __SET_VAR(data__->GETBUTTONSTATE.,VALUE,,__GET_VAR(data__->STATE_IN,));
  GETBOOLSTRING_body__(&data__->GETBUTTONSTATE);
  __SET_VAR(data__->,CONCAT7_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)5,
    (STRING)__STRING_LITERAL(8,"setAttr("),
    (STRING)__GET_VAR(data__->ID,),
    (STRING)__STRING_LITERAL(9,",\"state\","),
    (STRING)__GET_VAR(data__->GETBUTTONSTATE.CODE,),
    (STRING)__STRING_LITERAL(1,")")));
  __SET_VAR(data__->SETSTATE_COMMAND.,TRIG,,__GET_VAR(data__->AND31_OUT,));
  __SET_VAR(data__->SETSTATE_COMMAND.,CODE,,__GET_VAR(data__->CONCAT7_OUT,));
  PYTHON_EVAL_body__(&data__->SETSTATE_COMMAND);

  goto __end;

__end:
  return;
} // BUTTON_body__() 





void LED_init__(LED *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->BACK_ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->SELE_ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE_IN,__BOOL_LITERAL(FALSE),retain)
  PYTHON_EVAL_init__(&data__->INIT_COMMAND,retain);
  PYTHON_POLL_init__(&data__->SETSTATE_COMMAND,retain);
  GETBOOLSTRING_init__(&data__->GETLEDSTATE,retain);
  __INIT_VAR(data__->CONCAT2_OUT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->CONCAT7_OUT,__STRING_LITERAL(0,""),retain)
}

// Code part
void LED_body__(LED *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,CONCAT2_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)5,
    (STRING)__STRING_LITERAL(37,"createSVGUIControl(\"button\",back_id=\""),
    (STRING)__GET_VAR(data__->BACK_ID,),
    (STRING)__STRING_LITERAL(11,"\",sele_id=\""),
    (STRING)__GET_VAR(data__->SELE_ID,),
    (STRING)__STRING_LITERAL(27,"\",toggle=True,active=False)")));
  __SET_VAR(data__->INIT_COMMAND.,TRIG,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->INIT_COMMAND.,CODE,,__GET_VAR(data__->CONCAT2_OUT,));
  PYTHON_EVAL_body__(&data__->INIT_COMMAND);
  __SET_VAR(data__->,ID,,__GET_VAR(data__->INIT_COMMAND.RESULT,));
  __SET_VAR(data__->GETLEDSTATE.,VALUE,,__GET_VAR(data__->STATE_IN,));
  GETBOOLSTRING_body__(&data__->GETLEDSTATE);
  __SET_VAR(data__->,CONCAT7_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)5,
    (STRING)__STRING_LITERAL(8,"setAttr("),
    (STRING)__GET_VAR(data__->ID,),
    (STRING)__STRING_LITERAL(9,",\"state\","),
    (STRING)__GET_VAR(data__->GETLEDSTATE.CODE,),
    (STRING)__STRING_LITERAL(1,")")));
  __SET_VAR(data__->SETSTATE_COMMAND.,TRIG,,__GET_VAR(data__->INIT_COMMAND.ACK,));
  __SET_VAR(data__->SETSTATE_COMMAND.,CODE,,__GET_VAR(data__->CONCAT7_OUT,));
  PYTHON_POLL_body__(&data__->SETSTATE_COMMAND);

  goto __end;

__end:
  return;
} // LED_body__() 





void TEXTCTRL_init__(TEXTCTRL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->BACK_ID,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->SET_TEXT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TEXT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->SVGUI_TEXTCTRL,retain);
  PYTHON_EVAL_init__(&data__->SETSTATE_COMMAND,retain);
  __INIT_VAR(data__->CONCAT1_OUT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->AND31_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONCAT12_OUT,__STRING_LITERAL(0,""),retain)
}

// Code part
void TEXTCTRL_body__(TEXTCTRL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,CONCAT1_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)3,
    (STRING)__STRING_LITERAL(43,"createSVGUIControl(\"textControl\", back_id=\""),
    (STRING)__GET_VAR(data__->BACK_ID,),
    (STRING)__STRING_LITERAL(2,"\")")));
  __SET_VAR(data__->SVGUI_TEXTCTRL.,TRIG,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->SVGUI_TEXTCTRL.,CODE,,__GET_VAR(data__->CONCAT1_OUT,));
  PYTHON_EVAL_body__(&data__->SVGUI_TEXTCTRL);
  __SET_VAR(data__->,ID,,__GET_VAR(data__->SVGUI_TEXTCTRL.RESULT,));
  __SET_VAR(data__->,AND31_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->SVGUI_TEXTCTRL.ACK,),
    (BOOL)__GET_VAR(data__->SET_TEXT,)));
  __SET_VAR(data__->,CONCAT12_OUT,,CONCAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)5,
    (STRING)__STRING_LITERAL(8,"setAttr("),
    (STRING)__GET_VAR(data__->ID,),
    (STRING)__STRING_LITERAL(9,",\"text\",\""),
    (STRING)__GET_VAR(data__->TEXT,),
    (STRING)__STRING_LITERAL(2,"\")")));
  __SET_VAR(data__->SETSTATE_COMMAND.,TRIG,,__GET_VAR(data__->AND31_OUT,));
  __SET_VAR(data__->SETSTATE_COMMAND.,CODE,,__GET_VAR(data__->CONCAT12_OUT,));
  PYTHON_EVAL_body__(&data__->SETSTATE_COMMAND);

  goto __end;

__end:
  return;
} // TEXTCTRL_body__() 





void CONTROL_init__(CONTROL *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,OCUP1,data__->OCUP1,retain)
  __INIT_EXTERNAL(BOOL,OCUP2,data__->OCUP2,retain)
  __INIT_EXTERNAL(BOOL,OCUP3,data__->OCUP3,retain)
  __INIT_EXTERNAL(BOOL,OCUP4,data__->OCUP4,retain)
  __INIT_EXTERNAL(BOOL,OCUP5,data__->OCUP5,retain)
  __INIT_EXTERNAL(BOOL,OCUP6,data__->OCUP6,retain)
  __INIT_EXTERNAL(BOOL,SOCUP1,data__->SOCUP1,retain)
  __INIT_EXTERNAL(BOOL,SOCUP2,data__->SOCUP2,retain)
  __INIT_EXTERNAL(BOOL,SOCUP3,data__->SOCUP3,retain)
  __INIT_EXTERNAL(BOOL,SOCUP4,data__->SOCUP4,retain)
  __INIT_EXTERNAL(BOOL,SOCUP5,data__->SOCUP5,retain)
  __INIT_EXTERNAL(BOOL,SOCUP6,data__->SOCUP6,retain)
  __INIT_EXTERNAL(BOOL,AUX1,data__->AUX1,retain)
  __INIT_EXTERNAL(BOOL,AUX2,data__->AUX2,retain)
  __INIT_EXTERNAL(BOOL,AUX3,data__->AUX3,retain)
  __INIT_EXTERNAL(BOOL,AUX4,data__->AUX4,retain)
  __INIT_EXTERNAL(BOOL,AUX5,data__->AUX5,retain)
  __INIT_EXTERNAL(BOOL,AUX6,data__->AUX6,retain)
  __INIT_EXTERNAL(BOOL,AUXR,data__->AUXR,retain)
  __INIT_EXTERNAL(BOOL,OCUPR,data__->OCUPR,retain)
  __INIT_EXTERNAL(BOOL,SOCUPR,data__->SOCUPR,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP1,data__->SOCUPP1,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP2,data__->SOCUPP2,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP3,data__->SOCUPP3,retain)
  __INIT_EXTERNAL(BOOL,OCUPP1,data__->OCUPP1,retain)
  __INIT_EXTERNAL(BOOL,OCUPP2,data__->OCUPP2,retain)
  __INIT_EXTERNAL(BOOL,OCUPP3,data__->OCUPP3,retain)
  __INIT_EXTERNAL(BOOL,AUXP1,data__->AUXP1,retain)
  __INIT_EXTERNAL(BOOL,AUXP2,data__->AUXP2,retain)
  __INIT_EXTERNAL(BOOL,AUXP3,data__->AUXP3,retain)
  UINT i;
  data__->__nb_steps = 40;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  __SET_VAR(data__->,__step_list[4].X,,1);
  __SET_VAR(data__->,__step_list[8].X,,1);
  __SET_VAR(data__->,__step_list[12].X,,1);
  __SET_VAR(data__->,__step_list[16].X,,1);
  __SET_VAR(data__->,__step_list[20].X,,1);
  __SET_VAR(data__->,__step_list[24].X,,1);
  __SET_VAR(data__->,__step_list[28].X,,1);
  __SET_VAR(data__->,__step_list[32].X,,1);
  __SET_VAR(data__->,__step_list[36].X,,1);
  data__->__nb_actions = 30;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 40;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP2 __step_list[0]
#define __SFC_STEP2 0
#define STEP3 __step_list[1]
#define __SFC_STEP3 1
#define STEP0 __step_list[2]
#define __SFC_STEP0 2
#define STEP1 __step_list[3]
#define __SFC_STEP1 3
#define STEP5 __step_list[4]
#define __SFC_STEP5 4
#define STEP6 __step_list[5]
#define __SFC_STEP6 5
#define STEP7 __step_list[6]
#define __SFC_STEP7 6
#define STEP4 __step_list[7]
#define __SFC_STEP4 7
#define STEP9 __step_list[8]
#define __SFC_STEP9 8
#define STEP10 __step_list[9]
#define __SFC_STEP10 9
#define STEP15 __step_list[10]
#define __SFC_STEP15 10
#define STEP8 __step_list[11]
#define __SFC_STEP8 11
#define STEP12 __step_list[12]
#define __SFC_STEP12 12
#define STEP13 __step_list[13]
#define __SFC_STEP13 13
#define STEP14 __step_list[14]
#define __SFC_STEP14 14
#define STEP11 __step_list[15]
#define __SFC_STEP11 15
#define STEP17 __step_list[16]
#define __SFC_STEP17 16
#define STEP18 __step_list[17]
#define __SFC_STEP18 17
#define STEP23 __step_list[18]
#define __SFC_STEP23 18
#define STEP16 __step_list[19]
#define __SFC_STEP16 19
#define STEP20 __step_list[20]
#define __SFC_STEP20 20
#define STEP21 __step_list[21]
#define __SFC_STEP21 21
#define STEP22 __step_list[22]
#define __SFC_STEP22 22
#define STEP19 __step_list[23]
#define __SFC_STEP19 23
#define STEP25 __step_list[24]
#define __SFC_STEP25 24
#define STEP26 __step_list[25]
#define __SFC_STEP26 25
#define STEP27 __step_list[26]
#define __SFC_STEP27 26
#define STEP24 __step_list[27]
#define __SFC_STEP24 27
#define STEP29 __step_list[28]
#define __SFC_STEP29 28
#define STEP30 __step_list[29]
#define __SFC_STEP30 29
#define STEP37 __step_list[30]
#define __SFC_STEP37 30
#define STEP28 __step_list[31]
#define __SFC_STEP28 31
#define STEP32 __step_list[32]
#define __SFC_STEP32 32
#define STEP33 __step_list[33]
#define __SFC_STEP33 33
#define STEP34 __step_list[34]
#define __SFC_STEP34 34
#define STEP31 __step_list[35]
#define __SFC_STEP31 35
#define STEP36 __step_list[36]
#define __SFC_STEP36 36
#define STEP38 __step_list[37]
#define __SFC_STEP38 37
#define STEP39 __step_list[38]
#define __SFC_STEP39 38
#define STEP35 __step_list[39]
#define __SFC_STEP35 39

// Actions definitions
#define __SFC_STEP2_INLINE1 0
#define __SFC_STEP3_INLINE2 1
#define __SFC_STEP0_INLINE3 2
#define __SFC_STEP5_INLINE5 3
#define __SFC_STEP6_INLINE6 4
#define __SFC_STEP7_INLINE4 5
#define __SFC_STEP9_INLINE11 6
#define __SFC_STEP10_INLINE12 7
#define __SFC_STEP15_INLINE7 8
#define __SFC_STEP12_INLINE9 9
#define __SFC_STEP13_INLINE10 10
#define __SFC_STEP14_INLINE8 11
#define __SFC_STEP17_INLINE17 12
#define __SFC_STEP18_INLINE18 13
#define __SFC_STEP23_INLINE13 14
#define __SFC_STEP20_INLINE15 15
#define __SFC_STEP21_INLINE16 16
#define __SFC_STEP22_INLINE14 17
#define __SFC_STEP25_INLINE20 18
#define __SFC_STEP26_INLINE21 19
#define __SFC_STEP27_INLINE19 20
#define __SFC_STEP29_INLINE27 21
#define __SFC_STEP30_INLINE28 22
#define __SFC_STEP37_INLINE22 23
#define __SFC_STEP32_INLINE24 24
#define __SFC_STEP33_INLINE25 25
#define __SFC_STEP34_INLINE23 26
#define __SFC_STEP36_INLINE29 27
#define __SFC_STEP38_INLINE30 28
#define __SFC_STEP39_INLINE26 29

// Code part
void CONTROL_body__(CONTROL *data__) {
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_EXTERNAL(data__->OCUP1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_EXTERNAL(data__->OCUP1,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_EXTERNAL(data__->AUX1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_EXTERNAL(data__->AUX1,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[2],,!(__GET_EXTERNAL(data__->AUX1,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,!(__GET_EXTERNAL(data__->AUX1,)));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[3],,!(__GET_EXTERNAL(data__->OCUP1,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,!(__GET_EXTERNAL(data__->OCUP1,)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_EXTERNAL(data__->OCUP2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_EXTERNAL(data__->OCUP2,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_EXTERNAL(data__->AUX2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_EXTERNAL(data__->AUX2,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[6],,!(__GET_EXTERNAL(data__->AUX2,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,!(__GET_EXTERNAL(data__->AUX2,)));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[7],,!(__GET_EXTERNAL(data__->OCUP2,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,!(__GET_EXTERNAL(data__->OCUP2,)));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_EXTERNAL(data__->OCUP3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_EXTERNAL(data__->OCUP3,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_EXTERNAL(data__->AUX3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_EXTERNAL(data__->AUX3,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[10],,!(__GET_EXTERNAL(data__->AUX3,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,!(__GET_EXTERNAL(data__->AUX3,)));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[11],,!(__GET_EXTERNAL(data__->OCUP3,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,!(__GET_EXTERNAL(data__->OCUP3,)));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_EXTERNAL(data__->OCUP4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_EXTERNAL(data__->OCUP4,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP13.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_EXTERNAL(data__->AUX4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_EXTERNAL(data__->AUX4,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->STEP14.X)) {
    __SET_VAR(data__->,__transition_list[14],,!(__GET_EXTERNAL(data__->AUX4,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,!(__GET_EXTERNAL(data__->AUX4,)));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->STEP11.X)) {
    __SET_VAR(data__->,__transition_list[15],,!(__GET_EXTERNAL(data__->OCUP4,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,!(__GET_EXTERNAL(data__->OCUP4,)));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->STEP17.X)) {
    __SET_VAR(data__->,__transition_list[16],,__GET_EXTERNAL(data__->OCUP5,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_EXTERNAL(data__->OCUP5,));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STEP18.X)) {
    __SET_VAR(data__->,__transition_list[17],,__GET_EXTERNAL(data__->AUX5,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_EXTERNAL(data__->AUX5,));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STEP23.X)) {
    __SET_VAR(data__->,__transition_list[18],,!(__GET_EXTERNAL(data__->AUX5,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,!(__GET_EXTERNAL(data__->AUX5,)));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STEP16.X)) {
    __SET_VAR(data__->,__transition_list[19],,!(__GET_EXTERNAL(data__->OCUP5,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,!(__GET_EXTERNAL(data__->OCUP5,)));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->STEP20.X)) {
    __SET_VAR(data__->,__transition_list[20],,__GET_EXTERNAL(data__->OCUP6,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_EXTERNAL(data__->OCUP6,));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->STEP21.X)) {
    __SET_VAR(data__->,__transition_list[21],,__GET_EXTERNAL(data__->AUX6,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_EXTERNAL(data__->AUX6,));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }
  if (__GET_VAR(data__->STEP22.X)) {
    __SET_VAR(data__->,__transition_list[22],,!(__GET_EXTERNAL(data__->AUX6,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->__transition_list[22]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,!(__GET_EXTERNAL(data__->AUX6,)));
    }
    __SET_VAR(data__->,__transition_list[22],,0);
  }
  if (__GET_VAR(data__->STEP19.X)) {
    __SET_VAR(data__->,__transition_list[23],,!(__GET_EXTERNAL(data__->OCUP6,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->__transition_list[23]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,!(__GET_EXTERNAL(data__->OCUP6,)));
    }
    __SET_VAR(data__->,__transition_list[23],,0);
  }
  if (__GET_VAR(data__->STEP25.X)) {
    __SET_VAR(data__->,__transition_list[24],,__GET_EXTERNAL(data__->OCUPR,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->__transition_list[24]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_EXTERNAL(data__->OCUPR,));
    }
    __SET_VAR(data__->,__transition_list[24],,0);
  }
  if (__GET_VAR(data__->STEP26.X)) {
    __SET_VAR(data__->,__transition_list[25],,__GET_EXTERNAL(data__->AUXR,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->__transition_list[25]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_EXTERNAL(data__->AUXR,));
    }
    __SET_VAR(data__->,__transition_list[25],,0);
  }
  if (__GET_VAR(data__->STEP27.X)) {
    __SET_VAR(data__->,__transition_list[26],,!(__GET_EXTERNAL(data__->AUXR,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->__transition_list[26]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,!(__GET_EXTERNAL(data__->AUXR,)));
    }
    __SET_VAR(data__->,__transition_list[26],,0);
  }
  if (__GET_VAR(data__->STEP24.X)) {
    __SET_VAR(data__->,__transition_list[27],,!(__GET_EXTERNAL(data__->OCUPR,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->__transition_list[27]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,!(__GET_EXTERNAL(data__->OCUPR,)));
    }
    __SET_VAR(data__->,__transition_list[27],,0);
  }
  if (__GET_VAR(data__->STEP29.X)) {
    __SET_VAR(data__->,__transition_list[28],,__GET_EXTERNAL(data__->OCUPP1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->__transition_list[28]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_EXTERNAL(data__->OCUPP1,));
    }
    __SET_VAR(data__->,__transition_list[28],,0);
  }
  if (__GET_VAR(data__->STEP30.X)) {
    __SET_VAR(data__->,__transition_list[29],,__GET_EXTERNAL(data__->AUXP1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->__transition_list[29]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_EXTERNAL(data__->AUXP1,));
    }
    __SET_VAR(data__->,__transition_list[29],,0);
  }
  if (__GET_VAR(data__->STEP37.X)) {
    __SET_VAR(data__->,__transition_list[30],,!(__GET_EXTERNAL(data__->AUXP1,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->__transition_list[30]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,!(__GET_EXTERNAL(data__->AUXP1,)));
    }
    __SET_VAR(data__->,__transition_list[30],,0);
  }
  if (__GET_VAR(data__->STEP28.X)) {
    __SET_VAR(data__->,__transition_list[31],,!(__GET_EXTERNAL(data__->OCUPP1,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,__GET_VAR(data__->__transition_list[31]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,!(__GET_EXTERNAL(data__->OCUPP1,)));
    }
    __SET_VAR(data__->,__transition_list[31],,0);
  }
  if (__GET_VAR(data__->STEP32.X)) {
    __SET_VAR(data__->,__transition_list[32],,__GET_EXTERNAL(data__->OCUPP2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->__transition_list[32]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_EXTERNAL(data__->OCUPP2,));
    }
    __SET_VAR(data__->,__transition_list[32],,0);
  }
  if (__GET_VAR(data__->STEP33.X)) {
    __SET_VAR(data__->,__transition_list[33],,__GET_EXTERNAL(data__->AUXP2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->__transition_list[33]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_EXTERNAL(data__->AUXP2,));
    }
    __SET_VAR(data__->,__transition_list[33],,0);
  }
  if (__GET_VAR(data__->STEP34.X)) {
    __SET_VAR(data__->,__transition_list[34],,!(__GET_EXTERNAL(data__->AUXP2,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->__transition_list[34]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,!(__GET_EXTERNAL(data__->AUXP2,)));
    }
    __SET_VAR(data__->,__transition_list[34],,0);
  }
  if (__GET_VAR(data__->STEP31.X)) {
    __SET_VAR(data__->,__transition_list[35],,!(__GET_EXTERNAL(data__->OCUPP2,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->__transition_list[35]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,!(__GET_EXTERNAL(data__->OCUPP2,)));
    }
    __SET_VAR(data__->,__transition_list[35],,0);
  }
  if (__GET_VAR(data__->STEP36.X)) {
    __SET_VAR(data__->,__transition_list[36],,__GET_EXTERNAL(data__->OCUPP3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->__transition_list[36]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_EXTERNAL(data__->OCUPP3,));
    }
    __SET_VAR(data__->,__transition_list[36],,0);
  }
  if (__GET_VAR(data__->STEP38.X)) {
    __SET_VAR(data__->,__transition_list[37],,__GET_EXTERNAL(data__->AUXP3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->__transition_list[37]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_EXTERNAL(data__->AUXP3,));
    }
    __SET_VAR(data__->,__transition_list[37],,0);
  }
  if (__GET_VAR(data__->STEP39.X)) {
    __SET_VAR(data__->,__transition_list[38],,!(__GET_EXTERNAL(data__->AUXP3,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,__GET_VAR(data__->__transition_list[38]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,!(__GET_EXTERNAL(data__->AUXP3,)));
    }
    __SET_VAR(data__->,__transition_list[38],,0);
  }
  if (__GET_VAR(data__->STEP35.X)) {
    __SET_VAR(data__->,__transition_list[39],,!(__GET_EXTERNAL(data__->OCUPP3,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,__GET_VAR(data__->__transition_list[39]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,!(__GET_EXTERNAL(data__->OCUPP3,)));
    }
    __SET_VAR(data__->,__transition_list[39],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP13.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP14.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP11.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP17.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP18.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP23.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP16.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP20.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP21.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP22.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP19.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP25.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP26.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP27.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP24.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP29.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP30.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP37.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP28.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP32.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP33.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP34.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP31.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP36.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP38.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP39.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP35.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP15.X,,1);
    data__->STEP15.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP14.X,,1);
    data__->STEP14.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP11.X,,1);
    data__->STEP11.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP12.X,,1);
    data__->STEP12.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP18.X,,1);
    data__->STEP18.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP23.X,,1);
    data__->STEP23.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP17.X,,1);
    data__->STEP17.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP21.X,,1);
    data__->STEP21.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP22.X,,1);
    data__->STEP22.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP19.X,,1);
    data__->STEP19.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP20.X,,1);
    data__->STEP20.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP26.X,,1);
    data__->STEP26.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP27.X,,1);
    data__->STEP27.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP24.X,,1);
    data__->STEP24.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP25.X,,1);
    data__->STEP25.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP30.X,,1);
    data__->STEP30.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP37.X,,1);
    data__->STEP37.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP28.X,,1);
    data__->STEP28.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP29.X,,1);
    data__->STEP29.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP33.X,,1);
    data__->STEP33.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP34.X,,1);
    data__->STEP34.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP31.X,,1);
    data__->STEP31.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP32.X,,1);
    data__->STEP32.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP38.X,,1);
    data__->STEP38.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP39.X,,1);
    data__->STEP39.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP35.X,,1);
    data__->STEP35.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP36.X,,1);
    data__->STEP36.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE1].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE2].state,,0);};

  }

  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE5].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE6].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE4].state,,0);};

  }

  // STEP9 action associations
  {
    char active = __GET_VAR(data__->STEP9.X);
    char activated = active && !data__->STEP9.prev_state;
    char desactivated = !active && data__->STEP9.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE11].state,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE12].state,,0);};

  }

  // STEP15 action associations
  {
    char active = __GET_VAR(data__->STEP15.X);
    char activated = active && !data__->STEP15.prev_state;
    char desactivated = !active && data__->STEP15.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE7].state,,0);};

  }

  // STEP12 action associations
  {
    char active = __GET_VAR(data__->STEP12.X);
    char activated = active && !data__->STEP12.prev_state;
    char desactivated = !active && data__->STEP12.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE9].state,,0);};

  }

  // STEP13 action associations
  {
    char active = __GET_VAR(data__->STEP13.X);
    char activated = active && !data__->STEP13.prev_state;
    char desactivated = !active && data__->STEP13.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE10].state,,0);};

  }

  // STEP14 action associations
  {
    char active = __GET_VAR(data__->STEP14.X);
    char activated = active && !data__->STEP14.prev_state;
    char desactivated = !active && data__->STEP14.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE8].state,,0);};

  }

  // STEP17 action associations
  {
    char active = __GET_VAR(data__->STEP17.X);
    char activated = active && !data__->STEP17.prev_state;
    char desactivated = !active && data__->STEP17.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE17].state,,0);};

  }

  // STEP18 action associations
  {
    char active = __GET_VAR(data__->STEP18.X);
    char activated = active && !data__->STEP18.prev_state;
    char desactivated = !active && data__->STEP18.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE18].state,,0);};

  }

  // STEP23 action associations
  {
    char active = __GET_VAR(data__->STEP23.X);
    char activated = active && !data__->STEP23.prev_state;
    char desactivated = !active && data__->STEP23.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP23_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP23_INLINE13].state,,0);};

  }

  // STEP20 action associations
  {
    char active = __GET_VAR(data__->STEP20.X);
    char activated = active && !data__->STEP20.prev_state;
    char desactivated = !active && data__->STEP20.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE15].state,,0);};

  }

  // STEP21 action associations
  {
    char active = __GET_VAR(data__->STEP21.X);
    char activated = active && !data__->STEP21.prev_state;
    char desactivated = !active && data__->STEP21.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE16].state,,0);};

  }

  // STEP22 action associations
  {
    char active = __GET_VAR(data__->STEP22.X);
    char activated = active && !data__->STEP22.prev_state;
    char desactivated = !active && data__->STEP22.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE14].state,,0);};

  }

  // STEP25 action associations
  {
    char active = __GET_VAR(data__->STEP25.X);
    char activated = active && !data__->STEP25.prev_state;
    char desactivated = !active && data__->STEP25.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE20].state,,0);};

  }

  // STEP26 action associations
  {
    char active = __GET_VAR(data__->STEP26.X);
    char activated = active && !data__->STEP26.prev_state;
    char desactivated = !active && data__->STEP26.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE21].state,,0);};

  }

  // STEP27 action associations
  {
    char active = __GET_VAR(data__->STEP27.X);
    char activated = active && !data__->STEP27.prev_state;
    char desactivated = !active && data__->STEP27.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE19].state,,0);};

  }

  // STEP29 action associations
  {
    char active = __GET_VAR(data__->STEP29.X);
    char activated = active && !data__->STEP29.prev_state;
    char desactivated = !active && data__->STEP29.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE27].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE27].state,,0);};

  }

  // STEP30 action associations
  {
    char active = __GET_VAR(data__->STEP30.X);
    char activated = active && !data__->STEP30.prev_state;
    char desactivated = !active && data__->STEP30.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE28].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE28].state,,0);};

  }

  // STEP37 action associations
  {
    char active = __GET_VAR(data__->STEP37.X);
    char activated = active && !data__->STEP37.prev_state;
    char desactivated = !active && data__->STEP37.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE22].state,,0);};

  }

  // STEP32 action associations
  {
    char active = __GET_VAR(data__->STEP32.X);
    char activated = active && !data__->STEP32.prev_state;
    char desactivated = !active && data__->STEP32.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE24].state,,0);};

  }

  // STEP33 action associations
  {
    char active = __GET_VAR(data__->STEP33.X);
    char activated = active && !data__->STEP33.prev_state;
    char desactivated = !active && data__->STEP33.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE25].state,,0);};

  }

  // STEP34 action associations
  {
    char active = __GET_VAR(data__->STEP34.X);
    char activated = active && !data__->STEP34.prev_state;
    char desactivated = !active && data__->STEP34.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE23].state,,0);};

  }

  // STEP36 action associations
  {
    char active = __GET_VAR(data__->STEP36.X);
    char activated = active && !data__->STEP36.prev_state;
    char desactivated = !active && data__->STEP36.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE29].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE29].state,,0);};

  }

  // STEP38 action associations
  {
    char active = __GET_VAR(data__->STEP38.X);
    char activated = active && !data__->STEP38.prev_state;
    char desactivated = !active && data__->STEP38.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP38_INLINE30].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP38_INLINE30].state,,0);};

  }

  // STEP39 action associations
  {
    char active = __GET_VAR(data__->STEP39.X);
    char activated = active && !data__->STEP39.prev_state;
    char desactivated = !active && data__->STEP39.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE26].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE1].state)) {
    __SET_EXTERNAL(data__->,SOCUP1,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE2].state)) {
    __SET_EXTERNAL(data__->,SOCUP1,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE3].state)) {
    __SET_EXTERNAL(data__->,SOCUP1,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE5].state)) {
    __SET_EXTERNAL(data__->,SOCUP2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE6].state)) {
    __SET_EXTERNAL(data__->,SOCUP2,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE4].state)) {
    __SET_EXTERNAL(data__->,SOCUP2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE11].state)) {
    __SET_EXTERNAL(data__->,SOCUP3,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE12].state)) {
    __SET_EXTERNAL(data__->,SOCUP3,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP15_INLINE7].state)) {
    __SET_EXTERNAL(data__->,SOCUP3,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP12_INLINE9].state)) {
    __SET_EXTERNAL(data__->,SOCUP4,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP13_INLINE10].state)) {
    __SET_EXTERNAL(data__->,SOCUP4,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE8].state)) {
    __SET_EXTERNAL(data__->,SOCUP4,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP17_INLINE17].state)) {
    __SET_EXTERNAL(data__->,SOCUP5,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE18].state)) {
    __SET_EXTERNAL(data__->,SOCUP5,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP23_INLINE13].state)) {
    __SET_EXTERNAL(data__->,SOCUP5,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP20_INLINE15].state)) {
    __SET_EXTERNAL(data__->,SOCUP6,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP21_INLINE16].state)) {
    __SET_EXTERNAL(data__->,SOCUP6,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP22_INLINE14].state)) {
    __SET_EXTERNAL(data__->,SOCUP6,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP25_INLINE20].state)) {
    __SET_EXTERNAL(data__->,SOCUPR,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP26_INLINE21].state)) {
    __SET_EXTERNAL(data__->,SOCUPR,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP27_INLINE19].state)) {
    __SET_EXTERNAL(data__->,SOCUPR,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP29_INLINE27].state)) {
    __SET_EXTERNAL(data__->,SOCUPP1,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP30_INLINE28].state)) {
    __SET_EXTERNAL(data__->,SOCUPP1,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP37_INLINE22].state)) {
    __SET_EXTERNAL(data__->,SOCUPP1,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP32_INLINE24].state)) {
    __SET_EXTERNAL(data__->,SOCUPP2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP33_INLINE25].state)) {
    __SET_EXTERNAL(data__->,SOCUP2,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP34_INLINE23].state)) {
    __SET_EXTERNAL(data__->,SOCUPP2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP36_INLINE29].state)) {
    __SET_EXTERNAL(data__->,SOCUPP3,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP38_INLINE30].state)) {
    __SET_EXTERNAL(data__->,SOCUPP3,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP39_INLINE26].state)) {
    __SET_EXTERNAL(data__->,SOCUPP3,,0);
  }



  goto __end;

__end:
  return;
} // CONTROL_body__() 

// Steps undefinitions
#undef STEP2
#undef __SFC_STEP2
#undef STEP3
#undef __SFC_STEP3
#undef STEP0
#undef __SFC_STEP0
#undef STEP1
#undef __SFC_STEP1
#undef STEP5
#undef __SFC_STEP5
#undef STEP6
#undef __SFC_STEP6
#undef STEP7
#undef __SFC_STEP7
#undef STEP4
#undef __SFC_STEP4
#undef STEP9
#undef __SFC_STEP9
#undef STEP10
#undef __SFC_STEP10
#undef STEP15
#undef __SFC_STEP15
#undef STEP8
#undef __SFC_STEP8
#undef STEP12
#undef __SFC_STEP12
#undef STEP13
#undef __SFC_STEP13
#undef STEP14
#undef __SFC_STEP14
#undef STEP11
#undef __SFC_STEP11
#undef STEP17
#undef __SFC_STEP17
#undef STEP18
#undef __SFC_STEP18
#undef STEP23
#undef __SFC_STEP23
#undef STEP16
#undef __SFC_STEP16
#undef STEP20
#undef __SFC_STEP20
#undef STEP21
#undef __SFC_STEP21
#undef STEP22
#undef __SFC_STEP22
#undef STEP19
#undef __SFC_STEP19
#undef STEP25
#undef __SFC_STEP25
#undef STEP26
#undef __SFC_STEP26
#undef STEP27
#undef __SFC_STEP27
#undef STEP24
#undef __SFC_STEP24
#undef STEP29
#undef __SFC_STEP29
#undef STEP30
#undef __SFC_STEP30
#undef STEP37
#undef __SFC_STEP37
#undef STEP28
#undef __SFC_STEP28
#undef STEP32
#undef __SFC_STEP32
#undef STEP33
#undef __SFC_STEP33
#undef STEP34
#undef __SFC_STEP34
#undef STEP31
#undef __SFC_STEP31
#undef STEP36
#undef __SFC_STEP36
#undef STEP38
#undef __SFC_STEP38
#undef STEP39
#undef __SFC_STEP39
#undef STEP35
#undef __SFC_STEP35

// Actions undefinitions
#undef __SFC_STEP2_INLINE1
#undef __SFC_STEP3_INLINE2
#undef __SFC_STEP0_INLINE3
#undef __SFC_STEP5_INLINE5
#undef __SFC_STEP6_INLINE6
#undef __SFC_STEP7_INLINE4
#undef __SFC_STEP9_INLINE11
#undef __SFC_STEP10_INLINE12
#undef __SFC_STEP15_INLINE7
#undef __SFC_STEP12_INLINE9
#undef __SFC_STEP13_INLINE10
#undef __SFC_STEP14_INLINE8
#undef __SFC_STEP17_INLINE17
#undef __SFC_STEP18_INLINE18
#undef __SFC_STEP23_INLINE13
#undef __SFC_STEP20_INLINE15
#undef __SFC_STEP21_INLINE16
#undef __SFC_STEP22_INLINE14
#undef __SFC_STEP25_INLINE20
#undef __SFC_STEP26_INLINE21
#undef __SFC_STEP27_INLINE19
#undef __SFC_STEP29_INLINE27
#undef __SFC_STEP30_INLINE28
#undef __SFC_STEP37_INLINE22
#undef __SFC_STEP32_INLINE24
#undef __SFC_STEP33_INLINE25
#undef __SFC_STEP34_INLINE23
#undef __SFC_STEP36_INLINE29
#undef __SFC_STEP38_INLINE30
#undef __SFC_STEP39_INLINE26





void SFC_LOWDECISION_init__(SFC_LOWDECISION *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->PX,0,retain)
  __INIT_VAR(data__->PY,0,retain)
  __INIT_VAR(data__->MACHINE,0,retain)
  __INIT_VAR(data__->READY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PX_O,0,retain)
  __INIT_VAR(data__->PY_O,0,retain)
  __INIT_VAR(data__->NEXT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ORDER_READY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ORDER,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 43;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 44;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 59;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP0 __step_list[0]
#define __SFC_STEP0 0
#define STEP1 __step_list[1]
#define __SFC_STEP1 1
#define STEP39 __step_list[2]
#define __SFC_STEP39 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3
#define STEP40 __step_list[4]
#define __SFC_STEP40 4
#define STEP3 __step_list[5]
#define __SFC_STEP3 5
#define STEP4 __step_list[6]
#define __SFC_STEP4 6
#define STEP41 __step_list[7]
#define __SFC_STEP41 7
#define STEP42 __step_list[8]
#define __SFC_STEP42 8
#define STEP5 __step_list[9]
#define __SFC_STEP5 9
#define STEP37 __step_list[10]
#define __SFC_STEP37 10
#define STEP6 __step_list[11]
#define __SFC_STEP6 11
#define STEP38 __step_list[12]
#define __SFC_STEP38 12
#define STEP7 __step_list[13]
#define __SFC_STEP7 13
#define STEP36 __step_list[14]
#define __SFC_STEP36 14
#define STEP13 __step_list[15]
#define __SFC_STEP13 15
#define STEP8 __step_list[16]
#define __SFC_STEP8 16
#define STEP14 __step_list[17]
#define __SFC_STEP14 17
#define STEP9 __step_list[18]
#define __SFC_STEP9 18
#define STEP15 __step_list[19]
#define __SFC_STEP15 19
#define STEP10 __step_list[20]
#define __SFC_STEP10 20
#define STEP25 __step_list[21]
#define __SFC_STEP25 21
#define STEP16 __step_list[22]
#define __SFC_STEP16 22
#define STEP26 __step_list[23]
#define __SFC_STEP26 23
#define STEP17 __step_list[24]
#define __SFC_STEP17 24
#define STEP28 __step_list[25]
#define __SFC_STEP28 25
#define STEP18 __step_list[26]
#define __SFC_STEP18 26
#define STEP29 __step_list[27]
#define __SFC_STEP29 27
#define STEP19 __step_list[28]
#define __SFC_STEP19 28
#define STEP30 __step_list[29]
#define __SFC_STEP30 29
#define STEP20 __step_list[30]
#define __SFC_STEP20 30
#define STEP31 __step_list[31]
#define __SFC_STEP31 31
#define STEP21 __step_list[32]
#define __SFC_STEP21 32
#define STEP32 __step_list[33]
#define __SFC_STEP32 33
#define STEP22 __step_list[34]
#define __SFC_STEP22 34
#define STEP33 __step_list[35]
#define __SFC_STEP33 35
#define STEP23 __step_list[36]
#define __SFC_STEP23 36
#define STEP34 __step_list[37]
#define __SFC_STEP34 37
#define STEP24 __step_list[38]
#define __SFC_STEP24 38
#define STEP35 __step_list[39]
#define __SFC_STEP35 39
#define STEP27 __step_list[40]
#define __SFC_STEP27 40
#define STEP11 __step_list[41]
#define __SFC_STEP11 41
#define STEP12 __step_list[42]
#define __SFC_STEP12 42

// Actions definitions
#define __SFC_STEP0_INLINE1 0
#define __SFC_STEP0_INLINE2 1
#define __SFC_STEP1_INLINE3 2
#define __SFC_STEP39_INLINE36 3
#define __SFC_STEP2_INLINE4 4
#define __SFC_STEP2_INLINE5 5
#define __SFC_STEP3_INLINE6 6
#define __SFC_STEP4_INLINE7 7
#define __SFC_STEP41_INLINE37 8
#define __SFC_STEP41_INLINE38 9
#define __SFC_STEP5_INLINE8 10
#define __SFC_STEP37_INLINE40 11
#define __SFC_STEP6_INLINE9 12
#define __SFC_STEP6_INLINE10 13
#define __SFC_STEP7_INLINE11 14
#define __SFC_STEP36_INLINE39 15
#define __SFC_STEP13_INLINE12 16
#define __SFC_STEP8_INLINE41 17
#define __SFC_STEP14_INLINE13 18
#define __SFC_STEP14_INLINE14 19
#define __SFC_STEP15_INLINE15 20
#define __SFC_STEP10_INLINE42 21
#define __SFC_STEP25_INLINE16 22
#define __SFC_STEP25_INLINE17 23
#define __SFC_STEP26_INLINE18 24
#define __SFC_STEP26_INLINE19 25
#define __SFC_STEP28_INLINE20 26
#define __SFC_STEP28_INLINE21 27
#define __SFC_STEP29_INLINE22 28
#define __SFC_STEP29_INLINE23 29
#define __SFC_STEP30_INLINE24 30
#define __SFC_STEP30_INLINE25 31
#define __SFC_STEP31_INLINE26 32
#define __SFC_STEP31_INLINE27 33
#define __SFC_STEP32_INLINE28 34
#define __SFC_STEP32_INLINE29 35
#define __SFC_STEP33_INLINE30 36
#define __SFC_STEP33_INLINE31 37
#define __SFC_STEP34_INLINE32 38
#define __SFC_STEP34_INLINE33 39
#define __SFC_STEP35_INLINE34 40
#define __SFC_STEP35_INLINE35 41
#define __SFC_STEP11_INLINE43 42
#define __SFC_STEP11_INLINE44 43

// Code part
void SFC_LOWDECISION_body__(SFC_LOWDECISION *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[0],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 5)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 5)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP39.X)) {
    __SET_VAR(data__->,__transition_list[2],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP40.X)) {
    __SET_VAR(data__->,__transition_list[4],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[5],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 6)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 6)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[7],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP41.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP42.X)) {
    __SET_VAR(data__->,__transition_list[9],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[10],,(((__GET_VAR(data__->PX,) == 3) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,(((__GET_VAR(data__->PX,) == 3) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP37.X)) {
    __SET_VAR(data__->,__transition_list[12],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->STEP38.X)) {
    __SET_VAR(data__->,__transition_list[14],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[15],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[16],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STEP36.X)) {
    __SET_VAR(data__->,__transition_list[17],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[18],,(((__GET_VAR(data__->PX,) == 4) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,(((__GET_VAR(data__->PX,) == 4) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STEP13.X)) {
    __SET_VAR(data__->,__transition_list[19],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[20],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->STEP14.X)) {
    __SET_VAR(data__->,__transition_list[21],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[22],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->__transition_list[22]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[22],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[23],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->__transition_list[23]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[23],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[24],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->__transition_list[24]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[24],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[25],,!(__GET_VAR(data__->READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->__transition_list[25]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,!(__GET_VAR(data__->READY,)));
    }
    __SET_VAR(data__->,__transition_list[25],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[26],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 3)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->__transition_list[26]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,(((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 3)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[26],,0);
  }
  if (__GET_VAR(data__->STEP25.X)) {
    __SET_VAR(data__->,__transition_list[27],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->__transition_list[27]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[27],,0);
  }
  if (__GET_VAR(data__->STEP16.X)) {
    __SET_VAR(data__->,__transition_list[28],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->__transition_list[28]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[28],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[29],,(((__GET_VAR(data__->PX,) == 3) && (__GET_VAR(data__->PY,) == 5)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->__transition_list[29]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,(((__GET_VAR(data__->PX,) == 3) && (__GET_VAR(data__->PY,) == 5)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[29],,0);
  }
  if (__GET_VAR(data__->STEP26.X)) {
    __SET_VAR(data__->,__transition_list[30],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->__transition_list[30]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[30],,0);
  }
  if (__GET_VAR(data__->STEP17.X)) {
    __SET_VAR(data__->,__transition_list[31],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,__GET_VAR(data__->__transition_list[31]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[31],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[32],,(((__GET_VAR(data__->PX,) == 5) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->__transition_list[32]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,(((__GET_VAR(data__->PX,) == 5) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1)));
    }
    __SET_VAR(data__->,__transition_list[32],,0);
  }
  if (__GET_VAR(data__->STEP28.X)) {
    __SET_VAR(data__->,__transition_list[33],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->__transition_list[33]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[33],,0);
  }
  if (__GET_VAR(data__->STEP18.X)) {
    __SET_VAR(data__->,__transition_list[34],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->__transition_list[34]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[34],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[35],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 4)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->__transition_list[35]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,(((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 4)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[35],,0);
  }
  if (__GET_VAR(data__->STEP29.X)) {
    __SET_VAR(data__->,__transition_list[36],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->__transition_list[36]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[36],,0);
  }
  if (__GET_VAR(data__->STEP19.X)) {
    __SET_VAR(data__->,__transition_list[37],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->__transition_list[37]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[37],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[38],,(((__GET_VAR(data__->PX,) == 4) && (__GET_VAR(data__->PY,) == 6)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,__GET_VAR(data__->__transition_list[38]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,(((__GET_VAR(data__->PX,) == 4) && (__GET_VAR(data__->PY,) == 6)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[38],,0);
  }
  if (__GET_VAR(data__->STEP30.X)) {
    __SET_VAR(data__->,__transition_list[39],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,__GET_VAR(data__->__transition_list[39]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[39],,0);
  }
  if (__GET_VAR(data__->STEP20.X)) {
    __SET_VAR(data__->,__transition_list[40],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[40],,__GET_VAR(data__->__transition_list[40]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[40],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[40],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[41],,(((__GET_VAR(data__->PX,) == 6) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[41],,__GET_VAR(data__->__transition_list[41]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[41],,(((__GET_VAR(data__->PX,) == 6) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2)));
    }
    __SET_VAR(data__->,__transition_list[41],,0);
  }
  if (__GET_VAR(data__->STEP31.X)) {
    __SET_VAR(data__->,__transition_list[42],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[42],,__GET_VAR(data__->__transition_list[42]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[42],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[42],,0);
  }
  if (__GET_VAR(data__->STEP21.X)) {
    __SET_VAR(data__->,__transition_list[43],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[43],,__GET_VAR(data__->__transition_list[43]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[43],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[43],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[44],,(((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 3)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[44],,__GET_VAR(data__->__transition_list[44]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[44],,(((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 3)));
    }
    __SET_VAR(data__->,__transition_list[44],,0);
  }
  if (__GET_VAR(data__->STEP32.X)) {
    __SET_VAR(data__->,__transition_list[45],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[45],,__GET_VAR(data__->__transition_list[45]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[45],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[45],,0);
  }
  if (__GET_VAR(data__->STEP22.X)) {
    __SET_VAR(data__->,__transition_list[46],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[46],,__GET_VAR(data__->__transition_list[46]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[46],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[46],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[47],,(((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 3)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[47],,__GET_VAR(data__->__transition_list[47]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[47],,(((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 3)));
    }
    __SET_VAR(data__->,__transition_list[47],,0);
  }
  if (__GET_VAR(data__->STEP33.X)) {
    __SET_VAR(data__->,__transition_list[48],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[48],,__GET_VAR(data__->__transition_list[48]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[48],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[48],,0);
  }
  if (__GET_VAR(data__->STEP23.X)) {
    __SET_VAR(data__->,__transition_list[49],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[49],,__GET_VAR(data__->__transition_list[49]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[49],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[49],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[50],,(((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[50],,__GET_VAR(data__->__transition_list[50]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[50],,(((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3)));
    }
    __SET_VAR(data__->,__transition_list[50],,0);
  }
  if (__GET_VAR(data__->STEP34.X)) {
    __SET_VAR(data__->,__transition_list[51],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[51],,__GET_VAR(data__->__transition_list[51]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[51],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[51],,0);
  }
  if (__GET_VAR(data__->STEP24.X)) {
    __SET_VAR(data__->,__transition_list[52],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[52],,__GET_VAR(data__->__transition_list[52]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[52],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[52],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[53],,(((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[53],,__GET_VAR(data__->__transition_list[53]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[53],,(((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3)));
    }
    __SET_VAR(data__->,__transition_list[53],,0);
  }
  if (__GET_VAR(data__->STEP35.X)) {
    __SET_VAR(data__->,__transition_list[54],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[54],,__GET_VAR(data__->__transition_list[54]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[54],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[54],,0);
  }
  if (__GET_VAR(data__->STEP27.X)) {
    __SET_VAR(data__->,__transition_list[55],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[55],,__GET_VAR(data__->__transition_list[55]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[55],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[55],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[56],,((__GET_VAR(data__->PX,) == 10) && (__GET_VAR(data__->PY,) == 10)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[56],,__GET_VAR(data__->__transition_list[56]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[56],,((__GET_VAR(data__->PX,) == 10) && (__GET_VAR(data__->PY,) == 10)));
    }
    __SET_VAR(data__->,__transition_list[56],,0);
  }
  if (__GET_VAR(data__->STEP11.X)) {
    __SET_VAR(data__->,__transition_list[57],,__GET_VAR(data__->READY,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[57],,__GET_VAR(data__->__transition_list[57]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[57],,__GET_VAR(data__->READY,));
    }
    __SET_VAR(data__->,__transition_list[57],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[58],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[58],,__GET_VAR(data__->__transition_list[58]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[58],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[58],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP39.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP40.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP41.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP42.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP37.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP38.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP36.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP13.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP14.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP25.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP16.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP26.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP17.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP28.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP18.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP29.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP19.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP30.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[40])) {
    __SET_VAR(data__->,STEP20.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[41])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[42])) {
    __SET_VAR(data__->,STEP31.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[43])) {
    __SET_VAR(data__->,STEP21.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[44])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[45])) {
    __SET_VAR(data__->,STEP32.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[46])) {
    __SET_VAR(data__->,STEP22.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[47])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[48])) {
    __SET_VAR(data__->,STEP33.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[49])) {
    __SET_VAR(data__->,STEP23.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[50])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[51])) {
    __SET_VAR(data__->,STEP34.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[52])) {
    __SET_VAR(data__->,STEP24.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[53])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[54])) {
    __SET_VAR(data__->,STEP35.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[55])) {
    __SET_VAR(data__->,STEP27.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[56])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[57])) {
    __SET_VAR(data__->,STEP11.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[58])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP39.X,,1);
    data__->STEP39.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP40.X,,1);
    data__->STEP40.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP41.X,,1);
    data__->STEP41.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP42.X,,1);
    data__->STEP42.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP37.X,,1);
    data__->STEP37.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP38.X,,1);
    data__->STEP38.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP36.X,,1);
    data__->STEP36.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP14.X,,1);
    data__->STEP14.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP15.X,,1);
    data__->STEP15.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP25.X,,1);
    data__->STEP25.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP26.X,,1);
    data__->STEP26.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP17.X,,1);
    data__->STEP17.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP28.X,,1);
    data__->STEP28.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP18.X,,1);
    data__->STEP18.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP29.X,,1);
    data__->STEP29.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP19.X,,1);
    data__->STEP19.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP30.X,,1);
    data__->STEP30.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP20.X,,1);
    data__->STEP20.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[40])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[41])) {
    __SET_VAR(data__->,STEP31.X,,1);
    data__->STEP31.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[42])) {
    __SET_VAR(data__->,STEP21.X,,1);
    data__->STEP21.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[43])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[44])) {
    __SET_VAR(data__->,STEP32.X,,1);
    data__->STEP32.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[45])) {
    __SET_VAR(data__->,STEP22.X,,1);
    data__->STEP22.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[46])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[47])) {
    __SET_VAR(data__->,STEP33.X,,1);
    data__->STEP33.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[48])) {
    __SET_VAR(data__->,STEP23.X,,1);
    data__->STEP23.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[49])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[50])) {
    __SET_VAR(data__->,STEP34.X,,1);
    data__->STEP34.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[51])) {
    __SET_VAR(data__->,STEP24.X,,1);
    data__->STEP24.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[52])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[53])) {
    __SET_VAR(data__->,STEP35.X,,1);
    data__->STEP35.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[54])) {
    __SET_VAR(data__->,STEP27.X,,1);
    data__->STEP27.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[55])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[56])) {
    __SET_VAR(data__->,STEP11.X,,1);
    data__->STEP11.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[57])) {
    __SET_VAR(data__->,STEP12.X,,1);
    data__->STEP12.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[58])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,0);};

  }

  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,0);};

  }

  // STEP39 action associations
  {
    char active = __GET_VAR(data__->STEP39.X);
    char activated = active && !data__->STEP39.prev_state;
    char desactivated = !active && data__->STEP39.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE36].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE36].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE4].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE5].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE6].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE7].state,,0);};

  }

  // STEP41 action associations
  {
    char active = __GET_VAR(data__->STEP41.X);
    char activated = active && !data__->STEP41.prev_state;
    char desactivated = !active && data__->STEP41.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE37].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE37].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE38].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE38].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE8].state,,0);};

  }

  // STEP37 action associations
  {
    char active = __GET_VAR(data__->STEP37.X);
    char activated = active && !data__->STEP37.prev_state;
    char desactivated = !active && data__->STEP37.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE40].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE40].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE9].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE10].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE11].state,,0);};

  }

  // STEP36 action associations
  {
    char active = __GET_VAR(data__->STEP36.X);
    char activated = active && !data__->STEP36.prev_state;
    char desactivated = !active && data__->STEP36.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE39].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE39].state,,0);};

  }

  // STEP13 action associations
  {
    char active = __GET_VAR(data__->STEP13.X);
    char activated = active && !data__->STEP13.prev_state;
    char desactivated = !active && data__->STEP13.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE12].state,,0);};

  }

  // STEP8 action associations
  {
    char active = __GET_VAR(data__->STEP8.X);
    char activated = active && !data__->STEP8.prev_state;
    char desactivated = !active && data__->STEP8.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE41].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE41].state,,0);};

  }

  // STEP14 action associations
  {
    char active = __GET_VAR(data__->STEP14.X);
    char activated = active && !data__->STEP14.prev_state;
    char desactivated = !active && data__->STEP14.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE13].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE14].state,,0);};

  }

  // STEP15 action associations
  {
    char active = __GET_VAR(data__->STEP15.X);
    char activated = active && !data__->STEP15.prev_state;
    char desactivated = !active && data__->STEP15.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE15].state,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE42].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE42].state,,0);};

  }

  // STEP25 action associations
  {
    char active = __GET_VAR(data__->STEP25.X);
    char activated = active && !data__->STEP25.prev_state;
    char desactivated = !active && data__->STEP25.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE16].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE17].state,,0);};

  }

  // STEP26 action associations
  {
    char active = __GET_VAR(data__->STEP26.X);
    char activated = active && !data__->STEP26.prev_state;
    char desactivated = !active && data__->STEP26.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE18].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE19].state,,0);};

  }

  // STEP28 action associations
  {
    char active = __GET_VAR(data__->STEP28.X);
    char activated = active && !data__->STEP28.prev_state;
    char desactivated = !active && data__->STEP28.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE20].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE21].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE21].state,,0);};

  }

  // STEP29 action associations
  {
    char active = __GET_VAR(data__->STEP29.X);
    char activated = active && !data__->STEP29.prev_state;
    char desactivated = !active && data__->STEP29.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE22].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE23].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE23].state,,0);};

  }

  // STEP30 action associations
  {
    char active = __GET_VAR(data__->STEP30.X);
    char activated = active && !data__->STEP30.prev_state;
    char desactivated = !active && data__->STEP30.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE24].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE25].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE25].state,,0);};

  }

  // STEP31 action associations
  {
    char active = __GET_VAR(data__->STEP31.X);
    char activated = active && !data__->STEP31.prev_state;
    char desactivated = !active && data__->STEP31.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE26].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE27].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE27].state,,0);};

  }

  // STEP32 action associations
  {
    char active = __GET_VAR(data__->STEP32.X);
    char activated = active && !data__->STEP32.prev_state;
    char desactivated = !active && data__->STEP32.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE28].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE28].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE29].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE29].state,,0);};

  }

  // STEP33 action associations
  {
    char active = __GET_VAR(data__->STEP33.X);
    char activated = active && !data__->STEP33.prev_state;
    char desactivated = !active && data__->STEP33.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE30].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE30].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE31].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE31].state,,0);};

  }

  // STEP34 action associations
  {
    char active = __GET_VAR(data__->STEP34.X);
    char activated = active && !data__->STEP34.prev_state;
    char desactivated = !active && data__->STEP34.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE32].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE32].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE33].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP34_INLINE33].state,,0);};

  }

  // STEP35 action associations
  {
    char active = __GET_VAR(data__->STEP35.X);
    char activated = active && !data__->STEP35.prev_state;
    char desactivated = !active && data__->STEP35.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE34].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE34].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE35].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE35].state,,0);};

  }

  // STEP11 action associations
  {
    char active = __GET_VAR(data__->STEP11.X);
    char activated = active && !data__->STEP11.prev_state;
    char desactivated = !active && data__->STEP11.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE43].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE43].state,,0);};

    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE44].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE44].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE1].state)) {
    __SET_VAR(data__->,PX_O,,0);
    __SET_VAR(data__->,PY_O,,0);
    __SET_VAR(data__->,NEXT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE2].state)) {
    __SET_VAR(data__->,ORDER_READY,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE3].state)) {
    __SET_VAR(data__->,PX_O,,1);
    __SET_VAR(data__->,PY_O,,3);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP39_INLINE36].state)) {
    __SET_VAR(data__->,PX_O,,3);
    __SET_VAR(data__->,PY_O,,5);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE4].state)) {
    __SET_VAR(data__->,NEXT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE5].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE6].state)) {
    __SET_VAR(data__->,PX_O,,2);
    __SET_VAR(data__->,PY_O,,4);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE7].state)) {
    __SET_VAR(data__->,PX_O,,4);
    __SET_VAR(data__->,PY_O,,6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP41_INLINE37].state)) {
    __SET_VAR(data__->,NEXT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP41_INLINE38].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE8].state)) {
    __SET_VAR(data__->,PX_O,,3);
    __SET_VAR(data__->,PY_O,,5);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP37_INLINE40].state)) {
    __SET_VAR(data__->,PX_O,,5);
    __SET_VAR(data__->,PY_O,,7);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE9].state)) {
    __SET_VAR(data__->,NEXT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE10].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE11].state)) {
    __SET_VAR(data__->,PX_O,,1);
    __SET_VAR(data__->,PY_O,,3);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP36_INLINE39].state)) {
    __SET_VAR(data__->,PX_O,,3);
    __SET_VAR(data__->,PY_O,,5);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP13_INLINE12].state)) {
    __SET_VAR(data__->,PX_O,,4);
    __SET_VAR(data__->,PY_O,,6);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP8_INLINE41].state)) {
    __SET_VAR(data__->,PX_O,,6);
    __SET_VAR(data__->,PY_O,,8);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE13].state)) {
    __SET_VAR(data__->,NEXT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE14].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP15_INLINE15].state)) {
    __SET_VAR(data__->,PX_O,,2);
    __SET_VAR(data__->,PY_O,,4);
    __SET_VAR(data__->,NEXT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE42].state)) {
    __SET_VAR(data__->,PX_O,,4);
    __SET_VAR(data__->,PY_O,,6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP25_INLINE16].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP25_INLINE17].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP26_INLINE18].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP26_INLINE19].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP28_INLINE20].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP28_INLINE21].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP29_INLINE22].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP29_INLINE23].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP30_INLINE24].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP30_INLINE25].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP31_INLINE26].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP31_INLINE27].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP32_INLINE28].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP32_INLINE29].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP33_INLINE30].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP33_INLINE31].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP34_INLINE32].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP34_INLINE33].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP35_INLINE34].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP35_INLINE35].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP11_INLINE43].state)) {
    __SET_VAR(data__->,PX_O,,__GET_VAR(data__->PX,));
    __SET_VAR(data__->,PY_O,,__GET_VAR(data__->PY,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP11_INLINE44].state)) {
    __SET_VAR(data__->,ORDER_READY,,1);
  }



  goto __end;

__end:
  return;
} // SFC_LOWDECISION_body__() 

// Steps undefinitions
#undef STEP0
#undef __SFC_STEP0
#undef STEP1
#undef __SFC_STEP1
#undef STEP39
#undef __SFC_STEP39
#undef STEP2
#undef __SFC_STEP2
#undef STEP40
#undef __SFC_STEP40
#undef STEP3
#undef __SFC_STEP3
#undef STEP4
#undef __SFC_STEP4
#undef STEP41
#undef __SFC_STEP41
#undef STEP42
#undef __SFC_STEP42
#undef STEP5
#undef __SFC_STEP5
#undef STEP37
#undef __SFC_STEP37
#undef STEP6
#undef __SFC_STEP6
#undef STEP38
#undef __SFC_STEP38
#undef STEP7
#undef __SFC_STEP7
#undef STEP36
#undef __SFC_STEP36
#undef STEP13
#undef __SFC_STEP13
#undef STEP8
#undef __SFC_STEP8
#undef STEP14
#undef __SFC_STEP14
#undef STEP9
#undef __SFC_STEP9
#undef STEP15
#undef __SFC_STEP15
#undef STEP10
#undef __SFC_STEP10
#undef STEP25
#undef __SFC_STEP25
#undef STEP16
#undef __SFC_STEP16
#undef STEP26
#undef __SFC_STEP26
#undef STEP17
#undef __SFC_STEP17
#undef STEP28
#undef __SFC_STEP28
#undef STEP18
#undef __SFC_STEP18
#undef STEP29
#undef __SFC_STEP29
#undef STEP19
#undef __SFC_STEP19
#undef STEP30
#undef __SFC_STEP30
#undef STEP20
#undef __SFC_STEP20
#undef STEP31
#undef __SFC_STEP31
#undef STEP21
#undef __SFC_STEP21
#undef STEP32
#undef __SFC_STEP32
#undef STEP22
#undef __SFC_STEP22
#undef STEP33
#undef __SFC_STEP33
#undef STEP23
#undef __SFC_STEP23
#undef STEP34
#undef __SFC_STEP34
#undef STEP24
#undef __SFC_STEP24
#undef STEP35
#undef __SFC_STEP35
#undef STEP27
#undef __SFC_STEP27
#undef STEP11
#undef __SFC_STEP11
#undef STEP12
#undef __SFC_STEP12

// Actions undefinitions
#undef __SFC_STEP0_INLINE1
#undef __SFC_STEP0_INLINE2
#undef __SFC_STEP1_INLINE3
#undef __SFC_STEP39_INLINE36
#undef __SFC_STEP2_INLINE4
#undef __SFC_STEP2_INLINE5
#undef __SFC_STEP3_INLINE6
#undef __SFC_STEP4_INLINE7
#undef __SFC_STEP41_INLINE37
#undef __SFC_STEP41_INLINE38
#undef __SFC_STEP5_INLINE8
#undef __SFC_STEP37_INLINE40
#undef __SFC_STEP6_INLINE9
#undef __SFC_STEP6_INLINE10
#undef __SFC_STEP7_INLINE11
#undef __SFC_STEP36_INLINE39
#undef __SFC_STEP13_INLINE12
#undef __SFC_STEP8_INLINE41
#undef __SFC_STEP14_INLINE13
#undef __SFC_STEP14_INLINE14
#undef __SFC_STEP15_INLINE15
#undef __SFC_STEP10_INLINE42
#undef __SFC_STEP25_INLINE16
#undef __SFC_STEP25_INLINE17
#undef __SFC_STEP26_INLINE18
#undef __SFC_STEP26_INLINE19
#undef __SFC_STEP28_INLINE20
#undef __SFC_STEP28_INLINE21
#undef __SFC_STEP29_INLINE22
#undef __SFC_STEP29_INLINE23
#undef __SFC_STEP30_INLINE24
#undef __SFC_STEP30_INLINE25
#undef __SFC_STEP31_INLINE26
#undef __SFC_STEP31_INLINE27
#undef __SFC_STEP32_INLINE28
#undef __SFC_STEP32_INLINE29
#undef __SFC_STEP33_INLINE30
#undef __SFC_STEP33_INLINE31
#undef __SFC_STEP34_INLINE32
#undef __SFC_STEP34_INLINE33
#undef __SFC_STEP35_INLINE34
#undef __SFC_STEP35_INLINE35
#undef __SFC_STEP11_INLINE43
#undef __SFC_STEP11_INLINE44





void TAPETE_LINEAR_init__(TAPETE_LINEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 5;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 5;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 7;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP1 __step_list[0]
#define __SFC_STEP1 0
#define STEP3 __step_list[1]
#define __SFC_STEP3 1
#define STEP2 __step_list[2]
#define __SFC_STEP2 2
#define STEP4 __step_list[3]
#define __SFC_STEP4 3
#define STEP0 __step_list[4]
#define __SFC_STEP0 4

// Actions definitions
#define __SFC_STEP1_INLINE1 0
#define __SFC_STEP3_INLINE3 1
#define __SFC_STEP2_INLINE5 2
#define __SFC_STEP4_INLINE4 3
#define __SFC_STEP0_INLINE2 4

// Code part
void TAPETE_LINEAR_body__(TAPETE_LINEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[1],,!(__GET_VAR(data__->P,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,!(__GET_VAR(data__->P,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->FREE_I,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->FREE_I,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[4],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE3].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE5].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE4].state,,0);};

  }

  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE1].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,TAKE,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE3].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE5].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE4].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE2].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }



  goto __end;

__end:
  return;
} // TAPETE_LINEAR_body__() 

// Steps undefinitions
#undef STEP1
#undef __SFC_STEP1
#undef STEP3
#undef __SFC_STEP3
#undef STEP2
#undef __SFC_STEP2
#undef STEP4
#undef __SFC_STEP4
#undef STEP0
#undef __SFC_STEP0

// Actions undefinitions
#undef __SFC_STEP1_INLINE1
#undef __SFC_STEP3_INLINE3
#undef __SFC_STEP2_INLINE5
#undef __SFC_STEP4_INLINE4
#undef __SFC_STEP0_INLINE2





void TAPETE_ROTATIVO_init__(TAPETE_ROTATIVO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX,0,retain)
  __INIT_VAR(data__->RECIVE_VET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECIVE_HOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HORIZ,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VERT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURN_H,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURN_V,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_N,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DESTINO,0,retain)
  __INIT_VAR(data__->RIN2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CTAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECIVE_HOR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROBORECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREROBO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUTROBO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECIVE_VET2,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 34;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 32;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 39;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP0 __step_list[0]
#define __SFC_STEP0 0
#define STEP15 __step_list[1]
#define __SFC_STEP15 1
#define STEP3 __step_list[2]
#define __SFC_STEP3 2
#define STEP16 __step_list[3]
#define __SFC_STEP16 3
#define STEP17 __step_list[4]
#define __SFC_STEP17 4
#define STEP18 __step_list[5]
#define __SFC_STEP18 5
#define STEP24 __step_list[6]
#define __SFC_STEP24 6
#define STEP4 __step_list[7]
#define __SFC_STEP4 7
#define STEP6 __step_list[8]
#define __SFC_STEP6 8
#define STEP5 __step_list[9]
#define __SFC_STEP5 9
#define STEP13 __step_list[10]
#define __SFC_STEP13 10
#define STEP10 __step_list[11]
#define __SFC_STEP10 11
#define STEP12 __step_list[12]
#define __SFC_STEP12 12
#define STEP23 __step_list[13]
#define __SFC_STEP23 13
#define STEP25 __step_list[14]
#define __SFC_STEP25 14
#define STEP26 __step_list[15]
#define __SFC_STEP26 15
#define STEP2 __step_list[16]
#define __SFC_STEP2 16
#define STEP1 __step_list[17]
#define __SFC_STEP1 17
#define STEP9 __step_list[18]
#define __SFC_STEP9 18
#define STEP7 __step_list[19]
#define __SFC_STEP7 19
#define STEP8 __step_list[20]
#define __SFC_STEP8 20
#define STEP11 __step_list[21]
#define __SFC_STEP11 21
#define STEP14 __step_list[22]
#define __SFC_STEP14 22
#define STEP19 __step_list[23]
#define __SFC_STEP19 23
#define STEP20 __step_list[24]
#define __SFC_STEP20 24
#define STEP21 __step_list[25]
#define __SFC_STEP21 25
#define STEP22 __step_list[26]
#define __SFC_STEP22 26
#define STEP27 __step_list[27]
#define __SFC_STEP27 27
#define STEP28 __step_list[28]
#define __SFC_STEP28 28
#define STEP31 __step_list[29]
#define __SFC_STEP31 29
#define STEP29 __step_list[30]
#define __SFC_STEP29 30
#define STEP30 __step_list[31]
#define __SFC_STEP30 31
#define STEP32 __step_list[32]
#define __SFC_STEP32 32
#define STEP33 __step_list[33]
#define __SFC_STEP33 33

// Actions definitions
#define __SFC_STEP0_INLINE2 0
#define __SFC_STEP0_INLINE3 1
#define __SFC_STEP0_INLINE4 2
#define __SFC_STEP15_INLINE13 3
#define __SFC_STEP3_INLINE14 4
#define __SFC_STEP17_INLINE15 5
#define __SFC_STEP18_INLINE16 6
#define __SFC_STEP18_INLINE17 7
#define __SFC_STEP24_INLINE22 8
#define __SFC_STEP6_INLINE5 9
#define __SFC_STEP13_INLINE8 10
#define __SFC_STEP10_INLINE11 11
#define __SFC_STEP25_INLINE23 12
#define __SFC_STEP26_INLINE24 13
#define __SFC_STEP2_INLINE1 14
#define __SFC_STEP1_INLINE10 15
#define __SFC_STEP9_INLINE9 16
#define __SFC_STEP7_INLINE6 17
#define __SFC_STEP11_INLINE7 18
#define __SFC_STEP14_INLINE12 19
#define __SFC_STEP19_INLINE19 20
#define __SFC_STEP20_INLINE18 21
#define __SFC_STEP21_INLINE21 22
#define __SFC_STEP22_INLINE20 23
#define __SFC_STEP27_INLINE25 24
#define __SFC_STEP28_INLINE26 25
#define __SFC_STEP29_INLINE27 26
#define __SFC_STEP30_INLINE28 27
#define __SFC_TURN_H 28
#define __SFC_MOVE_P 29
#define __SFC_TURN_V 30
#define __SFC_MOVE_N 31

// Code part
void TAPETE_ROTATIVO_body__(TAPETE_ROTATIVO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->RECIVE_VET,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->RECIVE_VET,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[2],,(__GET_VAR(data__->DESTINO,) == 1));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,(__GET_VAR(data__->DESTINO,) == 1));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP16.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->FREE_I2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->FREE_I2,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP17.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->RIN2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->RIN2,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP18.X)) {
    __SET_VAR(data__->,__transition_list[5],,!(__GET_VAR(data__->RIN2,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,!(__GET_VAR(data__->RIN2,)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP24.X)) {
    __SET_VAR(data__->,__transition_list[6],,(__GET_VAR(data__->DESTINO,) == 2));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,(__GET_VAR(data__->DESTINO,) == 2));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[7],,(__GET_VAR(data__->DESTINO,) == 0));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,(__GET_VAR(data__->DESTINO,) == 0));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[8],,(__GET_VAR(data__->AUX,) == 0));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,(__GET_VAR(data__->AUX,) == 0));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->HORIZ,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->HORIZ,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->FREE_I1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->FREE_I1,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP13.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[12],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->VERT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->VERT,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->STEP23.X)) {
    __SET_VAR(data__->,__transition_list[14],,(__GET_VAR(data__->DESTINO,) == 2));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,(__GET_VAR(data__->DESTINO,) == 2));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[15],,__GET_VAR(data__->ROBORECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->ROBORECEIV,));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->STEP25.X)) {
    __SET_VAR(data__->,__transition_list[16],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STEP26.X)) {
    __SET_VAR(data__->,__transition_list[17],,(__GET_VAR(data__->DESTINO,) == 1));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,(__GET_VAR(data__->DESTINO,) == 1));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[18],,__GET_VAR(data__->RECIVE_HOR,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->RECIVE_HOR,));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[19],,__GET_VAR(data__->HORIZ,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->HORIZ,));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[20],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[21],,(__GET_VAR(data__->AUX,) == 1));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,(__GET_VAR(data__->AUX,) == 1));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[22],,__GET_VAR(data__->VERT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->__transition_list[22]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->VERT,));
    }
    __SET_VAR(data__->,__transition_list[22],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[23],,__GET_VAR(data__->FREE_I1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->__transition_list[23]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->FREE_I1,));
    }
    __SET_VAR(data__->,__transition_list[23],,0);
  }
  if (__GET_VAR(data__->STEP11.X)) {
    __SET_VAR(data__->,__transition_list[24],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->__transition_list[24]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[24],,0);
  }
  if (__GET_VAR(data__->STEP14.X)) {
    __SET_VAR(data__->,__transition_list[25],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->__transition_list[25]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[25],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[26],,(__GET_VAR(data__->RECIVE_HOR2,) && !(__GET_VAR(data__->RECIVE_HOR,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->__transition_list[26]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,(__GET_VAR(data__->RECIVE_HOR2,) && !(__GET_VAR(data__->RECIVE_HOR,))));
    }
    __SET_VAR(data__->,__transition_list[26],,0);
  }
  if (__GET_VAR(data__->STEP19.X)) {
    __SET_VAR(data__->,__transition_list[27],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->__transition_list[27]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[27],,0);
  }
  if (__GET_VAR(data__->STEP20.X)) {
    __SET_VAR(data__->,__transition_list[28],,__GET_VAR(data__->FREE_I1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->__transition_list[28]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->FREE_I1,));
    }
    __SET_VAR(data__->,__transition_list[28],,0);
  }
  if (__GET_VAR(data__->STEP21.X)) {
    __SET_VAR(data__->,__transition_list[29],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->__transition_list[29]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[29],,0);
  }
  if (__GET_VAR(data__->STEP22.X)) {
    __SET_VAR(data__->,__transition_list[30],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->__transition_list[30]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[30],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[31],,(__GET_VAR(data__->RECIVE_VET2,) && !(__GET_VAR(data__->RECIVE_VET,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,__GET_VAR(data__->__transition_list[31]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,(__GET_VAR(data__->RECIVE_VET2,) && !(__GET_VAR(data__->RECIVE_VET,))));
    }
    __SET_VAR(data__->,__transition_list[31],,0);
  }
  if (__GET_VAR(data__->STEP27.X)) {
    __SET_VAR(data__->,__transition_list[32],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->__transition_list[32]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[32],,0);
  }
  if (__GET_VAR(data__->STEP28.X)) {
    __SET_VAR(data__->,__transition_list[33],,__GET_VAR(data__->HORIZ,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->__transition_list[33]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->HORIZ,));
    }
    __SET_VAR(data__->,__transition_list[33],,0);
  }
  if (__GET_VAR(data__->STEP31.X)) {
    __SET_VAR(data__->,__transition_list[34],,__GET_VAR(data__->FREE_I1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->__transition_list[34]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->FREE_I1,));
    }
    __SET_VAR(data__->,__transition_list[34],,0);
  }
  if (__GET_VAR(data__->STEP29.X)) {
    __SET_VAR(data__->,__transition_list[35],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->__transition_list[35]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[35],,0);
  }
  if (__GET_VAR(data__->STEP30.X)) {
    __SET_VAR(data__->,__transition_list[36],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->__transition_list[36]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[36],,0);
  }
  if (__GET_VAR(data__->STEP32.X)) {
    __SET_VAR(data__->,__transition_list[37],,__GET_VAR(data__->VERT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->__transition_list[37]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->VERT,));
    }
    __SET_VAR(data__->,__transition_list[37],,0);
  }
  if (__GET_VAR(data__->STEP33.X)) {
    __SET_VAR(data__->,__transition_list[38],,(__GET_VAR(data__->DESTINO,) == 2));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,__GET_VAR(data__->__transition_list[38]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,(__GET_VAR(data__->DESTINO,) == 2));
    }
    __SET_VAR(data__->,__transition_list[38],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP16.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP17.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP18.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP24.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP13.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP23.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP25.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP26.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP11.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP14.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP19.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP20.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP21.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP22.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP27.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP28.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP31.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP29.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP30.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP32.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP33.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP15.X,,1);
    data__->STEP15.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP17.X,,1);
    data__->STEP17.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP18.X,,1);
    data__->STEP18.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP24.X,,1);
    data__->STEP24.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP12.X,,1);
    data__->STEP12.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP23.X,,1);
    data__->STEP23.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP25.X,,1);
    data__->STEP25.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP26.X,,1);
    data__->STEP26.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP11.X,,1);
    data__->STEP11.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP14.X,,1);
    data__->STEP14.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP19.X,,1);
    data__->STEP19.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP20.X,,1);
    data__->STEP20.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP21.X,,1);
    data__->STEP21.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP22.X,,1);
    data__->STEP22.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP27.X,,1);
    data__->STEP27.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP28.X,,1);
    data__->STEP28.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP31.X,,1);
    data__->STEP31.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP29.X,,1);
    data__->STEP29.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP30.X,,1);
    data__->STEP30.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP32.X,,1);
    data__->STEP32.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP33.X,,1);
    data__->STEP33.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,0);};

  }

  // STEP15 action associations
  {
    char active = __GET_VAR(data__->STEP15.X);
    char activated = active && !data__->STEP15.prev_state;
    char desactivated = !active && data__->STEP15.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE13].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE14].state,,0);};

  }

  // STEP17 action associations
  {
    char active = __GET_VAR(data__->STEP17.X);
    char activated = active && !data__->STEP17.prev_state;
    char desactivated = !active && data__->STEP17.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE15].state,,0);};

  }

  // STEP18 action associations
  {
    char active = __GET_VAR(data__->STEP18.X);
    char activated = active && !data__->STEP18.prev_state;
    char desactivated = !active && data__->STEP18.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE16].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE17].state,,0);};

  }

  // STEP24 action associations
  {
    char active = __GET_VAR(data__->STEP24.X);
    char activated = active && !data__->STEP24.prev_state;
    char desactivated = !active && data__->STEP24.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP24_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP24_INLINE22].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,TURN_H,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_H,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE5].state,,0);};

  }

  // STEP13 action associations
  {
    char active = __GET_VAR(data__->STEP13.X);
    char activated = active && !data__->STEP13.prev_state;
    char desactivated = !active && data__->STEP13.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE8].state,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_P,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_P,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE11].state,,0);};

  }

  // STEP12 action associations
  {
    char active = __GET_VAR(data__->STEP12.X);
    char activated = active && !data__->STEP12.prev_state;
    char desactivated = !active && data__->STEP12.prev_state;

    if (active)       {__SET_VAR(data__->,TURN_V,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_V,,0);};

  }

  // STEP25 action associations
  {
    char active = __GET_VAR(data__->STEP25.X);
    char activated = active && !data__->STEP25.prev_state;
    char desactivated = !active && data__->STEP25.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE23].state,,0);};

  }

  // STEP26 action associations
  {
    char active = __GET_VAR(data__->STEP26.X);
    char activated = active && !data__->STEP26.prev_state;
    char desactivated = !active && data__->STEP26.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE24].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,TURN_H,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_H,,0);};

  }

  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE10].state,,0);};

  }

  // STEP9 action associations
  {
    char active = __GET_VAR(data__->STEP9.X);
    char activated = active && !data__->STEP9.prev_state;
    char desactivated = !active && data__->STEP9.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE9].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,TURN_V,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_V,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE6].state,,0);};

  }

  // STEP11 action associations
  {
    char active = __GET_VAR(data__->STEP11.X);
    char activated = active && !data__->STEP11.prev_state;
    char desactivated = !active && data__->STEP11.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE7].state,,0);};

  }

  // STEP14 action associations
  {
    char active = __GET_VAR(data__->STEP14.X);
    char activated = active && !data__->STEP14.prev_state;
    char desactivated = !active && data__->STEP14.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_N,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_N,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE12].state,,0);};

  }

  // STEP19 action associations
  {
    char active = __GET_VAR(data__->STEP19.X);
    char activated = active && !data__->STEP19.prev_state;
    char desactivated = !active && data__->STEP19.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP19_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP19_INLINE19].state,,0);};

  }

  // STEP20 action associations
  {
    char active = __GET_VAR(data__->STEP20.X);
    char activated = active && !data__->STEP20.prev_state;
    char desactivated = !active && data__->STEP20.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE18].state,,0);};

  }

  // STEP21 action associations
  {
    char active = __GET_VAR(data__->STEP21.X);
    char activated = active && !data__->STEP21.prev_state;
    char desactivated = !active && data__->STEP21.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE21].state,,0);};

  }

  // STEP22 action associations
  {
    char active = __GET_VAR(data__->STEP22.X);
    char activated = active && !data__->STEP22.prev_state;
    char desactivated = !active && data__->STEP22.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_N,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_N,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE20].state,,0);};

  }

  // STEP27 action associations
  {
    char active = __GET_VAR(data__->STEP27.X);
    char activated = active && !data__->STEP27.prev_state;
    char desactivated = !active && data__->STEP27.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE25].state,,0);};

  }

  // STEP28 action associations
  {
    char active = __GET_VAR(data__->STEP28.X);
    char activated = active && !data__->STEP28.prev_state;
    char desactivated = !active && data__->STEP28.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE26].state,,0);};

    if (active)       {__SET_VAR(data__->,TURN_H,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_H,,0);};

  }

  // STEP29 action associations
  {
    char active = __GET_VAR(data__->STEP29.X);
    char activated = active && !data__->STEP29.prev_state;
    char desactivated = !active && data__->STEP29.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE27].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE27].state,,0);};

  }

  // STEP30 action associations
  {
    char active = __GET_VAR(data__->STEP30.X);
    char activated = active && !data__->STEP30.prev_state;
    char desactivated = !active && data__->STEP30.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_P,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_P,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE28].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE28].state,,0);};

  }

  // STEP32 action associations
  {
    char active = __GET_VAR(data__->STEP32.X);
    char activated = active && !data__->STEP32.prev_state;
    char desactivated = !active && data__->STEP32.prev_state;

    if (active)       {__SET_VAR(data__->,TURN_V,,1);};
    if (desactivated) {__SET_VAR(data__->,TURN_V,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_TURN_H].reset) {
    __SET_VAR(data__->,TURN_H,,0);
  }
  else if (data__->__action_list[__SFC_TURN_H].set) {
    __SET_VAR(data__->,TURN_H,,1);
  }
  if (data__->__action_list[__SFC_MOVE_P].reset) {
    __SET_VAR(data__->,MOVE_P,,0);
  }
  else if (data__->__action_list[__SFC_MOVE_P].set) {
    __SET_VAR(data__->,MOVE_P,,1);
  }
  if (data__->__action_list[__SFC_TURN_V].reset) {
    __SET_VAR(data__->,TURN_V,,0);
  }
  else if (data__->__action_list[__SFC_TURN_V].set) {
    __SET_VAR(data__->,TURN_V,,1);
  }
  if (data__->__action_list[__SFC_MOVE_N].reset) {
    __SET_VAR(data__->,MOVE_N,,0);
  }
  else if (data__->__action_list[__SFC_MOVE_N].set) {
    __SET_VAR(data__->,MOVE_N,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE2].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,TAKE,,0);
    __SET_VAR(data__->,TURN_V,,0);
    __SET_VAR(data__->,TURN_H,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,ROUT,,0);
    __SET_VAR(data__->,CTAKE,,0);
    __SET_VAR(data__->,FREE_O2,,1);
    __SET_VAR(data__->,ROUT2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE3].state)) {
    __SET_VAR(data__->,FREROBO,,1);
    __SET_VAR(data__->,ROUTROBO,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE4].state)) {
    __SET_VAR(data__->,AUX,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP15_INLINE13].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE14].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP17_INLINE15].state)) {
    __SET_VAR(data__->,CTAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE16].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE17].state)) {
    __SET_VAR(data__->,CTAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP24_INLINE22].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE5].state)) {
    __SET_VAR(data__->,AUX,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP13_INLINE8].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE11].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP25_INLINE23].state)) {
    __SET_VAR(data__->,FREROBO,,0);
    __SET_VAR(data__->,ROUTROBO,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP26_INLINE24].state)) {
    __SET_VAR(data__->,ROUTROBO,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE1].state)) {
    __SET_VAR(data__->,AUX,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE10].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE9].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE6].state)) {
    __SET_VAR(data__->,AUX,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP11_INLINE7].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE12].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP19_INLINE19].state)) {
    __SET_VAR(data__->,MOVE_N,,1);
    __SET_VAR(data__->,ROUT2,,1);
    __SET_VAR(data__->,FREE_O2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP20_INLINE18].state)) {
    __SET_VAR(data__->,MOVE_N,,0);
    __SET_VAR(data__->,ROUT2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP21_INLINE21].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP22_INLINE20].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP27_INLINE25].state)) {
    __SET_VAR(data__->,MOVE_N,,1);
    __SET_VAR(data__->,ROUT2,,1);
    __SET_VAR(data__->,FREE_O2,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP28_INLINE26].state)) {
    __SET_VAR(data__->,MOVE_N,,0);
    __SET_VAR(data__->,ROUT2,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP29_INLINE27].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP30_INLINE28].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }



  goto __end;

__end:
  return;
} // TAPETE_ROTATIVO_body__() 

// Steps undefinitions
#undef STEP0
#undef __SFC_STEP0
#undef STEP15
#undef __SFC_STEP15
#undef STEP3
#undef __SFC_STEP3
#undef STEP16
#undef __SFC_STEP16
#undef STEP17
#undef __SFC_STEP17
#undef STEP18
#undef __SFC_STEP18
#undef STEP24
#undef __SFC_STEP24
#undef STEP4
#undef __SFC_STEP4
#undef STEP6
#undef __SFC_STEP6
#undef STEP5
#undef __SFC_STEP5
#undef STEP13
#undef __SFC_STEP13
#undef STEP10
#undef __SFC_STEP10
#undef STEP12
#undef __SFC_STEP12
#undef STEP23
#undef __SFC_STEP23
#undef STEP25
#undef __SFC_STEP25
#undef STEP26
#undef __SFC_STEP26
#undef STEP2
#undef __SFC_STEP2
#undef STEP1
#undef __SFC_STEP1
#undef STEP9
#undef __SFC_STEP9
#undef STEP7
#undef __SFC_STEP7
#undef STEP8
#undef __SFC_STEP8
#undef STEP11
#undef __SFC_STEP11
#undef STEP14
#undef __SFC_STEP14
#undef STEP19
#undef __SFC_STEP19
#undef STEP20
#undef __SFC_STEP20
#undef STEP21
#undef __SFC_STEP21
#undef STEP22
#undef __SFC_STEP22
#undef STEP27
#undef __SFC_STEP27
#undef STEP28
#undef __SFC_STEP28
#undef STEP31
#undef __SFC_STEP31
#undef STEP29
#undef __SFC_STEP29
#undef STEP30
#undef __SFC_STEP30
#undef STEP32
#undef __SFC_STEP32
#undef STEP33
#undef __SFC_STEP33

// Actions undefinitions
#undef __SFC_STEP0_INLINE2
#undef __SFC_STEP0_INLINE3
#undef __SFC_STEP0_INLINE4
#undef __SFC_STEP15_INLINE13
#undef __SFC_STEP3_INLINE14
#undef __SFC_STEP17_INLINE15
#undef __SFC_STEP18_INLINE16
#undef __SFC_STEP18_INLINE17
#undef __SFC_STEP24_INLINE22
#undef __SFC_STEP6_INLINE5
#undef __SFC_STEP13_INLINE8
#undef __SFC_STEP10_INLINE11
#undef __SFC_STEP25_INLINE23
#undef __SFC_STEP26_INLINE24
#undef __SFC_STEP2_INLINE1
#undef __SFC_STEP1_INLINE10
#undef __SFC_STEP9_INLINE9
#undef __SFC_STEP7_INLINE6
#undef __SFC_STEP11_INLINE7
#undef __SFC_STEP14_INLINE12
#undef __SFC_STEP19_INLINE19
#undef __SFC_STEP20_INLINE18
#undef __SFC_STEP21_INLINE21
#undef __SFC_STEP22_INLINE20
#undef __SFC_STEP27_INLINE25
#undef __SFC_STEP28_INLINE26
#undef __SFC_STEP29_INLINE27
#undef __SFC_STEP30_INLINE28
#undef __SFC_TURN_H
#undef __SFC_MOVE_P
#undef __SFC_TURN_V
#undef __SFC_MOVE_N





void MAQUINA_init__(MAQUINA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PX,0,retain)
  __INIT_VAR(data__->PY,0,retain)
  __INIT_VAR(data__->P_TOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YPOS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ZPOS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YNEG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ZNEG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIMER,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOOL,0,retain)
  __INIT_VAR(data__->MACHINE,0,retain)
  __INIT_VAR(data__->CURR_TOOL,1,retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_NY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_PY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_NZ,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_PZ,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOOLC_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOOLC_N,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOOLR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOOL_READY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->READY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DEST,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NEXT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->READY_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OFFSET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MAQLIVRE,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 19;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 30;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 22;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP1 __step_list[0]
#define __SFC_STEP1 0
#define STEP0 __step_list[1]
#define __SFC_STEP0 1
#define STEP12 __step_list[2]
#define __SFC_STEP12 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3
#define STEP16 __step_list[4]
#define __SFC_STEP16 4
#define STEP3 __step_list[5]
#define __SFC_STEP3 5
#define STEP5 __step_list[6]
#define __SFC_STEP5 6
#define STEP15 __step_list[7]
#define __SFC_STEP15 7
#define STEP4 __step_list[8]
#define __SFC_STEP4 8
#define STEP7 __step_list[9]
#define __SFC_STEP7 9
#define STEP6 __step_list[10]
#define __SFC_STEP6 10
#define STEP8 __step_list[11]
#define __SFC_STEP8 11
#define STEP10 __step_list[12]
#define __SFC_STEP10 12
#define STEP9 __step_list[13]
#define __SFC_STEP9 13
#define STEP18 __step_list[14]
#define __SFC_STEP18 14
#define STEP11 __step_list[15]
#define __SFC_STEP11 15
#define STEP14 __step_list[16]
#define __SFC_STEP14 16
#define STEP13 __step_list[17]
#define __SFC_STEP13 17
#define STEP17 __step_list[18]
#define __SFC_STEP17 18

// Actions definitions
#define __SFC_STEP1_INLINE1 0
#define __SFC_STEP1_INLINE2 1
#define __SFC_STEP1_INLINE3 2
#define __SFC_STEP1_INLINE4 3
#define __SFC_STEP0_INLINE5 4
#define __SFC_STEP12_INLINE15 5
#define __SFC_STEP2_INLINE6 6
#define __SFC_STEP16_INLINE19 7
#define __SFC_STEP16_INLINE20 8
#define __SFC_STEP16_INLINE21 9
#define __SFC_MACH_CTRL 10
#define __SFC_STEP3_INLINE7 11
#define __SFC_STEP5_INLINE13 12
#define __SFC_TOOL_CTRL 13
#define __SFC_STEP4_INLINE8 14
#define __SFC_STEP4_INLINE9 15
#define __SFC_STEP4_INLINE10 16
#define __SFC_STEP7_INLINE11 17
#define __SFC_STEP10_INLINE14 18
#define __SFC_STEP9_INLINE12 19
#define __SFC_STEP18_INLINE24 20
#define __SFC_STEP14_INLINE16 21
#define __SFC_STEP14_INLINE17 22
#define __SFC_STEP13_INLINE18 23
#define __SFC_STEP17_INLINE22 24
#define __SFC_STEP17_INLINE23 25
#define __SFC_MOVE_NZ 26
#define __SFC_TOOLR 27
#define __SFC_MOVE_PZ 28
#define __SFC_MOVE_PY 29

// Code part
void MAQUINA_body__(MAQUINA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[2],,((((__GET_VAR(data__->PX,) > 0) && (__GET_VAR(data__->PY,) > 0)) && (__GET_VAR(data__->PX,) < 10)) && (__GET_VAR(data__->PY,) < 10)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,((((__GET_VAR(data__->PX,) > 0) && (__GET_VAR(data__->PY,) > 0)) && (__GET_VAR(data__->PX,) < 10)) && (__GET_VAR(data__->PY,) < 10)));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->YNEG,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->YNEG,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP16.X)) {
    __SET_VAR(data__->,__transition_list[4],,!(__GET_VAR(data__->STOP,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,!(__GET_VAR(data__->STOP,)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->ZNEG,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->ZNEG,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[6],,(!(__GET_VAR(data__->P_TOOL,)) || __GET_VAR(data__->TOOL_READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,(!(__GET_VAR(data__->P_TOOL,)) || __GET_VAR(data__->TOOL_READY,)));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[7],,(__GET_VAR(data__->P_TOOL,) && !(__GET_VAR(data__->TOOL_READY,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,(__GET_VAR(data__->P_TOOL,) && !(__GET_VAR(data__->TOOL_READY,))));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[8],,(__GET_VAR(data__->P_TOOL,) && __GET_VAR(data__->TOOL_READY,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,(__GET_VAR(data__->P_TOOL,) && __GET_VAR(data__->TOOL_READY,)));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[9],,(__GET_VAR(data__->READY,) && __GET_VAR(data__->NEXT,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,(__GET_VAR(data__->READY,) && __GET_VAR(data__->NEXT,)));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[10],,(__GET_VAR(data__->READY,) && !(__GET_VAR(data__->NEXT,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,(__GET_VAR(data__->READY,) && !(__GET_VAR(data__->NEXT,))));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->ZPOS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->ZPOS,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_VAR(data__->YPOS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->YPOS,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->FREE_I,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->FREE_I,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[14],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[15],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->STEP18.X)) {
    __SET_VAR(data__->,__transition_list[16],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[17],,((__GET_VAR(data__->PY,) == 10) && (__GET_VAR(data__->PX,) == 10)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,((__GET_VAR(data__->PY,) == 10) && (__GET_VAR(data__->PX,) == 10)));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STEP11.X)) {
    __SET_VAR(data__->,__transition_list[18],,__GET_VAR(data__->FREE_I,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->FREE_I,));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STEP14.X)) {
    __SET_VAR(data__->,__transition_list[19],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->STEP13.X)) {
    __SET_VAR(data__->,__transition_list[20],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->STEP17.X)) {
    __SET_VAR(data__->,__transition_list[21],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,((__GET_VAR(data__->PX,) == 0) && (__GET_VAR(data__->PY,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP16.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP18.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP11.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP14.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP13.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP17.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP12.X,,1);
    data__->STEP12.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP15.X,,1);
    data__->STEP15.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP18.X,,1);
    data__->STEP18.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP11.X,,1);
    data__->STEP11.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP14.X,,1);
    data__->STEP14.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP17.X,,1);
    data__->STEP17.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE4].state,,0);};

  }

  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,0);};

  }

  // STEP12 action associations
  {
    char active = __GET_VAR(data__->STEP12.X);
    char activated = active && !data__->STEP12.prev_state;
    char desactivated = !active && data__->STEP12.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE15].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE6].state,,0);};

  }

  // STEP16 action associations
  {
    char active = __GET_VAR(data__->STEP16.X);
    char activated = active && !data__->STEP16.prev_state;
    char desactivated = !active && data__->STEP16.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE19].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE20].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE20].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE21].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE21].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MACH_CTRL].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MACH_CTRL].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_NZ,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_NZ,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE7].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_TOOL_CTRL].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_TOOL_CTRL].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE9].state,,0);};

    if (active && __time_cmp(data__->STEP4.T.value, __GET_VAR(data__->TIMER,)) < 0) 
                      {__SET_VAR(data__->,TOOLR,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,TOOLR,,0);};

    if (active && __time_cmp(data__->STEP4.T.value, __GET_VAR(data__->TIMER,)) >= 0) 
                      {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE10].state,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE10].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_PZ,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_PZ,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE11].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,MOVE_PY,,1);};
    if (desactivated) {__SET_VAR(data__->,MOVE_PY,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE14].state,,0);};

  }

  // STEP9 action associations
  {
    char active = __GET_VAR(data__->STEP9.X);
    char activated = active && !data__->STEP9.prev_state;
    char desactivated = !active && data__->STEP9.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE12].state,,0);};

  }

  // STEP18 action associations
  {
    char active = __GET_VAR(data__->STEP18.X);
    char activated = active && !data__->STEP18.prev_state;
    char desactivated = !active && data__->STEP18.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE24].state,,0);};

  }

  // STEP14 action associations
  {
    char active = __GET_VAR(data__->STEP14.X);
    char activated = active && !data__->STEP14.prev_state;
    char desactivated = !active && data__->STEP14.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE16].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE17].state,,0);};

  }

  // STEP13 action associations
  {
    char active = __GET_VAR(data__->STEP13.X);
    char activated = active && !data__->STEP13.prev_state;
    char desactivated = !active && data__->STEP13.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE18].state,,0);};

  }

  // STEP17 action associations
  {
    char active = __GET_VAR(data__->STEP17.X);
    char activated = active && !data__->STEP17.prev_state;
    char desactivated = !active && data__->STEP17.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP17_INLINE23].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_MOVE_NZ].reset) {
    __SET_VAR(data__->,MOVE_NZ,,0);
  }
  else if (data__->__action_list[__SFC_MOVE_NZ].set) {
    __SET_VAR(data__->,MOVE_NZ,,1);
  }
  if (data__->__action_list[__SFC_TOOLR].reset) {
    __SET_VAR(data__->,TOOLR,,0);
  }
  else if (data__->__action_list[__SFC_TOOLR].set) {
    __SET_VAR(data__->,TOOLR,,1);
  }
  if (data__->__action_list[__SFC_MOVE_PZ].reset) {
    __SET_VAR(data__->,MOVE_PZ,,0);
  }
  else if (data__->__action_list[__SFC_MOVE_PZ].set) {
    __SET_VAR(data__->,MOVE_PZ,,1);
  }
  if (data__->__action_list[__SFC_MOVE_PY].reset) {
    __SET_VAR(data__->,MOVE_PY,,0);
  }
  else if (data__->__action_list[__SFC_MOVE_PY].set) {
    __SET_VAR(data__->,MOVE_PY,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE1].state)) {
    __SET_VAR(data__->,TOOLC_P,,0);
    __SET_VAR(data__->,TOOLR,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,ROUT,,0);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE2].state)) {
    __SET_VAR(data__->,TOOL_READY,,0);
    __SET_VAR(data__->,OFFSET,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE3].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,MOVE_NZ,,0);
    __SET_VAR(data__->,MOVE_PZ,,0);
    __SET_VAR(data__->,MOVE_PY,,0);
    __SET_VAR(data__->,MOVE_NY,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE4].state)) {
    __SET_VAR(data__->,STOP,,1);
    __SET_VAR(data__->,READY,,0);
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE5].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP12_INLINE15].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE6].state)) {
    __SET_VAR(data__->,MOVE_NY,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP16_INLINE19].state)) {
    __SET_VAR(data__->,MOVE_NY,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP16_INLINE20].state)) {
    __SET_VAR(data__->,READY,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP16_INLINE21].state)) {
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MACH_CTRL].state)) {
    if ((((__GET_VAR(data__->PX,) == 1) && (__GET_VAR(data__->PY,) == 3)) && (__GET_VAR(data__->MACHINE,) == 1))) {
      __SET_VAR(data__->,TOOL,,1);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 5, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 2) && (__GET_VAR(data__->PY,) == 4)) && (__GET_VAR(data__->MACHINE,) == 2))) {
      __SET_VAR(data__->,TOOL,,1);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 10, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 3) && (__GET_VAR(data__->PY,) == 5)) && (__GET_VAR(data__->MACHINE,) == 1))) {
      __SET_VAR(data__->,TOOL,,2);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 10, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 4) && (__GET_VAR(data__->PY,) == 6)) && (__GET_VAR(data__->MACHINE,) == 2))) {
      __SET_VAR(data__->,TOOL,,2);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 5, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 5) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 1))) {
      __SET_VAR(data__->,TOOL,,3);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 5, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 7)) && (__GET_VAR(data__->MACHINE,) == 3))) {
      __SET_VAR(data__->,TOOL,,2);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 20, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 6) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 2))) {
      __SET_VAR(data__->,TOOL,,3);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 5, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 8)) && (__GET_VAR(data__->MACHINE,) == 3))) {
      __SET_VAR(data__->,TOOL,,1);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 20, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 7) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3))) {
      __SET_VAR(data__->,TOOL,,3);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 20, 0, 0, 0));
    } else if ((((__GET_VAR(data__->PX,) == 8) && (__GET_VAR(data__->PY,) == 9)) && (__GET_VAR(data__->MACHINE,) == 3))) {
      __SET_VAR(data__->,TOOL,,3);
      __SET_VAR(data__->,TIMER,,__time_to_timespec(1, 0, 20, 0, 0, 0));
    };
    __SET_VAR(data__->,STOP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE7].state)) {
    __SET_VAR(data__->,STOP,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE13].state)) {
    __SET_VAR(data__->,MOVE_NZ,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_TOOL_CTRL].state)) {
    if ((__GET_VAR(data__->CURR_TOOL,) > __GET_VAR(data__->TOOL,))) {
      __SET_VAR(data__->,TOOLC_N,,1);
      __SET_VAR(data__->,CURR_TOOL,,(__GET_VAR(data__->CURR_TOOL,) - 1));
    } else if ((__GET_VAR(data__->CURR_TOOL,) < __GET_VAR(data__->TOOL,))) {
      __SET_VAR(data__->,TOOLC_P,,1);
      __SET_VAR(data__->,CURR_TOOL,,(__GET_VAR(data__->CURR_TOOL,) + 1));
    } else if ((__GET_VAR(data__->CURR_TOOL,) == __GET_VAR(data__->TOOL,))) {
      __SET_VAR(data__->,TOOL_READY,,__BOOL_LITERAL(TRUE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE8].state)) {
    __SET_VAR(data__->,TOOL_READY,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE9].state)) {
    __SET_VAR(data__->,TOOLC_N,,0);
    __SET_VAR(data__->,TOOLC_P,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE10].state)) {
    __SET_VAR(data__->,READY,,1);
    __SET_VAR(data__->,READY_O,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE11].state)) {
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE14].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE12].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE24].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE16].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE17].state)) {
    __SET_VAR(data__->,MAQLIVRE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP13_INLINE18].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP17_INLINE22].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP17_INLINE23].state)) {
    __SET_VAR(data__->,READY_O,,1);
  }



  goto __end;

__end:
  return;
} // MAQUINA_body__() 

// Steps undefinitions
#undef STEP1
#undef __SFC_STEP1
#undef STEP0
#undef __SFC_STEP0
#undef STEP12
#undef __SFC_STEP12
#undef STEP2
#undef __SFC_STEP2
#undef STEP16
#undef __SFC_STEP16
#undef STEP3
#undef __SFC_STEP3
#undef STEP5
#undef __SFC_STEP5
#undef STEP15
#undef __SFC_STEP15
#undef STEP4
#undef __SFC_STEP4
#undef STEP7
#undef __SFC_STEP7
#undef STEP6
#undef __SFC_STEP6
#undef STEP8
#undef __SFC_STEP8
#undef STEP10
#undef __SFC_STEP10
#undef STEP9
#undef __SFC_STEP9
#undef STEP18
#undef __SFC_STEP18
#undef STEP11
#undef __SFC_STEP11
#undef STEP14
#undef __SFC_STEP14
#undef STEP13
#undef __SFC_STEP13
#undef STEP17
#undef __SFC_STEP17

// Actions undefinitions
#undef __SFC_STEP1_INLINE1
#undef __SFC_STEP1_INLINE2
#undef __SFC_STEP1_INLINE3
#undef __SFC_STEP1_INLINE4
#undef __SFC_STEP0_INLINE5
#undef __SFC_STEP12_INLINE15
#undef __SFC_STEP2_INLINE6
#undef __SFC_STEP16_INLINE19
#undef __SFC_STEP16_INLINE20
#undef __SFC_STEP16_INLINE21
#undef __SFC_MACH_CTRL
#undef __SFC_STEP3_INLINE7
#undef __SFC_STEP5_INLINE13
#undef __SFC_TOOL_CTRL
#undef __SFC_STEP4_INLINE8
#undef __SFC_STEP4_INLINE9
#undef __SFC_STEP4_INLINE10
#undef __SFC_STEP7_INLINE11
#undef __SFC_STEP10_INLINE14
#undef __SFC_STEP9_INLINE12
#undef __SFC_STEP18_INLINE24
#undef __SFC_STEP14_INLINE16
#undef __SFC_STEP14_INLINE17
#undef __SFC_STEP13_INLINE18
#undef __SFC_STEP17_INLINE22
#undef __SFC_STEP17_INLINE23
#undef __SFC_MOVE_NZ
#undef __SFC_TOOLR
#undef __SFC_MOVE_PZ
#undef __SFC_MOVE_PY





void CELULA_init__(CELULA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR0,retain);
  __INIT_VAR(data__->SP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV2,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO0,retain);
  __INIT_VAR(data__->SP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP3,__BOOL_LITERAL(FALSE),retain)
  MAQUINA_init__(&data__->MAQUINA0,retain);
  __INIT_VAR(data__->ST3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SXP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SXN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZN3,__BOOL_LITERAL(FALSE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR1,retain);
  __INIT_VAR(data__->ARP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AZN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AZP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATOOL3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DESTINO,__BOOL_LITERAL(FALSE),retain)
  MAQUINA_init__(&data__->MAQUINA1,retain);
  __INIT_VAR(data__->SP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ST5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SXP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SXN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATOOL5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AZP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AZN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARN5,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO1,retain);
  __INIT_VAR(data__->SP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP6,__BOOL_LITERAL(FALSE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR2,retain);
  __INIT_VAR(data__->SP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_I2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DEST,0,retain)
  __INIT_VAR(data__->CTAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECIVB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CTAKEB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_OB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRINB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_IB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PX,0,retain)
  __INIT_VAR(data__->PY,0,retain)
  __INIT_VAR(data__->PX2,0,retain)
  __INIT_VAR(data__->PY2,0,retain)
  __INIT_VAR(data__->MACHINE1,0,retain)
  __INIT_VAR(data__->MACHINE2,0,retain)
  SFC_LOWDECISION_init__(&data__->SFC_LOWDECISION0,retain);
  SFC_LOWDECISION_init__(&data__->SFC_LOWDECISION1,retain);
  __INIT_VAR(data__->MAQLIVRE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MAQLIVRE2,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void CELULA_body__(CELULA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->TAPETE_LINEAR0.,P,,__GET_VAR(data__->SP1,));
  __SET_VAR(data__->TAPETE_LINEAR0.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO0.FREE_O,));
  __SET_VAR(data__->TAPETE_LINEAR0.,RECEIV,,__GET_VAR(data__->CRECEIV,));
  __SET_VAR(data__->TAPETE_LINEAR0.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO0.ROUT,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR0);
  __SET_VAR(data__->SFC_LOWDECISION1.,PX,,__GET_VAR(data__->PX,));
  __SET_VAR(data__->SFC_LOWDECISION1.,PY,,__GET_VAR(data__->PY,));
  __SET_VAR(data__->SFC_LOWDECISION1.,MACHINE,,__GET_VAR(data__->MACHINE1,));
  __SET_VAR(data__->SFC_LOWDECISION1.,READY,,__GET_VAR(data__->MAQUINA0.READY_O,));
  SFC_LOWDECISION_body__(&data__->SFC_LOWDECISION1);
  __SET_VAR(data__->SFC_LOWDECISION0.,PX,,__GET_VAR(data__->PX2,));
  __SET_VAR(data__->SFC_LOWDECISION0.,PY,,__GET_VAR(data__->PY2,));
  __SET_VAR(data__->SFC_LOWDECISION0.,MACHINE,,__GET_VAR(data__->MACHINE2,));
  __SET_VAR(data__->SFC_LOWDECISION0.,READY,,__GET_VAR(data__->MAQUINA1.READY_O,));
  SFC_LOWDECISION_body__(&data__->SFC_LOWDECISION0);
  __SET_VAR(data__->TAPETE_LINEAR2.,P,,__GET_VAR(data__->SP7,));
  __SET_VAR(data__->TAPETE_LINEAR2.,FREE_I,,__GET_VAR(data__->CFREE_IB,));
  __SET_VAR(data__->TAPETE_LINEAR2.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO1.TAKE,));
  __SET_VAR(data__->TAPETE_LINEAR2.,RIN,,__GET_VAR(data__->CRINB,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR2);
  __SET_VAR(data__->TAPETE_ROTATIVO1.,P,,__GET_VAR(data__->SP6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RECIVE_HOR,,__GET_VAR(data__->MAQUINA1.TAKE,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,FREE_I1,,__GET_VAR(data__->TAPETE_LINEAR2.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,HORIZ,,__GET_VAR(data__->SH6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,VERT,,__GET_VAR(data__->SV6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RIN,,__GET_VAR(data__->TAPETE_LINEAR2.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RECIVE_HOR2,,__GET_VAR(data__->CRECIVB,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO1);
  __SET_VAR(data__->MAQUINA1.,P,,__GET_VAR(data__->SP5,));
  __SET_VAR(data__->MAQUINA1.,PX,,__GET_VAR(data__->SFC_LOWDECISION0.PX_O,));
  __SET_VAR(data__->MAQUINA1.,PY,,__GET_VAR(data__->SFC_LOWDECISION0.PY_O,));
  __SET_VAR(data__->MAQUINA1.,P_TOOL,,__GET_VAR(data__->ST5,));
  __SET_VAR(data__->MAQUINA1.,YPOS,,__GET_VAR(data__->SXP5,));
  __SET_VAR(data__->MAQUINA1.,ZPOS,,__GET_VAR(data__->SZP5,));
  __SET_VAR(data__->MAQUINA1.,YNEG,,__GET_VAR(data__->SXN5,));
  __SET_VAR(data__->MAQUINA1.,ZNEG,,__GET_VAR(data__->SZN5,));
  __SET_VAR(data__->MAQUINA1.,RECEIV,,__GET_VAR(data__->TAPETE_LINEAR1.TAKE,));
  __SET_VAR(data__->MAQUINA1.,MACHINE,,__GET_VAR(data__->MACHINE2,));
  __SET_VAR(data__->MAQUINA1.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO1.FREE_O,));
  __SET_VAR(data__->MAQUINA1.,DEST,,__GET_VAR(data__->DESTINO,));
  __SET_VAR(data__->MAQUINA1.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO1.ROUT,));
  __SET_VAR(data__->MAQUINA1.,NEXT,,__GET_VAR(data__->SFC_LOWDECISION0.NEXT,));
  MAQUINA_body__(&data__->MAQUINA1);
  __SET_VAR(data__->TAPETE_LINEAR1.,P,,__GET_VAR(data__->SP4,));
  __SET_VAR(data__->TAPETE_LINEAR1.,FREE_I,,__GET_VAR(data__->MAQUINA1.FREE_O,));
  __SET_VAR(data__->TAPETE_LINEAR1.,RECEIV,,__GET_VAR(data__->MAQUINA0.TAKE,));
  __SET_VAR(data__->TAPETE_LINEAR1.,RIN,,__GET_VAR(data__->MAQUINA1.ROUT,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR1);
  __SET_VAR(data__->MAQUINA0.,P,,__GET_VAR(data__->SP3,));
  __SET_VAR(data__->MAQUINA0.,PX,,__GET_VAR(data__->SFC_LOWDECISION1.PX_O,));
  __SET_VAR(data__->MAQUINA0.,PY,,__GET_VAR(data__->SFC_LOWDECISION1.PY_O,));
  __SET_VAR(data__->MAQUINA0.,P_TOOL,,__GET_VAR(data__->ST3,));
  __SET_VAR(data__->MAQUINA0.,YPOS,,__GET_VAR(data__->SXP3,));
  __SET_VAR(data__->MAQUINA0.,ZPOS,,__GET_VAR(data__->SZP3,));
  __SET_VAR(data__->MAQUINA0.,YNEG,,__GET_VAR(data__->SXN3,));
  __SET_VAR(data__->MAQUINA0.,ZNEG,,__GET_VAR(data__->SZN3,));
  __SET_VAR(data__->MAQUINA0.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO0.TAKE,));
  __SET_VAR(data__->MAQUINA0.,MACHINE,,__GET_VAR(data__->MACHINE1,));
  __SET_VAR(data__->MAQUINA0.,FREE_I,,__GET_VAR(data__->TAPETE_LINEAR1.FREE_O,));
  __SET_VAR(data__->MAQUINA0.,DEST,,__GET_VAR(data__->DESTINO,));
  __SET_VAR(data__->MAQUINA0.,RIN,,__GET_VAR(data__->TAPETE_LINEAR1.ROUT,));
  __SET_VAR(data__->MAQUINA0.,NEXT,,__GET_VAR(data__->SFC_LOWDECISION1.NEXT,));
  MAQUINA_body__(&data__->MAQUINA0);
  __SET_VAR(data__->TAPETE_ROTATIVO0.,P,,__GET_VAR(data__->SP2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RECIVE_VET,,__GET_VAR(data__->TAPETE_LINEAR0.TAKE,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,FREE_I1,,__GET_VAR(data__->MAQUINA0.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,FREE_I2,,__GET_VAR(data__->CFREE_I2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,HORIZ,,__GET_VAR(data__->SH2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,VERT,,__GET_VAR(data__->SV2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RIN,,__GET_VAR(data__->MAQUINA0.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,DESTINO,,__GET_VAR(data__->DEST,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RIN2,,__GET_VAR(data__->CRIN,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO0);
  __SET_VAR(data__->,AH2,,__GET_VAR(data__->TAPETE_ROTATIVO0.TURN_H,));
  __SET_VAR(data__->,AV6,,__GET_VAR(data__->TAPETE_ROTATIVO1.TURN_H,));
  __SET_VAR(data__->,CTAKEB,,__GET_VAR(data__->TAPETE_LINEAR2.TAKE,));
  __SET_VAR(data__->,AXN3,,__GET_VAR(data__->MAQUINA0.MOVE_NY,));
  __SET_VAR(data__->,AV2,,__GET_VAR(data__->TAPETE_ROTATIVO0.TURN_V,));
  __SET_VAR(data__->,AP4,,__GET_VAR(data__->TAPETE_LINEAR1.MOVE_P,));
  __SET_VAR(data__->,AXN5,,__GET_VAR(data__->MAQUINA1.MOVE_NY,));
  __SET_VAR(data__->,AXP3,,__GET_VAR(data__->MAQUINA0.MOVE_PY,));
  __SET_VAR(data__->,AXP5,,__GET_VAR(data__->MAQUINA1.MOVE_PY,));
  __SET_VAR(data__->,AH6,,__GET_VAR(data__->TAPETE_ROTATIVO1.TURN_V,));
  __SET_VAR(data__->,AV7,,__GET_VAR(data__->TAPETE_LINEAR2.MOVE_P,));
  __SET_VAR(data__->,AP1,,__GET_VAR(data__->TAPETE_LINEAR0.MOVE_P,));
  __SET_VAR(data__->,AZP5,,__GET_VAR(data__->MAQUINA1.MOVE_NZ,));
  __SET_VAR(data__->,AZN3,,__GET_VAR(data__->MAQUINA0.MOVE_NZ,));
  __SET_VAR(data__->,AP6,,__GET_VAR(data__->TAPETE_ROTATIVO1.MOVE_P,));
  __SET_VAR(data__->,CFREE_O,,__GET_VAR(data__->TAPETE_LINEAR0.FREE_O,));
  __SET_VAR(data__->,AP2,,__GET_VAR(data__->TAPETE_ROTATIVO0.MOVE_P,));
  __SET_VAR(data__->,AZP3,,__GET_VAR(data__->MAQUINA0.MOVE_PZ,));
  __SET_VAR(data__->,AZN5,,__GET_VAR(data__->MAQUINA1.MOVE_PZ,));
  __SET_VAR(data__->,ARN3,,__GET_VAR(data__->MAQUINA0.TOOLC_N,));
  __SET_VAR(data__->,ARP3,,__GET_VAR(data__->MAQUINA0.TOOLC_P,));
  __SET_VAR(data__->,ARP5,,__GET_VAR(data__->MAQUINA1.TOOLC_P,));
  __SET_VAR(data__->,ARN5,,__GET_VAR(data__->MAQUINA1.TOOLC_N,));
  __SET_VAR(data__->,AP3,,__GET_VAR(data__->MAQUINA0.MOVE_P,));
  __SET_VAR(data__->,AP5,,__GET_VAR(data__->MAQUINA1.MOVE_P,));
  __SET_VAR(data__->,AN6,,__GET_VAR(data__->TAPETE_ROTATIVO1.MOVE_N,));
  __SET_VAR(data__->,CROUT,,__GET_VAR(data__->TAPETE_LINEAR0.ROUT,));
  __SET_VAR(data__->,ATOOL5,,__GET_VAR(data__->MAQUINA1.TOOLR,));
  __SET_VAR(data__->,ATOOL3,,__GET_VAR(data__->MAQUINA0.TOOLR,));
  __SET_VAR(data__->,CFREE_OB,,__GET_VAR(data__->TAPETE_ROTATIVO1.FREE_O2,));
  __SET_VAR(data__->,CTAKE,,__GET_VAR(data__->TAPETE_ROTATIVO0.CTAKE,));
  __SET_VAR(data__->,CROUB,,__GET_VAR(data__->TAPETE_ROTATIVO1.ROUT2,));

  goto __end;

__end:
  return;
} // CELULA_body__() 





void ARMAZEMSFX_init__(ARMAZEMSFX *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TAPETEIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ORDEMIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAPETEOUTFREE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAPETESTORE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PECAADD,0,retain)
  __INIT_VAR(data__->ORDEM,0,retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INARM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTARM,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 9;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  __SET_VAR(data__->,__step_list[6].X,,1);
  data__->__nb_actions = 14;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 11;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP0 __step_list[0]
#define __SFC_STEP0 0
#define STEP3 __step_list[1]
#define __SFC_STEP3 1
#define STEP1 __step_list[2]
#define __SFC_STEP1 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3
#define STEP8 __step_list[4]
#define __SFC_STEP8 4
#define STEP4 __step_list[5]
#define __SFC_STEP4 5
#define STEP5 __step_list[6]
#define __SFC_STEP5 6
#define STEP6 __step_list[7]
#define __SFC_STEP6 7
#define STEP7 __step_list[8]
#define __SFC_STEP7 8

// Actions definitions
#define __SFC_STEP0_INLINE3 0
#define __SFC_STEP0_INLINE4 1
#define __SFC_STEP0_INLINE5 2
#define __SFC_STEP0_INLINE6 3
#define __SFC_STEP0_INLINE7 4
#define __SFC_STEP3_INLINE1 5
#define __SFC_STEP3_INLINE2 6
#define __SFC_STEP2_INLINE8 7
#define __SFC_STEP2_INLINE9 8
#define __SFC_STEP8_INLINE14 9
#define __SFC_STEP4_INLINE10 10
#define __SFC_STEP5_INLINE12 11
#define __SFC_STEP6_INLINE11 12
#define __SFC_STEP7_INLINE13 13

// Code part
void ARMAZEMSFX_body__(ARMAZEMSFX *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->TAPETEIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->TAPETEIN,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[1],,!(__GET_VAR(data__->TAPETEIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,!(__GET_VAR(data__->TAPETEIN,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->AUX,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->AUX,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->TAPETEIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->TAPETEIN,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[4],,!(__GET_VAR(data__->TAPETEOUTFREE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,!(__GET_VAR(data__->TAPETEOUTFREE,)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->TAPETEOUTFREE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->TAPETEOUTFREE,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->INARM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->INARM,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[7],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,1);
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->ORDEMIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->ORDEMIN,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->AUX2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->AUX2,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[10],,!(__GET_VAR(data__->ORDEMIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,!(__GET_VAR(data__->ORDEMIN,)));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE7].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE2].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE8].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE9].state,,0);};

  }

  // STEP8 action associations
  {
    char active = __GET_VAR(data__->STEP8.X);
    char activated = active && !data__->STEP8.prev_state;
    char desactivated = !active && data__->STEP8.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE14].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE10].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE12].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE11].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE13].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE3].state)) {
    __SET_VAR(data__->,PECAADD,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE4].state)) {
    __SET_VAR(data__->,AUX2,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE5].state)) {
    __SET_VAR(data__->,RECEIV,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE6].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE7].state)) {
    __SET_VAR(data__->,TAPETESTORE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE1].state)) {
    __SET_VAR(data__->,TAPETESTORE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE2].state)) {
    __SET_VAR(data__->,RECEIV,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE8].state)) {
    __SET_VAR(data__->,PECAADD,,__GET_VAR(data__->ORDEM,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE9].state)) {
    __SET_VAR(data__->,AUX2,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP8_INLINE14].state)) {
    __SET_VAR(data__->,OUTARM,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE10].state)) {
    __SET_VAR(data__->,TAKE,,1);
    __SET_VAR(data__->,OUTARM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE12].state)) {
    __SET_VAR(data__->,AUX,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE11].state)) {
    __SET_VAR(data__->,AUX,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE13].state)) {
    __SET_VAR(data__->,AUX,,__BOOL_LITERAL(FALSE));
  }



  goto __end;

__end:
  return;
} // ARMAZEMSFX_body__() 

// Steps undefinitions
#undef STEP0
#undef __SFC_STEP0
#undef STEP3
#undef __SFC_STEP3
#undef STEP1
#undef __SFC_STEP1
#undef STEP2
#undef __SFC_STEP2
#undef STEP8
#undef __SFC_STEP8
#undef STEP4
#undef __SFC_STEP4
#undef STEP5
#undef __SFC_STEP5
#undef STEP6
#undef __SFC_STEP6
#undef STEP7
#undef __SFC_STEP7

// Actions undefinitions
#undef __SFC_STEP0_INLINE3
#undef __SFC_STEP0_INLINE4
#undef __SFC_STEP0_INLINE5
#undef __SFC_STEP0_INLINE6
#undef __SFC_STEP0_INLINE7
#undef __SFC_STEP3_INLINE1
#undef __SFC_STEP3_INLINE2
#undef __SFC_STEP2_INLINE8
#undef __SFC_STEP2_INLINE9
#undef __SFC_STEP8_INLINE14
#undef __SFC_STEP4_INLINE10
#undef __SFC_STEP5_INLINE12
#undef __SFC_STEP6_INLINE11
#undef __SFC_STEP7_INLINE13





void TAPETE_ARM_init__(TAPETE_ARM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECIIV2,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 6;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 8;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 7;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP1 __step_list[0]
#define __SFC_STEP1 0
#define STEP0 __step_list[1]
#define __SFC_STEP0 1
#define STEP2 __step_list[2]
#define __SFC_STEP2 2
#define STEP4 __step_list[3]
#define __SFC_STEP4 3
#define STEP3 __step_list[4]
#define __SFC_STEP3 4
#define STEP5 __step_list[5]
#define __SFC_STEP5 5

// Actions definitions
#define __SFC_STEP1_INLINE3 0
#define __SFC_STEP1_INLINE4 1
#define __SFC_STEP1_INLINE5 2
#define __SFC_STEP1_INLINE6 3
#define __SFC_STEP2_INLINE2 4
#define __SFC_STEP4_INLINE1 5
#define __SFC_STEP3_INLINE8 6
#define __SFC_STEP5_INLINE7 7

// Code part
void TAPETE_ARM_body__(TAPETE_ARM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->FREE_I,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->FREE_I,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[3],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->RECIIV2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->RECIIV2,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[6],,!(__GET_VAR(data__->P,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,!(__GET_VAR(data__->P,)));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE6].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE2].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE1].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE8].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE7].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE3].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE4].state)) {
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE5].state)) {
    __SET_VAR(data__->,FREE_O,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE6].state)) {
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE2].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE1].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE8].state)) {
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
    __SET_VAR(data__->,MOVE_P,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE7].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }



  goto __end;

__end:
  return;
} // TAPETE_ARM_body__() 

// Steps undefinitions
#undef STEP1
#undef __SFC_STEP1
#undef STEP0
#undef __SFC_STEP0
#undef STEP2
#undef __SFC_STEP2
#undef STEP4
#undef __SFC_STEP4
#undef STEP3
#undef __SFC_STEP3
#undef STEP5
#undef __SFC_STEP5

// Actions undefinitions
#undef __SFC_STEP1_INLINE3
#undef __SFC_STEP1_INLINE4
#undef __SFC_STEP1_INLINE5
#undef __SFC_STEP1_INLINE6
#undef __SFC_STEP2_INLINE2
#undef __SFC_STEP4_INLINE1
#undef __SFC_STEP3_INLINE8
#undef __SFC_STEP5_INLINE7





void ARMAZEM_init__(ARMAZEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  ARMAZEMSFX_init__(&data__->ARMAZEMSFX0,retain);
  __INIT_VAR(data__->TAPETEIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ORDEMIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAPETEOUTFREE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ORDEM,0,retain)
  __INIT_VAR(data__->TAPETESTORE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PECAADD,0,retain)
  __INIT_VAR(data__->SP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A1,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ARM_init__(&data__->TAPETE_ARM0,retain);
  __INIT_VAR(data__->CTAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ARM_init__(&data__->TAPETE_ARM1,retain);
  __INIT_VAR(data__->SP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECEIVB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREO_B,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INARM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTARM,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void ARMAZEM_body__(ARMAZEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->TAPETE_ARM1.,P,,__GET_VAR(data__->SP2,));
  __SET_VAR(data__->TAPETE_ARM1.,RECIIV2,,__GET_VAR(data__->CRECEIVB,));
  TAPETE_ARM_body__(&data__->TAPETE_ARM1);
  __SET_VAR(data__->ARMAZEMSFX0.,TAPETEIN,,__GET_VAR(data__->TAPETEIN,));
  __SET_VAR(data__->ARMAZEMSFX0.,ORDEMIN,,__GET_VAR(data__->ORDEMIN,));
  __SET_VAR(data__->ARMAZEMSFX0.,TAPETEOUTFREE,,__GET_VAR(data__->TAPETEOUTFREE,));
  __SET_VAR(data__->ARMAZEMSFX0.,ORDEM,,__GET_VAR(data__->ORDEM,));
  __SET_VAR(data__->ARMAZEMSFX0.,RECEIV,,__GET_VAR(data__->TAPETE_ARM1.TAKE,));
  __SET_VAR(data__->ARMAZEMSFX0.,INARM,,__GET_VAR(data__->INARM,));
  ARMAZEMSFX_body__(&data__->ARMAZEMSFX0);
  __SET_VAR(data__->TAPETE_ARM0.,P,,__GET_VAR(data__->SP1,));
  __SET_VAR(data__->TAPETE_ARM0.,FREE_I,,__GET_VAR(data__->CFREE,));
  __SET_VAR(data__->TAPETE_ARM0.,RECEIV,,__GET_VAR(data__->ARMAZEMSFX0.TAKE,));
  __SET_VAR(data__->TAPETE_ARM0.,RIN,,__GET_VAR(data__->CRIN,));
  TAPETE_ARM_body__(&data__->TAPETE_ARM0);
  __SET_VAR(data__->,CTAKE,,__GET_VAR(data__->TAPETE_ARM0.TAKE,));
  __SET_VAR(data__->,TAPETESTORE,,__GET_VAR(data__->ARMAZEMSFX0.TAPETESTORE,));
  __SET_VAR(data__->,A1,,__GET_VAR(data__->TAPETE_ARM0.MOVE_P,));
  __SET_VAR(data__->,PECAADD,,__GET_VAR(data__->ARMAZEMSFX0.PECAADD,));
  __SET_VAR(data__->,OUTARM,,__GET_VAR(data__->ARMAZEMSFX0.OUTARM,));
  __SET_VAR(data__->,A2,,__GET_VAR(data__->TAPETE_ARM1.MOVE_P,));
  __SET_VAR(data__->,CROUB,,__GET_VAR(data__->TAPETE_ARM1.ROUT,));
  __SET_VAR(data__->,CFREO_B,,__GET_VAR(data__->TAPETE_ARM1.FREE_O,));

  goto __end;

__end:
  return;
} // ARMAZEM_body__() 





void INTOOUT_init__(INTOOUT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MI6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MO6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SI,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y21,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X21,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void INTOOUT_body__(INTOOUT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,Y1,,__GET_VAR(data__->X1,));
  __SET_VAR(data__->,Y2,,__GET_VAR(data__->X2,));
  __SET_VAR(data__->,Y3,,__GET_VAR(data__->X3,));
  __SET_VAR(data__->,Y4,,__GET_VAR(data__->X4,));
  __SET_VAR(data__->,Y5,,__GET_VAR(data__->X5,));
  __SET_VAR(data__->,Y6,,__GET_VAR(data__->X6,));
  __SET_VAR(data__->,Y7,,__GET_VAR(data__->X7,));
  __SET_VAR(data__->,Y8,,__GET_VAR(data__->X8,));
  __SET_VAR(data__->,Y9,,__GET_VAR(data__->X9,));
  __SET_VAR(data__->,MO1,,__GET_VAR(data__->MI1,));
  __SET_VAR(data__->,MO2,,__GET_VAR(data__->MI2,));
  __SET_VAR(data__->,MO3,,__GET_VAR(data__->MI3,));
  __SET_VAR(data__->,MO4,,__GET_VAR(data__->MI4,));
  __SET_VAR(data__->,MO5,,__GET_VAR(data__->MI5,));
  __SET_VAR(data__->,MO6,,__GET_VAR(data__->MI6,));
  __SET_VAR(data__->,SO,,__GET_VAR(data__->SI,));
  __SET_VAR(data__->,Y10,,__GET_VAR(data__->X10,));
  __SET_VAR(data__->,Y11,,__GET_VAR(data__->X11,));
  __SET_VAR(data__->,Y12,,__GET_VAR(data__->X12,));
  __SET_VAR(data__->,Y13,,__GET_VAR(data__->X13,));
  __SET_VAR(data__->,Y14,,__GET_VAR(data__->X14,));
  __SET_VAR(data__->,Y20,,__GET_VAR(data__->X20,));
  __SET_VAR(data__->,Y21,,__GET_VAR(data__->X21,));

  goto __end;

__end:
  return;
} // INTOOUT_body__() 





void ROBOT_init__(ROBOT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MXP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MXN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MYP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MYN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MZP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MZN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SX0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SX1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SZBOT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIECE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX2,0,retain)
  __INIT_VAR(data__->S1,0,retain)
  __INIT_VAR(data__->S2,0,retain)
  __INIT_VAR(data__->S3,0,retain)
  __INIT_VAR(data__->A1,0,retain)
  __INIT_VAR(data__->A2,0,retain)
  __INIT_VAR(data__->A3,0,retain)
  __INIT_VAR(data__->A4,0,retain)
  __INIT_VAR(data__->TAKE,0,retain)
  __INIT_VAR(data__->READY_O,0,retain)
  __INIT_VAR(data__->FREE_O,0,retain)
  __INIT_VAR(data__->RECEIV,0,retain)
  __INIT_VAR(data__->FREE_I,0,retain)
  __INIT_VAR(data__->ROUT,0,retain)
  __INIT_VAR(data__->AUX3,0,retain)
  __INIT_VAR(data__->AUX4,0,retain)
  __INIT_VAR(data__->MESPERMITION,0,retain)
  __INIT_VAR(data__->PERMISAO,0,retain)
  __INIT_VAR(data__->ROBOTAKE,0,retain)
  __INIT_VAR(data__->FREE_ROB,0,retain)
  __INIT_VAR(data__->RECEIV_ROB,0,retain)
  __INIT_VAR(data__->P,0,retain)
  __INIT_VAR(data__->RECEIV_ROB1,0,retain)
  __INIT_VAR(data__->AUXR,0,retain)
  UINT i;
  data__->__nb_steps = 57;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 58;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 53;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP0 __step_list[0]
#define __SFC_STEP0 0
#define STEP2 __step_list[1]
#define __SFC_STEP2 1
#define STEP3 __step_list[2]
#define __SFC_STEP3 2
#define STEP5 __step_list[3]
#define __SFC_STEP5 3
#define STEP9 __step_list[4]
#define __SFC_STEP9 4
#define STEP10 __step_list[5]
#define __SFC_STEP10 5
#define STEP11 __step_list[6]
#define __SFC_STEP11 6
#define STEP12 __step_list[7]
#define __SFC_STEP12 7
#define STEP13 __step_list[8]
#define __SFC_STEP13 8
#define STEP14 __step_list[9]
#define __SFC_STEP14 9
#define STEP16 __step_list[10]
#define __SFC_STEP16 10
#define STEP15 __step_list[11]
#define __SFC_STEP15 11
#define STEP21 __step_list[12]
#define __SFC_STEP21 12
#define STEP31 __step_list[13]
#define __SFC_STEP31 13
#define STEP25 __step_list[14]
#define __SFC_STEP25 14
#define STEP32 __step_list[15]
#define __SFC_STEP32 15
#define STEP33 __step_list[16]
#define __SFC_STEP33 16
#define STEP34 __step_list[17]
#define __SFC_STEP34 17
#define STEP22 __step_list[18]
#define __SFC_STEP22 18
#define STEP26 __step_list[19]
#define __SFC_STEP26 19
#define STEP27 __step_list[20]
#define __SFC_STEP27 20
#define STEP28 __step_list[21]
#define __SFC_STEP28 21
#define STEP29 __step_list[22]
#define __SFC_STEP29 22
#define STEP30 __step_list[23]
#define __SFC_STEP30 23
#define STEP35 __step_list[24]
#define __SFC_STEP35 24
#define STEP49 __step_list[25]
#define __SFC_STEP49 25
#define STEP50 __step_list[26]
#define __SFC_STEP50 26
#define STEP48 __step_list[27]
#define __SFC_STEP48 27
#define STEP51 __step_list[28]
#define __SFC_STEP51 28
#define STEP52 __step_list[29]
#define __SFC_STEP52 29
#define STEP53 __step_list[30]
#define __SFC_STEP53 30
#define STEP37 __step_list[31]
#define __SFC_STEP37 31
#define STEP38 __step_list[32]
#define __SFC_STEP38 32
#define STEP39 __step_list[33]
#define __SFC_STEP39 33
#define STEP56 __step_list[34]
#define __SFC_STEP56 34
#define STEP36 __step_list[35]
#define __SFC_STEP36 35
#define STEP45 __step_list[36]
#define __SFC_STEP45 36
#define STEP43 __step_list[37]
#define __SFC_STEP43 37
#define STEP44 __step_list[38]
#define __SFC_STEP44 38
#define STEP42 __step_list[39]
#define __SFC_STEP42 39
#define STEP46 __step_list[40]
#define __SFC_STEP46 40
#define STEP47 __step_list[41]
#define __SFC_STEP47 41
#define STEP54 __step_list[42]
#define __SFC_STEP54 42
#define STEP55 __step_list[43]
#define __SFC_STEP55 43
#define STEP40 __step_list[44]
#define __SFC_STEP40 44
#define STEP41 __step_list[45]
#define __SFC_STEP41 45
#define STEP23 __step_list[46]
#define __SFC_STEP23 46
#define STEP24 __step_list[47]
#define __SFC_STEP24 47
#define STEP17 __step_list[48]
#define __SFC_STEP17 48
#define STEP18 __step_list[49]
#define __SFC_STEP18 49
#define STEP19 __step_list[50]
#define __SFC_STEP19 50
#define STEP20 __step_list[51]
#define __SFC_STEP20 51
#define STEP4 __step_list[52]
#define __SFC_STEP4 52
#define STEP8 __step_list[53]
#define __SFC_STEP8 53
#define STEP6 __step_list[54]
#define __SFC_STEP6 54
#define STEP7 __step_list[55]
#define __SFC_STEP7 55
#define STEP1 __step_list[56]
#define __SFC_STEP1 56

// Actions definitions
#define __SFC_STEP9_INLINE2 0
#define __SFC_STEP9_INLINE3 1
#define __SFC_STEP9_INLINE4 2
#define __SFC_STEP10_INLINE5 3
#define __SFC_STEP10_INLINE6 4
#define __SFC_STEP11_INLINE7 5
#define __SFC_STEP12_INLINE8 6
#define __SFC_STEP13_INLINE9 7
#define __SFC_STEP14_INLINE10 8
#define __SFC_STEP16_INLINE13 9
#define __SFC_STEP15_INLINE11 10
#define __SFC_STEP15_INLINE12 11
#define __SFC_STEP21_INLINE18 12
#define __SFC_STEP31_INLINE27 13
#define __SFC_STEP25_INLINE28 14
#define __SFC_STEP32_INLINE30 15
#define __SFC_STEP33_INLINE29 16
#define __SFC_STEP22_INLINE21 17
#define __SFC_STEP26_INLINE22 18
#define __SFC_STEP27_INLINE23 19
#define __SFC_STEP28_INLINE24 20
#define __SFC_STEP29_INLINE25 21
#define __SFC_STEP30_INLINE26 22
#define __SFC_STEP35_INLINE31 23
#define __SFC_STEP49_INLINE42 24
#define __SFC_STEP50_INLINE43 25
#define __SFC_STEP48_INLINE44 26
#define __SFC_STEP51_INLINE45 27
#define __SFC_STEP52_INLINE46 28
#define __SFC_STEP53_INLINE47 29
#define __SFC_STEP37_INLINE32 30
#define __SFC_STEP38_INLINE33 31
#define __SFC_STEP39_INLINE34 32
#define __SFC_STEP56_INLINE51 33
#define __SFC_STEP36_INLINE52 34
#define __SFC_STEP45_INLINE40 35
#define __SFC_STEP43_INLINE37 36
#define __SFC_STEP44_INLINE38 37
#define __SFC_STEP44_INLINE39 38
#define __SFC_STEP46_INLINE41 39
#define __SFC_STEP54_INLINE48 40
#define __SFC_STEP54_INLINE49 41
#define __SFC_STEP55_INLINE50 42
#define __SFC_STEP40_INLINE35 43
#define __SFC_STEP41_INLINE36 44
#define __SFC_STEP23_INLINE19 45
#define __SFC_STEP24_INLINE20 46
#define __SFC_STEP18_INLINE14 47
#define __SFC_STEP18_INLINE15 48
#define __SFC_STEP19_INLINE16 49
#define __SFC_STEP20_INLINE17 50
#define __SFC_STEP4_INLINE1 51
#define __SFC_MYP 52
#define __SFC_MYN 53
#define __SFC_AUX3 54
#define __SFC_AUX4 55
#define __SFC_MXP 56
#define __SFC_MXN 57

// Code part
void ROBOT_body__(ROBOT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[0],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,1);
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->AUX,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->AUX,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->SY3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->SY3,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP8.X) && __GET_VAR(data__->STEP5.X) && __GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[3],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,1);
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->S1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->S1,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP11.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->S3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->S3,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP12.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP13.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->PIECE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->PIECE,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP14.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->AUX3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->AUX3,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP16.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP15.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->SX0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->SX0,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP21.X) && __GET_VAR(data__->STEP24.X)) {
    __SET_VAR(data__->,__transition_list[12],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,1);
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP31.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->STEP25.X)) {
    __SET_VAR(data__->,__transition_list[14],,__GET_VAR(data__->AUX4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->AUX4,));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->STEP32.X)) {
    __SET_VAR(data__->,__transition_list[15],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->STEP33.X)) {
    __SET_VAR(data__->,__transition_list[16],,!(__GET_VAR(data__->MZP,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,!(__GET_VAR(data__->MZP,)));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STEP34.X) && __GET_VAR(data__->STEP20.X)) {
    __SET_VAR(data__->,__transition_list[17],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,1);
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STEP22.X)) {
    __SET_VAR(data__->,__transition_list[18],,__GET_VAR(data__->SX1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->SX1,));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STEP26.X)) {
    __SET_VAR(data__->,__transition_list[19],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->STEP27.X)) {
    __SET_VAR(data__->,__transition_list[20],,__GET_VAR(data__->PIECE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->PIECE,));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->STEP28.X)) {
    __SET_VAR(data__->,__transition_list[21],,__GET_VAR(data__->AUX3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->AUX3,));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }
  if (__GET_VAR(data__->STEP29.X)) {
    __SET_VAR(data__->,__transition_list[22],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->__transition_list[22]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[22],,0);
  }
  if (__GET_VAR(data__->STEP30.X)) {
    __SET_VAR(data__->,__transition_list[23],,__GET_VAR(data__->SX0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->__transition_list[23]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->SX0,));
    }
    __SET_VAR(data__->,__transition_list[23],,0);
  }
  if (__GET_VAR(data__->STEP35.X)) {
    __SET_VAR(data__->,__transition_list[24],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->__transition_list[24]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[24],,0);
  }
  if (__GET_VAR(data__->STEP49.X)) {
    __SET_VAR(data__->,__transition_list[25],,__GET_VAR(data__->AUX4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->__transition_list[25]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->AUX4,));
    }
    __SET_VAR(data__->,__transition_list[25],,0);
  }
  if (__GET_VAR(data__->STEP50.X)) {
    __SET_VAR(data__->,__transition_list[26],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->__transition_list[26]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[26],,0);
  }
  if (__GET_VAR(data__->STEP48.X)) {
    __SET_VAR(data__->,__transition_list[27],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->__transition_list[27]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[27],,0);
  }
  if (__GET_VAR(data__->STEP51.X)) {
    __SET_VAR(data__->,__transition_list[28],,__GET_VAR(data__->PIECE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->__transition_list[28]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[28],,__GET_VAR(data__->PIECE,));
    }
    __SET_VAR(data__->,__transition_list[28],,0);
  }
  if (__GET_VAR(data__->STEP52.X)) {
    __SET_VAR(data__->,__transition_list[29],,__GET_VAR(data__->AUX3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->__transition_list[29]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[29],,__GET_VAR(data__->AUX3,));
    }
    __SET_VAR(data__->,__transition_list[29],,0);
  }
  if (__GET_VAR(data__->STEP53.X)) {
    __SET_VAR(data__->,__transition_list[30],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->__transition_list[30]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[30],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[30],,0);
  }
  if (__GET_VAR(data__->STEP37.X)) {
    __SET_VAR(data__->,__transition_list[31],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,__GET_VAR(data__->__transition_list[31]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[31],,1);
    }
    __SET_VAR(data__->,__transition_list[31],,0);
  }
  if (__GET_VAR(data__->STEP38.X)) {
    __SET_VAR(data__->,__transition_list[32],,__GET_VAR(data__->SX1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->__transition_list[32]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[32],,__GET_VAR(data__->SX1,));
    }
    __SET_VAR(data__->,__transition_list[32],,0);
  }
  if (__GET_VAR(data__->STEP39.X) && __GET_VAR(data__->STEP41.X)) {
    __SET_VAR(data__->,__transition_list[33],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,__GET_VAR(data__->__transition_list[33]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[33],,1);
    }
    __SET_VAR(data__->,__transition_list[33],,0);
  }
  if (__GET_VAR(data__->STEP56.X)) {
    __SET_VAR(data__->,__transition_list[34],,__GET_VAR(data__->MESPERMITION,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->__transition_list[34]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[34],,__GET_VAR(data__->MESPERMITION,));
    }
    __SET_VAR(data__->,__transition_list[34],,0);
  }
  if (__GET_VAR(data__->STEP36.X)) {
    __SET_VAR(data__->,__transition_list[35],,__GET_VAR(data__->FREE_ROB,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->__transition_list[35]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[35],,__GET_VAR(data__->FREE_ROB,));
    }
    __SET_VAR(data__->,__transition_list[35],,0);
  }
  if (__GET_VAR(data__->STEP45.X)) {
    __SET_VAR(data__->,__transition_list[36],,__GET_VAR(data__->SZBOT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->__transition_list[36]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[36],,__GET_VAR(data__->SZBOT,));
    }
    __SET_VAR(data__->,__transition_list[36],,0);
  }
  if (__GET_VAR(data__->STEP43.X)) {
    __SET_VAR(data__->,__transition_list[37],,__GET_VAR(data__->AUX4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->__transition_list[37]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[37],,__GET_VAR(data__->AUX4,));
    }
    __SET_VAR(data__->,__transition_list[37],,0);
  }
  if (__GET_VAR(data__->STEP44.X)) {
    __SET_VAR(data__->,__transition_list[38],,__GET_VAR(data__->SZTOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,__GET_VAR(data__->__transition_list[38]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[38],,__GET_VAR(data__->SZTOP,));
    }
    __SET_VAR(data__->,__transition_list[38],,0);
  }
  if (__GET_VAR(data__->STEP42.X)) {
    __SET_VAR(data__->,__transition_list[39],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,__GET_VAR(data__->__transition_list[39]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[39],,1);
    }
    __SET_VAR(data__->,__transition_list[39],,0);
  }
  if (__GET_VAR(data__->STEP46.X)) {
    __SET_VAR(data__->,__transition_list[40],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[40],,__GET_VAR(data__->__transition_list[40]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[40],,1);
    }
    __SET_VAR(data__->,__transition_list[40],,0);
  }
  if (__GET_VAR(data__->STEP47.X) && __GET_VAR(data__->STEP55.X)) {
    __SET_VAR(data__->,__transition_list[41],,1);
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[41],,__GET_VAR(data__->__transition_list[41]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[41],,1);
    }
    __SET_VAR(data__->,__transition_list[41],,0);
  }
  if (__GET_VAR(data__->STEP54.X)) {
    __SET_VAR(data__->,__transition_list[42],,__GET_VAR(data__->SY3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[42],,__GET_VAR(data__->__transition_list[42]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[42],,__GET_VAR(data__->SY3,));
    }
    __SET_VAR(data__->,__transition_list[42],,0);
  }
  if (__GET_VAR(data__->STEP40.X)) {
    __SET_VAR(data__->,__transition_list[43],,__GET_VAR(data__->SY0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[43],,__GET_VAR(data__->__transition_list[43]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[43],,__GET_VAR(data__->SY0,));
    }
    __SET_VAR(data__->,__transition_list[43],,0);
  }
  if (__GET_VAR(data__->STEP23.X)) {
    __SET_VAR(data__->,__transition_list[44],,__GET_VAR(data__->SY2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[44],,__GET_VAR(data__->__transition_list[44]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[44],,__GET_VAR(data__->SY2,));
    }
    __SET_VAR(data__->,__transition_list[44],,0);
  }
  if (__GET_VAR(data__->STEP17.X)) {
    __SET_VAR(data__->,__transition_list[45],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[45],,__GET_VAR(data__->__transition_list[45]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[45],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[45],,0);
  }
  if (__GET_VAR(data__->STEP18.X)) {
    __SET_VAR(data__->,__transition_list[46],,__GET_VAR(data__->S1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[46],,__GET_VAR(data__->__transition_list[46]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[46],,__GET_VAR(data__->S1,));
    }
    __SET_VAR(data__->,__transition_list[46],,0);
  }
  if (__GET_VAR(data__->STEP19.X)) {
    __SET_VAR(data__->,__transition_list[47],,__GET_VAR(data__->S2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[47],,__GET_VAR(data__->__transition_list[47]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[47],,__GET_VAR(data__->S2,));
    }
    __SET_VAR(data__->,__transition_list[47],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[48],,__GET_VAR(data__->SY3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[48],,__GET_VAR(data__->__transition_list[48]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[48],,__GET_VAR(data__->SY3,));
    }
    __SET_VAR(data__->,__transition_list[48],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[49],,__GET_VAR(data__->AUX,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[49],,__GET_VAR(data__->__transition_list[49]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[49],,__GET_VAR(data__->AUX,));
    }
    __SET_VAR(data__->,__transition_list[49],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[50],,__GET_VAR(data__->AUX,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[50],,__GET_VAR(data__->__transition_list[50]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[50],,__GET_VAR(data__->AUX,));
    }
    __SET_VAR(data__->,__transition_list[50],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[51],,__GET_VAR(data__->SX1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[51],,__GET_VAR(data__->__transition_list[51]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[51],,__GET_VAR(data__->SX1,));
    }
    __SET_VAR(data__->,__transition_list[51],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[52],,__GET_VAR(data__->SX1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[52],,__GET_VAR(data__->__transition_list[52]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[52],,__GET_VAR(data__->SX1,));
    }
    __SET_VAR(data__->,__transition_list[52],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP8.X,,0);
    __SET_VAR(data__->,STEP5.X,,0);
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP11.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP12.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP13.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP14.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP16.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP15.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP21.X,,0);
    __SET_VAR(data__->,STEP24.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP31.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP25.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP32.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP33.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP34.X,,0);
    __SET_VAR(data__->,STEP20.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP22.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP26.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP27.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP28.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP29.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP30.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP35.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP49.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP50.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP48.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP51.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP52.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP53.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP37.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP38.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP39.X,,0);
    __SET_VAR(data__->,STEP41.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP56.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP36.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP45.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP43.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP44.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP42.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[40])) {
    __SET_VAR(data__->,STEP46.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[41])) {
    __SET_VAR(data__->,STEP47.X,,0);
    __SET_VAR(data__->,STEP55.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[42])) {
    __SET_VAR(data__->,STEP54.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[43])) {
    __SET_VAR(data__->,STEP40.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[44])) {
    __SET_VAR(data__->,STEP23.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[45])) {
    __SET_VAR(data__->,STEP17.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[46])) {
    __SET_VAR(data__->,STEP18.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[47])) {
    __SET_VAR(data__->,STEP19.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[48])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[49])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[50])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[51])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[52])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP11.X,,1);
    data__->STEP11.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP12.X,,1);
    data__->STEP12.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP17.X,,1);
    data__->STEP17.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP13.X,,1);
    data__->STEP13.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP14.X,,1);
    data__->STEP14.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP16.X,,1);
    data__->STEP16.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP15.X,,1);
    data__->STEP15.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP23.X,,1);
    data__->STEP23.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP21.X,,1);
    data__->STEP21.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP31.X,,1);
    data__->STEP31.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP25.X,,1);
    data__->STEP25.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,STEP32.X,,1);
    data__->STEP32.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STEP33.X,,1);
    data__->STEP33.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,STEP34.X,,1);
    data__->STEP34.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STEP22.X,,1);
    data__->STEP22.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STEP26.X,,1);
    data__->STEP26.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STEP27.X,,1);
    data__->STEP27.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STEP28.X,,1);
    data__->STEP28.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STEP29.X,,1);
    data__->STEP29.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,STEP30.X,,1);
    data__->STEP30.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STEP35.X,,1);
    data__->STEP35.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STEP49.X,,1);
    data__->STEP49.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STEP50.X,,1);
    data__->STEP50.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,STEP48.X,,1);
    data__->STEP48.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,STEP51.X,,1);
    data__->STEP51.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[28])) {
    __SET_VAR(data__->,STEP52.X,,1);
    data__->STEP52.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[29])) {
    __SET_VAR(data__->,STEP53.X,,1);
    data__->STEP53.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[30])) {
    __SET_VAR(data__->,STEP37.X,,1);
    data__->STEP37.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[31])) {
    __SET_VAR(data__->,STEP38.X,,1);
    data__->STEP38.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP40.X,,1);
    data__->STEP40.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[32])) {
    __SET_VAR(data__->,STEP39.X,,1);
    data__->STEP39.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[33])) {
    __SET_VAR(data__->,STEP56.X,,1);
    data__->STEP56.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[34])) {
    __SET_VAR(data__->,STEP36.X,,1);
    data__->STEP36.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[35])) {
    __SET_VAR(data__->,STEP45.X,,1);
    data__->STEP45.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[36])) {
    __SET_VAR(data__->,STEP43.X,,1);
    data__->STEP43.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[37])) {
    __SET_VAR(data__->,STEP44.X,,1);
    data__->STEP44.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[38])) {
    __SET_VAR(data__->,STEP42.X,,1);
    data__->STEP42.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
    __SET_VAR(data__->,STEP54.X,,1);
    data__->STEP54.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[39])) {
    __SET_VAR(data__->,STEP46.X,,1);
    data__->STEP46.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[40])) {
    __SET_VAR(data__->,STEP47.X,,1);
    data__->STEP47.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[41])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[42])) {
    __SET_VAR(data__->,STEP55.X,,1);
    data__->STEP55.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[43])) {
    __SET_VAR(data__->,STEP41.X,,1);
    data__->STEP41.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[44])) {
    __SET_VAR(data__->,STEP24.X,,1);
    data__->STEP24.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[45])) {
    __SET_VAR(data__->,STEP18.X,,1);
    data__->STEP18.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[46])) {
    __SET_VAR(data__->,STEP19.X,,1);
    data__->STEP19.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[47])) {
    __SET_VAR(data__->,STEP20.X,,1);
    data__->STEP20.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[48])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[49])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[50])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[51])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[52])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active && __time_cmp(data__->STEP2.T.value, __time_to_timespec(1, 0, 13, 0, 0, 0)) < 0) 
                      {__SET_VAR(data__->,MYP,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,MYP,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,MYN,,1);};
    if (desactivated) {__SET_VAR(data__->,MYN,,0);};

  }

  // STEP9 action associations
  {
    char active = __GET_VAR(data__->STEP9.X);
    char activated = active && !data__->STEP9.prev_state;
    char desactivated = !active && data__->STEP9.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE4].state,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE6].state,,0);};

  }

  // STEP11 action associations
  {
    char active = __GET_VAR(data__->STEP11.X);
    char activated = active && !data__->STEP11.prev_state;
    char desactivated = !active && data__->STEP11.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP11_INLINE7].state,,0);};

  }

  // STEP12 action associations
  {
    char active = __GET_VAR(data__->STEP12.X);
    char activated = active && !data__->STEP12.prev_state;
    char desactivated = !active && data__->STEP12.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP12_INLINE8].state,,0);};

  }

  // STEP13 action associations
  {
    char active = __GET_VAR(data__->STEP13.X);
    char activated = active && !data__->STEP13.prev_state;
    char desactivated = !active && data__->STEP13.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP13_INLINE9].state,,0);};

  }

  // STEP14 action associations
  {
    char active = __GET_VAR(data__->STEP14.X);
    char activated = active && !data__->STEP14.prev_state;
    char desactivated = !active && data__->STEP14.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP14_INLINE10].state,,0);};

    if (active && __time_cmp(data__->STEP14.T.value, __time_to_timespec(1, 0, 5, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX3,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX3,,0);};

  }

  // STEP16 action associations
  {
    char active = __GET_VAR(data__->STEP16.X);
    char activated = active && !data__->STEP16.prev_state;
    char desactivated = !active && data__->STEP16.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP16_INLINE13].state,,0);};

  }

  // STEP15 action associations
  {
    char active = __GET_VAR(data__->STEP15.X);
    char activated = active && !data__->STEP15.prev_state;
    char desactivated = !active && data__->STEP15.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP15_INLINE12].state,,0);};

  }

  // STEP21 action associations
  {
    char active = __GET_VAR(data__->STEP21.X);
    char activated = active && !data__->STEP21.prev_state;
    char desactivated = !active && data__->STEP21.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP21_INLINE18].state,,0);};

  }

  // STEP31 action associations
  {
    char active = __GET_VAR(data__->STEP31.X);
    char activated = active && !data__->STEP31.prev_state;
    char desactivated = !active && data__->STEP31.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE27].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP31_INLINE27].state,,0);};

  }

  // STEP25 action associations
  {
    char active = __GET_VAR(data__->STEP25.X);
    char activated = active && !data__->STEP25.prev_state;
    char desactivated = !active && data__->STEP25.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE28].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP25_INLINE28].state,,0);};

    if (active && __time_cmp(data__->STEP25.T.value, __time_to_timespec(1, 0, 1, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX4,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX4,,0);};

  }

  // STEP32 action associations
  {
    char active = __GET_VAR(data__->STEP32.X);
    char activated = active && !data__->STEP32.prev_state;
    char desactivated = !active && data__->STEP32.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE30].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP32_INLINE30].state,,0);};

  }

  // STEP33 action associations
  {
    char active = __GET_VAR(data__->STEP33.X);
    char activated = active && !data__->STEP33.prev_state;
    char desactivated = !active && data__->STEP33.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE29].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP33_INLINE29].state,,0);};

  }

  // STEP22 action associations
  {
    char active = __GET_VAR(data__->STEP22.X);
    char activated = active && !data__->STEP22.prev_state;
    char desactivated = !active && data__->STEP22.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP22_INLINE21].state,,0);};

  }

  // STEP26 action associations
  {
    char active = __GET_VAR(data__->STEP26.X);
    char activated = active && !data__->STEP26.prev_state;
    char desactivated = !active && data__->STEP26.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP26_INLINE22].state,,0);};

  }

  // STEP27 action associations
  {
    char active = __GET_VAR(data__->STEP27.X);
    char activated = active && !data__->STEP27.prev_state;
    char desactivated = !active && data__->STEP27.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP27_INLINE23].state,,0);};

  }

  // STEP28 action associations
  {
    char active = __GET_VAR(data__->STEP28.X);
    char activated = active && !data__->STEP28.prev_state;
    char desactivated = !active && data__->STEP28.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP28_INLINE24].state,,0);};

    if (active && __time_cmp(data__->STEP28.T.value, __time_to_timespec(1, 0, 5, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX3,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX3,,0);};

  }

  // STEP29 action associations
  {
    char active = __GET_VAR(data__->STEP29.X);
    char activated = active && !data__->STEP29.prev_state;
    char desactivated = !active && data__->STEP29.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP29_INLINE25].state,,0);};

  }

  // STEP30 action associations
  {
    char active = __GET_VAR(data__->STEP30.X);
    char activated = active && !data__->STEP30.prev_state;
    char desactivated = !active && data__->STEP30.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP30_INLINE26].state,,0);};

  }

  // STEP35 action associations
  {
    char active = __GET_VAR(data__->STEP35.X);
    char activated = active && !data__->STEP35.prev_state;
    char desactivated = !active && data__->STEP35.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE31].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP35_INLINE31].state,,0);};

  }

  // STEP49 action associations
  {
    char active = __GET_VAR(data__->STEP49.X);
    char activated = active && !data__->STEP49.prev_state;
    char desactivated = !active && data__->STEP49.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP49_INLINE42].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP49_INLINE42].state,,0);};

    if (active && __time_cmp(data__->STEP49.T.value, __time_to_timespec(1, 0, 1, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX4,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX4,,0);};

  }

  // STEP50 action associations
  {
    char active = __GET_VAR(data__->STEP50.X);
    char activated = active && !data__->STEP50.prev_state;
    char desactivated = !active && data__->STEP50.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP50_INLINE43].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP50_INLINE43].state,,0);};

  }

  // STEP48 action associations
  {
    char active = __GET_VAR(data__->STEP48.X);
    char activated = active && !data__->STEP48.prev_state;
    char desactivated = !active && data__->STEP48.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP48_INLINE44].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP48_INLINE44].state,,0);};

  }

  // STEP51 action associations
  {
    char active = __GET_VAR(data__->STEP51.X);
    char activated = active && !data__->STEP51.prev_state;
    char desactivated = !active && data__->STEP51.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP51_INLINE45].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP51_INLINE45].state,,0);};

  }

  // STEP52 action associations
  {
    char active = __GET_VAR(data__->STEP52.X);
    char activated = active && !data__->STEP52.prev_state;
    char desactivated = !active && data__->STEP52.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP52_INLINE46].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP52_INLINE46].state,,0);};

    if (active && __time_cmp(data__->STEP52.T.value, __time_to_timespec(1, 0, 5, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX3,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX3,,0);};

  }

  // STEP53 action associations
  {
    char active = __GET_VAR(data__->STEP53.X);
    char activated = active && !data__->STEP53.prev_state;
    char desactivated = !active && data__->STEP53.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP53_INLINE47].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP53_INLINE47].state,,0);};

  }

  // STEP37 action associations
  {
    char active = __GET_VAR(data__->STEP37.X);
    char activated = active && !data__->STEP37.prev_state;
    char desactivated = !active && data__->STEP37.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE32].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP37_INLINE32].state,,0);};

  }

  // STEP38 action associations
  {
    char active = __GET_VAR(data__->STEP38.X);
    char activated = active && !data__->STEP38.prev_state;
    char desactivated = !active && data__->STEP38.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP38_INLINE33].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP38_INLINE33].state,,0);};

  }

  // STEP39 action associations
  {
    char active = __GET_VAR(data__->STEP39.X);
    char activated = active && !data__->STEP39.prev_state;
    char desactivated = !active && data__->STEP39.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE34].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP39_INLINE34].state,,0);};

  }

  // STEP56 action associations
  {
    char active = __GET_VAR(data__->STEP56.X);
    char activated = active && !data__->STEP56.prev_state;
    char desactivated = !active && data__->STEP56.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP56_INLINE51].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP56_INLINE51].state,,0);};

  }

  // STEP36 action associations
  {
    char active = __GET_VAR(data__->STEP36.X);
    char activated = active && !data__->STEP36.prev_state;
    char desactivated = !active && data__->STEP36.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE52].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP36_INLINE52].state,,0);};

  }

  // STEP45 action associations
  {
    char active = __GET_VAR(data__->STEP45.X);
    char activated = active && !data__->STEP45.prev_state;
    char desactivated = !active && data__->STEP45.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP45_INLINE40].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP45_INLINE40].state,,0);};

  }

  // STEP43 action associations
  {
    char active = __GET_VAR(data__->STEP43.X);
    char activated = active && !data__->STEP43.prev_state;
    char desactivated = !active && data__->STEP43.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP43_INLINE37].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP43_INLINE37].state,,0);};

    if (active && __time_cmp(data__->STEP43.T.value, __time_to_timespec(1, 0, 1, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,AUX4,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,AUX4,,0);};

  }

  // STEP44 action associations
  {
    char active = __GET_VAR(data__->STEP44.X);
    char activated = active && !data__->STEP44.prev_state;
    char desactivated = !active && data__->STEP44.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP44_INLINE38].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP44_INLINE38].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP44_INLINE39].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP44_INLINE39].state,,0);};

  }

  // STEP46 action associations
  {
    char active = __GET_VAR(data__->STEP46.X);
    char activated = active && !data__->STEP46.prev_state;
    char desactivated = !active && data__->STEP46.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP46_INLINE41].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP46_INLINE41].state,,0);};

  }

  // STEP54 action associations
  {
    char active = __GET_VAR(data__->STEP54.X);
    char activated = active && !data__->STEP54.prev_state;
    char desactivated = !active && data__->STEP54.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP54_INLINE48].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP54_INLINE48].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP54_INLINE49].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP54_INLINE49].state,,0);};

  }

  // STEP55 action associations
  {
    char active = __GET_VAR(data__->STEP55.X);
    char activated = active && !data__->STEP55.prev_state;
    char desactivated = !active && data__->STEP55.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP55_INLINE50].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP55_INLINE50].state,,0);};

  }

  // STEP40 action associations
  {
    char active = __GET_VAR(data__->STEP40.X);
    char activated = active && !data__->STEP40.prev_state;
    char desactivated = !active && data__->STEP40.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP40_INLINE35].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP40_INLINE35].state,,0);};

  }

  // STEP41 action associations
  {
    char active = __GET_VAR(data__->STEP41.X);
    char activated = active && !data__->STEP41.prev_state;
    char desactivated = !active && data__->STEP41.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE36].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP41_INLINE36].state,,0);};

  }

  // STEP23 action associations
  {
    char active = __GET_VAR(data__->STEP23.X);
    char activated = active && !data__->STEP23.prev_state;
    char desactivated = !active && data__->STEP23.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP23_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP23_INLINE19].state,,0);};

  }

  // STEP24 action associations
  {
    char active = __GET_VAR(data__->STEP24.X);
    char activated = active && !data__->STEP24.prev_state;
    char desactivated = !active && data__->STEP24.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP24_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP24_INLINE20].state,,0);};

  }

  // STEP18 action associations
  {
    char active = __GET_VAR(data__->STEP18.X);
    char activated = active && !data__->STEP18.prev_state;
    char desactivated = !active && data__->STEP18.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE14].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP18_INLINE15].state,,0);};

  }

  // STEP19 action associations
  {
    char active = __GET_VAR(data__->STEP19.X);
    char activated = active && !data__->STEP19.prev_state;
    char desactivated = !active && data__->STEP19.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP19_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP19_INLINE16].state,,0);};

  }

  // STEP20 action associations
  {
    char active = __GET_VAR(data__->STEP20.X);
    char activated = active && !data__->STEP20.prev_state;
    char desactivated = !active && data__->STEP20.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP20_INLINE17].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (activated) {
      data__->__action_list[__SFC_STEP4_INLINE1].set_remaining_time = __time_to_timespec(1, 0, 14, 0, 0, 0);
    }
    if (desactivated) {
      data__->__action_list[__SFC_STEP4_INLINE1].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
    }

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active && __time_cmp(data__->STEP6.T.value, __time_to_timespec(1, 0, 13, 0, 0, 0)) < 0) 
                      {__SET_VAR(data__->,MXP,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,MXP,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (active)       {__SET_VAR(data__->,MXN,,1);};
    if (desactivated) {__SET_VAR(data__->,MXN,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_MYP].reset) {
    __SET_VAR(data__->,MYP,,0);
  }
  else if (data__->__action_list[__SFC_MYP].set) {
    __SET_VAR(data__->,MYP,,1);
  }
  if (data__->__action_list[__SFC_MYN].reset) {
    __SET_VAR(data__->,MYN,,0);
  }
  else if (data__->__action_list[__SFC_MYN].set) {
    __SET_VAR(data__->,MYN,,1);
  }
  if (data__->__action_list[__SFC_AUX3].reset) {
    __SET_VAR(data__->,AUX3,,0);
  }
  else if (data__->__action_list[__SFC_AUX3].set) {
    __SET_VAR(data__->,AUX3,,1);
  }
  if (data__->__action_list[__SFC_AUX4].reset) {
    __SET_VAR(data__->,AUX4,,0);
  }
  else if (data__->__action_list[__SFC_AUX4].set) {
    __SET_VAR(data__->,AUX4,,1);
  }
  if (data__->__action_list[__SFC_MXP].reset) {
    __SET_VAR(data__->,MXP,,0);
  }
  else if (data__->__action_list[__SFC_MXP].set) {
    __SET_VAR(data__->,MXP,,1);
  }
  if (data__->__action_list[__SFC_MXN].reset) {
    __SET_VAR(data__->,MXN,,0);
  }
  else if (data__->__action_list[__SFC_MXN].set) {
    __SET_VAR(data__->,MXN,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE2].state)) {
    __SET_VAR(data__->,TAKE,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE3].state)) {
    __SET_VAR(data__->,ROBOTAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE4].state)) {
    __SET_VAR(data__->,A1,,0);
    __SET_VAR(data__->,A2,,0);
    __SET_VAR(data__->,A3,,0);
    __SET_VAR(data__->,A4,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE5].state)) {
    __SET_VAR(data__->,READY_O,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE6].state)) {
    __SET_VAR(data__->,A2,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,A4,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP11_INLINE7].state)) {
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP12_INLINE8].state)) {
    __SET_VAR(data__->,A4,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,A2,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,FREE_O,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP13_INLINE9].state)) {
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP14_INLINE10].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP16_INLINE13].state)) {
    __SET_VAR(data__->,AUX3,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP15_INLINE11].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP15_INLINE12].state)) {
    __SET_VAR(data__->,MXN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP21_INLINE18].state)) {
    __SET_VAR(data__->,MXN,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP31_INLINE27].state)) {
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP25_INLINE28].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP32_INLINE30].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,AUX4,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP33_INLINE29].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP22_INLINE21].state)) {
    __SET_VAR(data__->,MXP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP26_INLINE22].state)) {
    __SET_VAR(data__->,MXP,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,A2,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP27_INLINE23].state)) {
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP28_INLINE24].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP29_INLINE25].state)) {
    __SET_VAR(data__->,AUX3,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP30_INLINE26].state)) {
    __SET_VAR(data__->,AUX3,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MXN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP35_INLINE31].state)) {
    __SET_VAR(data__->,MXN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP49_INLINE42].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP50_INLINE43].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,AUX4,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP48_INLINE44].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP51_INLINE45].state)) {
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP52_INLINE46].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP53_INLINE47].state)) {
    __SET_VAR(data__->,AUX3,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP37_INLINE32].state)) {
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP38_INLINE33].state)) {
    __SET_VAR(data__->,MXP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP39_INLINE34].state)) {
    __SET_VAR(data__->,MXP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP56_INLINE51].state)) {
    __SET_VAR(data__->,PERMISAO,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP36_INLINE52].state)) {
    __SET_VAR(data__->,PERMISAO,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP45_INLINE40].state)) {
    __SET_VAR(data__->,ROBOTAKE,,1);
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP43_INLINE37].state)) {
    __SET_VAR(data__->,GRAB,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,ROBOTAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP44_INLINE38].state)) {
    __SET_VAR(data__->,AUX4,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP44_INLINE39].state)) {
    __SET_VAR(data__->,AUXR,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP46_INLINE41].state)) {
    __SET_VAR(data__->,ROBOTAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP54_INLINE48].state)) {
    __SET_VAR(data__->,MYP,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,MZP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP54_INLINE49].state)) {
    __SET_VAR(data__->,AUXR,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP55_INLINE50].state)) {
    __SET_VAR(data__->,MYP,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP40_INLINE35].state)) {
    __SET_VAR(data__->,MYN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP41_INLINE36].state)) {
    __SET_VAR(data__->,MYN,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP23_INLINE19].state)) {
    __SET_VAR(data__->,MYN,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP24_INLINE20].state)) {
    __SET_VAR(data__->,MYN,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE14].state)) {
    __SET_VAR(data__->,READY_O,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP18_INLINE15].state)) {
    __SET_VAR(data__->,A2,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP19_INLINE16].state)) {
    __SET_VAR(data__->,READY_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP20_INLINE17].state)) {
    __SET_VAR(data__->,A2,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,A4,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE1].state)) {
    __SET_VAR(data__->,AUX,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // ROBOT_body__() 

// Steps undefinitions
#undef STEP0
#undef __SFC_STEP0
#undef STEP2
#undef __SFC_STEP2
#undef STEP3
#undef __SFC_STEP3
#undef STEP5
#undef __SFC_STEP5
#undef STEP9
#undef __SFC_STEP9
#undef STEP10
#undef __SFC_STEP10
#undef STEP11
#undef __SFC_STEP11
#undef STEP12
#undef __SFC_STEP12
#undef STEP13
#undef __SFC_STEP13
#undef STEP14
#undef __SFC_STEP14
#undef STEP16
#undef __SFC_STEP16
#undef STEP15
#undef __SFC_STEP15
#undef STEP21
#undef __SFC_STEP21
#undef STEP31
#undef __SFC_STEP31
#undef STEP25
#undef __SFC_STEP25
#undef STEP32
#undef __SFC_STEP32
#undef STEP33
#undef __SFC_STEP33
#undef STEP34
#undef __SFC_STEP34
#undef STEP22
#undef __SFC_STEP22
#undef STEP26
#undef __SFC_STEP26
#undef STEP27
#undef __SFC_STEP27
#undef STEP28
#undef __SFC_STEP28
#undef STEP29
#undef __SFC_STEP29
#undef STEP30
#undef __SFC_STEP30
#undef STEP35
#undef __SFC_STEP35
#undef STEP49
#undef __SFC_STEP49
#undef STEP50
#undef __SFC_STEP50
#undef STEP48
#undef __SFC_STEP48
#undef STEP51
#undef __SFC_STEP51
#undef STEP52
#undef __SFC_STEP52
#undef STEP53
#undef __SFC_STEP53
#undef STEP37
#undef __SFC_STEP37
#undef STEP38
#undef __SFC_STEP38
#undef STEP39
#undef __SFC_STEP39
#undef STEP56
#undef __SFC_STEP56
#undef STEP36
#undef __SFC_STEP36
#undef STEP45
#undef __SFC_STEP45
#undef STEP43
#undef __SFC_STEP43
#undef STEP44
#undef __SFC_STEP44
#undef STEP42
#undef __SFC_STEP42
#undef STEP46
#undef __SFC_STEP46
#undef STEP47
#undef __SFC_STEP47
#undef STEP54
#undef __SFC_STEP54
#undef STEP55
#undef __SFC_STEP55
#undef STEP40
#undef __SFC_STEP40
#undef STEP41
#undef __SFC_STEP41
#undef STEP23
#undef __SFC_STEP23
#undef STEP24
#undef __SFC_STEP24
#undef STEP17
#undef __SFC_STEP17
#undef STEP18
#undef __SFC_STEP18
#undef STEP19
#undef __SFC_STEP19
#undef STEP20
#undef __SFC_STEP20
#undef STEP4
#undef __SFC_STEP4
#undef STEP8
#undef __SFC_STEP8
#undef STEP6
#undef __SFC_STEP6
#undef STEP7
#undef __SFC_STEP7
#undef STEP1
#undef __SFC_STEP1

// Actions undefinitions
#undef __SFC_STEP9_INLINE2
#undef __SFC_STEP9_INLINE3
#undef __SFC_STEP9_INLINE4
#undef __SFC_STEP10_INLINE5
#undef __SFC_STEP10_INLINE6
#undef __SFC_STEP11_INLINE7
#undef __SFC_STEP12_INLINE8
#undef __SFC_STEP13_INLINE9
#undef __SFC_STEP14_INLINE10
#undef __SFC_STEP16_INLINE13
#undef __SFC_STEP15_INLINE11
#undef __SFC_STEP15_INLINE12
#undef __SFC_STEP21_INLINE18
#undef __SFC_STEP31_INLINE27
#undef __SFC_STEP25_INLINE28
#undef __SFC_STEP32_INLINE30
#undef __SFC_STEP33_INLINE29
#undef __SFC_STEP22_INLINE21
#undef __SFC_STEP26_INLINE22
#undef __SFC_STEP27_INLINE23
#undef __SFC_STEP28_INLINE24
#undef __SFC_STEP29_INLINE25
#undef __SFC_STEP30_INLINE26
#undef __SFC_STEP35_INLINE31
#undef __SFC_STEP49_INLINE42
#undef __SFC_STEP50_INLINE43
#undef __SFC_STEP48_INLINE44
#undef __SFC_STEP51_INLINE45
#undef __SFC_STEP52_INLINE46
#undef __SFC_STEP53_INLINE47
#undef __SFC_STEP37_INLINE32
#undef __SFC_STEP38_INLINE33
#undef __SFC_STEP39_INLINE34
#undef __SFC_STEP56_INLINE51
#undef __SFC_STEP36_INLINE52
#undef __SFC_STEP45_INLINE40
#undef __SFC_STEP43_INLINE37
#undef __SFC_STEP44_INLINE38
#undef __SFC_STEP44_INLINE39
#undef __SFC_STEP46_INLINE41
#undef __SFC_STEP54_INLINE48
#undef __SFC_STEP54_INLINE49
#undef __SFC_STEP55_INLINE50
#undef __SFC_STEP40_INLINE35
#undef __SFC_STEP41_INLINE36
#undef __SFC_STEP23_INLINE19
#undef __SFC_STEP24_INLINE20
#undef __SFC_STEP18_INLINE14
#undef __SFC_STEP18_INLINE15
#undef __SFC_STEP19_INLINE16
#undef __SFC_STEP20_INLINE17
#undef __SFC_STEP4_INLINE1
#undef __SFC_MYP
#undef __SFC_MYN
#undef __SFC_AUX3
#undef __SFC_AUX4
#undef __SFC_MXP
#undef __SFC_MXN





void CELULA_ROBOT_init__(CELULA_ROBOT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_I2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DEST,0,retain)
  __INIT_VAR(data__->CTAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECIVB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CTAKEB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_OB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRINB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_IB,__BOOL_LITERAL(FALSE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR1,retain);
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO2,retain);
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO3,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR3,retain);
  __INIT_VAR(data__->MXP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MXN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MYP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MYN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MZP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MZN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SX0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SX1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SY4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ZBOT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ZTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIECE,__BOOL_LITERAL(FALSE),retain)
  ROBOT_init__(&data__->ROBOT0,retain);
  __INIT_VAR(data__->S1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->S2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->S3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUXR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TOMES,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FROMMES,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void CELULA_ROBOT_body__(CELULA_ROBOT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->TAPETE_LINEAR1.,P,,__GET_VAR(data__->SP1,));
  __SET_VAR(data__->TAPETE_LINEAR1.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO2.FREE_O,));
  __SET_VAR(data__->TAPETE_LINEAR1.,RECEIV,,__GET_VAR(data__->CRECEIV,));
  __SET_VAR(data__->TAPETE_LINEAR1.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO2.ROUT,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR1);
  __SET_VAR(data__->ROBOT0.,SX0,,__GET_VAR(data__->SX0,));
  __SET_VAR(data__->ROBOT0.,SX1,,__GET_VAR(data__->SX1,));
  __SET_VAR(data__->ROBOT0.,SY0,,__GET_VAR(data__->SY0,));
  __SET_VAR(data__->ROBOT0.,SY1,,__GET_VAR(data__->SY1,));
  __SET_VAR(data__->ROBOT0.,SY2,,__GET_VAR(data__->SY2,));
  __SET_VAR(data__->ROBOT0.,SY3,,__GET_VAR(data__->SY3,));
  __SET_VAR(data__->ROBOT0.,SY4,,__GET_VAR(data__->SY4,));
  __SET_VAR(data__->ROBOT0.,SZTOP,,__GET_VAR(data__->ZTOP,));
  __SET_VAR(data__->ROBOT0.,SZBOT,,__GET_VAR(data__->ZBOT,));
  __SET_VAR(data__->ROBOT0.,PIECE,,__GET_VAR(data__->PIECE,));
  __SET_VAR(data__->ROBOT0.,S1,,__GET_VAR(data__->S1,));
  __SET_VAR(data__->ROBOT0.,S2,,__GET_VAR(data__->S2,));
  __SET_VAR(data__->ROBOT0.,S3,,__GET_VAR(data__->S3,));
  __SET_VAR(data__->ROBOT0.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO2.TAKE,));
  __SET_VAR(data__->ROBOT0.,MESPERMITION,,__GET_VAR(data__->FROMMES,));
  __SET_VAR(data__->ROBOT0.,FREE_ROB,,__GET_VAR(data__->TAPETE_ROTATIVO2.FREROBO,));
  __SET_VAR(data__->ROBOT0.,RECEIV_ROB,,__GET_VAR(data__->TAPETE_ROTATIVO2.ROUTROBO,));
  ROBOT_body__(&data__->ROBOT0);
  __SET_VAR(data__->TAPETE_ROTATIVO2.,P,,__GET_VAR(data__->SP2,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,RECIVE_VET,,__GET_VAR(data__->TAPETE_LINEAR1.TAKE,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,FREE_I1,,__GET_VAR(data__->ROBOT0.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,FREE_I2,,__GET_VAR(data__->CFREE_I2,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,HORIZ,,__GET_VAR(data__->SH2,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,VERT,,__GET_VAR(data__->SV2,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,RIN,,__GET_VAR(data__->ROBOT0.READY_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,DESTINO,,__GET_VAR(data__->DEST,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,RIN2,,__GET_VAR(data__->CRIN,));
  __SET_VAR(data__->TAPETE_ROTATIVO2.,ROBORECEIV,,__GET_VAR(data__->ROBOT0.ROBOTAKE,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO2);
  __SET_VAR(data__->,AH2,,__GET_VAR(data__->TAPETE_ROTATIVO2.TURN_H,));
  __SET_VAR(data__->TAPETE_LINEAR3.,P,,__GET_VAR(data__->SP7,));
  __SET_VAR(data__->TAPETE_LINEAR3.,FREE_I,,__GET_VAR(data__->CFREE_IB,));
  __SET_VAR(data__->TAPETE_LINEAR3.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO3.TAKE,));
  __SET_VAR(data__->TAPETE_LINEAR3.,RIN,,__GET_VAR(data__->CRINB,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR3);
  __SET_VAR(data__->TAPETE_ROTATIVO3.,P,,__GET_VAR(data__->SP6,));
  __SET_VAR(data__->TAPETE_ROTATIVO3.,FREE_I1,,__GET_VAR(data__->TAPETE_LINEAR3.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO3.,HORIZ,,__GET_VAR(data__->SH6,));
  __SET_VAR(data__->TAPETE_ROTATIVO3.,VERT,,__GET_VAR(data__->SV6,));
  __SET_VAR(data__->TAPETE_ROTATIVO3.,RIN,,__GET_VAR(data__->TAPETE_LINEAR3.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO3.,RECIVE_HOR2,,__GET_VAR(data__->CRECIVB,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO3);
  __SET_VAR(data__->,AV6,,__GET_VAR(data__->TAPETE_ROTATIVO3.TURN_H,));
  __SET_VAR(data__->,CTAKEB,,__GET_VAR(data__->TAPETE_LINEAR3.TAKE,));
  __SET_VAR(data__->,MXP,,__GET_VAR(data__->ROBOT0.MXP,));
  __SET_VAR(data__->,AH6,,__GET_VAR(data__->TAPETE_ROTATIVO3.TURN_V,));
  __SET_VAR(data__->,AV2,,__GET_VAR(data__->TAPETE_ROTATIVO2.TURN_V,));
  __SET_VAR(data__->,AV7,,__GET_VAR(data__->TAPETE_LINEAR3.MOVE_P,));
  __SET_VAR(data__->,AP1,,__GET_VAR(data__->TAPETE_LINEAR1.MOVE_P,));
  __SET_VAR(data__->,MXN,,__GET_VAR(data__->ROBOT0.MXN,));
  __SET_VAR(data__->,AP6,,__GET_VAR(data__->TAPETE_ROTATIVO3.MOVE_P,));
  __SET_VAR(data__->,MYP,,__GET_VAR(data__->ROBOT0.MYP,));
  __SET_VAR(data__->,AP2,,__GET_VAR(data__->TAPETE_ROTATIVO2.MOVE_P,));
  __SET_VAR(data__->,CFREE_O,,__GET_VAR(data__->TAPETE_LINEAR1.FREE_O,));
  __SET_VAR(data__->,AN6,,__GET_VAR(data__->TAPETE_ROTATIVO3.MOVE_N,));
  __SET_VAR(data__->,MYN,,__GET_VAR(data__->ROBOT0.MYN,));
  __SET_VAR(data__->,CROUT,,__GET_VAR(data__->TAPETE_LINEAR1.ROUT,));
  __SET_VAR(data__->,CFREE_OB,,__GET_VAR(data__->TAPETE_ROTATIVO3.FREE_O2,));
  __SET_VAR(data__->,MZP,,__GET_VAR(data__->ROBOT0.MZP,));
  __SET_VAR(data__->,CTAKE,,__GET_VAR(data__->TAPETE_ROTATIVO2.CTAKE,));
  __SET_VAR(data__->,CROUB,,__GET_VAR(data__->TAPETE_ROTATIVO3.ROUT2,));
  __SET_VAR(data__->,MZN,,__GET_VAR(data__->ROBOT0.MZN,));
  __SET_VAR(data__->,GRAB,,__GET_VAR(data__->ROBOT0.GRAB,));
  __SET_VAR(data__->,A1,,__GET_VAR(data__->ROBOT0.A1,));
  __SET_VAR(data__->,A2,,__GET_VAR(data__->ROBOT0.A2,));
  __SET_VAR(data__->,A3,,__GET_VAR(data__->ROBOT0.A3,));
  __SET_VAR(data__->,A4,,__GET_VAR(data__->ROBOT0.A4,));
  __SET_VAR(data__->,TOMES,,__GET_VAR(data__->ROBOT0.PERMISAO,));
  __SET_VAR(data__->,AUXR,,__GET_VAR(data__->ROBOT0.AUXR,));

  goto __end;

__end:
  return;
} // CELULA_ROBOT_body__() 





void PUSHER_init__(PUSHER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->REST,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->P_OUT,0,retain)
  __INIT_VAR(data__->PUSH,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETREAT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->P_ROLLER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLEROCUP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 12;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  __SET_VAR(data__->,__step_list[9].X,,1);
  data__->__nb_actions = 12;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 14;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define IDDLE __step_list[0]
#define __SFC_IDDLE 0
#define STEP1 __step_list[1]
#define __SFC_STEP1 1
#define STEP2 __step_list[2]
#define __SFC_STEP2 2
#define STEP3 __step_list[3]
#define __SFC_STEP3 3
#define STEP5 __step_list[4]
#define __SFC_STEP5 4
#define STEP7 __step_list[5]
#define __SFC_STEP7 5
#define STEP4 __step_list[6]
#define __SFC_STEP4 6
#define STEP6 __step_list[7]
#define __SFC_STEP6 7
#define STEP0 __step_list[8]
#define __SFC_STEP0 8
#define STEP8 __step_list[9]
#define __SFC_STEP8 9
#define STEP9 __step_list[10]
#define __SFC_STEP9 10
#define STEP10 __step_list[11]
#define __SFC_STEP10 11

// Actions definitions
#define __SFC_IDDLE_INLINE1 0
#define __SFC_STEP1_INLINE2 1
#define __SFC_STEP2_INLINE3 2
#define __SFC_STEP3_INLINE4 3
#define __SFC_STEP5_INLINE5 4
#define __SFC_STEP4_INLINE6 5
#define __SFC_STEP6_INLINE7 6
#define __SFC_STEP8_INLINE8 7
#define __SFC_STEP9_INLINE9 8
#define __SFC_STEP10_INLINE10 9
#define __SFC_YN 10
#define __SFC_RETREAT 11

// Code part
void PUSHER_body__(PUSHER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->IDDLE.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[2],,((__GET_VAR(data__->P_OUT,) == 0) && !(__GET_VAR(data__->P_ROLLER,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,((__GET_VAR(data__->P_OUT,) == 0) && !(__GET_VAR(data__->P_ROLLER,))));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->PUSHED,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->PUSHED,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->REST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->REST,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[5],,(__GET_VAR(data__->P_OUT,) == 2));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,(__GET_VAR(data__->P_OUT,) == 2));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[6],,((__GET_VAR(data__->P_OUT,) == 1) && __GET_VAR(data__->FREE_I,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,((__GET_VAR(data__->P_OUT,) == 1) && __GET_VAR(data__->FREE_I,)));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[8],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[9],,(__GET_VAR(data__->P_OUT,) == 2));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,(__GET_VAR(data__->P_OUT,) == 2));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STEP8.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->P_ROLLER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->P_ROLLER,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[11],,!(__GET_VAR(data__->P_ROLLER,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,!(__GET_VAR(data__->P_ROLLER,)));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->STEP9.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_VAR(data__->AUX,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->AUX,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->STEP10.X)) {
    __SET_VAR(data__->,__transition_list[13],,!(__GET_VAR(data__->P_ROLLER,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,!(__GET_VAR(data__->P_ROLLER,)));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,IDDLE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP9.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP10.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,IDDLE.X,,1);
    data__->IDDLE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,IDDLE.X,,1);
    data__->IDDLE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STEP9.X,,1);
    data__->STEP9.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STEP10.X,,1);
    data__->STEP10.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,STEP8.X,,1);
    data__->STEP8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // IDDLE action associations
  {
    char active = __GET_VAR(data__->IDDLE.X);
    char activated = active && !data__->IDDLE.prev_state;
    char desactivated = !active && data__->IDDLE.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_IDDLE_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_IDDLE_INLINE1].state,,0);};

  }

  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,YN,,1);};
    if (desactivated) {__SET_VAR(data__->,YN,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE3].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE4].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,RETREAT,,1);};
    if (desactivated) {__SET_VAR(data__->,RETREAT,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE6].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE7].state,,0);};

  }

  // STEP8 action associations
  {
    char active = __GET_VAR(data__->STEP8.X);
    char activated = active && !data__->STEP8.prev_state;
    char desactivated = !active && data__->STEP8.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP8_INLINE8].state,,0);};

  }

  // STEP9 action associations
  {
    char active = __GET_VAR(data__->STEP9.X);
    char activated = active && !data__->STEP9.prev_state;
    char desactivated = !active && data__->STEP9.prev_state;

    if (active && __time_cmp(data__->STEP9.T.value, __time_to_timespec(1, 0, 3, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE9].state,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,__action_list[__SFC_STEP9_INLINE9].state,,0);};

  }

  // STEP10 action associations
  {
    char active = __GET_VAR(data__->STEP10.X);
    char activated = active && !data__->STEP10.prev_state;
    char desactivated = !active && data__->STEP10.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP10_INLINE10].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_YN].reset) {
    __SET_VAR(data__->,YN,,0);
  }
  else if (data__->__action_list[__SFC_YN].set) {
    __SET_VAR(data__->,YN,,1);
  }
  if (data__->__action_list[__SFC_RETREAT].reset) {
    __SET_VAR(data__->,RETREAT,,0);
  }
  else if (data__->__action_list[__SFC_RETREAT].set) {
    __SET_VAR(data__->,RETREAT,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_IDDLE_INLINE1].state)) {
    __SET_VAR(data__->,PUSH,,0);
    __SET_VAR(data__->,RETREAT,,0);
    __SET_VAR(data__->,YN,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE2].state)) {
    __SET_VAR(data__->,FREE_O,,0);
    __SET_VAR(data__->,ROUT,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE3].state)) {
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE4].state)) {
    __SET_VAR(data__->,PUSH,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE5].state)) {
    __SET_VAR(data__->,PUSH,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE6].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE7].state)) {
    __SET_VAR(data__->,YN,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP8_INLINE8].state)) {
    __SET_VAR(data__->,ROLEROCUP,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP9_INLINE9].state)) {
    __SET_VAR(data__->,AUX,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP10_INLINE10].state)) {
    __SET_VAR(data__->,ROLEROCUP,,1);
  }



  goto __end;

__end:
  return;
} // PUSHER_body__() 

// Steps undefinitions
#undef IDDLE
#undef __SFC_IDDLE
#undef STEP1
#undef __SFC_STEP1
#undef STEP2
#undef __SFC_STEP2
#undef STEP3
#undef __SFC_STEP3
#undef STEP5
#undef __SFC_STEP5
#undef STEP7
#undef __SFC_STEP7
#undef STEP4
#undef __SFC_STEP4
#undef STEP6
#undef __SFC_STEP6
#undef STEP0
#undef __SFC_STEP0
#undef STEP8
#undef __SFC_STEP8
#undef STEP9
#undef __SFC_STEP9
#undef STEP10
#undef __SFC_STEP10

// Actions undefinitions
#undef __SFC_IDDLE_INLINE1
#undef __SFC_STEP1_INLINE2
#undef __SFC_STEP2_INLINE3
#undef __SFC_STEP3_INLINE4
#undef __SFC_STEP5_INLINE5
#undef __SFC_STEP4_INLINE6
#undef __SFC_STEP6_INLINE7
#undef __SFC_STEP8_INLINE8
#undef __SFC_STEP9_INLINE9
#undef __SFC_STEP10_INLINE10
#undef __SFC_YN
#undef __SFC_RETREAT





void CT3_init__(CT3 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_N,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AUX,0,retain)
  __INIT_VAR(data__->CARGADESCP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FLAG,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 8;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  __SET_VAR(data__->,__step_list[6].X,,1);
  data__->__nb_actions = 12;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 10;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP1 __step_list[0]
#define __SFC_STEP1 0
#define STEP7 __step_list[1]
#define __SFC_STEP7 1
#define STEP3 __step_list[2]
#define __SFC_STEP3 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3
#define STEP4 __step_list[4]
#define __SFC_STEP4 4
#define STEP0 __step_list[5]
#define __SFC_STEP0 5
#define STEP5 __step_list[6]
#define __SFC_STEP5 6
#define STEP6 __step_list[7]
#define __SFC_STEP6 7

// Actions definitions
#define __SFC_STEP1_INLINE1 0
#define __SFC_STEP1_INLINE2 1
#define __SFC_STEP1_INLINE3 2
#define __SFC_STEP7_INLINE12 3
#define __SFC_STEP3_INLINE6 4
#define __SFC_STEP3_INLINE7 5
#define __SFC_STEP2_INLINE9 6
#define __SFC_STEP4_INLINE8 7
#define __SFC_STEP0_INLINE4 8
#define __SFC_STEP0_INLINE5 9
#define __SFC_STEP5_INLINE10 10
#define __SFC_STEP6_INLINE11 11

// Code part
void CT3_body__(CT3 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->CARGADESCP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->CARGADESCP,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[2],,!(__GET_VAR(data__->P,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,!(__GET_VAR(data__->P,)));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[3],,(__GET_VAR(data__->FREE_I,) && (__GET_VAR(data__->AUX,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,(__GET_VAR(data__->FREE_I,) && (__GET_VAR(data__->AUX,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[5],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->FLAG,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->FLAG,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->CARGADESCP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->CARGADESCP,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE3].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE12].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE7].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE9].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE8].state,,0);};

  }

  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE5].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE10].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE11].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE1].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,TAKE,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE2].state)) {
    __SET_VAR(data__->,FLAG,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE3].state)) {
    __SET_VAR(data__->,AUX,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE12].state)) {
    __SET_VAR(data__->,FLAG,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE6].state)) {
    __SET_VAR(data__->,MOVE_N,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE7].state)) {
    __SET_VAR(data__->,FLAG,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE9].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE8].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE4].state)) {
    __SET_VAR(data__->,MOVE_N,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE5].state)) {
    __SET_VAR(data__->,AUX,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE10].state)) {
    __SET_VAR(data__->,SCP1,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE11].state)) {
    __SET_VAR(data__->,SCP1,,0);
  }



  goto __end;

__end:
  return;
} // CT3_body__() 

// Steps undefinitions
#undef STEP1
#undef __SFC_STEP1
#undef STEP7
#undef __SFC_STEP7
#undef STEP3
#undef __SFC_STEP3
#undef STEP2
#undef __SFC_STEP2
#undef STEP4
#undef __SFC_STEP4
#undef STEP0
#undef __SFC_STEP0
#undef STEP5
#undef __SFC_STEP5
#undef STEP6
#undef __SFC_STEP6

// Actions undefinitions
#undef __SFC_STEP1_INLINE1
#undef __SFC_STEP1_INLINE2
#undef __SFC_STEP1_INLINE3
#undef __SFC_STEP7_INLINE12
#undef __SFC_STEP3_INLINE6
#undef __SFC_STEP3_INLINE7
#undef __SFC_STEP2_INLINE9
#undef __SFC_STEP4_INLINE8
#undef __SFC_STEP0_INLINE4
#undef __SFC_STEP0_INLINE5
#undef __SFC_STEP5_INLINE10
#undef __SFC_STEP6_INLINE11





void CT9_init__(CT9 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TAKE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVE_P,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_I,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CARGADESCP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FLAG,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 8;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  __SET_VAR(data__->,__step_list[6].X,,1);
  data__->__nb_actions = 10;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 10;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP1 __step_list[0]
#define __SFC_STEP1 0
#define STEP7 __step_list[1]
#define __SFC_STEP7 1
#define STEP3 __step_list[2]
#define __SFC_STEP3 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3
#define STEP4 __step_list[4]
#define __SFC_STEP4 4
#define STEP0 __step_list[5]
#define __SFC_STEP0 5
#define STEP6 __step_list[6]
#define __SFC_STEP6 6
#define STEP5 __step_list[7]
#define __SFC_STEP5 7

// Actions definitions
#define __SFC_STEP1_INLINE1 0
#define __SFC_STEP1_INLINE2 1
#define __SFC_STEP7_INLINE10 2
#define __SFC_STEP3_INLINE4 3
#define __SFC_STEP3_INLINE5 4
#define __SFC_STEP2_INLINE7 5
#define __SFC_STEP4_INLINE6 6
#define __SFC_STEP0_INLINE3 7
#define __SFC_STEP6_INLINE8 8
#define __SFC_STEP5_INLINE9 9

// Code part
void CT9_body__(CT9 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP7.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->CARGADESCP2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->CARGADESCP2,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[2],,!(__GET_VAR(data__->P,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,!(__GET_VAR(data__->P,)));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP3.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->FREE_I,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->FREE_I,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->RIN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->RIN,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STEP4.X)) {
    __SET_VAR(data__->,__transition_list[5],,!(__GET_VAR(data__->RIN,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,!(__GET_VAR(data__->RIN,)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->RECEIV,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->RECEIV,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->P,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->P,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STEP6.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->FLAG,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->FLAG,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STEP5.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->CARGADESCP2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->CARGADESCP2,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP5.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP7.X,,1);
    data__->STEP7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STEP4.X,,1);
    data__->STEP4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STEP3.X,,1);
    data__->STEP3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STEP5.X,,1);
    data__->STEP5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STEP6.X,,1);
    data__->STEP6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP1_INLINE2].state,,0);};

  }

  // STEP7 action associations
  {
    char active = __GET_VAR(data__->STEP7.X);
    char activated = active && !data__->STEP7.prev_state;
    char desactivated = !active && data__->STEP7.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STEP7_INLINE10].state,,0);};

  }

  // STEP3 action associations
  {
    char active = __GET_VAR(data__->STEP3.X);
    char activated = active && !data__->STEP3.prev_state;
    char desactivated = !active && data__->STEP3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP3_INLINE5].state,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP2_INLINE7].state,,0);};

  }

  // STEP4 action associations
  {
    char active = __GET_VAR(data__->STEP4.X);
    char activated = active && !data__->STEP4.prev_state;
    char desactivated = !active && data__->STEP4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP4_INLINE6].state,,0);};

  }

  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP0_INLINE3].state,,0);};

  }

  // STEP6 action associations
  {
    char active = __GET_VAR(data__->STEP6.X);
    char activated = active && !data__->STEP6.prev_state;
    char desactivated = !active && data__->STEP6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP6_INLINE8].state,,0);};

  }

  // STEP5 action associations
  {
    char active = __GET_VAR(data__->STEP5.X);
    char activated = active && !data__->STEP5.prev_state;
    char desactivated = !active && data__->STEP5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STEP5_INLINE9].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE1].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,TAKE,,0);
    __SET_VAR(data__->,FREE_O,,1);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP1_INLINE2].state)) {
    __SET_VAR(data__->,FLAG,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP7_INLINE10].state)) {
    __SET_VAR(data__->,FLAG,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE4].state)) {
    __SET_VAR(data__->,MOVE_P,,0);
    __SET_VAR(data__->,ROUT,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP3_INLINE5].state)) {
    __SET_VAR(data__->,FLAG,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP2_INLINE7].state)) {
    __SET_VAR(data__->,TAKE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP4_INLINE6].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,TAKE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP0_INLINE3].state)) {
    __SET_VAR(data__->,MOVE_P,,1);
    __SET_VAR(data__->,ROUT,,1);
    __SET_VAR(data__->,FREE_O,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP6_INLINE8].state)) {
    __SET_VAR(data__->,SCP2,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STEP5_INLINE9].state)) {
    __SET_VAR(data__->,SCP2,,0);
  }



  goto __end;

__end:
  return;
} // CT9_body__() 

// Steps undefinitions
#undef STEP1
#undef __SFC_STEP1
#undef STEP7
#undef __SFC_STEP7
#undef STEP3
#undef __SFC_STEP3
#undef STEP2
#undef __SFC_STEP2
#undef STEP4
#undef __SFC_STEP4
#undef STEP0
#undef __SFC_STEP0
#undef STEP6
#undef __SFC_STEP6
#undef STEP5
#undef __SFC_STEP5

// Actions undefinitions
#undef __SFC_STEP1_INLINE1
#undef __SFC_STEP1_INLINE2
#undef __SFC_STEP7_INLINE10
#undef __SFC_STEP3_INLINE4
#undef __SFC_STEP3_INLINE5
#undef __SFC_STEP2_INLINE7
#undef __SFC_STEP4_INLINE6
#undef __SFC_STEP0_INLINE3
#undef __SFC_STEP6_INLINE8
#undef __SFC_STEP5_INLINE9





void CARGA_DESCARGA_init__(CARGA_DESCARGA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR0,retain);
  __INIT_VAR(data__->SP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN2,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO0,retain);
  __INIT_VAR(data__->AN6,__BOOL_LITERAL(FALSE),retain)
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO1,retain);
  __INIT_VAR(data__->SP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AH6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP6,__BOOL_LITERAL(FALSE),retain)
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR2,retain);
  __INIT_VAR(data__->SP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AV7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRECEIV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_O,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CROUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DEST,0,retain)
  __INIT_VAR(data__->CTAKEB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRINB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CFREE_IB,__BOOL_LITERAL(FALSE),retain)
  PUSHER_init__(&data__->PUSHER0,retain);
  PUSHER_init__(&data__->PUSHER1,retain);
  PUSHER_init__(&data__->PUSHER2,retain);
  __INIT_VAR(data__->SP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SREST3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUSH3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->P_OUT1,0,retain)
  __INIT_VAR(data__->SPR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->APUSH3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARET3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SREST5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUSH5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->P_OUT2,0,retain)
  __INIT_VAR(data__->SPR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->APUSH5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARET5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SREST8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUSH8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->P_OUT3,0,retain)
  __INIT_VAR(data__->SPR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->APUSH8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARET8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SP9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AN9,__BOOL_LITERAL(FALSE),retain)
  CT3_init__(&data__->PM10,retain);
  __INIT_VAR(data__->CARGADESCP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CARGADESCP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLEROCUP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLEROCUP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLEROCUP3,__BOOL_LITERAL(FALSE),retain)
  CT9_init__(&data__->CT90,retain);
}

// Code part
void CARGA_DESCARGA_body__(CARGA_DESCARGA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->TAPETE_LINEAR0.,P,,__GET_VAR(data__->SP1,));
  __SET_VAR(data__->TAPETE_LINEAR0.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO0.FREE_O,));
  __SET_VAR(data__->TAPETE_LINEAR0.,RECEIV,,__GET_VAR(data__->CRECEIV,));
  __SET_VAR(data__->TAPETE_LINEAR0.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO0.ROUT,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR0);
  __SET_VAR(data__->TAPETE_LINEAR2.,P,,__GET_VAR(data__->SP7,));
  __SET_VAR(data__->TAPETE_LINEAR2.,FREE_I,,__GET_VAR(data__->CFREE_IB,));
  __SET_VAR(data__->TAPETE_LINEAR2.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO1.TAKE,));
  __SET_VAR(data__->TAPETE_LINEAR2.,RIN,,__GET_VAR(data__->CRINB,));
  TAPETE_LINEAR_body__(&data__->TAPETE_LINEAR2);
  __SET_VAR(data__->CT90.,P,,__GET_VAR(data__->SP9,));
  __SET_VAR(data__->CT90.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO1.FREE_O2,));
  __SET_VAR(data__->CT90.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO1.ROUT2,));
  __SET_VAR(data__->CT90.,CARGADESCP2,,__GET_VAR(data__->CARGADESCP2,));
  CT9_body__(&data__->CT90);
  __SET_VAR(data__->TAPETE_ROTATIVO1.,P,,__GET_VAR(data__->SP6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RECIVE_HOR,,__GET_VAR(data__->PUSHER2.TAKE,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,FREE_I1,,__GET_VAR(data__->TAPETE_LINEAR2.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,HORIZ,,__GET_VAR(data__->SH6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,VERT,,__GET_VAR(data__->SV6,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RIN,,__GET_VAR(data__->TAPETE_LINEAR2.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO1.,RECIVE_HOR2,,__GET_VAR(data__->CT90.TAKE,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO1);
  __SET_VAR(data__->PUSHER2.,P,,__GET_VAR(data__->SP8,));
  __SET_VAR(data__->PUSHER2.,REST,,__GET_VAR(data__->SREST8,));
  __SET_VAR(data__->PUSHER2.,PUSHED,,__GET_VAR(data__->SPUSH8,));
  __SET_VAR(data__->PUSHER2.,RECEIV,,__GET_VAR(data__->PUSHER1.TAKE,));
  __SET_VAR(data__->PUSHER2.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO1.FREE_O,));
  __SET_VAR(data__->PUSHER2.,P_OUT,,__GET_VAR(data__->P_OUT3,));
  __SET_VAR(data__->PUSHER2.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO1.ROUT,));
  __SET_VAR(data__->PUSHER2.,P_ROLLER,,__GET_VAR(data__->SPR8,));
  PUSHER_body__(&data__->PUSHER2);
  __SET_VAR(data__->PUSHER1.,P,,__GET_VAR(data__->SP5,));
  __SET_VAR(data__->PUSHER1.,REST,,__GET_VAR(data__->SREST5,));
  __SET_VAR(data__->PUSHER1.,PUSHED,,__GET_VAR(data__->SPUSH5,));
  __SET_VAR(data__->PUSHER1.,RECEIV,,__GET_VAR(data__->PUSHER0.TAKE,));
  __SET_VAR(data__->PUSHER1.,FREE_I,,__GET_VAR(data__->PUSHER2.FREE_O,));
  __SET_VAR(data__->PUSHER1.,P_OUT,,__GET_VAR(data__->P_OUT2,));
  __SET_VAR(data__->PUSHER1.,RIN,,__GET_VAR(data__->PUSHER2.ROUT,));
  __SET_VAR(data__->PUSHER1.,P_ROLLER,,__GET_VAR(data__->SPR5,));
  PUSHER_body__(&data__->PUSHER1);
  __SET_VAR(data__->PUSHER0.,P,,__GET_VAR(data__->SP3,));
  __SET_VAR(data__->PUSHER0.,REST,,__GET_VAR(data__->SREST3,));
  __SET_VAR(data__->PUSHER0.,PUSHED,,__GET_VAR(data__->SPUSH3,));
  __SET_VAR(data__->PUSHER0.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO0.TAKE,));
  __SET_VAR(data__->PUSHER0.,FREE_I,,__GET_VAR(data__->PUSHER1.FREE_O,));
  __SET_VAR(data__->PUSHER0.,P_OUT,,__GET_VAR(data__->P_OUT1,));
  __SET_VAR(data__->PUSHER0.,RIN,,__GET_VAR(data__->PUSHER1.ROUT,));
  __SET_VAR(data__->PUSHER0.,P_ROLLER,,__GET_VAR(data__->SPR3,));
  PUSHER_body__(&data__->PUSHER0);
  __SET_VAR(data__->PM10.,P,,__GET_VAR(data__->SP4,));
  __SET_VAR(data__->PM10.,FREE_I,,__GET_VAR(data__->TAPETE_ROTATIVO0.FREE_O2,));
  __SET_VAR(data__->PM10.,RECEIV,,__GET_VAR(data__->TAPETE_ROTATIVO0.CTAKE,));
  __SET_VAR(data__->PM10.,RIN,,__GET_VAR(data__->TAPETE_ROTATIVO0.ROUT2,));
  __SET_VAR(data__->PM10.,CARGADESCP,,__GET_VAR(data__->CARGADESCP,));
  CT3_body__(&data__->PM10);
  __SET_VAR(data__->TAPETE_ROTATIVO0.,P,,__GET_VAR(data__->SP2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RECIVE_VET,,__GET_VAR(data__->TAPETE_LINEAR0.TAKE,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,FREE_I1,,__GET_VAR(data__->PUSHER0.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,FREE_I2,,__GET_VAR(data__->PM10.FREE_O,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,HORIZ,,__GET_VAR(data__->SH2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,VERT,,__GET_VAR(data__->SV2,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RIN,,__GET_VAR(data__->PUSHER0.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,DESTINO,,__GET_VAR(data__->DEST,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RIN2,,__GET_VAR(data__->PM10.ROUT,));
  __SET_VAR(data__->TAPETE_ROTATIVO0.,RECIVE_VET2,,__GET_VAR(data__->PM10.TAKE,));
  TAPETE_ROTATIVO_body__(&data__->TAPETE_ROTATIVO0);
  __SET_VAR(data__->,AH2,,__GET_VAR(data__->TAPETE_ROTATIVO0.TURN_H,));
  __SET_VAR(data__->,AV2,,__GET_VAR(data__->TAPETE_ROTATIVO0.TURN_V,));
  __SET_VAR(data__->,AP1,,__GET_VAR(data__->TAPETE_LINEAR0.MOVE_P,));
  __SET_VAR(data__->,CFREE_O,,__GET_VAR(data__->TAPETE_LINEAR0.FREE_O,));
  __SET_VAR(data__->,AP2,,__GET_VAR(data__->TAPETE_ROTATIVO0.MOVE_P,));
  __SET_VAR(data__->,AP4,,__GET_VAR(data__->PM10.MOVE_P,));
  __SET_VAR(data__->,CROUT,,__GET_VAR(data__->TAPETE_LINEAR0.ROUT,));
  __SET_VAR(data__->,AN2,,__GET_VAR(data__->TAPETE_ROTATIVO0.MOVE_N,));
  __SET_VAR(data__->,AN4,,__GET_VAR(data__->PM10.MOVE_N,));
  __SET_VAR(data__->,SCP1,,__GET_VAR(data__->PM10.SCP1,));
  __SET_VAR(data__->,APUSH3,,__GET_VAR(data__->PUSHER0.PUSH,));
  __SET_VAR(data__->,ARET3,,__GET_VAR(data__->PUSHER0.RETREAT,));
  __SET_VAR(data__->,AN3,,__GET_VAR(data__->PUSHER0.YN,));
  __SET_VAR(data__->,ROLLEROCUP1,,__GET_VAR(data__->PUSHER0.ROLEROCUP,));
  __SET_VAR(data__->,APUSH5,,__GET_VAR(data__->PUSHER1.PUSH,));
  __SET_VAR(data__->,ARET5,,__GET_VAR(data__->PUSHER1.RETREAT,));
  __SET_VAR(data__->,AN5,,__GET_VAR(data__->PUSHER1.YN,));
  __SET_VAR(data__->,ROLLEROCUP2,,__GET_VAR(data__->PUSHER1.ROLEROCUP,));
  __SET_VAR(data__->,APUSH8,,__GET_VAR(data__->PUSHER2.PUSH,));
  __SET_VAR(data__->,ARET8,,__GET_VAR(data__->PUSHER2.RETREAT,));
  __SET_VAR(data__->,AN8,,__GET_VAR(data__->PUSHER2.YN,));
  __SET_VAR(data__->,ROLLEROCUP3,,__GET_VAR(data__->PUSHER2.ROLEROCUP,));
  __SET_VAR(data__->,CTAKEB,,__GET_VAR(data__->TAPETE_LINEAR2.TAKE,));
  __SET_VAR(data__->,AH6,,__GET_VAR(data__->TAPETE_ROTATIVO1.TURN_H,));
  __SET_VAR(data__->,AV6,,__GET_VAR(data__->TAPETE_ROTATIVO1.TURN_V,));
  __SET_VAR(data__->,AV7,,__GET_VAR(data__->TAPETE_LINEAR2.MOVE_P,));
  __SET_VAR(data__->,AP6,,__GET_VAR(data__->TAPETE_ROTATIVO1.MOVE_P,));
  __SET_VAR(data__->,AN6,,__GET_VAR(data__->TAPETE_ROTATIVO1.MOVE_N,));
  __SET_VAR(data__->,AN9,,__GET_VAR(data__->CT90.MOVE_P,));
  __SET_VAR(data__->,SCP2,,__GET_VAR(data__->CT90.SCP2,));

  goto __end;

__end:
  return;
} // CARGA_DESCARGA_body__() 





void PROGRAM1_init__(PROGRAM1 *data__, BOOL retain) {
  __INIT_LOCATED(BOOL,__IX0_0_0_0,data__->S0,retain)
  __INIT_LOCATED_VALUE(data__->S0,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_1,data__->S1,retain)
  __INIT_LOCATED_VALUE(data__->S1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_2,data__->S2,retain)
  __INIT_LOCATED_VALUE(data__->S2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_3,data__->S3,retain)
  __INIT_LOCATED_VALUE(data__->S3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_4,data__->S4,retain)
  __INIT_LOCATED_VALUE(data__->S4,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_5,data__->S5,retain)
  __INIT_LOCATED_VALUE(data__->S5,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_6,data__->S6,retain)
  __INIT_LOCATED_VALUE(data__->S6,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_7,data__->S7,retain)
  __INIT_LOCATED_VALUE(data__->S7,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_8,data__->S8,retain)
  __INIT_LOCATED_VALUE(data__->S8,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_9,data__->S9,retain)
  __INIT_LOCATED_VALUE(data__->S9,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_10,data__->S10,retain)
  __INIT_LOCATED_VALUE(data__->S10,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_11,data__->S11,retain)
  __INIT_LOCATED_VALUE(data__->S11,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_12,data__->S12,retain)
  __INIT_LOCATED_VALUE(data__->S12,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_13,data__->S13,retain)
  __INIT_LOCATED_VALUE(data__->S13,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_14,data__->S14,retain)
  __INIT_LOCATED_VALUE(data__->S14,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_15,data__->S15,retain)
  __INIT_LOCATED_VALUE(data__->S15,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_16,data__->S16,retain)
  __INIT_LOCATED_VALUE(data__->S16,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_17,data__->S17,retain)
  __INIT_LOCATED_VALUE(data__->S17,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_18,data__->S18,retain)
  __INIT_LOCATED_VALUE(data__->S18,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_19,data__->S19,retain)
  __INIT_LOCATED_VALUE(data__->S19,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_20,data__->S20,retain)
  __INIT_LOCATED_VALUE(data__->S20,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_21,data__->S21,retain)
  __INIT_LOCATED_VALUE(data__->S21,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_22,data__->S22,retain)
  __INIT_LOCATED_VALUE(data__->S22,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_23,data__->S23,retain)
  __INIT_LOCATED_VALUE(data__->S23,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_24,data__->S24,retain)
  __INIT_LOCATED_VALUE(data__->S24,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_25,data__->S25,retain)
  __INIT_LOCATED_VALUE(data__->S25,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_26,data__->S26,retain)
  __INIT_LOCATED_VALUE(data__->S26,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_27,data__->S27,retain)
  __INIT_LOCATED_VALUE(data__->S27,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_28,data__->S28,retain)
  __INIT_LOCATED_VALUE(data__->S28,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_29,data__->S29,retain)
  __INIT_LOCATED_VALUE(data__->S29,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_30,data__->S30,retain)
  __INIT_LOCATED_VALUE(data__->S30,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_31,data__->S31,retain)
  __INIT_LOCATED_VALUE(data__->S31,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_32,data__->S32,retain)
  __INIT_LOCATED_VALUE(data__->S32,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_33,data__->S33,retain)
  __INIT_LOCATED_VALUE(data__->S33,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_34,data__->S34,retain)
  __INIT_LOCATED_VALUE(data__->S34,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_35,data__->S35,retain)
  __INIT_LOCATED_VALUE(data__->S35,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_36,data__->S36,retain)
  __INIT_LOCATED_VALUE(data__->S36,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_37,data__->S37,retain)
  __INIT_LOCATED_VALUE(data__->S37,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_38,data__->S38,retain)
  __INIT_LOCATED_VALUE(data__->S38,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_39,data__->S39,retain)
  __INIT_LOCATED_VALUE(data__->S39,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_40,data__->S40,retain)
  __INIT_LOCATED_VALUE(data__->S40,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_41,data__->S41,retain)
  __INIT_LOCATED_VALUE(data__->S41,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_42,data__->S42,retain)
  __INIT_LOCATED_VALUE(data__->S42,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_43,data__->S43,retain)
  __INIT_LOCATED_VALUE(data__->S43,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_44,data__->S44,retain)
  __INIT_LOCATED_VALUE(data__->S44,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_45,data__->S45,retain)
  __INIT_LOCATED_VALUE(data__->S45,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_46,data__->S46,retain)
  __INIT_LOCATED_VALUE(data__->S46,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_47,data__->S47,retain)
  __INIT_LOCATED_VALUE(data__->S47,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_48,data__->S48,retain)
  __INIT_LOCATED_VALUE(data__->S48,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_49,data__->S49,retain)
  __INIT_LOCATED_VALUE(data__->S49,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_50,data__->S50,retain)
  __INIT_LOCATED_VALUE(data__->S50,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_51,data__->S51,retain)
  __INIT_LOCATED_VALUE(data__->S51,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_52,data__->S52,retain)
  __INIT_LOCATED_VALUE(data__->S52,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_53,data__->S53,retain)
  __INIT_LOCATED_VALUE(data__->S53,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_54,data__->S54,retain)
  __INIT_LOCATED_VALUE(data__->S54,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_55,data__->S55,retain)
  __INIT_LOCATED_VALUE(data__->S55,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_56,data__->S56,retain)
  __INIT_LOCATED_VALUE(data__->S56,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_57,data__->S57,retain)
  __INIT_LOCATED_VALUE(data__->S57,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_58,data__->S58,retain)
  __INIT_LOCATED_VALUE(data__->S58,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_59,data__->S59,retain)
  __INIT_LOCATED_VALUE(data__->S59,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_60,data__->S60,retain)
  __INIT_LOCATED_VALUE(data__->S60,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_61,data__->S61,retain)
  __INIT_LOCATED_VALUE(data__->S61,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_62,data__->S62,retain)
  __INIT_LOCATED_VALUE(data__->S62,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_63,data__->S63,retain)
  __INIT_LOCATED_VALUE(data__->S63,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_64,data__->S64,retain)
  __INIT_LOCATED_VALUE(data__->S64,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_65,data__->S65,retain)
  __INIT_LOCATED_VALUE(data__->S65,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_66,data__->S66,retain)
  __INIT_LOCATED_VALUE(data__->S66,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_67,data__->S67,retain)
  __INIT_LOCATED_VALUE(data__->S67,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_68,data__->S68,retain)
  __INIT_LOCATED_VALUE(data__->S68,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_69,data__->S69,retain)
  __INIT_LOCATED_VALUE(data__->S69,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_70,data__->S70,retain)
  __INIT_LOCATED_VALUE(data__->S70,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_71,data__->S71,retain)
  __INIT_LOCATED_VALUE(data__->S71,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_72,data__->S72,retain)
  __INIT_LOCATED_VALUE(data__->S72,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_73,data__->S73,retain)
  __INIT_LOCATED_VALUE(data__->S73,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_74,data__->S74,retain)
  __INIT_LOCATED_VALUE(data__->S74,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_75,data__->S75,retain)
  __INIT_LOCATED_VALUE(data__->S75,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_76,data__->S76,retain)
  __INIT_LOCATED_VALUE(data__->S76,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_77,data__->S77,retain)
  __INIT_LOCATED_VALUE(data__->S77,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_78,data__->S78,retain)
  __INIT_LOCATED_VALUE(data__->S78,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_79,data__->S79,retain)
  __INIT_LOCATED_VALUE(data__->S79,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_80,data__->S80,retain)
  __INIT_LOCATED_VALUE(data__->S80,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_81,data__->S81,retain)
  __INIT_LOCATED_VALUE(data__->S81,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_82,data__->S82,retain)
  __INIT_LOCATED_VALUE(data__->S82,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_83,data__->S83,retain)
  __INIT_LOCATED_VALUE(data__->S83,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_84,data__->S84,retain)
  __INIT_LOCATED_VALUE(data__->S84,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_85,data__->S85,retain)
  __INIT_LOCATED_VALUE(data__->S85,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_86,data__->S86,retain)
  __INIT_LOCATED_VALUE(data__->S86,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_87,data__->S87,retain)
  __INIT_LOCATED_VALUE(data__->S87,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_88,data__->S88,retain)
  __INIT_LOCATED_VALUE(data__->S88,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_89,data__->S89,retain)
  __INIT_LOCATED_VALUE(data__->S89,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_90,data__->S90,retain)
  __INIT_LOCATED_VALUE(data__->S90,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_91,data__->S91,retain)
  __INIT_LOCATED_VALUE(data__->S91,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_92,data__->S92,retain)
  __INIT_LOCATED_VALUE(data__->S92,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_93,data__->S93,retain)
  __INIT_LOCATED_VALUE(data__->S93,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_94,data__->S94,retain)
  __INIT_LOCATED_VALUE(data__->S94,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_95,data__->S95,retain)
  __INIT_LOCATED_VALUE(data__->S95,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_96,data__->S96,retain)
  __INIT_LOCATED_VALUE(data__->S96,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_97,data__->S97,retain)
  __INIT_LOCATED_VALUE(data__->S97,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_98,data__->S98,retain)
  __INIT_LOCATED_VALUE(data__->S98,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_99,data__->S99,retain)
  __INIT_LOCATED_VALUE(data__->S99,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_100,data__->S100,retain)
  __INIT_LOCATED_VALUE(data__->S100,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_101,data__->S101,retain)
  __INIT_LOCATED_VALUE(data__->S101,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_102,data__->S102,retain)
  __INIT_LOCATED_VALUE(data__->S102,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_103,data__->S103,retain)
  __INIT_LOCATED_VALUE(data__->S103,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_104,data__->S104,retain)
  __INIT_LOCATED_VALUE(data__->S104,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_105,data__->S105,retain)
  __INIT_LOCATED_VALUE(data__->S105,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_106,data__->S106,retain)
  __INIT_LOCATED_VALUE(data__->S106,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_107,data__->S107,retain)
  __INIT_LOCATED_VALUE(data__->S107,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_108,data__->S108,retain)
  __INIT_LOCATED_VALUE(data__->S108,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_109,data__->S109,retain)
  __INIT_LOCATED_VALUE(data__->S109,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_0_0_110,data__->S110,retain)
  __INIT_LOCATED_VALUE(data__->S110,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_0,data__->Q0,retain)
  __INIT_LOCATED_VALUE(data__->Q0,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_1,data__->Q1,retain)
  __INIT_LOCATED_VALUE(data__->Q1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_2,data__->Q2,retain)
  __INIT_LOCATED_VALUE(data__->Q2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_3,data__->Q3,retain)
  __INIT_LOCATED_VALUE(data__->Q3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_4,data__->Q4,retain)
  __INIT_LOCATED_VALUE(data__->Q4,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_5,data__->Q5,retain)
  __INIT_LOCATED_VALUE(data__->Q5,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_6,data__->Q6,retain)
  __INIT_LOCATED_VALUE(data__->Q6,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_7,data__->Q7,retain)
  __INIT_LOCATED_VALUE(data__->Q7,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_8,data__->Q8,retain)
  __INIT_LOCATED_VALUE(data__->Q8,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_9,data__->Q9,retain)
  __INIT_LOCATED_VALUE(data__->Q9,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_10,data__->Q10,retain)
  __INIT_LOCATED_VALUE(data__->Q10,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_11,data__->Q11,retain)
  __INIT_LOCATED_VALUE(data__->Q11,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_12,data__->Q12,retain)
  __INIT_LOCATED_VALUE(data__->Q12,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_13,data__->Q13,retain)
  __INIT_LOCATED_VALUE(data__->Q13,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_14,data__->Q14,retain)
  __INIT_LOCATED_VALUE(data__->Q14,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_15,data__->Q15,retain)
  __INIT_LOCATED_VALUE(data__->Q15,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_16,data__->Q16,retain)
  __INIT_LOCATED_VALUE(data__->Q16,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_17,data__->Q17,retain)
  __INIT_LOCATED_VALUE(data__->Q17,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_18,data__->Q18,retain)
  __INIT_LOCATED_VALUE(data__->Q18,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_19,data__->Q19,retain)
  __INIT_LOCATED_VALUE(data__->Q19,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_20,data__->Q20,retain)
  __INIT_LOCATED_VALUE(data__->Q20,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_21,data__->Q21,retain)
  __INIT_LOCATED_VALUE(data__->Q21,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_22,data__->Q22,retain)
  __INIT_LOCATED_VALUE(data__->Q22,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_23,data__->Q23,retain)
  __INIT_LOCATED_VALUE(data__->Q23,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_24,data__->Q24,retain)
  __INIT_LOCATED_VALUE(data__->Q24,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_25,data__->Q25,retain)
  __INIT_LOCATED_VALUE(data__->Q25,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_26,data__->Q26,retain)
  __INIT_LOCATED_VALUE(data__->Q26,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_27,data__->Q27,retain)
  __INIT_LOCATED_VALUE(data__->Q27,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_28,data__->Q28,retain)
  __INIT_LOCATED_VALUE(data__->Q28,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_29,data__->Q29,retain)
  __INIT_LOCATED_VALUE(data__->Q29,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_30,data__->Q30,retain)
  __INIT_LOCATED_VALUE(data__->Q30,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_31,data__->Q31,retain)
  __INIT_LOCATED_VALUE(data__->Q31,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_32,data__->Q32,retain)
  __INIT_LOCATED_VALUE(data__->Q32,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_33,data__->Q33,retain)
  __INIT_LOCATED_VALUE(data__->Q33,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_34,data__->Q34,retain)
  __INIT_LOCATED_VALUE(data__->Q34,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_35,data__->Q35,retain)
  __INIT_LOCATED_VALUE(data__->Q35,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_36,data__->Q36,retain)
  __INIT_LOCATED_VALUE(data__->Q36,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_37,data__->Q37,retain)
  __INIT_LOCATED_VALUE(data__->Q37,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_38,data__->Q38,retain)
  __INIT_LOCATED_VALUE(data__->Q38,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_39,data__->Q39,retain)
  __INIT_LOCATED_VALUE(data__->Q39,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_40,data__->Q40,retain)
  __INIT_LOCATED_VALUE(data__->Q40,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_41,data__->Q41,retain)
  __INIT_LOCATED_VALUE(data__->Q41,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_42,data__->Q42,retain)
  __INIT_LOCATED_VALUE(data__->Q42,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_43,data__->Q43,retain)
  __INIT_LOCATED_VALUE(data__->Q43,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_44,data__->Q44,retain)
  __INIT_LOCATED_VALUE(data__->Q44,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_45,data__->Q45,retain)
  __INIT_LOCATED_VALUE(data__->Q45,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_46,data__->Q46,retain)
  __INIT_LOCATED_VALUE(data__->Q46,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_47,data__->Q47,retain)
  __INIT_LOCATED_VALUE(data__->Q47,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_48,data__->Q48,retain)
  __INIT_LOCATED_VALUE(data__->Q48,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_49,data__->Q49,retain)
  __INIT_LOCATED_VALUE(data__->Q49,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_50,data__->Q50,retain)
  __INIT_LOCATED_VALUE(data__->Q50,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_51,data__->Q51,retain)
  __INIT_LOCATED_VALUE(data__->Q51,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_52,data__->Q52,retain)
  __INIT_LOCATED_VALUE(data__->Q52,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_53,data__->Q53,retain)
  __INIT_LOCATED_VALUE(data__->Q53,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_54,data__->Q54,retain)
  __INIT_LOCATED_VALUE(data__->Q54,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_55,data__->Q55,retain)
  __INIT_LOCATED_VALUE(data__->Q55,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_56,data__->Q56,retain)
  __INIT_LOCATED_VALUE(data__->Q56,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_57,data__->Q57,retain)
  __INIT_LOCATED_VALUE(data__->Q57,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_58,data__->Q58,retain)
  __INIT_LOCATED_VALUE(data__->Q58,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_59,data__->Q59,retain)
  __INIT_LOCATED_VALUE(data__->Q59,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_60,data__->Q60,retain)
  __INIT_LOCATED_VALUE(data__->Q60,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_61,data__->Q61,retain)
  __INIT_LOCATED_VALUE(data__->Q61,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_62,data__->Q62,retain)
  __INIT_LOCATED_VALUE(data__->Q62,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_63,data__->Q63,retain)
  __INIT_LOCATED_VALUE(data__->Q63,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_64,data__->Q64,retain)
  __INIT_LOCATED_VALUE(data__->Q64,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_65,data__->Q65,retain)
  __INIT_LOCATED_VALUE(data__->Q65,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_66,data__->Q66,retain)
  __INIT_LOCATED_VALUE(data__->Q66,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_67,data__->Q67,retain)
  __INIT_LOCATED_VALUE(data__->Q67,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_68,data__->Q68,retain)
  __INIT_LOCATED_VALUE(data__->Q68,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_69,data__->Q69,retain)
  __INIT_LOCATED_VALUE(data__->Q69,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_70,data__->Q70,retain)
  __INIT_LOCATED_VALUE(data__->Q70,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_71,data__->Q71,retain)
  __INIT_LOCATED_VALUE(data__->Q71,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_72,data__->Q72,retain)
  __INIT_LOCATED_VALUE(data__->Q72,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_73,data__->Q73,retain)
  __INIT_LOCATED_VALUE(data__->Q73,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_74,data__->Q74,retain)
  __INIT_LOCATED_VALUE(data__->Q74,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_75,data__->Q75,retain)
  __INIT_LOCATED_VALUE(data__->Q75,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_76,data__->Q76,retain)
  __INIT_LOCATED_VALUE(data__->Q76,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_77,data__->Q77,retain)
  __INIT_LOCATED_VALUE(data__->Q77,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_78,data__->Q78,retain)
  __INIT_LOCATED_VALUE(data__->Q78,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_79,data__->Q79,retain)
  __INIT_LOCATED_VALUE(data__->Q79,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_80,data__->Q80,retain)
  __INIT_LOCATED_VALUE(data__->Q80,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_81,data__->Q81,retain)
  __INIT_LOCATED_VALUE(data__->Q81,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_82,data__->Q82,retain)
  __INIT_LOCATED_VALUE(data__->Q82,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_83,data__->Q83,retain)
  __INIT_LOCATED_VALUE(data__->Q83,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_84,data__->Q84,retain)
  __INIT_LOCATED_VALUE(data__->Q84,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_85,data__->Q85,retain)
  __INIT_LOCATED_VALUE(data__->Q85,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_86,data__->Q86,retain)
  __INIT_LOCATED_VALUE(data__->Q86,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_87,data__->Q87,retain)
  __INIT_LOCATED_VALUE(data__->Q87,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_88,data__->Q88,retain)
  __INIT_LOCATED_VALUE(data__->Q88,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_89,data__->Q89,retain)
  __INIT_LOCATED_VALUE(data__->Q89,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_90,data__->Q90,retain)
  __INIT_LOCATED_VALUE(data__->Q90,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_91,data__->Q91,retain)
  __INIT_LOCATED_VALUE(data__->Q91,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_92,data__->Q92,retain)
  __INIT_LOCATED_VALUE(data__->Q92,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_93,data__->Q93,retain)
  __INIT_LOCATED_VALUE(data__->Q93,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_94,data__->Q94,retain)
  __INIT_LOCATED_VALUE(data__->Q94,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_95,data__->Q95,retain)
  __INIT_LOCATED_VALUE(data__->Q95,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_96,data__->Q96,retain)
  __INIT_LOCATED_VALUE(data__->Q96,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_97,data__->Q97,retain)
  __INIT_LOCATED_VALUE(data__->Q97,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_98,data__->Q98,retain)
  __INIT_LOCATED_VALUE(data__->Q98,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_99,data__->Q99,retain)
  __INIT_LOCATED_VALUE(data__->Q99,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_100,data__->Q100,retain)
  __INIT_LOCATED_VALUE(data__->Q100,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_101,data__->Q101,retain)
  __INIT_LOCATED_VALUE(data__->Q101,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_102,data__->Q102,retain)
  __INIT_LOCATED_VALUE(data__->Q102,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_103,data__->Q103,retain)
  __INIT_LOCATED_VALUE(data__->Q103,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_104,data__->Q104,retain)
  __INIT_LOCATED_VALUE(data__->Q104,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_105,data__->Q105,retain)
  __INIT_LOCATED_VALUE(data__->Q105,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_106,data__->Q106,retain)
  __INIT_LOCATED_VALUE(data__->Q106,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_107,data__->Q107,retain)
  __INIT_LOCATED_VALUE(data__->Q107,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_108,data__->Q108,retain)
  __INIT_LOCATED_VALUE(data__->Q108,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_109,data__->Q109,retain)
  __INIT_LOCATED_VALUE(data__->Q109,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_110,data__->Q110,retain)
  __INIT_LOCATED_VALUE(data__->Q110,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_111,data__->Q111,retain)
  __INIT_LOCATED_VALUE(data__->Q111,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_112,data__->Q112,retain)
  __INIT_LOCATED_VALUE(data__->Q112,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_113,data__->Q113,retain)
  __INIT_LOCATED_VALUE(data__->Q113,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_114,data__->Q114,retain)
  __INIT_LOCATED_VALUE(data__->Q114,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_115,data__->Q115,retain)
  __INIT_LOCATED_VALUE(data__->Q115,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_116,data__->Q116,retain)
  __INIT_LOCATED_VALUE(data__->Q116,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_117,data__->Q117,retain)
  __INIT_LOCATED_VALUE(data__->Q117,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_118,data__->Q118,retain)
  __INIT_LOCATED_VALUE(data__->Q118,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_119,data__->Q119,retain)
  __INIT_LOCATED_VALUE(data__->Q119,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_120,data__->Q120,retain)
  __INIT_LOCATED_VALUE(data__->Q120,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_121,data__->Q121,retain)
  __INIT_LOCATED_VALUE(data__->Q121,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_122,data__->Q122,retain)
  __INIT_LOCATED_VALUE(data__->Q122,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_123,data__->Q123,retain)
  __INIT_LOCATED_VALUE(data__->Q123,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_124,data__->Q124,retain)
  __INIT_LOCATED_VALUE(data__->Q124,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_125,data__->Q125,retain)
  __INIT_LOCATED_VALUE(data__->Q125,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_126,data__->Q126,retain)
  __INIT_LOCATED_VALUE(data__->Q126,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_127,data__->Q127,retain)
  __INIT_LOCATED_VALUE(data__->Q127,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_128,data__->Q128,retain)
  __INIT_LOCATED_VALUE(data__->Q128,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_129,data__->Q129,retain)
  __INIT_LOCATED_VALUE(data__->Q129,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_130,data__->Q130,retain)
  __INIT_LOCATED_VALUE(data__->Q130,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_131,data__->Q131,retain)
  __INIT_LOCATED_VALUE(data__->Q131,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_132,data__->Q132,retain)
  __INIT_LOCATED_VALUE(data__->Q132,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_133,data__->Q133,retain)
  __INIT_LOCATED_VALUE(data__->Q133,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_134,data__->Q134,retain)
  __INIT_LOCATED_VALUE(data__->Q134,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_135,data__->Q135,retain)
  __INIT_LOCATED_VALUE(data__->Q135,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_136,data__->Q136,retain)
  __INIT_LOCATED_VALUE(data__->Q136,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_137,data__->Q137,retain)
  __INIT_LOCATED_VALUE(data__->Q137,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_138,data__->Q138,retain)
  __INIT_LOCATED_VALUE(data__->Q138,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_139,data__->Q139,retain)
  __INIT_LOCATED_VALUE(data__->Q139,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_140,data__->Q140,retain)
  __INIT_LOCATED_VALUE(data__->Q140,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_141,data__->Q141,retain)
  __INIT_LOCATED_VALUE(data__->Q141,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_142,data__->Q142,retain)
  __INIT_LOCATED_VALUE(data__->Q142,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_143,data__->Q143,retain)
  __INIT_LOCATED_VALUE(data__->Q143,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_144,data__->Q144,retain)
  __INIT_LOCATED_VALUE(data__->Q144,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_145,data__->Q145,retain)
  __INIT_LOCATED_VALUE(data__->Q145,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_146,data__->Q146,retain)
  __INIT_LOCATED_VALUE(data__->Q146,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_147,data__->Q147,retain)
  __INIT_LOCATED_VALUE(data__->Q147,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_148,data__->Q148,retain)
  __INIT_LOCATED_VALUE(data__->Q148,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_149,data__->Q149,retain)
  __INIT_LOCATED_VALUE(data__->Q149,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_150,data__->Q150,retain)
  __INIT_LOCATED_VALUE(data__->Q150,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0_1_151,data__->Q151,retain)
  __INIT_LOCATED_VALUE(data__->Q151,__BOOL_LITERAL(FALSE))
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR0,retain);
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO0,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR1,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR2,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR3,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR4,retain);
  TAPETE_ROTATIVO_init__(&data__->TAPETE_ROTATIVO1,retain);
  TAPETE_LINEAR_init__(&data__->TAPETE_LINEAR5,retain);
  __INIT_VAR(data__->PATH,__BOOL_LITERAL(FALSE),retain)
  CELULA_init__(&data__->CELULA0,retain);
  CELULA_init__(&data__->CELULA1,retain);
  CELULA_init__(&data__->CELULA2,retain);
  ARMAZEM_init__(&data__->ARMAZEM0,retain);
  __INIT_LOCATED(WORD,__MW0_0_2_0,data__->ORDEM,retain)
  __INIT_LOCATED_VALUE(data__->ORDEM,0)
  __INIT_LOCATED(BOOL,__IX0_1_0_0,data__->IN,retain)
  __INIT_LOCATED_VALUE(data__->IN,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(WORD,__IW0_1_1_0,data__->ORDEMMES,retain)
  __INIT_LOCATED_VALUE(data__->ORDEMMES,0)
  __INIT_LOCATED(WORD,__IW0_1_1_1,data__->DESTINO1,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO1,0)
  __INIT_LOCATED(WORD,__IW0_1_1_6,data__->DESTINO2,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO2,0)
  __INIT_LOCATED(WORD,__IW0_1_1_11,data__->DESTINO3,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO3,0)
  __INIT_LOCATED(WORD,__IW0_1_1_16,data__->DESTINO4,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO4,0)
  __INIT_LOCATED(WORD,__IW0_1_1_17,data__->DESTINO5,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO5,0)
  __INIT_LOCATED(WORD,__IW0_1_1_18,data__->DESTINO6,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO6,0)
  __INIT_LOCATED(WORD,__IW0_1_1_19,data__->DESTINO7,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO7,0)
  __INIT_LOCATED(WORD,__IW0_1_1_20,data__->DESTINO8,retain)
  __INIT_LOCATED_VALUE(data__->DESTINO8,0)
  __INIT_LOCATED(WORD,__IW0_1_1_2,data__->PX1,retain)
  __INIT_LOCATED_VALUE(data__->PX1,0)
  __INIT_LOCATED(WORD,__IW0_1_1_3,data__->PY1,retain)
  __INIT_LOCATED_VALUE(data__->PY1,0)
  __INIT_LOCATED(WORD,__IW0_1_1_4,data__->PX2,retain)
  __INIT_LOCATED_VALUE(data__->PX2,0)
  __INIT_LOCATED(WORD,__IW0_1_1_7,data__->PX3,retain)
  __INIT_LOCATED_VALUE(data__->PX3,0)
  __INIT_LOCATED(WORD,__IW0_1_1_9,data__->PX4,retain)
  __INIT_LOCATED_VALUE(data__->PX4,0)
  __INIT_LOCATED(WORD,__IW0_1_1_12,data__->PX5,retain)
  __INIT_LOCATED_VALUE(data__->PX5,0)
  __INIT_LOCATED(WORD,__IW0_1_1_14,data__->PX6,retain)
  __INIT_LOCATED_VALUE(data__->PX6,0)
  __INIT_LOCATED(WORD,__IW0_1_1_5,data__->PY2,retain)
  __INIT_LOCATED_VALUE(data__->PY2,0)
  __INIT_LOCATED(WORD,__IW0_1_1_8,data__->PY3,retain)
  __INIT_LOCATED_VALUE(data__->PY3,0)
  __INIT_LOCATED(WORD,__IW0_1_1_10,data__->PY4,retain)
  __INIT_LOCATED_VALUE(data__->PY4,0)
  __INIT_LOCATED(WORD,__IW0_1_1_13,data__->PY5,retain)
  __INIT_LOCATED_VALUE(data__->PY5,0)
  __INIT_LOCATED(WORD,__IW0_1_1_15,data__->PY6,retain)
  __INIT_LOCATED_VALUE(data__->PY6,0)
  __INIT_EXTERNAL(BOOL,OCUP1,data__->OCUP1,retain)
  __INIT_EXTERNAL(BOOL,OCUP2,data__->OCUP2,retain)
  __INIT_EXTERNAL(BOOL,OCUP3,data__->OCUP3,retain)
  __INIT_EXTERNAL(BOOL,OCUP4,data__->OCUP4,retain)
  __INIT_EXTERNAL(BOOL,OCUP5,data__->OCUP5,retain)
  __INIT_EXTERNAL(BOOL,OCUP6,data__->OCUP6,retain)
  __INIT_EXTERNAL(BOOL,SOCUP1,data__->SOCUP1,retain)
  __INIT_EXTERNAL(BOOL,SOCUP2,data__->SOCUP2,retain)
  __INIT_EXTERNAL(BOOL,SOCUP3,data__->SOCUP3,retain)
  __INIT_EXTERNAL(BOOL,SOCUP4,data__->SOCUP4,retain)
  __INIT_EXTERNAL(BOOL,SOCUP5,data__->SOCUP5,retain)
  __INIT_EXTERNAL(BOOL,SOCUP6,data__->SOCUP6,retain)
  __INIT_LOCATED(BOOL,__QX0_2_0_9,data__->SMAQ1,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_10,data__->SMAQ2,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_11,data__->SMAQ3,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_12,data__->SMAQ4,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ4,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_13,data__->SMAQ5,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ5,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_14,data__->SMAQ6,retain)
  __INIT_LOCATED_VALUE(data__->SMAQ6,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_15,data__->SENTRADA,retain)
  __INIT_LOCATED_VALUE(data__->SENTRADA,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_6,data__->SROT1,retain)
  __INIT_LOCATED_VALUE(data__->SROT1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_7,data__->SROT2,retain)
  __INIT_LOCATED_VALUE(data__->SROT2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_8,data__->SROT3,retain)
  __INIT_LOCATED_VALUE(data__->SROT3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_25,data__->SROT4,retain)
  __INIT_LOCATED_VALUE(data__->SROT4,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_26,data__->SROT5,retain)
  __INIT_LOCATED_VALUE(data__->SROT5,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_27,data__->SPUSH1,retain)
  __INIT_LOCATED_VALUE(data__->SPUSH1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_28,data__->SPUSH2,retain)
  __INIT_LOCATED_VALUE(data__->SPUSH2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_29,data__->SPUSH3,retain)
  __INIT_LOCATED_VALUE(data__->SPUSH3,__BOOL_LITERAL(FALSE))
  INTOOUT_init__(&data__->INTOOUT0,retain);
  __INIT_EXTERNAL(BOOL,AUX1,data__->AUX1,retain)
  __INIT_EXTERNAL(BOOL,AUX2,data__->AUX2,retain)
  __INIT_EXTERNAL(BOOL,AUX3,data__->AUX3,retain)
  __INIT_EXTERNAL(BOOL,AUX4,data__->AUX4,retain)
  __INIT_EXTERNAL(BOOL,AUX5,data__->AUX5,retain)
  __INIT_EXTERNAL(BOOL,AUX6,data__->AUX6,retain)
  CELULA_ROBOT_init__(&data__->CELULA_ROBOT0,retain);
  CARGA_DESCARGA_init__(&data__->CARGA_DESCARGA0,retain);
  __INIT_VAR(data__->P_OUT1,0,retain)
  __INIT_VAR(data__->P_OUT2,0,retain)
  __INIT_VAR(data__->P_OUT3,0,retain)
  __INIT_EXTERNAL(BOOL,AUXR,data__->AUXR,retain)
  __INIT_EXTERNAL(BOOL,SOCUPR,data__->SOCUPR,retain)
  __INIT_EXTERNAL(BOOL,OCUPR,data__->OCUPR,retain)
  __INIT_LOCATED(BOOL,__IX0_1_0_8,data__->ROBDESCP,retain)
  __INIT_LOCATED_VALUE(data__->ROBDESCP,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_17,data__->ROBODESC,retain)
  __INIT_LOCATED_VALUE(data__->ROBODESC,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_21,data__->CARGA1,retain)
  __INIT_LOCATED_VALUE(data__->CARGA1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_22,data__->CARGA2,retain)
  __INIT_LOCATED_VALUE(data__->CARGA2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_1_0_12,data__->CARGADESCP,retain)
  __INIT_LOCATED_VALUE(data__->CARGADESCP,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_1_0_13,data__->CARGADESCP2,retain)
  __INIT_LOCATED_VALUE(data__->CARGADESCP2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_23,data__->SPC1,retain)
  __INIT_LOCATED_VALUE(data__->SPC1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_24,data__->SPC2,retain)
  __INIT_LOCATED_VALUE(data__->SPC2,__BOOL_LITERAL(FALSE))
  __INIT_EXTERNAL(BOOL,AUXP1,data__->AUXP1,retain)
  __INIT_EXTERNAL(BOOL,AUXP2,data__->AUXP2,retain)
  __INIT_EXTERNAL(BOOL,AUXP3,data__->AUXP3,retain)
  __INIT_EXTERNAL(BOOL,OCUPP1,data__->OCUPP1,retain)
  __INIT_EXTERNAL(BOOL,OCUPP2,data__->OCUPP2,retain)
  __INIT_EXTERNAL(BOOL,OCUPP3,data__->OCUPP3,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP1,data__->SOCUPP1,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP2,data__->SOCUPP2,retain)
  __INIT_EXTERNAL(BOOL,SOCUPP3,data__->SOCUPP3,retain)
  __INIT_LOCATED(BOOL,__QX0_2_0_30,data__->SROLLER1,retain)
  __INIT_LOCATED_VALUE(data__->SROLLER1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_31,data__->SROLLER2,retain)
  __INIT_LOCATED_VALUE(data__->SROLLER2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_32,data__->SROLLER3,retain)
  __INIT_LOCATED_VALUE(data__->SROLLER3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_1_0_14,data__->INARM,retain)
  __INIT_LOCATED_VALUE(data__->INARM,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2_0_33,data__->OUTARM,retain)
  __INIT_LOCATED_VALUE(data__->OUTARM,__BOOL_LITERAL(FALSE))
}

// Code part
void PROGRAM1_body__(PROGRAM1 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->ARMAZEM0.,TAPETEIN,,__GET_LOCATED(data__->S1,));
  __SET_VAR(data__->ARMAZEM0.,ORDEMIN,,__GET_LOCATED(data__->IN,));
  __SET_VAR(data__->ARMAZEM0.,TAPETEOUTFREE,,__GET_LOCATED(data__->S0,));
  __SET_VAR(data__->ARMAZEM0.,ORDEM,,__GET_LOCATED(data__->ORDEMMES,));
  __SET_VAR(data__->ARMAZEM0.,SP1,,__GET_LOCATED(data__->S0,));
  __SET_VAR(data__->ARMAZEM0.,CRIN,,__GET_VAR(data__->CELULA0.CROUT,));
  __SET_VAR(data__->ARMAZEM0.,CFREE,,__GET_VAR(data__->CELULA0.CFREE_O,));
  __SET_VAR(data__->ARMAZEM0.,SP2,,__GET_LOCATED(data__->S1,));
  __SET_VAR(data__->ARMAZEM0.,CRECEIVB,,__GET_VAR(data__->CELULA0.CTAKEB,));
  __SET_VAR(data__->ARMAZEM0.,INARM,,__GET_LOCATED(data__->INARM,));
  ARMAZEM_body__(&data__->ARMAZEM0);
  __SET_VAR(data__->CELULA0.,SP1,,__GET_LOCATED(data__->S2,));
  __SET_VAR(data__->CELULA0.,SP2,,__GET_LOCATED(data__->S3,));
  __SET_VAR(data__->CELULA0.,SH2,,__GET_LOCATED(data__->S5,));
  __SET_VAR(data__->CELULA0.,SV2,,__GET_LOCATED(data__->S4,));
  __SET_VAR(data__->CELULA0.,SP3,,__GET_LOCATED(data__->S6,));
  __SET_VAR(data__->CELULA0.,ST3,,__GET_LOCATED(data__->S7,));
  __SET_VAR(data__->CELULA0.,SXP3,,__GET_LOCATED(data__->S8,));
  __SET_VAR(data__->CELULA0.,SXN3,,__GET_LOCATED(data__->S9,));
  __SET_VAR(data__->CELULA0.,SZP3,,__GET_LOCATED(data__->S10,));
  __SET_VAR(data__->CELULA0.,SZN3,,__GET_LOCATED(data__->S11,));
  __SET_VAR(data__->CELULA0.,DESTINO,,1);
  __SET_VAR(data__->CELULA0.,SP4,,__GET_LOCATED(data__->S12,));
  __SET_VAR(data__->CELULA0.,ST5,,__GET_LOCATED(data__->S14,));
  __SET_VAR(data__->CELULA0.,SXP5,,__GET_LOCATED(data__->S15,));
  __SET_VAR(data__->CELULA0.,SZP5,,__GET_LOCATED(data__->S17,));
  __SET_VAR(data__->CELULA0.,SXN5,,__GET_LOCATED(data__->S16,));
  __SET_VAR(data__->CELULA0.,SZN5,,__GET_LOCATED(data__->S18,));
  __SET_VAR(data__->CELULA0.,SP5,,__GET_LOCATED(data__->S13,));
  __SET_VAR(data__->CELULA0.,SP6,,__GET_LOCATED(data__->S19,));
  __SET_VAR(data__->CELULA0.,SH6,,__GET_LOCATED(data__->S21,));
  __SET_VAR(data__->CELULA0.,SV6,,__GET_LOCATED(data__->S20,));
  __SET_VAR(data__->CELULA0.,SP7,,__GET_LOCATED(data__->S22,));
  __SET_VAR(data__->CELULA0.,CRECEIV,,__GET_VAR(data__->ARMAZEM0.CTAKE,));
  __SET_VAR(data__->CELULA0.,CFREE_I2,,__GET_VAR(data__->CELULA1.CFREE_O,));
  __SET_VAR(data__->CELULA0.,DEST,,__GET_LOCATED(data__->DESTINO1,));
  __SET_VAR(data__->CELULA0.,CRIN,,__GET_VAR(data__->CELULA1.CROUT,));
  __SET_VAR(data__->CELULA0.,CRECIVB,,__GET_VAR(data__->CELULA1.CTAKEB,));
  __SET_VAR(data__->CELULA0.,CRINB,,__GET_VAR(data__->ARMAZEM0.CROUB,));
  __SET_VAR(data__->CELULA0.,CFREE_IB,,__GET_VAR(data__->ARMAZEM0.CFREO_B,));
  __SET_VAR(data__->CELULA0.,PX,,__GET_LOCATED(data__->PX1,));
  __SET_VAR(data__->CELULA0.,PY,,__GET_LOCATED(data__->PY1,));
  __SET_VAR(data__->CELULA0.,PX2,,__GET_LOCATED(data__->PX2,));
  __SET_VAR(data__->CELULA0.,PY2,,__GET_LOCATED(data__->PY2,));
  __SET_VAR(data__->CELULA0.,MACHINE1,,1);
  __SET_VAR(data__->CELULA0.,MACHINE2,,3);
  CELULA_body__(&data__->CELULA0);
  __SET_VAR(data__->CARGA_DESCARGA0.,SP1,,__GET_LOCATED(data__->S89,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP2,,__GET_LOCATED(data__->S90,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SH2,,__GET_LOCATED(data__->S92,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SV2,,__GET_LOCATED(data__->S91,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP6,,__GET_LOCATED(data__->S104,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SH6,,__GET_LOCATED(data__->S106,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SV6,,__GET_LOCATED(data__->S105,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP7,,__GET_LOCATED(data__->S103,));
  __SET_VAR(data__->CARGA_DESCARGA0.,CRECEIV,,__GET_VAR(data__->CELULA_ROBOT0.CTAKE,));
  __SET_VAR(data__->CARGA_DESCARGA0.,DEST,,__GET_LOCATED(data__->DESTINO5,));
  __SET_VAR(data__->CARGA_DESCARGA0.,CRINB,,__GET_VAR(data__->CELULA_ROBOT0.CROUB,));
  __SET_VAR(data__->CARGA_DESCARGA0.,CFREE_IB,,__GET_VAR(data__->CELULA_ROBOT0.CFREE_OB,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP3,,__GET_LOCATED(data__->S94,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SREST3,,__GET_LOCATED(data__->S95,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPUSH3,,__GET_LOCATED(data__->S96,));
  __SET_VAR(data__->CARGA_DESCARGA0.,P_OUT1,,__GET_LOCATED(data__->DESTINO6,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPR3,,__GET_LOCATED(data__->S108,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP4,,__GET_LOCATED(data__->S93,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP5,,__GET_LOCATED(data__->S97,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SREST5,,__GET_LOCATED(data__->S98,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPUSH5,,__GET_LOCATED(data__->S99,));
  __SET_VAR(data__->CARGA_DESCARGA0.,P_OUT2,,__GET_LOCATED(data__->DESTINO7,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPR5,,__GET_LOCATED(data__->S109,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP8,,__GET_LOCATED(data__->S100,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SREST8,,__GET_LOCATED(data__->S101,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPUSH8,,__GET_LOCATED(data__->S102,));
  __SET_VAR(data__->CARGA_DESCARGA0.,P_OUT3,,__GET_LOCATED(data__->DESTINO8,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SPR8,,__GET_LOCATED(data__->S110,));
  __SET_VAR(data__->CARGA_DESCARGA0.,SP9,,__GET_LOCATED(data__->S107,));
  __SET_VAR(data__->CARGA_DESCARGA0.,CARGADESCP,,__GET_LOCATED(data__->CARGADESCP,));
  __SET_VAR(data__->CARGA_DESCARGA0.,CARGADESCP2,,__GET_LOCATED(data__->CARGADESCP2,));
  CARGA_DESCARGA_body__(&data__->CARGA_DESCARGA0);
  __SET_VAR(data__->CELULA_ROBOT0.,SP1,,__GET_LOCATED(data__->S65,));
  __SET_VAR(data__->CELULA_ROBOT0.,SP2,,__GET_LOCATED(data__->S66,));
  __SET_VAR(data__->CELULA_ROBOT0.,SH2,,__GET_LOCATED(data__->S68,));
  __SET_VAR(data__->CELULA_ROBOT0.,SV2,,__GET_LOCATED(data__->S67,));
  __SET_VAR(data__->CELULA_ROBOT0.,SP6,,__GET_LOCATED(data__->S73,));
  __SET_VAR(data__->CELULA_ROBOT0.,SH6,,__GET_LOCATED(data__->S75,));
  __SET_VAR(data__->CELULA_ROBOT0.,SV6,,__GET_LOCATED(data__->S74,));
  __SET_VAR(data__->CELULA_ROBOT0.,SP7,,__GET_LOCATED(data__->S72,));
  __SET_VAR(data__->CELULA_ROBOT0.,CRECEIV,,__GET_VAR(data__->CELULA2.CTAKE,));
  __SET_VAR(data__->CELULA_ROBOT0.,CFREE_I2,,__GET_VAR(data__->CARGA_DESCARGA0.CFREE_O,));
  __SET_VAR(data__->CELULA_ROBOT0.,DEST,,__GET_LOCATED(data__->DESTINO4,));
  __SET_VAR(data__->CELULA_ROBOT0.,CRIN,,__GET_VAR(data__->CARGA_DESCARGA0.CROUT,));
  __SET_VAR(data__->CELULA_ROBOT0.,CRECIVB,,__GET_VAR(data__->CARGA_DESCARGA0.CTAKEB,));
  __SET_VAR(data__->CELULA_ROBOT0.,CRINB,,__GET_VAR(data__->CELULA2.CROUB,));
  __SET_VAR(data__->CELULA_ROBOT0.,CFREE_IB,,__GET_VAR(data__->CELULA2.CFREE_OB,));
  __SET_VAR(data__->CELULA_ROBOT0.,SX0,,__GET_LOCATED(data__->S79,));
  __SET_VAR(data__->CELULA_ROBOT0.,SX1,,__GET_LOCATED(data__->S80,));
  __SET_VAR(data__->CELULA_ROBOT0.,SY0,,__GET_LOCATED(data__->S81,));
  __SET_VAR(data__->CELULA_ROBOT0.,SY1,,__GET_LOCATED(data__->S82,));
  __SET_VAR(data__->CELULA_ROBOT0.,SY2,,__GET_LOCATED(data__->S83,));
  __SET_VAR(data__->CELULA_ROBOT0.,SY3,,__GET_LOCATED(data__->S84,));
  __SET_VAR(data__->CELULA_ROBOT0.,SY4,,__GET_LOCATED(data__->S85,));
  __SET_VAR(data__->CELULA_ROBOT0.,ZBOT,,__GET_LOCATED(data__->S86,));
  __SET_VAR(data__->CELULA_ROBOT0.,ZTOP,,__GET_LOCATED(data__->S87,));
  __SET_VAR(data__->CELULA_ROBOT0.,PIECE,,__GET_LOCATED(data__->S88,));
  __SET_VAR(data__->CELULA_ROBOT0.,S1,,__GET_LOCATED(data__->S69,));
  __SET_VAR(data__->CELULA_ROBOT0.,S2,,__GET_LOCATED(data__->S70,));
  __SET_VAR(data__->CELULA_ROBOT0.,S3,,__GET_LOCATED(data__->S71,));
  __SET_VAR(data__->CELULA_ROBOT0.,FROMMES,,__GET_LOCATED(data__->ROBDESCP,));
  CELULA_ROBOT_body__(&data__->CELULA_ROBOT0);
  __SET_VAR(data__->CELULA2.,SP1,,__GET_LOCATED(data__->S44,));
  __SET_VAR(data__->CELULA2.,SP2,,__GET_LOCATED(data__->S45,));
  __SET_VAR(data__->CELULA2.,SH2,,__GET_LOCATED(data__->S47,));
  __SET_VAR(data__->CELULA2.,SV2,,__GET_LOCATED(data__->S46,));
  __SET_VAR(data__->CELULA2.,SP3,,__GET_LOCATED(data__->S48,));
  __SET_VAR(data__->CELULA2.,ST3,,__GET_LOCATED(data__->S49,));
  __SET_VAR(data__->CELULA2.,SXP3,,__GET_LOCATED(data__->S50,));
  __SET_VAR(data__->CELULA2.,SXN3,,__GET_LOCATED(data__->S51,));
  __SET_VAR(data__->CELULA2.,SZP3,,__GET_LOCATED(data__->S52,));
  __SET_VAR(data__->CELULA2.,SZN3,,__GET_LOCATED(data__->S53,));
  __SET_VAR(data__->CELULA2.,DESTINO,,1);
  __SET_VAR(data__->CELULA2.,SP4,,__GET_LOCATED(data__->S54,));
  __SET_VAR(data__->CELULA2.,ST5,,__GET_LOCATED(data__->S56,));
  __SET_VAR(data__->CELULA2.,SXP5,,__GET_LOCATED(data__->S57,));
  __SET_VAR(data__->CELULA2.,SZP5,,__GET_LOCATED(data__->S59,));
  __SET_VAR(data__->CELULA2.,SXN5,,__GET_LOCATED(data__->S58,));
  __SET_VAR(data__->CELULA2.,SZN5,,__GET_LOCATED(data__->S60,));
  __SET_VAR(data__->CELULA2.,SP5,,__GET_LOCATED(data__->S55,));
  __SET_VAR(data__->CELULA2.,SP6,,__GET_LOCATED(data__->S61,));
  __SET_VAR(data__->CELULA2.,SH6,,__GET_LOCATED(data__->S63,));
  __SET_VAR(data__->CELULA2.,SV6,,__GET_LOCATED(data__->S62,));
  __SET_VAR(data__->CELULA2.,SP7,,__GET_LOCATED(data__->S64,));
  __SET_VAR(data__->CELULA2.,CRECEIV,,__GET_VAR(data__->CELULA1.CTAKE,));
  __SET_VAR(data__->CELULA2.,CFREE_I2,,__GET_VAR(data__->CELULA_ROBOT0.CFREE_O,));
  __SET_VAR(data__->CELULA2.,DEST,,__GET_LOCATED(data__->DESTINO3,));
  __SET_VAR(data__->CELULA2.,CRIN,,__GET_VAR(data__->CELULA_ROBOT0.CROUT,));
  __SET_VAR(data__->CELULA2.,CRECIVB,,__GET_VAR(data__->CELULA_ROBOT0.CTAKEB,));
  __SET_VAR(data__->CELULA2.,CRINB,,__GET_VAR(data__->CELULA1.CROUB,));
  __SET_VAR(data__->CELULA2.,CFREE_IB,,__GET_VAR(data__->CELULA1.CFREE_OB,));
  __SET_VAR(data__->CELULA2.,PX,,__GET_LOCATED(data__->PX5,));
  __SET_VAR(data__->CELULA2.,PY,,__GET_LOCATED(data__->PY5,));
  __SET_VAR(data__->CELULA2.,PX2,,__GET_LOCATED(data__->PX6,));
  __SET_VAR(data__->CELULA2.,PY2,,__GET_LOCATED(data__->PY6,));
  __SET_VAR(data__->CELULA2.,MACHINE1,,2);
  __SET_VAR(data__->CELULA2.,MACHINE2,,3);
  CELULA_body__(&data__->CELULA2);
  __SET_VAR(data__->CELULA1.,SP1,,__GET_LOCATED(data__->S23,));
  __SET_VAR(data__->CELULA1.,SP2,,__GET_LOCATED(data__->S24,));
  __SET_VAR(data__->CELULA1.,SH2,,__GET_LOCATED(data__->S26,));
  __SET_VAR(data__->CELULA1.,SV2,,__GET_LOCATED(data__->S25,));
  __SET_VAR(data__->CELULA1.,SP3,,__GET_LOCATED(data__->S27,));
  __SET_VAR(data__->CELULA1.,ST3,,__GET_LOCATED(data__->S28,));
  __SET_VAR(data__->CELULA1.,SXP3,,__GET_LOCATED(data__->S29,));
  __SET_VAR(data__->CELULA1.,SXN3,,__GET_LOCATED(data__->S30,));
  __SET_VAR(data__->CELULA1.,SZP3,,__GET_LOCATED(data__->S31,));
  __SET_VAR(data__->CELULA1.,SZN3,,__GET_LOCATED(data__->S32,));
  __SET_VAR(data__->CELULA1.,DESTINO,,1);
  __SET_VAR(data__->CELULA1.,SP4,,__GET_LOCATED(data__->S33,));
  __SET_VAR(data__->CELULA1.,ST5,,__GET_LOCATED(data__->S35,));
  __SET_VAR(data__->CELULA1.,SXP5,,__GET_LOCATED(data__->S36,));
  __SET_VAR(data__->CELULA1.,SZP5,,__GET_LOCATED(data__->S38,));
  __SET_VAR(data__->CELULA1.,SXN5,,__GET_LOCATED(data__->S37,));
  __SET_VAR(data__->CELULA1.,SZN5,,__GET_LOCATED(data__->S39,));
  __SET_VAR(data__->CELULA1.,SP5,,__GET_LOCATED(data__->S34,));
  __SET_VAR(data__->CELULA1.,SP6,,__GET_LOCATED(data__->S40,));
  __SET_VAR(data__->CELULA1.,SH6,,__GET_LOCATED(data__->S42,));
  __SET_VAR(data__->CELULA1.,SV6,,__GET_LOCATED(data__->S41,));
  __SET_VAR(data__->CELULA1.,SP7,,__GET_LOCATED(data__->S43,));
  __SET_VAR(data__->CELULA1.,CRECEIV,,__GET_VAR(data__->CELULA0.CTAKE,));
  __SET_VAR(data__->CELULA1.,CFREE_I2,,__GET_VAR(data__->CELULA2.CFREE_O,));
  __SET_VAR(data__->CELULA1.,DEST,,__GET_LOCATED(data__->DESTINO2,));
  __SET_VAR(data__->CELULA1.,CRIN,,__GET_VAR(data__->CELULA2.CROUT,));
  __SET_VAR(data__->CELULA1.,CRECIVB,,__GET_VAR(data__->CELULA2.CTAKEB,));
  __SET_VAR(data__->CELULA1.,CRINB,,__GET_VAR(data__->CELULA0.CROUB,));
  __SET_VAR(data__->CELULA1.,CFREE_IB,,__GET_VAR(data__->CELULA0.CFREE_OB,));
  __SET_VAR(data__->CELULA1.,PX,,__GET_LOCATED(data__->PX3,));
  __SET_VAR(data__->CELULA1.,PY,,__GET_LOCATED(data__->PY3,));
  __SET_VAR(data__->CELULA1.,PX2,,__GET_LOCATED(data__->PX4,));
  __SET_VAR(data__->CELULA1.,PY2,,__GET_LOCATED(data__->PY4,));
  __SET_VAR(data__->CELULA1.,MACHINE1,,1);
  __SET_VAR(data__->CELULA1.,MACHINE2,,3);
  CELULA_body__(&data__->CELULA1);
  __SET_LOCATED(data__->,Q38,,__GET_VAR(data__->CELULA1.AP1,));
  __SET_LOCATED(data__->,Q70,,__GET_VAR(data__->CELULA2.AP1,));
  __SET_LOCATED(data__->,Q6,,__GET_VAR(data__->CELULA0.AP1,));
  __SET_LOCATED(data__->,Q102,,__GET_VAR(data__->CELULA_ROBOT0.AP1,));
  __SET_LOCATED(data__->,Q125,,__GET_VAR(data__->CARGA_DESCARGA0.AP1,));
  __SET_LOCATED(data__->,Q4,,__GET_VAR(data__->ARMAZEM0.TAPETESTORE,));
  __SET_LOCATED(data__->,Q8,,__GET_VAR(data__->CELULA0.AP2,));
  __SET_LOCATED(data__->,Q40,,__GET_VAR(data__->CELULA1.AP2,));
  __SET_LOCATED(data__->,Q72,,__GET_VAR(data__->CELULA2.AP2,));
  __SET_LOCATED(data__->,Q127,,__GET_VAR(data__->CARGA_DESCARGA0.AP2,));
  __SET_LOCATED(data__->,Q1,,__GET_VAR(data__->ARMAZEM0.A1,));
  __SET_LOCATED(data__->,Q10,,__GET_VAR(data__->CELULA0.AH2,));
  __SET_LOCATED(data__->,Q42,,__GET_VAR(data__->CELULA1.AH2,));
  __SET_LOCATED(data__->,Q74,,__GET_VAR(data__->CELULA2.AH2,));
  __SET_LOCATED(data__->,Q104,,__GET_VAR(data__->CELULA_ROBOT0.AP2,));
  __SET_LOCATED(data__->,Q129,,__GET_VAR(data__->CARGA_DESCARGA0.AH2,));
  __SET_LOCATED(data__->,ORDEM,,__GET_VAR(data__->ARMAZEM0.PECAADD,));
  __SET_LOCATED(data__->,Q9,,__GET_VAR(data__->CELULA0.AV2,));
  __SET_LOCATED(data__->,Q41,,__GET_VAR(data__->CELULA1.AV2,));
  __SET_LOCATED(data__->,Q73,,__GET_VAR(data__->CELULA2.AV2,));
  __SET_LOCATED(data__->,Q106,,__GET_VAR(data__->CELULA_ROBOT0.AH2,));
  __SET_LOCATED(data__->,Q128,,__GET_VAR(data__->CARGA_DESCARGA0.AV2,));
  __SET_LOCATED(data__->,Q12,,__GET_VAR(data__->CELULA0.AP3,));
  __SET_LOCATED(data__->,Q44,,__GET_VAR(data__->CELULA1.AP3,));
  __SET_LOCATED(data__->,Q76,,__GET_VAR(data__->CELULA2.AP3,));
  __SET_LOCATED(data__->,Q105,,__GET_VAR(data__->CELULA_ROBOT0.AV2,));
  __SET_LOCATED(data__->,Q126,,__GET_VAR(data__->CARGA_DESCARGA0.AN2,));
  __SET_LOCATED(data__->,Q2,,__GET_VAR(data__->ARMAZEM0.A2,));
  __SET_LOCATED(data__->,Q14,,__GET_VAR(data__->CELULA0.ARP3,));
  __SET_LOCATED(data__->,Q46,,__GET_VAR(data__->CELULA1.ARP3,));
  __SET_LOCATED(data__->,Q45,,__GET_VAR(data__->CELULA1.ARN3,));
  __SET_LOCATED(data__->,Q78,,__GET_VAR(data__->CELULA2.ARP3,));
  __SET_LOCATED(data__->,Q13,,__GET_VAR(data__->CELULA0.ARN3,));
  __SET_LOCATED(data__->,Q77,,__GET_VAR(data__->CELULA2.ARN3,));
  __SET_LOCATED(data__->,Q113,,__GET_VAR(data__->CELULA_ROBOT0.AN6,));
  __SET_LOCATED(data__->,Q146,,__GET_VAR(data__->CARGA_DESCARGA0.AN6,));
  __SET_LOCATED(data__->,Q16,,__GET_VAR(data__->CELULA0.AXN3,));
  __SET_LOCATED(data__->,Q48,,__GET_VAR(data__->CELULA1.AXN3,));
  __SET_LOCATED(data__->,Q80,,__GET_VAR(data__->CELULA2.AXN3,));
  __SET_LOCATED(data__->,Q19,,__GET_VAR(data__->CELULA0.AZN3,));
  __SET_LOCATED(data__->,Q51,,__GET_VAR(data__->CELULA1.AZN3,));
  __SET_LOCATED(data__->,Q83,,__GET_VAR(data__->CELULA2.AZN3,));
  __SET_LOCATED(data__->,Q149,,__GET_VAR(data__->CARGA_DESCARGA0.AH6,));
  __SET_LOCATED(data__->,OUTARM,,__GET_VAR(data__->ARMAZEM0.OUTARM,));
  __SET_LOCATED(data__->,Q116,,__GET_VAR(data__->CELULA_ROBOT0.AH6,));
  __SET_LOCATED(data__->,Q17,,__GET_VAR(data__->CELULA0.AXP3,));
  __SET_LOCATED(data__->,Q49,,__GET_VAR(data__->CELULA1.AXP3,));
  __SET_LOCATED(data__->,Q81,,__GET_VAR(data__->CELULA2.AXP3,));
  __SET_LOCATED(data__->,Q148,,__GET_VAR(data__->CARGA_DESCARGA0.AV6,));
  __SET_LOCATED(data__->,Q18,,__GET_VAR(data__->CELULA0.AZP3,));
  __SET_LOCATED(data__->,Q50,,__GET_VAR(data__->CELULA1.AZP3,));
  __SET_LOCATED(data__->,Q115,,__GET_VAR(data__->CELULA_ROBOT0.AV6,));
  __SET_LOCATED(data__->,Q82,,__GET_VAR(data__->CELULA2.AZP3,));
  __SET_LOCATED(data__->,Q147,,__GET_VAR(data__->CARGA_DESCARGA0.AP6,));
  __SET_LOCATED(data__->,Q114,,__GET_VAR(data__->CELULA_ROBOT0.AP6,));
  __SET_LOCATED(data__->,Q15,,__GET_VAR(data__->CELULA0.ATOOL3,));
  __SET_LOCATED(data__->,Q47,,__GET_VAR(data__->CELULA1.ATOOL3,));
  __SET_LOCATED(data__->,Q79,,__GET_VAR(data__->CELULA2.ATOOL3,));
  __SET_LOCATED(data__->,Q144,,__GET_VAR(data__->CARGA_DESCARGA0.AV7,));
  __SET_LOCATED(data__->,Q21,,__GET_VAR(data__->CELULA0.AP4,));
  __SET_LOCATED(data__->,Q53,,__GET_VAR(data__->CELULA1.AP4,));
  __SET_LOCATED(data__->,Q85,,__GET_VAR(data__->CELULA2.AP4,));
  __SET_LOCATED(data__->,Q111,,__GET_VAR(data__->CELULA_ROBOT0.AV7,));
  __SET_LOCATED(data__->,Q27,,__GET_VAR(data__->CELULA0.AXN5,));
  __SET_LOCATED(data__->,Q59,,__GET_VAR(data__->CELULA1.AXN5,));
  __SET_LOCATED(data__->,Q91,,__GET_VAR(data__->CELULA2.AXN5,));
  __SET_LOCATED(data__->,Q58,,__GET_VAR(data__->CELULA1.ATOOL5,));
  __SET_LOCATED(data__->,Q90,,__GET_VAR(data__->CELULA2.ATOOL5,));
  __SET_LOCATED(data__->,Q26,,__GET_VAR(data__->CELULA0.ATOOL5,));
  __SET_LOCATED(data__->,Q60,,__GET_VAR(data__->CELULA1.AXP5,));
  __SET_LOCATED(data__->,Q92,,__GET_VAR(data__->CELULA2.AXP5,));
  __SET_LOCATED(data__->,Q28,,__GET_VAR(data__->CELULA0.AXP5,));
  __SET_LOCATED(data__->,Q62,,__GET_VAR(data__->CELULA1.AZP5,));
  __SET_LOCATED(data__->,Q94,,__GET_VAR(data__->CELULA2.AZP5,));
  __SET_LOCATED(data__->,Q30,,__GET_VAR(data__->CELULA0.AZP5,));
  __SET_LOCATED(data__->,Q61,,__GET_VAR(data__->CELULA1.AZN5,));
  __SET_LOCATED(data__->,Q133,,__GET_VAR(data__->CARGA_DESCARGA0.AN3,));
  __SET_LOCATED(data__->,Q93,,__GET_VAR(data__->CELULA2.AZN5,));
  __SET_LOCATED(data__->,Q29,,__GET_VAR(data__->CELULA0.AZN5,));
  __SET_LOCATED(data__->,Q55,,__GET_VAR(data__->CELULA1.AP5,));
  __SET_LOCATED(data__->,Q23,,__GET_VAR(data__->CELULA0.AP5,));
  __SET_LOCATED(data__->,Q87,,__GET_VAR(data__->CELULA2.AP5,));
  __SET_LOCATED(data__->,Q135,,__GET_VAR(data__->CARGA_DESCARGA0.APUSH3,));
  __SET_LOCATED(data__->,Q63,,__GET_VAR(data__->CELULA1.AN6,));
  __SET_LOCATED(data__->,Q95,,__GET_VAR(data__->CELULA2.AN6,));
  __SET_LOCATED(data__->,Q31,,__GET_VAR(data__->CELULA0.AN6,));
  __SET_LOCATED(data__->,Q134,,__GET_VAR(data__->CARGA_DESCARGA0.ARET3,));
  __SET_LOCATED(data__->,Q56,,__GET_VAR(data__->CELULA1.ARN5,));
  __SET_LOCATED(data__->,Q24,,__GET_VAR(data__->CELULA0.ARN5,));
  __SET_LOCATED(data__->,Q65,,__GET_VAR(data__->CELULA1.AH6,));
  __SET_LOCATED(data__->,Q130,,__GET_VAR(data__->CARGA_DESCARGA0.AP4,));
  __SET_LOCATED(data__->,Q25,,__GET_VAR(data__->CELULA0.ARP5,));
  __SET_LOCATED(data__->,Q97,,__GET_VAR(data__->CELULA2.AH6,));
  __SET_LOCATED(data__->,Q33,,__GET_VAR(data__->CELULA0.AH6,));
  __SET_LOCATED(data__->,Q57,,__GET_VAR(data__->CELULA1.ARP5,));
  __SET_LOCATED(data__->,Q66,,__GET_VAR(data__->CELULA1.AV6,));
  __SET_LOCATED(data__->,Q89,,__GET_VAR(data__->CELULA2.ARP5,));
  __SET_LOCATED(data__->,Q98,,__GET_VAR(data__->CELULA2.AV6,));
  __SET_LOCATED(data__->,Q131,,__GET_VAR(data__->CARGA_DESCARGA0.AN4,));
  __SET_LOCATED(data__->,Q34,,__GET_VAR(data__->CELULA0.AV6,));
  __SET_LOCATED(data__->,Q64,,__GET_VAR(data__->CELULA1.AP6,));
  __SET_LOCATED(data__->,Q88,,__GET_VAR(data__->CELULA2.ARN5,));
  __SET_LOCATED(data__->,Q96,,__GET_VAR(data__->CELULA2.AP6,));
  __SET_LOCATED(data__->,Q139,,__GET_VAR(data__->CARGA_DESCARGA0.APUSH5,));
  __SET_LOCATED(data__->,Q32,,__GET_VAR(data__->CELULA0.AP6,));
  __SET_LOCATED(data__->,Q117,,__GET_VAR(data__->CELULA_ROBOT0.MXP,));
  __SET_LOCATED(data__->,Q138,,__GET_VAR(data__->CARGA_DESCARGA0.ARET5,));
  __SET_LOCATED(data__->,Q35,,__GET_VAR(data__->CELULA0.AV7,));
  __SET_LOCATED(data__->,Q67,,__GET_VAR(data__->CELULA1.AV7,));
  __SET_LOCATED(data__->,Q99,,__GET_VAR(data__->CELULA2.AV7,));
  __SET_LOCATED(data__->,Q118,,__GET_VAR(data__->CELULA_ROBOT0.MXN,));
  __SET_LOCATED(data__->,Q137,,__GET_VAR(data__->CARGA_DESCARGA0.AN5,));
  __SET_LOCATED(data__->,Q143,,__GET_VAR(data__->CARGA_DESCARGA0.APUSH8,));
  __SET_LOCATED(data__->,Q119,,__GET_VAR(data__->CELULA_ROBOT0.MYP,));
  __SET_LOCATED(data__->,Q142,,__GET_VAR(data__->CARGA_DESCARGA0.ARET8,));
  __SET_LOCATED(data__->,Q120,,__GET_VAR(data__->CELULA_ROBOT0.MYN,));
  __SET_LOCATED(data__->,Q141,,__GET_VAR(data__->CARGA_DESCARGA0.AN8,));
  __SET_LOCATED(data__->,Q121,,__GET_VAR(data__->CELULA_ROBOT0.MZP,));
  __SET_LOCATED(data__->,Q150,,__GET_VAR(data__->CARGA_DESCARGA0.AN9,));
  __SET_LOCATED(data__->,Q122,,__GET_VAR(data__->CELULA_ROBOT0.MZN,));
  __SET_LOCATED(data__->,SPC1,,__GET_VAR(data__->CARGA_DESCARGA0.SCP1,));
  __SET_LOCATED(data__->,Q123,,__GET_VAR(data__->CELULA_ROBOT0.GRAB,));
  __SET_LOCATED(data__->,SPC2,,__GET_VAR(data__->CARGA_DESCARGA0.SCP2,));
  __SET_LOCATED(data__->,Q107,,__GET_VAR(data__->CELULA_ROBOT0.A1,));
  __SET_LOCATED(data__->,SROLLER1,,__GET_VAR(data__->CARGA_DESCARGA0.ROLLEROCUP1,));
  __SET_LOCATED(data__->,SROLLER2,,__GET_VAR(data__->CARGA_DESCARGA0.ROLLEROCUP2,));
  __SET_LOCATED(data__->,Q108,,__GET_VAR(data__->CELULA_ROBOT0.A2,));
  __SET_LOCATED(data__->,SROLLER3,,__GET_VAR(data__->CARGA_DESCARGA0.ROLLEROCUP3,));
  __SET_LOCATED(data__->,Q109,,__GET_VAR(data__->CELULA_ROBOT0.A3,));
  __SET_LOCATED(data__->,Q110,,__GET_VAR(data__->CELULA_ROBOT0.A4,));
  __SET_EXTERNAL(data__->,AUXR,,__GET_VAR(data__->CELULA_ROBOT0.AUXR,));
  __SET_LOCATED(data__->,ROBODESC,,__GET_VAR(data__->CELULA_ROBOT0.TOMES,));
  __SET_VAR(data__->INTOOUT0.,X1,,__GET_LOCATED(data__->S3,));
  __SET_VAR(data__->INTOOUT0.,X2,,__GET_LOCATED(data__->S6,));
  __SET_VAR(data__->INTOOUT0.,X3,,__GET_LOCATED(data__->S13,));
  __SET_VAR(data__->INTOOUT0.,X4,,__GET_LOCATED(data__->S24,));
  __SET_VAR(data__->INTOOUT0.,X5,,__GET_LOCATED(data__->S27,));
  __SET_VAR(data__->INTOOUT0.,X6,,__GET_LOCATED(data__->S34,));
  __SET_VAR(data__->INTOOUT0.,X7,,__GET_LOCATED(data__->S45,));
  __SET_VAR(data__->INTOOUT0.,X8,,__GET_LOCATED(data__->S48,));
  __SET_VAR(data__->INTOOUT0.,X9,,__GET_LOCATED(data__->S55,));
  __SET_VAR(data__->INTOOUT0.,MI1,,__GET_LOCATED(data__->S6,));
  __SET_VAR(data__->INTOOUT0.,MI2,,__GET_LOCATED(data__->S13,));
  __SET_VAR(data__->INTOOUT0.,MI3,,__GET_LOCATED(data__->S27,));
  __SET_VAR(data__->INTOOUT0.,MI4,,__GET_LOCATED(data__->S34,));
  __SET_VAR(data__->INTOOUT0.,MI5,,__GET_LOCATED(data__->S48,));
  __SET_VAR(data__->INTOOUT0.,MI6,,__GET_LOCATED(data__->S55,));
  __SET_VAR(data__->INTOOUT0.,SI,,__GET_LOCATED(data__->S0,));
  __SET_VAR(data__->INTOOUT0.,X10,,__GET_LOCATED(data__->S66,));
  __SET_VAR(data__->INTOOUT0.,X11,,__GET_LOCATED(data__->S90,));
  __SET_VAR(data__->INTOOUT0.,X12,,__GET_LOCATED(data__->S94,));
  __SET_VAR(data__->INTOOUT0.,X13,,__GET_LOCATED(data__->S97,));
  __SET_VAR(data__->INTOOUT0.,X14,,__GET_LOCATED(data__->S100,));
  __SET_VAR(data__->INTOOUT0.,X20,,__GET_LOCATED(data__->S103,));
  __SET_VAR(data__->INTOOUT0.,X21,,__GET_LOCATED(data__->S107,));
  INTOOUT_body__(&data__->INTOOUT0);
  __SET_LOCATED(data__->,SROT1,,__GET_VAR(data__->INTOOUT0.Y1,));
  __SET_LOCATED(data__->,SROT2,,__GET_VAR(data__->INTOOUT0.Y4,));
  __SET_LOCATED(data__->,SROT3,,__GET_VAR(data__->INTOOUT0.Y7,));
  __SET_LOCATED(data__->,SMAQ1,,__GET_VAR(data__->INTOOUT0.Y2,));
  __SET_LOCATED(data__->,SMAQ2,,__GET_VAR(data__->INTOOUT0.Y3,));
  __SET_LOCATED(data__->,SMAQ3,,__GET_VAR(data__->INTOOUT0.Y5,));
  __SET_LOCATED(data__->,SMAQ4,,__GET_VAR(data__->INTOOUT0.Y6,));
  __SET_LOCATED(data__->,SMAQ5,,__GET_VAR(data__->INTOOUT0.Y8,));
  __SET_LOCATED(data__->,SMAQ6,,__GET_VAR(data__->INTOOUT0.Y9,));
  __SET_EXTERNAL(data__->,AUX1,,__GET_VAR(data__->INTOOUT0.MO1,));
  __SET_EXTERNAL(data__->,AUX2,,__GET_VAR(data__->INTOOUT0.MO2,));
  __SET_EXTERNAL(data__->,AUX3,,__GET_VAR(data__->INTOOUT0.MO3,));
  __SET_EXTERNAL(data__->,AUX4,,__GET_VAR(data__->INTOOUT0.MO4,));
  __SET_EXTERNAL(data__->,AUX5,,__GET_VAR(data__->INTOOUT0.MO5,));
  __SET_EXTERNAL(data__->,AUX6,,__GET_VAR(data__->INTOOUT0.MO6,));
  __SET_LOCATED(data__->,SENTRADA,,__GET_VAR(data__->INTOOUT0.SO,));
  __SET_LOCATED(data__->,SROT4,,__GET_VAR(data__->INTOOUT0.Y10,));
  __SET_LOCATED(data__->,SROT5,,__GET_VAR(data__->INTOOUT0.Y11,));
  __SET_LOCATED(data__->,SPUSH1,,__GET_VAR(data__->INTOOUT0.Y12,));
  __SET_LOCATED(data__->,SPUSH2,,__GET_VAR(data__->INTOOUT0.Y13,));
  __SET_LOCATED(data__->,SPUSH3,,__GET_VAR(data__->INTOOUT0.Y14,));
  __SET_LOCATED(data__->,CARGA2,,__GET_VAR(data__->INTOOUT0.Y21,));

  goto __end;

__end:
  return;
} // PROGRAM1_body__() 





