int __fastcall sub_179298(_DWORD *a1)
{
  int v1; // r0
  int v3; // r9
  int v4; // r7
  int v5; // r12
  int v6; // r6
  int v7; // r5
  int v8; // r0
  __int16 *v9; // r3
  int i; // r4
  int v11; // r3
  int v12; // r10
  int v13; // r11
  int v14; // r3
  int v15; // r3
  int j; // r4
  int v17; // r1
  int v18; // r3
  int v19; // r0

  v1 = sub_171258(a1);
  if ( (unsigned int)**(unsigned __int8 **)(v1 + 24) - 3 > 1 )
    return 0;
  v3 = v1;
  v4 = sub_179034((_DWORD *)v1);
  if ( v4 )
    return 1;
  v5 = *(_DWORD *)(v3 + 24);
  v6 = 0;
  v7 = 0;
  v8 = *(_WORD *)(v5 + 2) & 0x380;
LABEL_5:
  if ( v8 == 128 )
    v9 = *(__int16 **)(v5 + 28);
  else
    v9 = &word_3B4A2C;
  if ( v9[2] > v6 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v8 != 128 || (v15 = *(_DWORD *)(v5 + 28), (__int16 *)v15 == &word_3B4A2C) )
      {
        v11 = v7;
        if ( i >= *(_DWORD *)(v7 + 4) )
          goto LABEL_21;
      }
      else
      {
        v11 = *(_DWORD *)(v15 + 32) + v7;
        if ( *(_DWORD *)(v11 + 4) <= i )
        {
LABEL_21:
          ++v6;
          v7 += 12;
          goto LABEL_5;
        }
      }
      v12 = *(_DWORD *)(v11 + 8) + 16 * i;
      if ( (*(_BYTE *)(v12 + 12) & 0x10) == 0 )
      {
        if ( **(_BYTE **)v11 == 126 )
          return 1;
        v13 = *(_DWORD *)(v12 + 4);
        if ( sub_FC4FC() || (*(_BYTE *)(v12 + 12) & 0x40) != 0 )
        {
          v14 = *(_DWORD *)(v13 + 24);
          if ( *(_WORD *)(v14 + 4) == 2 )
          {
            v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 36) + 24);
            if ( *(_BYTE *)v18 == 18 )
            {
              v19 = sub_171258(*(_DWORD **)(v18 + 20));
              if ( sub_173904(v19, v3) )
                return 1;
            }
          }
        }
        v5 = *(_DWORD *)(v3 + 24);
        v8 = *(_WORD *)(v5 + 2) & 0x380;
      }
    }
  }
  if ( *(__int16 *)(v5 + 4) <= 0 )
    return 0;
  for ( j = 0; ; j += 24 )
  {
    ++v4;
    if ( !sub_174F0C(*(_DWORD *)(v5 + 24) + j) )
    {
      if ( sub_179298(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 24) + 24) + j + 12), v17) )
        break;
    }
    v5 = *(_DWORD *)(v3 + 24);
    if ( *(__int16 *)(v5 + 4) <= v4 )
      return 0;
  }
  return 1;
}
