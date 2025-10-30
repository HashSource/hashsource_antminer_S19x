int __fastcall sub_BA0E0(int a1, int a2, _DWORD *a3, int a4)
{
  int v6; // r4
  int v7; // r6
  int result; // r0
  _DWORD *v10; // r5
  unsigned int v11; // r9
  unsigned int v12; // r8
  int v13; // r10
  bool v14; // zf
  int v15; // r2
  int v16; // r3
  int v17; // r3

  v6 = a4 - 1;
  v7 = a1;
  result = sub_12F8E8(a1, a2, a4, *a3);
  if ( v6 > 0 )
  {
    v10 = a3 + 13;
    v11 = v6 - ((a4 + 1) & 0xFFFFFFFC);
    v12 = v6 - (a4 & 0xFFFFFFFC);
    v13 = v6 & 3;
    do
    {
      v17 = *(v10 - 12);
      __pld(v10);
      sub_12F7C0(v7 + 4, a2, v6, v17);
      result = v7 + 8;
      if ( v6 == v11 )
        break;
      sub_12F7C0(result, a2, v6 - 1, *(v10 - 11));
      result = v7 + 12;
      v7 += 16;
      if ( v6 == v12 )
        break;
      sub_12F7C0(result, a2, v6 - 2, *(v10 - 10));
      v14 = v6 == v13;
      v15 = v6 - 3;
      result = v7;
      v6 -= 4;
      if ( v14 )
        break;
      v16 = *(v10 - 9);
      v10 += 4;
      result = sub_12F7C0(v7, a2, v15, v16);
    }
    while ( v6 > 0 );
  }
  return result;
}
