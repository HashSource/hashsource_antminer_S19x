bool sub_5E6CC()
{
  int v0; // r4
  const char *v1; // r4
  size_t v2; // r8
  unsigned int v3; // r11
  int *v4; // r9
  int v5; // r6
  void *v6; // r0
  int v7; // r3
  size_t v8; // r4
  unsigned int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r0
  _DWORD *v13; // r4
  const char *v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _DWORD *v19; // r5
  _DWORD *v20; // r4
  int v21; // r1
  int v23; // r2
  unsigned int v24; // r5
  int v25; // r0
  int v26; // [sp+Ch] [bp-40h]
  FILE *stream; // [sp+14h] [bp-38h] BYREF
  char v28[52]; // [sp+18h] [bp-34h] BYREF

  v0 = dword_223680;
  if ( !strcmp((const char *)dword_223680, "PT1new") )
  {
    v26 = 1;
    sub_1E938(v28, 0x30u);
    printf("%s ", v28);
    printf("%s : PT1 test doesn't need read pattern files\n", "prepare_pattern");
    strcpy(byte_64A838, "PT1 test doesn't need read pattern files");
    sub_3CC5C((int)byte_64A838, v28);
    return v26;
  }
  v26 = *(unsigned __int8 *)(v0 + 270);
  if ( *(_BYTE *)(v0 + 270) )
  {
    sub_1E938(v28, 0x30u);
    printf("%s ", v28);
    printf("%s : Hardware/SWEEP Pattern test doesn't need read pattern files\n", "prepare_pattern");
    strcpy(byte_64A938, "Hardware/SWEEP Pattern test doesn't need read pattern files");
    sub_3CC5C((int)byte_64A938, v28);
    return v26;
  }
  else
  {
    if ( strcmp((const char *)v0, "SWEEP") )
    {
      if ( *(_BYTE *)v0 != 80 || *(_BYTE *)(v0 + 1) != 84 || *(_BYTE *)(v0 + 2) != 51 || *(_BYTE *)(v0 + 3) )
      {
LABEL_10:
        if ( strncmp((const char *)(v0 + 48), "BM1362", 6u) && strncmp((const char *)(v0 + 48), "BM1366", 6u) )
        {
          v12 = sub_5E098(
                  v0 + 48,
                  *(_DWORD *)(v0 + 64),
                  *(_DWORD *)(v0 + 76) * *(_DWORD *)(v0 + 68),
                  *(_DWORD *)(v0 + 312));
          v11 = v12;
LABEL_28:
          if ( v11 )
          {
LABEL_29:
            sub_1E938(v28, 0x30u);
            v13 = &unk_64B138;
            v14 = "read pattern file done";
            v26 = 1;
            printf("%s ", v28);
            printf("%s : read pattern file done\n", "prepare_pattern");
LABEL_30:
            v15 = *(_DWORD *)v14;
            v16 = *((_DWORD *)v14 + 1);
            v17 = *((_DWORD *)v14 + 2);
            v18 = *((_DWORD *)v14 + 3);
            v19 = v14 + 16;
            *v13 = v15;
            v13[1] = v16;
            v13[2] = v17;
            v13[3] = v18;
            v20 = v13 + 4;
            v21 = v19[1];
            *v20++ = *v19;
            *(_WORD *)v20 = v21;
            v20 = (_DWORD *)((char *)v20 + 2);
            *(_BYTE *)v20 = BYTE2(v21);
            sub_3CC5C((int)v20 - 22, v28);
            return v26;
          }
LABEL_43:
          sub_6FBF4(v12);
          v14 = "read pattern file fail";
          v13 = &unk_64B038;
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "Read pattern");
          sub_1F650(2, "file fail");
          sub_1E938(v28, 0x30u);
          printf("%s ", v28);
          printf("%s : read pattern file fail\n", "prepare_pattern");
          goto LABEL_30;
        }
        if ( *(_BYTE *)(v0 + 276) )
        {
          sub_1E938(v28, 0x30u);
          printf("%s ", v28);
          printf("%s : capture_pattern mode will generate patter file\n", "get_works_ex2");
          strcpy(byte_64AA38, "capture_pattern mode will generate patter file");
          sub_3CC5C((int)byte_64AA38, v28);
          goto LABEL_29;
        }
        if ( *(_BYTE *)(v0 + 268) )
        {
          v1 = "/mnt/card/BM1366-pattern/pattern_8midstate.bin";
        }
        else
        {
          v23 = *(unsigned __int8 *)(v0 + 269);
          v1 = "/mnt/card/BM1366-pattern/pattern_midautogen.bin";
          if ( v23 )
            v1 = "/mnt/card/BM1366-pattern/pattern_1midstate_super.bin";
        }
        sub_1E938(v28, 0x30u);
        printf("%s ", v28);
        printf("%s : open file %s\n", "get_works_ex2", v1);
        snprintf(byte_64AB38, 0x100u, "open file %s", v1);
        sub_3CC5C((int)byte_64AB38, v28);
        stream = fopen(v1, "r");
        if ( !stream )
        {
          sub_1E938(v28, 0x30u);
          printf("%s ", v28);
          printf("%s : Fail to open pattern file %s.\n\n", "get_works_ex2", v1);
          snprintf(byte_64AC38, 0x100u, "Fail to open pattern file %s.\n", v1);
          v12 = sub_3CC5C((int)byte_64AC38, v28);
          goto LABEL_43;
        }
        if ( *(_BYTE *)(dword_223680 + 269) )
        {
          v2 = *(_DWORD *)(dword_223680 + 72);
          sub_1E938(v28, 0x30u);
          v3 = 1;
          printf("%s ", v28);
          printf(
            "%s : work_count:%d, read_asic:%d small_core:%d\n\n",
            "get_works_ex2",
            v2,
            1,
            *(_DWORD *)(dword_223680 + 72));
          snprintf(
            byte_64AD38,
            0x100u,
            "work_count:%d, read_asic:%d small_core:%d\n",
            v2,
            1,
            *(_DWORD *)(dword_223680 + 72));
          sub_3CC5C((int)byte_64AD38, v28);
        }
        else
        {
          v3 = *(_DWORD *)(dword_223680 + 64);
          v2 = *(_DWORD *)(dword_223680 + 72) * *(_DWORD *)(dword_223680 + 312);
          sub_1E938(v28, 0x30u);
          printf("%s ", v28);
          printf(
            "%s : work_count:%d, read_asic:%d small_core:%d\n\n",
            "get_works_ex2",
            v2,
            v3,
            *(_DWORD *)(dword_223680 + 72));
          snprintf(
            byte_64AD38,
            0x100u,
            "work_count:%d, read_asic:%d small_core:%d\n",
            v2,
            v3,
            *(_DWORD *)(dword_223680 + 72));
          sub_3CC5C((int)byte_64AD38, v28);
          if ( !v3 )
          {
LABEL_26:
            v11 = 1;
LABEL_27:
            v12 = fclose(stream);
            goto LABEL_28;
          }
        }
        v4 = &dword_7169AC;
        v5 = 0;
        while ( 1 )
        {
          v6 = calloc(0x3Cu, v2);
          v4[1] = (int)v6;
          ++v4;
          if ( !v6 )
          {
            sub_1E938(v28, 0x30u);
            printf("%s ", v28);
            printf("%s : malloc pattern buffer fail for asic %d\n", "get_works_ex2", v5);
            snprintf(byte_64AE38, 0x100u, "malloc pattern buffer fail for asic %d", v5);
            v12 = sub_3CC5C((int)byte_64AE38, v28);
            goto LABEL_43;
          }
          v7 = dword_223680;
          if ( *(_BYTE *)(dword_223680 + 268) )
          {
            v8 = *(_DWORD *)(dword_223680 + 72);
            if ( v8 )
            {
              v8 = 0;
              v9 = 0;
              do
              {
                v10 = sub_5E334(&stream, v5, v9, *(_DWORD *)(v7 + 312));
                v7 = dword_223680;
                ++v9;
                v8 += v10;
              }
              while ( v9 < *(_DWORD *)(dword_223680 + 72) );
            }
          }
          else
          {
            v8 = *(unsigned __int8 *)(dword_223680 + 269);
            if ( *(_BYTE *)(dword_223680 + 269) )
            {
              v8 = *(_DWORD *)(dword_223680 + 68);
              if ( v8 )
              {
                v8 = *(unsigned __int8 *)(dword_223680 + 268);
                v24 = v8;
                do
                {
                  v25 = sub_5E428((const void **)&stream, v5, v24++, 8);
                  v8 += v25;
                }
                while ( v24 < *(_DWORD *)(dword_223680 + 68) );
              }
            }
          }
          if ( v8 < v2 )
            break;
          if ( ++v5 >= v3 )
            goto LABEL_26;
        }
        sub_1E938(v28, 0x30u);
        v11 = 0;
        printf("%s ", v28);
        printf(
          "%s : No enough work, asic = %d, work_count = %d, work_count_target = %d.\n\n",
          "get_works_ex2",
          v5,
          v8,
          v2);
        snprintf(
          byte_64AF38,
          0x100u,
          "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",
          v5,
          v8,
          v2);
        sub_3CC5C((int)byte_64AF38, v28);
        goto LABEL_27;
      }
      if ( !sub_48150(v0) )
      {
        v0 = dword_223680;
        goto LABEL_10;
      }
      return v26;
    }
    return sub_48150(v0) == 0;
  }
}
