int __fastcall sub_7B3F4(int a1)
{
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // r5
  int v5; // r8
  int v7; // r0
  _DWORD v8[10]; // [sp+18h] [bp-28h] BYREF

  v2 = dword_474F28;
  if ( !a1 )
  {
    v7 = sub_94700("c-exp.y", 3229, "%s: Assertion `%s' failed.", "int c_parse(parser_state*)", "par_state != NULL");
    dword_474AC8 = v1;
LABEL_16:
    dword_474F28 = v2;
    sub_338FFC(v7);
  }
  dword_474F28 = a1;
  v3 = sub_9253C(sub_2589B8, &dword_474AD0);
  dword_474AD0 = 0;
  if ( dword_487CD0 )
  {
    sub_21DEAC(v8, dword_487CD4);
    dword_474AD0 = sub_1A2AC0(v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v8[7], v8[8], v8[9]);
    if ( dword_474AD0 )
      goto LABEL_4;
  }
  else
  {
    dword_474AD0 = sub_1A2BB4();
    if ( dword_474AD0 )
      goto LABEL_4;
  }
  dword_474AD0 = sub_1A2B84();
LABEL_4:
  obstack_begin(&stru_474A84, 0, 0, (void *(*)(int))sub_93028, sub_74B6C);
  if ( dword_474A80[0] )
  {
    v7 = sub_94700("c-exp.y", 3250, "%s: Assertion `%s' failed.", "int c_parse(parser_state*)", "! macro_original_text");
    goto LABEL_16;
  }
  sub_9253C(sub_74B38, 0);
  v4 = dword_474AC8;
  dword_474ACC = 0;
  dword_474C64 = 0;
  dword_474AC8 = dword_487CDC;
  if ( dword_474F24 )
    free((void *)dword_474F24);
  dword_474F24 = 0;
  dword_474F20 = 0;
  if ( stru_474F2C.object_base <= (char *)stru_474F2C.chunk || stru_474F2C.object_base >= stru_474F2C.chunk_limit )
    obstack_free(&stru_474F2C, stru_474F2C.object_base);
  else
    stru_474F2C.next_free = stru_474F2C.object_base;
  v5 = sub_76EF4();
  sub_92620(v3);
  dword_474AC8 = v4;
  dword_474F28 = v2;
  return v5;
}
