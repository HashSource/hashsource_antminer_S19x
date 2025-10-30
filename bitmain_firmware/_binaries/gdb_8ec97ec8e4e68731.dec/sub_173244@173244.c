int __fastcall sub_173244(_DWORD *a1, _DWORD *a2)
{
  int v3; // r4
  int v4; // r9
  int v6; // r3
  __int16 *v7; // r2
  int v8; // r6
  int v9; // r7
  int v10; // r0
  __int16 *v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // [sp+4h] [bp-8h] BYREF

  v3 = sub_171258(a1);
  if ( ((int (*)(void))loc_1724A0)() >= 0 )
  {
    if ( a2 )
      *a2 = ((int (__fastcall *)(int))loc_172524)(v3);
    return ((int (__fastcall *)(int))loc_1724A0)(v3);
  }
  v6 = *(_DWORD *)(v3 + 24);
  if ( (*(_WORD *)(v6 + 2) & 0x380) == 0x80 )
  {
    v7 = *(__int16 **)(v6 + 28);
    if ( v7 != &word_3B4A2C && *v7 > 0 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = sub_171258(*(_DWORD **)(*(_DWORD *)(v6 + 24) + v8 + 12));
        v4 = sub_173244(v10, &v16);
        if ( v4 >= 0 )
          break;
        v6 = *(_DWORD *)(v3 + 24);
        if ( (*(_WORD *)(v6 + 2) & 0x380) == 0x80 )
        {
          v11 = *(__int16 **)(v6 + 28);
          ++v9;
          v8 += 24;
          if ( v11 != &word_3B4A2C && *v11 > v9 )
            continue;
        }
        return -1;
      }
      v12 = *(_DWORD *)(v3 + 24);
      v13 = *(_DWORD *)(v16 + 24);
      v14 = *(_BYTE *)(v12 + 2) & 0x10;
      v15 = *(_BYTE *)(v13 + 2) & 0x10;
      if ( (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
      {
        v14 = *(_DWORD *)(v12 + 16);
        if ( (*(_BYTE *)(v13 + 2) & 0x10) == 0 )
          goto LABEL_18;
      }
      else if ( (*(_BYTE *)(v13 + 2) & 0x10) == 0 )
      {
LABEL_24:
        ((void (__fastcall *)(int, int))loc_173104)(v3, v4);
        ((void (__fastcall *)(int, int))loc_1731A4)(v3, v16);
LABEL_19:
        if ( a2 )
          *a2 = v16;
        return v4;
      }
      v15 = *(_DWORD *)(v13 + 16);
LABEL_18:
      if ( v15 != v14 )
        goto LABEL_19;
      goto LABEL_24;
    }
  }
  return -1;
}
