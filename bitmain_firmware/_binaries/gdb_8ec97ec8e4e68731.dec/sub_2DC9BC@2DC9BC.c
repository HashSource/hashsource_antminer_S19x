bool __fastcall sub_2DC9BC(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r0

  if ( *(_DWORD *)(a2 + 56) )
  {
    if ( *(_DWORD *)(a2 + 84) )
      return 1;
  }
  else
  {
    if ( ((unsigned int)&dword_10040 & (a1[10] >> 5)) != 0 )
    {
      v4 = (_DWORD *)*a3;
      if ( *a3 )
      {
        while ( 1 )
        {
          if ( ((unsigned int)&stru_11040 & (v4[10] >> 5)) == 0 && *(_DWORD *)(v4[1] + 4) == 5 )
          {
            v5 = v4[25];
            if ( !v5 || (*(_WORD *)(v5 + 24) & 0x380) != 0x200 )
              break;
          }
          v4 = (_DWORD *)v4[39];
          if ( !v4 )
            goto LABEL_13;
        }
        a1 = v4;
      }
    }
LABEL_13:
    v6 = *(_DWORD *)(a2 + 84);
    *(_DWORD *)(a2 + 56) = a1;
    if ( v6 )
      return 1;
  }
  v7 = sub_2F00E8(a1);
  *(_DWORD *)(a2 + 84) = v7;
  return v7 != 0;
}
