int __fastcall sub_173950(_DWORD *a1, _DWORD *a2, int a3)
{
  int v5; // r6
  int v6; // r5
  int v7; // r4
  int v8; // r2
  __int16 *v10; // r3
  int v11; // r0
  __int16 *v12; // r3
  int v13; // r3
  int v14; // r1
  int v15; // r3

  v5 = sub_171258(a1);
  v6 = sub_171258(a2);
  v7 = sub_173904(v5, v6);
  if ( v7 )
    return 0;
  v8 = *(_DWORD *)(v6 + 24);
  if ( (*(_WORD *)(v8 + 2) & 0x380) != 0x80 )
    return -1;
  v10 = *(__int16 **)(v8 + 28);
  if ( v10 == &word_3B4A2C || *v10 <= 0 )
    return -1;
  if ( a3 )
    goto LABEL_14;
LABEL_8:
  v11 = sub_173950(v5, *(_DWORD *)(*(_DWORD *)(v8 + 24) + 24 * v7 + 12), a3);
  if ( v11 < 0 )
  {
    v8 = *(_DWORD *)(v6 + 24);
    while ( (*(_WORD *)(v8 + 2) & 0x380) == 0x80 )
    {
      v12 = *(__int16 **)(v8 + 28);
      if ( v12 == &word_3B4A2C )
        break;
      if ( *v12 <= ++v7 )
        break;
      if ( !a3 )
        goto LABEL_8;
LABEL_14:
      v13 = *(_DWORD *)(v8 + 28);
      if ( (__int16 *)v13 != &word_3B4A2C )
      {
        v14 = *(_DWORD *)(v13 + 20);
        if ( v14 )
        {
          if ( (*(unsigned __int8 *)(v14 + (v7 >> 3)) & (1 << (v7 & 7))) != 0 )
            continue;
        }
        v15 = *(_DWORD *)(v13 + 24);
        if ( v15 )
        {
          if ( (*(unsigned __int8 *)(v15 + (v7 >> 3)) & (1 << (v7 & 7))) != 0 )
            continue;
        }
      }
      goto LABEL_8;
    }
    return -1;
  }
  return v11 + 1;
}
