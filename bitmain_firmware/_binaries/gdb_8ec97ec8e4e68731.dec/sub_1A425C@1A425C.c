_BYTE *__fastcall sub_1A425C(int a1, int a2)
{
  _BYTE *v3; // r4
  int v5; // r3
  void *v6; // r0
  int v7; // r4
  _WORD v8[54]; // [sp+0h] [bp-6Ch] BYREF

  if ( a2 )
  {
    v3 = (_BYTE *)sub_324BE0(dword_487A30, "/usr/bin", a1);
    if ( !v3 )
    {
LABEL_3:
      v3 = (_BYTE *)sub_327254(a1);
      goto LABEL_4;
    }
  }
  else
  {
    v3 = (_BYTE *)sub_327254(a1);
  }
  if ( !*v3 || _xstat64(3, v3, v8) || (v8[8] & 0xF000) != 0x4000 )
  {
    free(v3);
    goto LABEL_3;
  }
LABEL_4:
  if ( !*v3 )
    return v3;
  v5 = sub_3245D0(v3);
  if ( !v5 )
    return v3;
  v6 = v3;
  v7 = v5;
  free(v6);
  return (_BYTE *)v7;
}
