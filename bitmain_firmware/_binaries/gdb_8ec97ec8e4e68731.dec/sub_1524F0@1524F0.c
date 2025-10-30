int __fastcall sub_1524F0(int result, int a2, __int64 a3)
{
  int v3; // r5
  char *v6; // r4
  int v7; // r2
  int v8; // r3
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r2
  int *v14; // r1
  int v15; // r2
  int v16; // r12
  int v17; // r12
  int *v18; // r1
  int *v19; // r3
  int v20; // lr
  int v21; // r12
  int v22; // r3

  v3 = result;
  v6 = (char *)dword_48732C;
  if ( dword_48732C )
  {
    if ( *(_DWORD *)dword_48732C == result )
      goto LABEL_10;
    while ( 1 )
    {
      v6 = (char *)*((_DWORD *)v6 + 6);
      if ( !v6 )
        break;
      if ( *(_DWORD *)v6 == result )
        goto LABEL_10;
    }
  }
  v6 = (char *)sub_93028(0x1Cu);
  v7 = (unsigned __int8)byte_46D454;
  v8 = dword_48732C;
  *(_DWORD *)v6 = v3;
  *((_DWORD *)v6 + 2) = 0;
  dword_48732C = (int)v6;
  *((_DWORD *)v6 + 6) = v8;
  if ( v7 )
  {
    v9 = ++dword_487640;
    if ( dword_487334 )
      v10 = sub_93050((void *)dword_487334, 8 * v9);
    else
      v10 = sub_93028(8u);
    dword_487334 = (int)v10;
    v11 = dword_487640 + 0x1FFFFFFF;
    v10[2 * v11] = v3;
    result = (int)&v10[2 * v11];
    *(_WORD *)(result + 4) = a2;
    *(_WORD *)(result + 6) = 0;
  }
  else
  {
    v12 = v3 / 32;
    v13 = v3 & 0x1F;
    if ( v3 <= 0 )
      v13 = -(-v3 & 0x1F);
    v14 = &dword_487320[v12 + 4];
    v15 = 1 << v13;
    v16 = v14[4];
    result = ~v15;
    if ( (a2 & 2) != 0 )
      v17 = v15 | v16;
    else
      v17 = v16 & result;
    v14[4] = v17;
    v18 = &dword_487320[v12 + 36];
    v19 = &dword_487320[v12 + 68];
    v20 = v19[4];
    v21 = v18[4] & result;
    if ( (a2 & 8) != 0 )
      v15 |= v20;
    else
      result &= v20;
    if ( (a2 & 8) != 0 )
      v19[4] = v15;
    else
      v19[4] = result;
    v22 = dword_487640;
    v18[4] = v21;
    if ( v22 <= v3 )
      dword_487640 = v3 + 1;
  }
LABEL_10:
  *(_QWORD *)(v6 + 12) = a3;
  *((_DWORD *)v6 + 1) = a2;
  return result;
}
