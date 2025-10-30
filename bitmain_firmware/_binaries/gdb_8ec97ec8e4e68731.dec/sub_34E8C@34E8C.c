int __fastcall sub_34E8C(
        void (__fastcall *a1)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _BOOL4, _BOOL4, _BOOL4, int, char *, int),
        int a2)
{
  _BOOL4 v2; // r11
  int v3; // r0
  int v4; // r4
  int result; // r0
  int v6; // r0
  int v7; // r5
  char *v8; // r0
  char *v9; // r4
  char *v10; // r4
  char v11; // r3
  size_t v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r4
  int v16; // r5
  char *v17; // r0
  char *v18; // r0
  int v19; // r6
  char *v20; // r5
  int v21; // r0
  char *v22; // r0
  char *i; // r6
  int v24; // r0
  int v25; // r3
  _BOOL4 v26; // r3
  char *v27; // r3
  bool v28; // zf
  int v29; // r3
  int v30; // r3
  int v31; // [sp+2Ch] [bp-198h]
  _BOOL4 v32; // [sp+3Ch] [bp-188h]
  _BOOL4 v33; // [sp+40h] [bp-184h]
  _BOOL4 v34; // [sp+44h] [bp-180h]
  int v37; // [sp+58h] [bp-16Ch]
  int v38; // [sp+5Ch] [bp-168h]
  unsigned int v39; // [sp+60h] [bp-164h]
  char *s; // [sp+6Ch] [bp-158h] BYREF
  char *save_ptr; // [sp+70h] [bp-154h] BYREF
  int v42; // [sp+74h] [bp-150h] BYREF
  int v43; // [sp+78h] [bp-14Ch] BYREF
  char *string; // [sp+7Ch] [bp-148h] BYREF
  int v45; // [sp+80h] [bp-144h]
  int v46; // [sp+84h] [bp-140h] BYREF
  int v47; // [sp+88h] [bp-13Ch] BYREF
  char *v48; // [sp+8Ch] [bp-138h] BYREF
  __int64 v49; // [sp+90h] [bp-134h] BYREF
  __int64 v50; // [sp+98h] [bp-12Ch] BYREF
  __int64 v51; // [sp+A0h] [bp-124h] BYREF
  __int64 v52; // [sp+A8h] [bp-11Ch] BYREF
  const char *v53[17]; // [sp+B4h] [bp-110h] BYREF
  char v54[100]; // [sp+F8h] [bp-CCh] BYREF
  _BYTE v55[104]; // [sp+15Ch] [bp-68h] BYREF

  v3 = sub_183688(a1);
  v4 = *(unsigned __int8 *)(v3 + 16);
  if ( *(_BYTE *)(v3 + 16) )
    return 1;
  v6 = sub_183688(v3);
  v7 = *(_DWORD *)(v6 + 12);
  if ( dword_46AF64
    && (sub_93170(v55, 100, "/proc/%d/coredump_filter", *(_DWORD *)(v6 + 12)), sub_23183C(v53, v4, v55), v53[0]) )
  {
    sscanf(v53[0], "%x", v54);
    v39 = *(_DWORD *)v54;
    if ( v53[0] )
      free((void *)v53[0]);
  }
  else
  {
    v39 = 51;
  }
  sub_93170(v54, 100, "/proc/%d/smaps", v7);
  sub_23183C(&s, 0, v54);
  v8 = s;
  if ( !s )
  {
    sub_93170(v54, 100, "/proc/%d/maps", v7);
    sub_23183C(v53, 0, v54);
    v27 = s;
    v8 = (char *)v53[0];
    v53[0] = 0;
    v28 = s == 0;
    s = v8;
    if ( !v28 )
    {
      free(v27);
      if ( v53[0] )
        free((void *)v53[0]);
      v8 = s;
    }
    if ( !v8 )
      return 1;
  }
  v9 = strtok_r(v8, (const char *)&word_356638, &save_ptr);
  if ( !v9 )
    goto LABEL_32;
  do
  {
    v45 = 0;
    sub_33B98(v9, &v49, &v50, &v42, &v46, &v51, &v43, &v47, &v52, (int *)&string);
    v10 = string;
    v11 = byte_471B20;
    __dmb(0xBu);
    if ( (v11 & 1) == 0 && sub_33A554(&byte_471B20) )
    {
      sub_33A65C(&byte_471B20);
      _aeabi_atexit(&obj, (void (*)(void *))sub_375D8);
    }
    if ( !dword_471B88 )
    {
      dword_471B88 = -1;
      if ( byte_471B84 )
      {
        byte_471B84 = 0;
        sub_16373C(&stru_471B64);
        sub_16373C(&stru_471B44);
        sub_16373C(&obj);
      }
      memset(&obj, 0, 0x60u);
      sub_1636B8(&obj, "^/dev/zero\\( (deleted)\\)\\?$", 8, "Could not compile regex to match /dev/zero filename");
      sub_1636B8(
        &stru_471B44,
        "^/\\?SYSV[0-9a-fA-F]\\{8\\}\\( (deleted)\\)\\?$",
        8,
        "Could not compile regex to match shmem filenames");
      sub_1636B8(&stru_471B64, " (deleted)$", 8, "Could not compile regex to match '<file> (deleted)'");
      byte_471B84 = 1;
      dword_471B88 = 1;
LABEL_53:
      if ( *v10 && j_regexec(&obj, v10, 0, 0, 0) && j_regexec(&stru_471B44, v10, 0, 0, 0) )
      {
        v24 = j_regexec(&stru_471B64, v10, 0, 0, 0);
        if ( v24 )
        {
          v25 = 1;
        }
        else
        {
          v25 = 0;
          v2 = 1;
        }
        if ( v24 )
          v2 = 0;
        v38 = v25;
      }
      else
      {
        v2 = 1;
        v38 = 0;
      }
      goto LABEL_15;
    }
    if ( dword_471B88 != -1 )
      goto LABEL_53;
    strcpy((char *)v53, " (deleted)");
    v12 = strlen(v10);
    if ( v12 <= 9 )
    {
      v2 = 0;
      v38 = 1;
    }
    else
    {
      v13 = strcmp(&v10[v12 - 10], (const char *)v53);
      v2 = v13 == 0;
      v14 = v13;
      if ( v13 )
        v14 = 1;
      v38 = v14;
    }
LABEL_15:
    v15 = v42;
    v16 = v46;
    v32 = sub_3385F0(v42, 114, v46) != 0;
    v33 = sub_3385F0(v15, 119, v16) != 0;
    v34 = sub_3385F0(v15, 120, v16) != 0;
    v37 = sub_3385F0(v15, 112, v16);
    v17 = strtok_r(0, (const char *)&word_356638, &save_ptr);
    v9 = v17;
    if ( !v17 || (unsigned int)(unsigned __int8)*v17 - 65 > 0x19 )
    {
      v20 = string;
      goto LABEL_30;
    }
    v31 = 0;
    while ( 1 )
    {
      v19 = sscanf(v9, "%64s", v53);
      if ( v19 != 1 )
        break;
      if ( strcmp((const char *)v53, "Anonymous:") )
      {
        if ( !strcmp((const char *)v53, "VmFlags:") )
        {
          v48 = 0;
          LOBYTE(v45) = v45 | 1;
          v21 = sub_9364C(v9);
          v22 = (char *)sub_935D0(v21);
          for ( i = strtok_r(v22, (const char *)&word_3E1F84, &v48); i; i = strtok_r(
                                                                              0,
                                                                              (const char *)&word_3E1F84,
                                                                              &v48) )
          {
            if ( !strcmp(i, "io") )
            {
              LOBYTE(v45) = v45 | 2;
            }
            else if ( !strcmp(i, "ht") )
            {
              LOBYTE(v45) = v45 | 4;
            }
            else if ( !strcmp(i, "dd") )
            {
              LOBYTE(v45) = v45 | 8;
            }
            else if ( !strcmp(i, "sh") )
            {
              LOBYTE(v45) = v45 | 0x10;
            }
          }
          if ( strcmp((const char *)v53, "AnonHugePages:") && strcmp((const char *)v53, "Anonymous:") )
            goto LABEL_20;
          v19 = v31;
        }
        else
        {
          if ( strcmp((const char *)v53, "AnonHugePages:") )
            goto LABEL_20;
          v19 = v31;
        }
      }
      if ( sscanf(v9, "%*s%lu", &v48) != 1 )
      {
        sub_946B0("Error parsing {s,}maps file '%s' number", v54);
        v31 = v19;
LABEL_29:
        v20 = string;
        if ( !v31 )
          goto LABEL_30;
        goto LABEL_66;
      }
      v31 = v19;
      if ( v48 )
        v2 = 1;
LABEL_20:
      v18 = strtok_r(0, (const char *)&word_356638, &save_ptr);
      v9 = v18;
      if ( !v18 || (unsigned int)(unsigned __int8)*v18 - 65 > 0x19 )
        goto LABEL_29;
    }
    sub_946B0("Error parsing {s,}maps file '%s'", v54);
    v20 = string;
    if ( !v31 )
      goto LABEL_30;
LABEL_66:
    if ( !strcmp("[vdso]", v20) || !strcmp("[vsyscall]", v20) )
      goto LABEL_30;
    if ( (v45 & 1) != 0 )
    {
      if ( (v45 & 2) == 0 && (dword_471B8C || (v45 & 8) == 0) )
      {
        if ( (v45 & 4) == 0 )
        {
          v26 = (v45 & 0x10) == 0;
          goto LABEL_90;
        }
        if ( (v45 & 0x10) != 0 )
        {
          if ( (v39 & 0x40) == 0 )
            continue;
        }
        else if ( (v39 & 0x20) == 0 )
        {
          continue;
        }
LABEL_30:
        a1(
          v49,
          HIDWORD(v49),
          v50 - v49,
          (unsigned __int64)(v50 - v49) >> 32,
          v51,
          HIDWORD(v51),
          v52,
          HIDWORD(v52),
          v32,
          v33,
          v34,
          1,
          v20,
          a2);
      }
    }
    else
    {
      v26 = v37;
      if ( v37 )
        v26 = 1;
LABEL_90:
      v28 = !v26;
      v29 = v38 & v2;
      if ( v28 )
      {
        if ( v29 )
        {
          v30 = (v39 & 0xA) != 0;
        }
        else if ( v2 )
        {
          v30 = (v39 >> 1) & 1;
        }
        else
        {
          v30 = (v39 >> 3) & 1;
        }
      }
      else if ( v29 )
      {
        v30 = (v39 & 5) != 0;
      }
      else if ( v2 )
      {
        v30 = v39 & 1;
      }
      else
      {
        v30 = (v39 >> 2) & 1;
      }
      if ( v30 )
        goto LABEL_30;
    }
  }
  while ( v9 );
LABEL_32:
  result = (int)s;
  if ( s )
  {
    free(s);
    return 0;
  }
  return result;
}
