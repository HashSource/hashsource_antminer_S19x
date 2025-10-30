int __fastcall sub_56BFC(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v5; // r8
  int v6; // r9
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r7
  unsigned int v12; // r3
  unsigned int v13; // r5
  unsigned int v14; // r1
  unsigned int v15; // r0

  if ( a3 > 0x10000 )
    a4 = a3 - 0x10000;
  v4 = a2;
  v5 = a3;
  if ( a3 > 0x10000 )
  {
    v4 = a2 + a4;
    v5 = 0x10000;
  }
  v6 = a1 + 0x40000;
  v8 = *(__int16 *)(a1 + 262168);
  if ( !(a1 << 30) )
    sub_52D48((_WORD *)a1);
  if ( v8 > 0 )
  {
    if ( v8 >= 12 )
      LOWORD(v8) = 12;
  }
  else
  {
    LOWORD(v8) = 9;
  }
  *(_WORD *)(v6 + 24) = v8;
  sub_50B68((_DWORD *)a1, v4);
  v9 = v4 + v5;
  *(_DWORD *)v6 = v4 + v5;
  if ( v5 > 3 )
  {
    v10 = *(_DWORD *)(v6 + 12);
    v11 = *(_DWORD *)(a1 + 262148);
    v12 = *(_DWORD *)(v6 + 20);
    v13 = v9 - 3 - v11 + v10;
    if ( v13 > v12 )
    {
      do
      {
        v14 = (unsigned int)(-1640531535 * *(_DWORD *)(v11 + v12 - v10)) >> 17;
        v15 = v12 - *(_DWORD *)(a1 + 4 * v14);
        if ( v15 >= 0xFFFF )
          LOWORD(v15) = -1;
        *(_WORD *)(a1 + 0x20000 + 2 * (unsigned __int16)v12) = v15;
        *(_DWORD *)(a1 + 4 * v14) = v12++;
      }
      while ( v13 != v12 );
    }
    *(_DWORD *)(v6 + 20) = v13;
  }
  return v5;
}
