int __fastcall sub_32AB6C(int result, int a2)
{
  unsigned __int64 v2; // r4
  int v3; // r2
  __int16 v4; // r3
  int v5; // r12
  bool v6; // cc
  int v7; // r4
  int v8; // r3
  unsigned int v9; // lr
  _WORD *v10; // r2
  unsigned int v11; // r12
  unsigned int v12; // r12
  unsigned int v13; // r12
  __int16 v14; // t1

  if ( result != a2 )
  {
    *(_BYTE *)(result + 8) = *(_BYTE *)(a2 + 8);
    v3 = *(_DWORD *)(a2 + 4);
    v4 = *(_WORD *)(a2 + 10);
    *(_DWORD *)result = *(_DWORD *)a2;
    v5 = *(_DWORD *)a2;
    *(_DWORD *)(result + 4) = v3;
    *(_WORD *)(result + 10) = v4;
    if ( v5 > 3 )
    {
      v6 = v5 <= 49;
      if ( v5 > 49 )
        v7 = 43691;
      else
        v7 = 35608;
      if ( v5 > 49 )
        v5 += 2;
      else
        HIWORD(v7) = 67;
      if ( v6 )
        v7 += v5;
      else
        HIWORD(v7) = -21846;
      if ( v6 )
        v5 = *(unsigned __int8 *)(v7 + 20);
      else
        v2 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v7;
      v8 = a2 + 10;
      v9 = a2 + 12;
      v10 = (_WORD *)(result + 12);
      if ( v6 )
        v11 = 2 * v5;
      else
        v11 = HIDWORD(v2) & 0xFFFFFFFE;
      v12 = v8 + v11;
      if ( v12 > v9 )
      {
        v13 = v9 + ((v12 - a2 - 13) & 0xFFFFFFFE);
        do
        {
          v14 = *(_WORD *)(v8 + 2);
          v8 += 2;
          *v10++ = v14;
        }
        while ( v8 != v13 );
      }
    }
  }
  return result;
}
