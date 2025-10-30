_DWORD *sub_11784()
{
  _DWORD *v0; // r10
  int v1; // r8
  int v2; // r6
  char *v3; // r0
  const char *v4; // r11
  char *v5; // r0
  const char *v6; // r7
  char *v7; // r0
  const char *v8; // r9
  _DWORD *v9; // r5
  char *v10; // r0
  const char *v11; // r1
  char *v12; // r7
  FILE *v14; // r7
  FILE *v15; // r5
  DIR *v16; // r6
  int v17; // r0
  const char *v18; // r4
  FILE *v19; // r3
  char *v20; // r9
  char *v21; // r0
  int v22; // r3
  int v23; // r9
  FILE *v24; // r2
  int *v25; // r4
  char *v26; // r0
  DIR *v27; // r9
  int v28; // r12
  int v29; // r0
  int v30; // r0
  int v31; // r4
  FILE *v32; // [sp+Ch] [bp-3B0h]
  FILE *v33; // [sp+Ch] [bp-3B0h]
  FILE *v34; // [sp+Ch] [bp-3B0h]
  FILE *v35; // [sp+Ch] [bp-3B0h]
  char *v36; // [sp+10h] [bp-3ACh]
  char *format; // [sp+14h] [bp-3A8h]
  FILE *stream; // [sp+18h] [bp-3A4h]
  int v39; // [sp+24h] [bp-398h] BYREF
  int v40; // [sp+28h] [bp-394h] BYREF
  char v41[20]; // [sp+2Ch] [bp-390h] BYREF
  char s[120]; // [sp+40h] [bp-37Ch] BYREF
  char s1[256]; // [sp+B8h] [bp-304h] BYREF
  char v44[256]; // [sp+1B8h] [bp-204h] BYREF
  char name[260]; // [sp+2B8h] [bp-104h] BYREF

  v0 = calloc(8u, 0x10u);
  if ( v0 )
  {
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
        format = (char *)sub_114AC(v3 + 1);
        v5 = strrchr(s, 9);
        v6 = v5 + 1;
        *v5 = 0;
        v32 = (FILE *)sub_114AC(v5 + 1);
        v7 = strrchr(s, 9);
        v8 = v7 + 1;
        *v7 = 0;
        v36 = (char *)v32 + sub_114AC(v7 + 1);
        _isoc99_sscanf(s, "i2c-%d", name, v36);
        if ( (v2 & 7) == 0 )
        {
          v0 = sub_11554(v0, v2);
          if ( !v0 )
            return 0;
        }
        v9 = &v0[v1];
        v10 = (char *)malloc((size_t)&v36[(_DWORD)format]);
        v11 = v6;
        v12 = v10;
        if ( !v10 )
          goto LABEL_11;
        v0[v1] = *(_DWORD *)name;
        v1 += 4;
        v9[1] = strcpy(v10, v11);
        v9[2] = strcpy((char *)v32 + (_DWORD)v12, v8);
        v9[3] = strcpy(&v36[(_DWORD)v12], v4);
      }
      fclose(stream);
    }
    else
    {
      v14 = (FILE *)fopen64("/proc/mounts", "r");
      if ( v14 )
      {
        do
        {
          if ( !fgets(name, 255, v14) )
          {
            fclose(v14);
            return v0;
          }
          ((void (*)(void))_isoc99_sscanf)();
        }
        while ( strcasecmp(s1, "sysfs") );
        v15 = 0;
        fclose(v14);
        strcat(v44, "/class/i2c-dev");
        v16 = opendir(v44);
        if ( v16 )
        {
LABEL_19:
          while ( 1 )
          {
            v17 = readdir64(v16);
            if ( !v17 )
              break;
            while ( *(_BYTE *)(v17 + 19) != 46
                 || *(_BYTE *)(v17 + 20) && (*(_BYTE *)(v17 + 20) != 46 || *(_BYTE *)(v17 + 21)) )
            {
              v18 = (const char *)(v17 + 19);
              if ( snprintf(name, 0xFFu, "%s/%s/name", v44, (const char *)(v17 + 19)) > 254 )
                goto LABEL_39;
              v19 = (FILE *)fopen64(name, "r");
              if ( !v19 )
              {
                if ( snprintf(name, 0xFFu, "%s/%s/device/name", v44, v18) > 254 )
                  goto LABEL_39;
                v19 = (FILE *)fopen64(name, "r");
                if ( !v19 )
                {
                  if ( snprintf(name, 0xFFu, "%s/%s/device", v44, v18) > 254 )
                  {
LABEL_39:
                    fprintf((FILE *)stderr, "%s: path truncated\n", name);
                  }
                  else
                  {
                    v27 = opendir(name);
                    if ( v27 )
                    {
                      while ( 1 )
                      {
                        v28 = readdir64(v27);
                        if ( !v28 )
                          break;
                        if ( *(_BYTE *)(v28 + 19) != 46
                          || *(_BYTE *)(v28 + 20) && (*(_BYTE *)(v28 + 20) != 46 || *(_BYTE *)(v28 + 21)) )
                        {
                          v35 = (FILE *)(v28 + 19);
                          if ( !strncmp((const char *)(v28 + 19), "i2c-", 4u) )
                          {
                            if ( snprintf(name, 0xFFu, "%s/%s/device/%s/name", v44, v18, v35) <= 254 )
                            {
                              v29 = fopen64(name, "r");
                              if ( v29 )
                              {
                                v19 = (FILE *)v29;
                                goto LABEL_23;
                              }
                            }
                            else
                            {
                              fprintf((FILE *)stderr, "%s: path truncated\n", name);
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_19;
                }
              }
LABEL_23:
              v33 = v19;
              v20 = fgets(s, 120, v19);
              fclose(v33);
              if ( !v20 )
              {
                fprintf((FILE *)stderr, "%s: read error\n", name);
                goto LABEL_19;
              }
              v21 = strchr(s, 10);
              if ( v21 )
              {
                v22 = 0;
                *v21 = 0;
              }
              if ( !_isoc99_sscanf(v18, "i2c-%d", &v39, v22) )
                goto LABEL_19;
              if ( !strncmp(s, "ISA ", 4u) )
              {
                v23 = 1;
              }
              else
              {
                v30 = sub_11654(v39, v41, 0x14u, 1);
                v31 = v30;
                if ( v30 >= 0 )
                {
                  if ( ioctl(v30, 0x705u, &v40) >= 0 )
                  {
                    if ( (v40 & 1) != 0 )
                    {
                      v23 = 2;
                    }
                    else if ( (v40 & 0x7E0000) != 0 )
                    {
                      v23 = 3;
                    }
                    else
                    {
                      v23 = 0;
                    }
                  }
                  else
                  {
                    v23 = 4;
                  }
                  close(v31);
                }
                else
                {
                  v23 = 4;
                }
              }
              v24 = (FILE *)((char *)&v15->_flags + 1);
              if ( (((unsigned int)&v15->_flags + 1) & 7) == 0 )
              {
                v0 = sub_11554(v0, (int)&v15->_flags + 1);
                v24 = (FILE *)((char *)&v15->_flags + 1);
                if ( !v0 )
                  return 0;
              }
              v34 = v24;
              v25 = &v0[4 * (_DWORD)v15];
              *v25 = v39;
              v26 = _strdup(s);
              v25[1] = (int)v26;
              if ( !v26 )
              {
LABEL_11:
                sub_1151C(v0);
                return 0;
              }
              v15 = v34;
              *((_QWORD *)v25 + 1) = *(_QWORD *)&off_125B0[2 * v23];
              v17 = readdir64(v16);
              if ( !v17 )
                goto LABEL_34;
            }
          }
LABEL_34:
          closedir(v16);
        }
      }
    }
  }
  return v0;
}
