int __fastcall sub_330D54(int a1, int a2)
{
  int v2; // lr
  unsigned int v3; // r5
  int v4; // r4
  int v5; // r12
  int v6; // r2
  unsigned int v7; // r3
  bool v8; // zf

  v2 = a1 + 10;
  v3 = *(unsigned __int16 *)(a1 + 10);
  v4 = *(_DWORD *)a1 - 1;
  v5 = a2 + v4;
  if ( !__CFADD__(a2, v4) )
  {
    v6 = 2;
    v7 = v3 / 0xA;
    *(_BYTE *)(a2 + v4) = v3 % 0xA;
    while ( a2 != v5 )
    {
      v8 = --v6 == 0;
      if ( !v6 )
        v6 = 3;
      *(_BYTE *)--v5 = v7 % 0xA;
      if ( v8 )
      {
        v7 = *(unsigned __int16 *)(v2 + 2);
        v2 += 2;
      }
      else
      {
        v7 /= 0xAu;
      }
    }
  }
  return a2;
}
