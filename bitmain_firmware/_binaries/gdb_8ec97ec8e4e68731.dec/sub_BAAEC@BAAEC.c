void __fastcall sub_BAAEC(_DWORD *a1)
{
  const char **v2; // r7
  int v3; // r0
  int v4; // r8
  unsigned __int8 *v5; // r5
  unsigned int v6; // r7
  int v7; // r11
  char *v8; // r9
  const char *v9; // r8
  unsigned __int8 *v10; // r10
  unsigned __int8 *v11; // r3
  const char *v12; // r5
  char *v13; // r0
  const char *v14; // r8
  int v15; // r0
  const char *v16; // r11
  int v17; // t1
  int v18; // r0
  void (__fastcall *v19)(char *, _DWORD *, const char *, char *); // r11
  char *v20; // r10
  const char *v21; // r0
  char *v22; // r10
  _BOOL4 v23; // r0
  int v24; // r1
  const char *v25; // r10
  const char *v26; // r11
  const char *v27; // r0
  const char *v28; // r3
  int v29; // r3
  const char *v30; // r11
  const char *v31; // r0
  const char *v32; // r11
  const char *v33; // r0
  const char *v34; // r11
  const char *v35; // r0
  int *v36; // [sp+Ch] [bp-54h]
  void *v37; // [sp+10h] [bp-50h]
  void *v38; // [sp+1Ch] [bp-44h]
  void (__fastcall *v39)(char *, _DWORD *, FILE *, void *); // [sp+1Ch] [bp-44h]
  char *s2; // [sp+20h] [bp-40h]
  char *s2a; // [sp+20h] [bp-40h]
  const char *v42; // [sp+24h] [bp-3Ch]
  FILE *stream; // [sp+2Ch] [bp-34h] BYREF
  void *ptr; // [sp+30h] [bp-30h]
  unsigned __int8 v45; // [sp+34h] [bp-2Ch]

  if ( !dword_46BC20 )
    return;
  if ( (a1[3] & 0x40) != 0 )
    return;
  if ( sub_162564(a1[1]) )
    return;
  sub_157B3C(a1);
  v2 = (const char **)a1[9];
  v3 = sub_2AD7AC(v2, ".debug_gdb_scripts");
  v4 = v3;
  if ( !v3 || (*(_DWORD *)(v3 + 20) & 0x100) == 0 )
    return;
  if ( !sub_2A9680((int)v2, v3) )
  {
    sub_946B0("Couldn't read %s section of %s", ".debug_gdb_scripts", *v2);
    return;
  }
  v5 = 0;
  v37 = sub_9253C(758120, 0);
  v6 = *(_DWORD *)(v4 + 36);
  v36 = sub_BA198(dword_487D2C);
  if ( !v6 )
    goto LABEL_30;
  while ( 2 )
  {
    v7 = *v5 - 1;
    switch ( *v5 )
    {
      case 1u:
      case 4u:
        v8 = (char *)((int (__fastcall *)(int))loc_1577A4)(2);
        goto LABEL_12;
      case 3u:
      case 6u:
        v8 = (char *)((int (__fastcall *)(int))loc_1577A4)(3);
LABEL_12:
        v9 = (const char *)(v5 + 1);
        v10 = v5;
        if ( v6 <= (unsigned int)(v5 + 1) )
        {
          v12 = (const char *)(v5 + 1);
        }
        else
        {
          if ( !v5[1] )
          {
            v12 = (const char *)(v5 + 1);
            goto LABEL_18;
          }
          v11 = v5 + 2;
          while ( 1 )
          {
            v12 = (const char *)v11;
            if ( (unsigned __int8 *)v6 == v11 )
              break;
            ++v11;
            if ( !*v12 )
              goto LABEL_18;
          }
        }
        if ( (const char *)v6 != v12 )
        {
LABEL_18:
          switch ( v7 )
          {
            case 0:
            case 2:
              if ( v9 == v12 )
              {
                sub_946B0("Empty entry in %s at offset %u", ".debug_gdb_scripts", v10);
                goto LABEL_29;
              }
              v39 = (void (__fastcall *)(char *, _DWORD *, FILE *, void *))((int (__fastcall *)(char *))loc_1579A4)(v8);
              if ( v39 )
              {
                if ( !((int (__fastcall *)(char *))loc_157A00)(v8) )
                  goto LABEL_29;
                sub_527A4((int)&stream, (int)v9, 1);
                v24 = v45;
                if ( v45 )
                {
                  s2a = (char *)ptr;
                  v25 = (const char *)sub_157938(v8);
                  v26 = (const char *)ptr;
                  v27 = (const char *)sub_1B87A8(a1);
                  if ( !sub_BA030(
                          s2a,
                          (int)"auto-load: Loading %s script \"%s\" from section \"%s\" of objfile \"%s\".\n",
                          v25,
                          v26,
                          ".debug_gdb_scripts",
                          v27) )
                  {
                    v24 = v45;
                    if ( !v45 )
                      goto LABEL_50;
                    ((void (__fastcall *)(FILE **))loc_52B78)(&stream);
                  }
LABEL_63:
                  v24 = v45;
                  if ( v45 )
                  {
                    v28 = (const char *)ptr;
                    v24 = 1;
                  }
                  else
                  {
                    v28 = 0;
                  }
                }
                else
                {
                  if ( !v36[3] )
                  {
                    v32 = (const char *)sub_1B87A8(a1);
                    v33 = (const char *)sub_157938(v8);
                    sub_946B0(
                      "Missing auto-load script at offset %u in section %s\n"
                      "of file %s.\n"
                      "Use `info auto-load %s-scripts [REGEXP]' to list them.",
                      v10,
                      ".debug_gdb_scripts",
                      v32,
                      v33);
                    v36[3] = 1;
                    goto LABEL_63;
                  }
LABEL_50:
                  v28 = 0;
                }
                if ( sub_B97D4(*v36, (char *)v24, v9, v28, v8) )
                  v29 = 0;
                else
                  v29 = v45 & 1;
                if ( v29 )
                  v39(v8, a1, stream, ptr);
                if ( v45 )
                {
                  v45 = 0;
                  if ( ptr )
                    free(ptr);
                  if ( stream )
                    fclose(stream);
                }
                goto LABEL_29;
              }
              if ( !v36[2] )
              {
                v30 = (const char *)sub_1B87A8(a1);
                v31 = (const char *)sub_157938(v8);
                sub_946B0(
                  "Unsupported auto-load script at offset %u in section %s\n"
                  "of file %s.\n"
                  "Use `info auto-load %s-scripts [REGEXP]' to list them.",
                  v10,
                  ".debug_gdb_scripts",
                  v30,
                  v31);
                v36[2] = 1;
              }
              sub_B97D4(*v36, 0, v9, 0, v8);
LABEL_29:
              v5 = (unsigned __int8 *)(v12 + 1);
              if ( v6 <= (unsigned int)v5 )
                goto LABEL_30;
              break;
            case 3:
            case 5:
              v38 = sub_9253C((int)nullsub_39, 0);
              v13 = strchr(v9, 10);
              s2 = v13;
              if ( v13 )
              {
                v14 = (const char *)sub_3272B4(v9, v13 - v9);
                sub_9253C(758120, (int)v14);
                v15 = *(unsigned __int8 *)v14;
                if ( *v14 )
                {
                  v16 = v14;
                  while ( !isspace(v15) )
                  {
                    v17 = *(unsigned __int8 *)++v16;
                    v15 = v17;
                    if ( !v17 )
                    {
                      if ( v14 == v16 )
                        break;
                      v19 = (void (__fastcall *)(char *, _DWORD *, const char *, char *))sub_1579F0(v8);
                      if ( v19 )
                      {
                        if ( ((int (__fastcall *)(char *))loc_157A00)(v8) )
                        {
                          v20 = (char *)sub_1B87A8(a1);
                          v42 = (const char *)sub_157938(v8);
                          v21 = (const char *)sub_1B87A8(a1);
                          v22 = (char *)sub_BA030(
                                          v20,
                                          (int)"auto-load: Loading %s script \"%s\" from section \"%s\" of objfile \"%s\".\n",
                                          v42,
                                          v14,
                                          ".debug_gdb_scripts",
                                          v21);
                          v23 = !sub_15BAC(v36[1], v22, v14, v8);
                          if ( !v22 )
                            v23 = 0;
                          if ( v23 )
                            v19(v8, a1, v14, s2 + 1);
                        }
                        sub_92620(v38);
                      }
                      else
                      {
                        if ( !v36[2] )
                        {
                          v34 = (const char *)sub_1B87A8(a1);
                          v35 = (const char *)sub_157938(v8);
                          sub_946B0(
                            "Unsupported auto-load script at offset %u in section %s\n"
                            "of file %s.\n"
                            "Use `info auto-load %s-scripts [REGEXP]' to list them.",
                            v10,
                            ".debug_gdb_scripts",
                            v34,
                            v35);
                          v36[2] = 1;
                        }
                        sub_15BAC(v36[1], 0, v14, v8);
                        sub_92620(v38);
                      }
                      goto LABEL_29;
                    }
                  }
                }
              }
              v18 = sub_1B87A8(a1);
              sub_946B0(
                "Missing/bad script name in entry at offset %u in section %s\nof file %s.",
                v10,
                ".debug_gdb_scripts",
                v18);
              sub_92620(v38);
              goto LABEL_29;
            default:
              goto LABEL_29;
          }
          continue;
        }
        sub_946B0("Non-nul-terminated entry in %s at offset %u", ".debug_gdb_scripts", v10);
LABEL_30:
        sub_92620(v37);
        return;
      default:
        sub_946B0("Invalid entry in %s section", ".debug_gdb_scripts");
        goto LABEL_30;
    }
  }
}
