int __fastcall sub_179034(_DWORD *a1)
{
  int v1; // r0
  char *v2; // r1
  int v3; // r2
  int v5; // r6
  int v6; // r3
  int v7; // r7
  int v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r3
  __int16 *v12; // r2
  int v13; // r2
  int v14; // r7
  int v15; // r12
  __int16 *v16; // r5
  int i; // r2
  int v18; // r1
  int v19; // r1
  __int16 *v20; // r3
  __int64 v21; // r0

  v1 = sub_171258(a1);
  v2 = *(char **)(v1 + 24);
  v3 = *v2;
  if ( (unsigned __int8)(v3 - 3) > 1u )
  {
    v21 = sub_94700(
            (int)"gnu-v3-abi.c",
            209,
            "%s: Assertion `%s' failed.",
            "int gnuv3_dynamic_class(type*)",
            "TYPE_CODE (type) == TYPE_CODE_STRUCT || TYPE_CODE (type) == TYPE_CODE_UNION");
    return sub_179298(v21, HIDWORD(v21));
  }
  if ( v3 == 4 )
    return 0;
  v5 = v1;
  if ( (*((_WORD *)v2 + 1) & 0x380) == 0x80 )
  {
    v6 = *((_DWORD *)v2 + 7);
    if ( (__int16 *)v6 != &word_3B4A2C && (*(_BYTE *)(v6 + 8) & 3) != 0 )
      return (*(_BYTE *)(v6 + 8) & 3) == 1;
  }
  v7 = 0;
  v8 = 0;
  sub_173008(v1);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 24);
    v10 = *(_WORD *)(v9 + 2) & 0x380;
    if ( v10 != 128 || (v12 = *(__int16 **)(v9 + 28), v12 == &word_3B4A2C) )
    {
      if ( v8 >= 0 )
        break;
      goto LABEL_14;
    }
    if ( *v12 <= v8 )
      break;
    v13 = *((_DWORD *)v12 + 4);
    if ( v13 && (((int)*(unsigned __int8 *)(v13 + (v8 >> 3)) >> (v8 & 7)) & 1) != 0 )
      goto LABEL_35;
LABEL_14:
    v11 = *(_DWORD *)(v9 + 24) + v7;
    v7 += 24;
    if ( sub_179034(*(_DWORD *)(v11 + 12)) )
    {
      v9 = *(_DWORD *)(v5 + 24);
      v10 = *(_WORD *)(v9 + 2) & 0x380;
LABEL_35:
      if ( v10 == 128 )
        v20 = *(__int16 **)(v9 + 28);
      else
        v20 = &word_3B4A2C;
      *((_BYTE *)v20 + 8) = v20[4] & 0xFC | 1;
      return 1;
    }
    ++v8;
  }
  v14 = 0;
  v15 = 0;
LABEL_21:
  if ( v10 == 128 )
    v16 = *(__int16 **)(v9 + 28);
  else
    v16 = &word_3B4A2C;
  if ( v16[2] <= v14 )
  {
    *((_BYTE *)v16 + 8) |= 3u;
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( v10 == 128 )
      {
        v19 = *(_DWORD *)(v9 + 28);
        if ( (__int16 *)v19 == &word_3B4A2C )
        {
          if ( i >= *(_DWORD *)(v15 + 4) )
          {
LABEL_33:
            ++v14;
            v15 += 12;
            goto LABEL_21;
          }
          v18 = v15;
        }
        else
        {
          v18 = *(_DWORD *)(v19 + 32) + v15;
          if ( *(_DWORD *)(v18 + 4) <= i )
            goto LABEL_33;
        }
      }
      else
      {
        if ( i >= *(_DWORD *)(v15 + 4) )
          goto LABEL_33;
        v18 = v15;
      }
      if ( *(unsigned __int16 *)(*(_DWORD *)(v18 + 8) + 16 * i + 14) > 1u )
        break;
    }
    *((_BYTE *)v16 + 8) = v16[4] & 0xFC | 1;
    return 1;
  }
}
