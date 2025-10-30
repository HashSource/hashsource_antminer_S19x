int __fastcall sub_2CBB8C(int a1, int a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // lr
  int v9; // r12
  unsigned int v10; // r12
  unsigned int v11; // r1
  int v13; // r0
  int v14; // r1

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD **)a2;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 32);
  v5 = *(_DWORD *)(*(_DWORD *)a2 + 32);
  if ( v4 >= v5 )
  {
    if ( v4 > v5 )
      return 1;
    v6 = v2[7];
    v7 = v3[7];
    if ( v6 >= v7 )
    {
      if ( v6 <= v7 )
      {
        v8 = v2[5];
        v9 = v3[5];
        if ( (v8 & 0x402) != 0 )
        {
          if ( (v9 & 0x402) == 0 )
            return -1;
        }
        else
        {
          if ( (v9 & 0x402) != 0 )
            return 1;
          v13 = v2[34];
          v14 = v3[34];
          if ( v13 != v14 )
            return v13 - v14;
        }
        v10 = v9 & 2;
        if ( (v8 & 2) != 0 )
        {
          v11 = v2[9];
          if ( v10 )
          {
            v10 = v3[9];
            if ( v11 < v10 )
              return -1;
          }
          if ( v11 > v10 )
            return 1;
        }
        else if ( v10 && v3[9] )
        {
          return -1;
        }
        return v2[34] - v3[34];
      }
      return 1;
    }
  }
  return -1;
}
