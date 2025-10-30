int __fastcall sub_4ABC4(int a1)
{
  _DWORD *v2; // r4
  const char *v3; // r5
  int v4; // r9
  int i; // r6
  int v6; // r7
  unsigned int v7; // r5
  int j; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v13; // r3
  void *v14; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r10
  int v18; // r0
  void *v19; // r0
  int v20; // r3
  char *v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r3
  FILE *stream; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "[DEBUG] Free memory for sw sweep.\n");
    sub_3B6AC(4, s, 0, *(int *)"weep.\n");
  }
  v2 = (_DWORD *)dword_535D90;
  if ( dword_535D90 )
    goto LABEL_4;
  v14 = malloc((size_t)&unk_8154AC);
  dword_535D90 = (int)v14;
  if ( !v14 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Fail to allocate memory for sw sweep ctxt.\n");
      sub_3B6AC(3, s, 0, *(int *)"sw sweep ctxt.\n");
    }
LABEL_31:
    sub_4A9F4();
    v10 = -1;
    sub_481F0(13, 255);
    return v10;
  }
  memset(v14, 0, (size_t)&unk_8154AC);
  v15 = sub_26A44();
  v2 = (_DWORD *)dword_535D90;
  v16 = v15;
  if ( v15 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = sub_26A84();
      v19 = malloc(672 * v18);
      v20 = v17 + 2107946;
      ++v17;
      v20 *= 4;
      v21 = (char *)v2 + v20;
      v2 = (_DWORD *)dword_535D90;
      v22 = dword_535D90 + v20;
      *((_DWORD *)v21 + 1) = v19;
      if ( !*(_DWORD *)(v22 + 4) )
        break;
      if ( v16 == v17 )
        goto LABEL_4;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Fail to allocate memory for works.\n");
      sub_3B6AC(3, s, 0, *(int *)"works.\n");
    }
    goto LABEL_31;
  }
LABEL_4:
  *v2 = a1;
  v3 = *(const char **)dword_535D90;
  stream = fopen(*(const char **)dword_535D90, "r");
  if ( stream )
  {
    v4 = sub_26A44();
    if ( v4 )
    {
      for ( i = 0; v4 != i; ++i )
      {
        v6 = sub_26A84();
        if ( v6 )
        {
          v7 = 0;
          for ( j = 0; j != v6; ++j )
          {
            v9 = sub_4AA78(&stream, i, j, 8);
            v7 += v9;
          }
          if ( v7 < 8 * sub_26A84() )
          {
LABEL_16:
            if ( (unsigned int)dword_B308C > 3 )
            {
              v23 = sub_26A84();
              snprintf(
                s,
                0x800u,
                "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",
                i,
                v7,
                8 * v23);
              sub_3B6AC(3, s, 0, v24);
            }
            fclose(stream);
            goto LABEL_19;
          }
        }
        else
        {
          v7 = 0;
          if ( 8 * sub_26A84() )
            goto LABEL_16;
        }
      }
    }
    v10 = 0;
    v11 = fclose(stream);
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "Fail to open pattern file %s.\n", v3);
      sub_3B6AC(3, s, 0, v13);
    }
LABEL_19:
    v11 = sub_481F0(22, 255);
    v10 = -1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Load pattern file failed.\n");
      v11 = sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
    }
  }
  sub_69EEC(v11);
  sub_69E30(4);
  return v10;
}
