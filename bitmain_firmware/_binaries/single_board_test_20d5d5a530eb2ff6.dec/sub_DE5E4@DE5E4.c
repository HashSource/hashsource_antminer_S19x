int __fastcall sub_DE5E4(_DWORD *a1, const void *a2, size_t a3, int a4, int a5, int a6, unsigned int a7)
{
  int v10; // r7
  unsigned int v11; // r10
  int v12; // r1
  _BOOL4 v13; // r4
  int v14; // r0
  _DWORD *v15; // r5
  unsigned int v16; // r6
  unsigned int v17; // r11
  size_t v18; // r2
  void *v19; // r0
  char v22; // [sp+1Fh] [bp-45h] BYREF
  _BYTE v23[68]; // [sp+20h] [bp-44h] BYREF

  v10 = sub_D8C78((int)a1);
  v11 = sub_189090(a7, v10);
  sub_1892EC(a7, v10);
  if ( v12 )
    ++v11;
  v13 = a6 == 0;
  if ( v11 > 0xFF )
    v13 = 1;
  if ( v13 )
    return 0;
  v14 = sub_DCB64();
  v15 = (_DWORD *)v14;
  if ( !v14 )
    return 0;
  if ( sub_DC8C4(v14, a2, a3, a1, 0) )
  {
    if ( v11 )
    {
      v16 = 1;
      v22 = 1;
      do
      {
        v17 = a7;
        if ( !sub_DCA18(v15, a4, a5) || !sub_DCA18(v15, (int)&v22, 1) || !sub_DCA28((int)v15, (int)v23, 0) )
          break;
        v18 = v10;
        if ( a7 >= v10 + v13 )
          v17 = v10 + v13;
        else
          v18 = a7 - v13;
        ++v16;
        v19 = (void *)(a6 + v13);
        v13 = v17;
        memcpy(v19, v23, v18);
        if ( v16 > v11 )
          goto LABEL_21;
        v22 = v16;
        if ( !sub_DC8C4((int)v15, 0, 0, 0, 0) )
          break;
      }
      while ( sub_DCA18(v15, (int)v23, v10) );
      a6 = 0;
    }
  }
  else
  {
    a6 = 0;
  }
LABEL_21:
  sub_E07F8((int)v23, 0x40u);
  sub_DCA8C((int)v15);
  return a6;
}
