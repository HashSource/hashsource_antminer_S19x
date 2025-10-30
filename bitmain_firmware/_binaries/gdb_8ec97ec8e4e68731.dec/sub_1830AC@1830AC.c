_DWORD *__fastcall sub_1830AC(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  _DWORD v8[4]; // [sp+0h] [bp-10h] BYREF

  v2 = dword_487918;
  if ( dword_487918 )
  {
    if ( (_DWORD *)dword_487918 == result )
    {
LABEL_5:
      v3 = result;
      v8[0] = result[3];
      v8[1] = a2;
      sub_23E4A0(sub_183034, v8);
      sub_1BA1EC(v3);
      result = (_DWORD *)v3[36];
      v3[3] = 0;
      *((_BYTE *)v3 + 16) = 0;
      v3[36] = 0;
      if ( result )
        result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 4))(result);
      v5 = v3[31];
      v6 = v5 == 0;
      if ( v5 )
      {
        v4 = 0;
        *(_DWORD *)(v5 + 128) = 0;
      }
      v7 = v3[32];
      if ( !v6 )
        v3[31] = v4;
      if ( v7 )
      {
        *(_DWORD *)(v7 + 124) = 0;
        v3[32] = 0;
      }
      *((_BYTE *)v3 + 132) = 0;
      v3[6] = 0;
    }
    else
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          break;
        if ( result == (_DWORD *)v2 )
          goto LABEL_5;
      }
    }
  }
  return result;
}
