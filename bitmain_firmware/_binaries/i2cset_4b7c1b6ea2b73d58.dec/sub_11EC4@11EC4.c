_DWORD *sub_11EC4()
{
  _DWORD *v0; // r11
  int v1; // r9
  int v2; // r8
  char *v3; // r0
  const char *v4; // r10
  char *v5; // r0
  const char *v6; // r6
  int v7; // r7
  char *v8; // r0
  _DWORD *v9; // r5
  char *v10; // r0
  const char *v11; // r1
  char *v12; // r6
  FILE *v14; // r4
  int v15; // r5
  DIR *v16; // r6
  int v17; // r0
  const char *v18; // r4
  FILE *v19; // r7
  char *v20; // r9
  char *v21; // r0
  int v22; // r4
  int *v23; // r7
  char *v24; // r0
  char *v25; // r3
  DIR *v26; // r8
  int v27; // r0
  int v28; // r3
  const char *v29; // r7
  int v30; // r12
  const char *v31; // r0
  int v32; // r0
  int v33; // r7
  int v34; // [sp+8h] [bp-3ACh]
  int v35; // [sp+Ch] [bp-3A8h]
  char *src; // [sp+10h] [bp-3A4h]
  FILE *stream; // [sp+14h] [bp-3A0h]
  int v38; // [sp+1Ch] [bp-398h] BYREF
  int v39; // [sp+20h] [bp-394h] BYREF
  char v40[20]; // [sp+24h] [bp-390h] BYREF
  char s[120]; // [sp+38h] [bp-37Ch] BYREF
  char s1[256]; // [sp+B0h] [bp-304h] BYREF
  char name[256]; // [sp+1B0h] [bp-204h] BYREF
  char v44[260]; // [sp+2B0h] [bp-104h] BYREF

  v0 = calloc(8u, 0x10u);
  if ( !v0 )
    return v0;
  stream = (FILE *)fopen64("/proc/bus/i2c", "r");
  if ( stream )
  {
    v1 = 0;
    v2 = 0;
    while ( 1 )
    {
      ++v2;
      if ( !fgets(s, 120, stream) )
        break;
      v3 = strrchr(s, 9);
      v4 = v3 + 1;
      *v3 = 0;
      v35 = sub_11BF4(v3 + 1);
      v5 = strrchr(s, 9);
      v6 = v5 + 1;
      *v5 = 0;
      v7 = sub_11BF4(v5 + 1);
      v8 = strrchr(s, 9);
      *v8 = 0;
      src = v8 + 1;
      v34 = v7 + sub_11BF4(v8 + 1);
      _isoc99_sscanf(s, "i2c-%d", v44);
      if ( (v2 & 7) == 0 )
      {
        v0 = sub_11C88(v0, v2);
        if ( !v0 )
          return 0;
      }
      v9 = &v0[v1];
      v10 = (char *)malloc(v34 + v35);
      v11 = v6;
      v12 = v10;
      if ( !v10 )
        goto LABEL_10;
      v0[v1] = *(_DWORD *)v44;
      v1 += 4;
      v9[1] = strcpy(v10, v11);
      v9[2] = strcpy(&v12[v7], src);
      v9[3] = strcpy(&v12[v34], v4);
    }
    fclose(stream);
    return v0;
  }
  v14 = (FILE *)fopen64("/proc/mounts", "r");
  if ( !v14 )
    return v0;
  do
  {
    if ( !fgets(v44, 255, v14) )
    {
      fclose(v14);
      return v0;
    }
    ((void (*)(void))_isoc99_sscanf)();
  }
  while ( strcasecmp(s1, "sysfs") );
  v15 = 0;
  fclose(v14);
  strcat(name, "/class/i2c-dev");
  v16 = opendir(name);
  if ( !v16 )
    return v0;
LABEL_19:
  while ( 1 )
  {
    v17 = readdir64(v16);
    if ( !v17 )
      break;
    while ( *(_BYTE *)(v17 + 19) != 46 || *(_BYTE *)(v17 + 20) && (*(_BYTE *)(v17 + 20) != 46 || *(_BYTE *)(v17 + 21)) )
    {
      v18 = (const char *)(v17 + 19);
      if ( snprintf(v44, 0xFFu, "%s/%s/name", name, (const char *)(v17 + 19)) > 254 )
        goto LABEL_39;
      v19 = (FILE *)fopen64(v44, "r");
      if ( !v19 )
      {
        if ( snprintf(v44, 0xFFu, "%s/%s/device/name", name, v18) > 254 )
          goto LABEL_39;
        v19 = (FILE *)fopen64(v44, "r");
        if ( !v19 )
        {
          if ( snprintf(v44, 0xFFu, "%s/%s/device", name, v18) > 254 )
          {
LABEL_39:
            fprintf((FILE *)stderr, "%s: path truncated\n", v44);
          }
          else
          {
            v26 = opendir(v44);
            if ( v26 )
            {
              while ( 1 )
              {
                v27 = readdir64(v26);
                v28 = v27;
                v29 = (const char *)(v27 + 19);
                if ( !v27 )
                  break;
                v30 = *(unsigned __int8 *)(v27 + 19);
                v31 = (const char *)(v27 + 19);
                if ( (v30 != 46 || *(_BYTE *)(v28 + 20) && (*(_BYTE *)(v28 + 20) != 46 || *(_BYTE *)(v28 + 21)))
                  && !strncmp(v31, "i2c-", 4u) )
                {
                  if ( snprintf(v44, 0xFFu, "%s/%s/device/%s/name", name, v18, v29) <= 254 )
                  {
                    v19 = (FILE *)fopen64(v44, "r");
                    if ( v19 )
                      goto LABEL_23;
                  }
                  else
                  {
                    fprintf((FILE *)stderr, "%s: path truncated\n", v44);
                  }
                }
              }
            }
          }
          goto LABEL_19;
        }
      }
LABEL_23:
      v20 = fgets(s, 120, v19);
      fclose(v19);
      if ( !v20 )
      {
        fprintf((FILE *)stderr, "%s: read error\n", v44);
        goto LABEL_19;
      }
      v21 = strchr(s, 10);
      if ( v21 )
        *v21 = 0;
      if ( !_isoc99_sscanf(v18, "i2c-%d", &v38) )
        goto LABEL_19;
      if ( !strncmp(s, "ISA ", 4u) )
      {
        v22 = 1;
      }
      else
      {
        v32 = sub_11D88(v38, v40, 0x14u, 1);
        v33 = v32;
        if ( v32 >= 0 )
        {
          if ( ioctl(v32, 0x705u, &v39) >= 0 )
          {
            if ( (v39 & 1) != 0 )
            {
              v22 = 2;
            }
            else if ( (v39 & 0x7E0000) != 0 )
            {
              v22 = 3;
            }
            else
            {
              v22 = 0;
            }
          }
          else
          {
            v22 = 4;
          }
          close(v33);
        }
        else
        {
          v22 = 4;
        }
      }
      if ( ((v15 + 1) & 7) == 0 )
      {
        v0 = sub_11C88(v0, v15 + 1);
        if ( !v0 )
          return 0;
      }
      v23 = &v0[4 * v15];
      *v23 = v38;
      v24 = _strdup(s);
      v23[1] = (int)v24;
      if ( !v24 )
      {
LABEL_10:
        sub_11C50(v0);
        return 0;
      }
      ++v15;
      v25 = off_12E28[2 * v22 + 1];
      v23[2] = (int)off_12E28[2 * v22];
      v23[3] = (int)v25;
      v17 = readdir64(v16);
      if ( !v17 )
        goto LABEL_34;
    }
  }
LABEL_34:
  closedir(v16);
  return v0;
}
