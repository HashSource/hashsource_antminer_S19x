void __fastcall sub_1003AC(int a1, const char *a2)
{
  char *v4; // r0
  int v5; // r1
  unsigned int v6; // r3
  bool v7; // cc
  bool v8; // r3
  const char *v10; // r6
  size_t v11; // r0
  size_t v12; // r7
  int v13; // r3
  int v14; // r6
  int v15; // r2
  __int16 *v16; // r1
  int v17; // r0
  int v18; // r1
  char *v19; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  while ( 1 )
  {
    v4 = *(char **)(a1 + 24);
    v5 = *v4;
    v6 = (unsigned __int8)v5 - 18;
    v7 = v6 > 1;
    if ( v6 > 1 )
      v7 = (unsigned int)(unsigned __int8)v5 - 1 > 1;
    v8 = v7;
    if ( v5 != 23 && v8 )
      break;
    if ( v5 == 23 )
      a1 = sub_171258(a1);
    else
      a1 = *((_DWORD *)v4 + 5);
  }
  v10 = (const char *)*((_DWORD *)v4 + 2);
  if ( v10 )
  {
    v11 = ((int (__fastcall *)(_DWORD))loc_100310)(*((_DWORD *)v4 + 2));
    v12 = v11;
    if ( v11 )
    {
      v19 = strncpy((char *)savedregs, v10, v11);
      *((_BYTE *)savedregs + v12) = 0;
      sub_FF074(a2, v19);
      v13 = *(_DWORD *)(a1 + 24);
      if ( *(_BYTE *)v13 != 3 )
        return;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 24);
      if ( *(_BYTE *)v13 != 3 )
        return;
    }
    v14 = 0;
    v15 = *(_WORD *)(v13 + 2) & 0x380;
    if ( v15 == 128 )
      goto LABEL_22;
LABEL_18:
    while ( v14 < 0 )
    {
LABEL_27:
      sub_1003AC(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 24 * v14 + 12), a2);
      v13 = *(_DWORD *)(a1 + 24);
      v15 = *(_WORD *)(v13 + 2) & 0x380;
      while ( 1 )
      {
        ++v14;
        if ( v15 != 128 )
          break;
LABEL_22:
        v16 = *(__int16 **)(v13 + 28);
        if ( v16 == &word_3B4A2C )
          goto LABEL_18;
        if ( *v16 <= v14 )
          return;
        v17 = *((_DWORD *)v16 + 5);
        if ( !v17 || (*(unsigned __int8 *)(v17 + (v14 >> 3)) & (1 << (v14 & 7))) == 0 )
        {
          v18 = *((_DWORD *)v16 + 6);
          if ( !v18 || (*(unsigned __int8 *)(v18 + (v14 >> 3)) & (1 << (v14 & 7))) == 0 )
            goto LABEL_27;
        }
      }
    }
  }
}
