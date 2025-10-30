int __fastcall sub_305634(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r11
  __int16 *v7; // r10
  int v8; // r12
  __int16 v9; // lr
  int v10; // r4
  int v11; // r3
  int v13; // [sp+4h] [bp-8h]

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v13 = sub_305068((int)a1);
  if ( v13 )
    return -2;
  v6 = (_DWORD *)a1[7];
  if ( v6[1449] < (unsigned int)(v6[4] + 2) )
    return -5;
  v7 = (__int16 *)(v6 + 1454);
  while ( 1 )
  {
    v8 = v6[1455];
    v9 = *v7;
    v10 = 16 - v8;
    if ( a2 < 16 - v8 )
      break;
    v11 = ((1 << (16 - v8)) - 1) & a3;
    a3 >>= v10;
    *v7 = v9 | ((_WORD)v11 << v8);
    v6[1455] = 16;
    sub_30B408(v6);
    a2 -= v10;
    if ( !a2 )
      return 0;
  }
  *v7 = v9 | (((unsigned __int16)a3 & (unsigned __int16)~(-1 << a2)) << v8);
  v6[1455] = v8 + a2;
  sub_30B408(v6);
  return v13;
}
