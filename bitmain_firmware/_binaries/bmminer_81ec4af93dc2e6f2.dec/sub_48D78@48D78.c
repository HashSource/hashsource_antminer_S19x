int __fastcall sub_48D78(int a1)
{
  _DWORD *v2; // r10
  const char *v3; // r5
  int v4; // r9
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r5
  int i; // r4
  int v9; // r2
  int v10; // r4
  int v11; // r0
  int v13; // r9
  int v14; // r11
  int v15; // r0
  void *v16; // r0
  _DWORD *v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r0
  int v21; // r3
  FILE *stream; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "[DEBUG] Free memory for sw sweep.\n");
    sub_3AF5C(4, s, 0, *(unsigned __int16 *)"");
  }
  v2 = (_DWORD *)dword_530F04;
  if ( !dword_530F04 )
  {
    dword_530F04 = (int)calloc((size_t)&unk_8114AC, 1u);
    if ( dword_530F04 )
    {
      v13 = sub_26540();
      if ( !v13 )
      {
        v2 = (_DWORD *)dword_530F04;
        goto LABEL_4;
      }
      v14 = 0;
      while ( 1 )
      {
        v15 = sub_26580();
        v2 = (_DWORD *)dword_530F04;
        v16 = malloc(416 * v15);
        v17 = &v2[(_DWORD)&unk_202A2A + v14++];
        v17[1] = v16;
        if ( !v16 )
          break;
        if ( v13 == v14 )
          goto LABEL_4;
      }
      if ( (unsigned int)off_AFC24 <= 3 )
      {
LABEL_27:
        sub_48B70();
LABEL_28:
        sub_46318(13, 255);
        return -1;
      }
      strcpy(s, "Fail to allocate memory for works.\n");
      sub_3AF5C(3, s, 0, *(int *)"works.\n");
      v19 = dword_530F04;
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_28;
      strcpy(s, "Fail to allocate memory for sw sweep ctxt.\n");
      sub_3AF5C(3, s, 0, *(int *)"sw sweep ctxt.\n");
      v19 = dword_530F04;
    }
    if ( !v19 )
      goto LABEL_28;
    goto LABEL_27;
  }
LABEL_4:
  *v2 = a1;
  v3 = *(const char **)dword_530F04;
  stream = fopen(*(const char **)dword_530F04, "r");
  if ( !stream )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "Fail to open pattern file %s.\n", v3);
      sub_3AF5C(3, s, 0, v18);
    }
LABEL_16:
    v11 = sub_46318(22, 255);
    v10 = -1;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "Load pattern file failed.\n");
      v11 = sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    goto LABEL_18;
  }
  v4 = sub_26540();
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_26580();
      if ( v6 )
      {
        v7 = 0;
        for ( i = 0; i != v6; ++i )
        {
          v9 = i;
          v7 += sub_48C08(&stream, v5, v9, 8);
        }
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 8 * sub_26580() )
        break;
      if ( v4 == ++v5 )
        goto LABEL_13;
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v20 = sub_26580();
      snprintf(s, 0x800u, "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n", v5, v7, 8 * v20);
      sub_3AF5C(3, s, 0, v21);
    }
    fclose(stream);
    goto LABEL_16;
  }
LABEL_13:
  v10 = 0;
  v11 = fclose(stream);
LABEL_18:
  sub_5B69C(v11);
  sub_5B5E0(4);
  return v10;
}
