int __fastcall sub_2E2DCC(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r3
  int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r3
  int v8; // r3
  int v10; // r3

  v3 = a1;
  if ( !a1 )
    return 0;
  while ( (unsigned int)*(unsigned __int8 *)(v3 + 12) - 6 <= 1 )
    v3 = *(_DWORD *)(v3 + 20);
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0;
  v4 = *(unsigned __int8 *)(v3 + 52);
  v5 = v4 & 8;
  if ( (v4 & 8) != 0 )
    return 0;
  if ( (*(_BYTE *)a2 & 3u) <= 1 )
    goto LABEL_10;
  if ( (*(_BYTE *)(v3 + 53) & 4) != 0 )
  {
LABEL_23:
    v6 = v5;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)a2 & 4) != 0 || (*(_BYTE *)(v3 + 53) & 0x10) != 0 )
  {
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  v5 = *(_BYTE *)(a2 + 5) & 0x10;
  if ( (*(_BYTE *)(a2 + 5) & 0x10) == 0 )
    goto LABEL_23;
  v6 = ((v4 ^ 0x10u) >> 4) & 1;
LABEL_11:
  v7 = *(_BYTE *)(v3 + 49) & 3;
  if ( (*(_BYTE *)(v3 + 49) & 3) != 0 )
  {
    if ( v7 <= 2 )
      return 0;
    if ( v7 == 3 )
    {
      v8 = *(_DWORD *)(a2 + 28);
      if ( *(_DWORD *)(v8 + 40) != 1 )
        return 0;
      v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 56) + 4) + 444);
      if ( !a3 || !(*(int (__fastcall **)(_DWORD))(v10 + 360))(*(unsigned __int8 *)(v3 + 48)) )
        v6 = 1;
    }
  }
  if ( (*(_BYTE *)(v3 + 51) & 2) != 0 || (*(_BYTE *)(v3 + 51) & 0xA) == 0 && *(_BYTE *)(v3 + 12) == 3 )
    return v6 ^ 1;
  else
    return 1;
}
