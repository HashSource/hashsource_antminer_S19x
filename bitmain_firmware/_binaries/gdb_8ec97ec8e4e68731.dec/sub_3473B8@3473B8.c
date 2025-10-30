int __fastcall sub_3473B8(int a1, _DWORD *a2)
{
  _BYTE *v2; // r3
  _BYTE *v5; // r2
  int v6; // r0
  int v7; // r1
  _BYTE *v9; // r2

  v2 = a2 + 2;
  v5 = *(_BYTE **)a1;
  if ( (_DWORD *)*a2 == a2 + 2 )
  {
    sub_33B48C(a1, (int)a2, (int)v5, (int)v2);
    v9 = (_BYTE *)*a2;
    a2[1] = 0;
    *v9 = 0;
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = *a2;
    if ( v5 == (_BYTE *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 4) = a2[1];
      *(_DWORD *)(a1 + 8) = a2[2];
    }
    else
    {
      v6 = a2[1];
      v7 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = v6;
      *(_DWORD *)(a1 + 8) = a2[2];
      if ( v5 )
      {
        *a2 = v5;
        a2[2] = v7;
        a2[1] = 0;
        *v5 = 0;
        return a1;
      }
    }
    *a2 = v2;
    a2[1] = 0;
    *v2 = 0;
    return a1;
  }
}
