int __fastcall sub_2D4BA0(int a1, int a2)
{
  _DWORD *v2; // r2
  int v3; // r3
  _DWORD *v4; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r3

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 20);
  if ( !v3 )
  {
    if ( (v2[3] & 0x100) == 0 )
      goto LABEL_7;
    v4 = (_DWORD *)v2[4];
    if ( !v4 )
      goto LABEL_7;
    if ( v4[37] != a1 )
    {
      v4 = (_DWORD *)v4[15];
      if ( !v4 || v4[37] != a1 )
        goto LABEL_7;
    }
    v6 = v4[2];
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348);
    if ( *(_DWORD *)(v7 + 40) <= v6 )
      goto LABEL_7;
    v8 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 4 * v6);
    if ( !v8 )
      goto LABEL_7;
    v3 = *(_DWORD *)(v8 + 20);
    v2[5] = v3;
  }
  if ( !v3 )
  {
LABEL_7:
    sub_2A6A5C("%B: symbol `%s' required but not present", a1, v2[1]);
    ((void (__fastcall *)(int))loc_2A6C48)(7);
    return -1;
  }
  return v3;
}
