_DWORD *__fastcall sub_251070(int a1, int *a2)
{
  __int64 v2; // r2
  bool v3; // zf
  int *v6; // r3
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  int v9; // r2
  __int64 v11; // r0

  v2 = *((_QWORD *)a2 + 1);
  v3 = HIDWORD(v2) == -1;
  if ( HIDWORD(v2) == -1 )
    v3 = (_DWORD)v2 == -1;
  if ( !v3 )
  {
    v6 = a2;
    while ( *((_QWORD *)v6 + 3) != -1 )
    {
      v6 += 4;
      if ( a2 + 188 == v6 )
      {
        sub_94700(
          (int)"tramp-frame.c",
          159,
          "%s: Assertion `%s' failed.",
          "void tramp_frame_prepend_unwinder(gdbarch*, const tramp_frame*)",
          "i < ARRAY_SIZE (tramp_frame->insn)");
        goto LABEL_10;
      }
    }
  }
  if ( (unsigned int)a2[1] > 8 )
  {
LABEL_10:
    v11 = sub_94700(
            (int)"tramp-frame.c",
            160,
            "%s: Assertion `%s' failed.",
            "void tramp_frame_prepend_unwinder(gdbarch*, const tramp_frame*)",
            "tramp_frame->insn_size <= sizeof (tramp_frame->insn[0].bytes)");
    return (_DWORD *)sub_251198(v11, HIDWORD(v11));
  }
  else
  {
    v7 = sub_163938(a1, 4u);
    v8 = sub_163938(a1, 0x20u);
    v9 = *a2;
    *v7 = a2;
    *v8 = v9;
    v8[2] = sub_251054;
    v8[4] = v7;
    v8[5] = sub_250E5C;
    v8[1] = sub_160E88;
    v8[3] = sub_251030;
    return sub_160D34(a1, (int)v8);
  }
}
