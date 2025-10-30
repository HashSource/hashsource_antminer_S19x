unsigned int *__fastcall sub_1E92D8(int a1, const char *a2)
{
  unsigned int *v3; // r4
  int v4; // r0
  int v5; // r8
  __int64 v6; // r0
  void *v7; // r0
  _BYTE *v8; // r3
  void *v9; // r10
  const char **v10; // r2
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r3
  _BYTE *v14; // r3
  unsigned int v15; // r11
  const char **v16; // r3
  char *v17; // r3
  const char **v19; // [sp+8h] [bp-Ch] BYREF
  int v20; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  v5 = dword_488C94;
  v19 = 0;
  sub_1E7DEC("qTfSTM");
  sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
  HIDWORD(v6) = *(_DWORD *)v5;
  v20 = HIDWORD(v6);
  if ( *(_BYTE *)HIDWORD(v6) == 69 )
LABEL_19:
    sub_946E0("Remote failure reply: %s", (const char *)HIDWORD(v6));
  v7 = sub_9253C((int)sub_24D3FC, (int)&v19);
  v8 = (_BYTE *)v20;
  v9 = v7;
  ++v20;
  if ( *v8 == 109 )
  {
    do
    {
      v10 = v19;
      if ( !v19 )
      {
        v10 = (const char **)sub_93094(1u, 0x10u);
        v19 = v10;
      }
      v11 = v20;
      while ( 1 )
      {
        sub_24D448(v11, &v20, v10);
        v15 = (unsigned int)v19;
        if ( !a2 || !strcmp(a2, v19[2]) )
        {
          if ( !v3 || (v12 = *v3, v13 = v3[1], v13 == *v3) )
          {
            v3 = sub_99FE0(v3, 1);
            v12 = *v3;
            v13 = v3[1];
          }
          if ( v12 >= v13 )
          {
            v6 = sub_94700(
                   (int)"remote.c",
                   3441,
                   "%s: Assertion `%s' failed.",
                   "static_tracepoint_marker** VEC_static_tracepoint_marker_p_quick_push(VEC_static_tracepoint_marker_p*,"
                   " static_tracepoint_marker_p, const char*, unsigned int)",
                   "quick_push");
            goto LABEL_19;
          }
          *v3 = v12 + 1;
          v3[v12 + 2] = v15;
          v19 = 0;
        }
        else
        {
          sub_24D520(v15);
          v16 = v19;
          *v19 = 0;
          v16[1] = 0;
          v16[2] = 0;
          v16[3] = 0;
        }
        v14 = (_BYTE *)v20;
        v11 = ++v20;
        if ( *v14 != 44 )
          break;
        v10 = v19;
      }
      sub_1E7DEC("qTsSTM");
      sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
      v17 = *(char **)v5;
      v20 = *(_DWORD *)v5 + 1;
    }
    while ( *v17 == 109 );
  }
  sub_92620(v9);
  return v3;
}
