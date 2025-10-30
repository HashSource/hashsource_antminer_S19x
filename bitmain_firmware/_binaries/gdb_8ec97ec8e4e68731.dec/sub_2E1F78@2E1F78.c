int __fastcall sub_2E1F78(int a1, int *a2)
{
  int v5; // r0
  int v6; // r7
  char v7; // r3
  char v8; // r2
  int v9; // r3
  bool v10; // cc
  int v11; // r2
  int v12; // r3

  if ( *(_DWORD *)(*(_DWORD *)(*a2 + 28) + 40) != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 12) == 6 )
    return 1;
  if ( !sub_2E1954(a1, a2) )
    return 0;
  v5 = *a2;
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 28) + 56) + 4) + 444);
  if ( *(_BYTE *)(a1 + 12) != 2 )
    goto LABEL_6;
  v9 = *(_DWORD *)(v5 + 96);
  v10 = v9 <= 0;
  if ( !v9 )
  {
    (*(void (**)(void))(v6 + 224))();
    v7 = *(_BYTE *)(a1 + 51);
LABEL_7:
    if ( v7 < 0 || *(_BYTE *)(a1 + 48) == 10 )
      goto LABEL_11;
    if ( (v7 & 0xA) != 8 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(*(_DWORD *)(*a2 + 28) + 72);
      return 1;
    }
    if ( (v7 & 1) != 0 )
    {
LABEL_11:
      if ( (v7 & 0x20) != 0 )
        return 1;
      v8 = *(_BYTE *)(a1 + 53);
      *(_BYTE *)(a1 + 51) |= 0x20u;
      if ( (v8 & 0x20) == 0 )
      {
LABEL_14:
        if ( !*(_DWORD *)(a1 + 44) && (*(_DWORD *)(a1 + 48) & 0x800000FF) == 0 )
          sub_2A6A5C("warning: type and size of dynamic symbol `%s' are not defined", *(const char **)(a1 + 4));
        if ( !(*(int (__fastcall **)(int, int))(v6 + 132))(*a2, a1) )
          goto LABEL_18;
        return 1;
      }
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 )
        goto LABEL_10;
      v11 = a1;
      do
        v11 = *(_DWORD *)(v11 + 60);
      while ( (*(_BYTE *)(v11 + 53) & 0x20) != 0 );
      if ( *(_DWORD *)(v11 + 32) == -1 )
        goto LABEL_10;
      if ( (v7 & 0x20) != 0 )
        return 1;
      *(_BYTE *)(a1 + 51) |= 0x20u;
    }
    v12 = a1;
    do
      v12 = *(_DWORD *)(v12 + 60);
    while ( (*(_BYTE *)(v12 + 53) & 0x20) != 0 );
    *(_BYTE *)(v12 + 51) |= 1u;
    if ( !sub_2E1F78(v12, a2) )
      return 0;
    goto LABEL_14;
  }
  v7 = *(_BYTE *)(a1 + 51);
  if ( v10 || (*(_BYTE *)(a1 + 51) & 1) == 0 || (*(_BYTE *)(a1 + 49) & 3) != 0 )
    goto LABEL_7;
  if ( sub_2FF6F0(*(_DWORD *)(v5 + 132), *(_DWORD *)(a1 + 4)) || sub_2E0858(*a2, a1) )
  {
LABEL_6:
    v7 = *(_BYTE *)(a1 + 51);
    goto LABEL_7;
  }
LABEL_18:
  a2[1] = 1;
  return 0;
}
