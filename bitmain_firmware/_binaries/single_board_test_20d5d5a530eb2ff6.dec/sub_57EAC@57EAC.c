unsigned int __fastcall sub_57EAC(int a1, int a2, unsigned int a3)
{
  unsigned int result; // r0
  unsigned int v7; // r4
  _BYTE *v8; // r7
  int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  __int64 v14; // r8

  result = sub_57B3C(a1, a2, a3);
  if ( result <= 0xFFFFFFEA )
  {
    v7 = a3 - result;
    if ( v7 <= 3 )
      return -11;
    v8 = (_BYTE *)(a2 + result);
    *(_BYTE *)(a2 + result) = 0;
    v9 = a2 + result + 4;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      v10 = sub_5A7B0(a1 + 112);
      if ( v7 <= 7 )
        return -11;
      v11 = v10 >> 8;
      v12 = HIWORD(v10);
      v13 = HIBYTE(v10);
      v8[4] = v10;
      v9 = (int)(v8 + 8);
      v8[5] = v11;
      v8[6] = v12;
      v8[7] = v13;
    }
    v14 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 76) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    if ( !v14 || v14 == *(_QWORD *)(a1 + 104) )
      return v9 - a2;
    else
      return -14;
  }
  return result;
}
