void __fastcall sub_1D7DAC(_BYTE *a1)
{
  int v2; // r0
  __int64 v3; // r0
  _DWORD *v4; // r0
  int v5; // r2
  _DWORD *v6; // r8
  _DWORD *v7; // r4
  _DWORD *v8; // r0

  if ( dword_487D4C )
  {
    v8 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v8, "[record-btrace] open\n");
  }
  v2 = sub_1D3754();
  if ( !sub_22EBBC(v2) )
LABEL_16:
    sub_946E0("The program is not being run.", HIDWORD(v3));
  if ( dword_487D98 )
  {
    v3 = sub_94700(
           (int)"record-btrace.c",
           241,
           "%s: Assertion `%s' failed.",
           "void record_btrace_open(const char*, int)",
           "record_btrace_thread_observer == NULL");
    goto LABEL_16;
  }
  v4 = sub_9253C((int)nullsub_39, 0);
  v6 = v4;
  v7 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( 1 )
    {
      if ( v7[11] == 2 )
        goto LABEL_8;
      if ( a1 && *a1 && (v4 = (_DWORD *)sub_5AF7C(a1, v7[5], v5)) == 0 )
      {
        v7 = (_DWORD *)v7[1];
        if ( !v7 )
          break;
      }
      else
      {
        sub_E37A4((int)v7, &dword_487D6C);
        v4 = sub_9253C((int)sub_1D6B48, (int)v7);
LABEL_8:
        v7 = (_DWORD *)v7[1];
        if ( !v7 )
          break;
      }
    }
  }
  sub_1D7D1C((int)v4);
  sub_92640(v6);
}
