size_t __fastcall sub_294748(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r4
  int v4; // r3
  int v5; // r0
  int i; // r0
  int v7; // r2

  v2 = strlen(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = dword_4900DC;
    v5 = v2 + dword_4900DC;
    if ( (int)(v3 + dword_4900DC) >= dword_48AAF0 )
    {
      sub_2912F8(v5);
      v4 = dword_4900DC;
    }
    for ( i = dword_4900D8; v4 >= dword_4900D8; i = dword_4900D8 )
    {
      *(_BYTE *)(dword_48AAD4 + v3 + v4) = *(_BYTE *)(dword_48AAD4 + v4);
      --v4;
    }
    strncpy((char *)(dword_48AAD4 + i), a1, v3);
    if ( !dword_48B6E4 )
    {
      if ( v3 == 1 )
      {
        if ( dword_48B6E0 )
        {
          if ( *(_DWORD *)(dword_48B6E0 + 16) == 1 )
          {
            v7 = *(_DWORD *)(dword_48B6E0 + 8);
            if ( v7 == dword_4900D8 && v7 - *(_DWORD *)(dword_48B6E0 + 4) <= 19 )
            {
              *(_DWORD *)(dword_48B6E0 + 8) = v7 + 1;
              goto LABEL_8;
            }
          }
        }
      }
      sub_292374(1, dword_4900D8, v3 + dword_4900D8, 0);
    }
    v7 = dword_4900D8;
LABEL_8:
    dword_4900D8 = v3 + v7;
    dword_4900DC += v3;
    *(_BYTE *)(dword_48AAD4 + dword_4900DC) = 0;
  }
  return v3;
}
