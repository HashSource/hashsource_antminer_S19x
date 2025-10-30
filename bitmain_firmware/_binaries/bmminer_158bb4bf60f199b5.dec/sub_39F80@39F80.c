int __fastcall sub_39F80(int a1)
{
  _DWORD *v2; // r5
  int v3; // r8
  int i; // r4
  int v6; // r0
  int j; // r4
  _DWORD *v8; // r3
  unsigned int v9; // r11
  unsigned int v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r9
  int v13; // r0
  int v14; // r4
  int v15; // r12
  int v16; // r8
  int v17; // [sp+8h] [bp-814h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Do freq tuning basic.\n");
    sub_47AB4(3, s, 0);
  }
  v2 = (_DWORD *)dword_1AEA7C;
  memset((void *)(dword_1AEA7C + 4), 0, 0xC0u);
  *v2 = a1;
  v3 = sub_385EC(*(_DWORD *)(a1 + 24));
  if ( !v3 )
  {
    sub_38064();
    sub_1A0F0(**(_DWORD **)dword_1AEA7C);
    sub_30770(
      255,
      (unsigned __int8)byte_A0D79,
      *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 4),
      *(unsigned __int8 *)(*(_DWORD *)dword_1AEA7C + 20));
    v3 = sub_3954C();
    if ( !v3 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "\n");
        sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(s, ">>>> Do tuning parallel.\n");
          sub_47AB4(3, s, 0);
        }
      }
      for ( i = 0; i != 16; ++i )
      {
        while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
        {
          if ( ++i == 16 )
            goto LABEL_13;
        }
        v6 = i;
        sub_37BD4(v6, 1);
      }
LABEL_13:
      v3 = sub_39574(
             *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 4),
             *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 4),
             *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 16),
             *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 12));
      if ( !v3 && !sub_383C0() )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(s, "\n");
          sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C > 3 )
          {
            strcpy(s, ">>>> Do tuning serial.\n");
            sub_47AB4(3, s, 0);
          }
        }
        for ( j = 0; j != 16; ++j )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) == 1 && sub_37D44(j) == 1 )
            sub_37BD4(j, 0);
        }
        v8 = *(_DWORD **)dword_1AEA7C;
        v9 = *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 4);
        v10 = *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 12);
        if ( v9 <= v10 )
        {
          v9 = v8[3];
          v11 = v10 + v8[4];
        }
        else
        {
          v11 = v8[1];
        }
        v12 = v11;
        v17 = 0;
        while ( sub_37EF8() )
        {
          if ( (unsigned int)dword_9E31C > 3 )
          {
            strcpy(s, "\n");
            sub_47EC8(3, s, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              ++v17;
              snprintf(s, 0x800u, ">>>> Round %d:\n");
              sub_47AB4(3, s, 0);
            }
          }
          sub_37FA8(2);
          v13 = sub_39574(v9, v12, *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 16), *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 8));
          v14 = v13;
          if ( v13 )
            return v13;
          do
          {
            if ( *(_DWORD *)(dword_A0D68 + 4 * v14 + 4) == 1 && sub_37D44(v14) == 2 )
            {
              v15 = dword_1AEA7C + 4 * v14;
              if ( *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 12) >= *(_DWORD *)(v15 + 4) )
                v16 = *(_DWORD *)(v15 + 4);
              else
                v16 = *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 12);
              sub_30770(v14, (unsigned __int8)byte_A0D79, v16, 0);
              if ( (unsigned int)dword_9E31C > 3 )
              {
                snprintf(s, 0x800u, "Down freq, chain = %d, freq = %d.\n", v14, v16);
                sub_47AB4(3, s, 0);
              }
            }
            ++v14;
          }
          while ( v14 != 16 );
        }
        return 0;
      }
    }
    return v3;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return v3;
  strcpy(s, "Board init failed.\n");
  sub_47AB4(3, s, 0);
  return v3;
}
