int __fastcall sub_5E2F0(int a1, int a2, int a3, int a4)
{
  int *v4; // r10
  _DWORD *v7; // r8
  unsigned int v8; // r1
  int v9; // r3
  int v10; // r12
  int v11; // r0
  unsigned int v12; // lr
  int *v13; // r9
  int v14; // r12
  unsigned int v15; // lr
  int v16; // r1
  __int64 v17; // r2
  double v18; // r0
  double v19; // d0
  int v20; // r2
  double v21; // r0
  int v22; // r12
  int v23; // r3
  _DWORD *v24; // r2
  double v25; // r0
  double v26; // d0
  int v27; // r2
  __int64 v29; // [sp+0h] [bp-18h]

  v7 = **(_DWORD ***)(a1 + 84);
  v8 = v7[225];
  v9 = v7[224];
  v10 = v7[222];
  v11 = v9 | v8;
  v12 = v7[223];
  if ( *((_QWORD *)v7 + 112) )
  {
    v13 = v7 + 224;
  }
  else
  {
    v4 = v7 + 222;
    v13 = v7 + 224;
    v11 = v7[222];
    v8 = v7[223];
  }
  if ( *((_QWORD *)v7 + 112) )
  {
    v4 = v7 + 222;
  }
  else
  {
    *v13 = v11;
    v13[1] = v8;
    v9 = v11;
    v8 = v7[225];
  }
  v14 = v10 - v9;
  LODWORD(v29) = 0;
  if ( v12 < v8 )
    --v14;
  v15 = v12 - v8;
  HIDWORD(v29) = v14;
  v16 = v4[1];
  v17 = v29 + v15;
  *v13 = *v4;
  v13[1] = v16;
  if ( v14 >= 0 )
  {
    v18 = COERCE_DOUBLE(sub_8BEC4(v17, HIDWORD(v17)));
    v19 = v18;
    LODWORD(v18) = -32;
    v21 = ldexp(v18, v20);
    if ( v19 <= 0.403333333 )
      goto LABEL_11;
LABEL_18:
    sub_5D924((Elf32_Dyn **)a1);
    goto LABEL_12;
  }
  v25 = COERCE_DOUBLE(sub_8BEC4(-(int)v17, (unsigned __int64)-v17 >> 32));
  v26 = v25;
  LODWORD(v25) = -32;
  v21 = ldexp(v25, v27);
  v19 = -v26;
  if ( v19 > 0.403333333 )
    goto LABEL_18;
LABEL_11:
  if ( v19 > 0.0916666667 )
  {
LABEL_12:
    v22 = 1;
    v23 = 0;
    goto LABEL_13;
  }
  v23 = v7[278];
  if ( v23 > 10 )
    return LODWORD(v21);
  v22 = v23 + 1;
LABEL_13:
  LODWORD(v21) = a3;
  v24 = &v7[2 * v23 + 80];
  v7[v23 + 266] = a2;
  *v24 = a3;
  v24[1] = a4;
  v7[278] = v22;
  return LODWORD(v21);
}
