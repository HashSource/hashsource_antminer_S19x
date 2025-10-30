int __fastcall sub_33618(int a1)
{
  _DWORD *v2; // r7
  const char *v3; // r5
  int v4; // r6
  unsigned int v5; // r5
  int i; // r4
  int v7; // r2
  _DWORD *v9; // r0
  char *v10; // r4
  char *v11; // r9
  void *v12; // r0
  FILE *stream; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(s, "[DEBUG] Free memory for sw sweep.\n");
    sub_47AB4(4, s, 0);
  }
  v2 = (_DWORD *)dword_1AEA68;
  if ( !dword_1AEA68 )
  {
    v9 = calloc(0x3D1DC4u, 1u);
    v2 = v9;
    dword_1AEA68 = (int)v9;
    if ( v9 )
    {
      v10 = (char *)(v9 + 974626);
      v11 = (char *)(v9 + 974704);
      while ( 1 )
      {
        v12 = malloc((size_t)&loc_26E60);
        *((_DWORD *)v10 + 1) = v12;
        v10 += 4;
        if ( !v12 )
          break;
        if ( v11 == v10 )
          goto LABEL_4;
      }
      if ( (unsigned int)dword_9E31C <= 3 )
      {
LABEL_22:
        sub_33428();
LABEL_23:
        sub_31794(13, 255);
        return -1;
      }
      strcpy(s, "Fail to allocate memory for works.\n");
      sub_47AB4(3, s, 0);
    }
    else
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_23;
      strcpy(s, "Fail to allocate memory for sw sweep ctxt.\n");
      sub_47AB4(3, s, 0);
    }
    if ( !dword_1AEA68 )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_4:
  *v2 = a1;
  v3 = *(const char **)dword_1AEA68;
  stream = (FILE *)fopen64(*(_DWORD *)dword_1AEA68, "r");
  if ( stream )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = 0;
      for ( i = 0; i != 383; ++i )
      {
        v7 = i;
        v5 += sub_334A8(&stream, v4, v7, 8);
      }
      if ( v5 <= 0xBF7 )
        break;
      if ( ++v4 == 78 )
      {
        fclose(stream);
        return 0;
      }
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n", v4, v5, 3064);
      sub_47AB4(3, s, 0);
    }
    fclose(stream);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Fail to open pattern file %s.\n", v3);
    sub_47AB4(3, s, 0);
  }
  sub_31794(22, 255);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Load pattern file failed.\n");
    sub_47AB4(3, s, 0);
  }
  return -1;
}
