void __fastcall sub_85318(int *a1)
{
  char *v2; // r0
  char *v3; // r6
  FILE *v4; // r7
  unsigned __int16 *v5; // r6
  char *v6; // r0
  char *v7; // r0
  int v8; // r5
  unsigned __int16 *v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r3
  const char *v13; // r2
  char *v14; // r9
  char *v15; // r0
  char *v16; // r8
  int v17; // r3
  int v18; // r2
  int v19; // r3
  _DWORD *v20; // r9
  int v21; // r8
  const char **v22; // r9
  int v23; // t1
  int v24; // r8
  const char *v25; // t1
  int v26; // r8
  _DWORD *v27; // r3
  int v28; // r8
  _DWORD **v29; // r9
  _DWORD *v30; // r5
  _DWORD *v31; // t1
  _DWORD *v32; // r4
  bool v33; // cc
  int v34; // r4
  FILE *v35; // r5
  const char *v36; // r7
  char *v37; // r0
  unsigned __int16 *v38; // [sp+18h] [bp-14h]
  size_t v39; // [sp+1Ch] [bp-10h]
  int v40; // [sp+1Ch] [bp-10h]
  const char *v41; // [sp+20h] [bp-Ch] BYREF

  v41 = 0;
  v2 = sub_7F530((int)a1, &v41);
  v3 = v2;
  if ( v2 )
  {
    v4 = (FILE *)fopen64(v2, "w");
    if ( v4 )
    {
      if ( v41 )
        free(v3);
      fwrite("#  ", 1u, 3u, v4);
      v5 = (unsigned __int16 *)a1[14];
      v6 = strchr((const char *)v5, 10);
      if ( v6 )
        fwrite(v5, 1u, v6 + 1 - (char *)v5, v4);
      v41 = (const char *)time(0);
      v7 = ctime((const time_t *)&v41);
      fprintf(v4, "#  preset/initialization file\n#  %s#\n", v7);
      v8 = a1[26];
      v9 = (unsigned __int16 *)a1[17];
      do
      {
        while ( 2 )
        {
          v10 = *((_DWORD *)v9 + 4);
          if ( (v10 & 0xF) != 0 && (v10 & 0x280100) == 0 )
          {
            v11 = v9[4];
            if ( v11 == 0x8000 || *v9 == v11 )
            {
              v12 = (unsigned __int16)v10 >> 12;
              if ( (*((_DWORD *)v9 + 4) & 0x10) != 0 )
                v11 = v9[2];
              else
                v5 = v9;
              if ( (*((_DWORD *)v9 + 4) & 0x10) != 0 )
                v5 = (unsigned __int16 *)(a1[17] + (v11 << 6));
              switch ( v12 )
              {
                case 0:
                  v17 = *((_DWORD *)v9 + 13);
                  --v8;
                  v9 += 32;
                  if ( (*((_DWORD *)v5 + 4) & 0x20) != 0 )
                    v18 = *((_DWORD *)v9 - 2);
                  else
                    v18 = v17;
                  if ( !v18 )
                    v18 = v17;
                  fprintf(v4, "%s\n", v18, v17);
                  if ( v8 > 0 )
                    continue;
                  goto LABEL_22;
                case 1:
                  v19 = *((_DWORD *)v5 + 4);
                  if ( (v19 & 0x400) == 0 )
                    goto LABEL_24;
                  v20 = (_DWORD *)*((_DWORD *)v5 + 7);
                  v23 = *v20;
                  v22 = (const char **)(v20 + 2);
                  v21 = v23;
                  if ( v23 <= 1 )
                  {
                    v33 = v21 <= 0;
                    v24 = v21 - 1;
                    if ( v33 )
                      goto LABEL_21;
                  }
                  else
                  {
                    v24 = v21 - 1;
                    *((_DWORD *)v5 + 4) = v19 & 0xFFFFFFDF;
                  }
                  do
                  {
                    --v24;
                    v25 = *v22++;
                    sub_7C7A4(v4, (int)v5, v25);
                  }
                  while ( v24 != -1 );
                  break;
                case 2:
                  v26 = *((_DWORD *)v5 + 6);
                  --v8;
                  v9 += 32;
                  (*((void (__fastcall **)(int, unsigned __int16 *, int))v5 + 10))(3, v5, v11);
                  sub_7C7A4(v4, (int)v5, *((const char **)v5 + 6));
                  *((_DWORD *)v5 + 6) = v26;
                  if ( v8 > 0 )
                    continue;
                  goto LABEL_22;
                case 3:
                  if ( *((_DWORD *)v5 + 6) )
                    v13 = "true";
                  else
                    v13 = "false";
                  goto LABEL_20;
                case 4:
                  v14 = (char *)sub_835B8((int)v5);
                  v39 = strlen(v14);
                  v15 = (char *)malloc(v39 + 3);
                  v16 = v15;
                  if ( !v15 )
                    sub_C610(v39 + 3);
                  *v15 = 61;
                  --v8;
                  memcpy(v15 + 1, v14, v39 + 1);
                  v9 += 32;
                  sub_7C7A4(v4, (int)v5, v16);
                  free(v16);
                  free(v14);
                  if ( v8 > 0 )
                    continue;
                  goto LABEL_22;
                case 5:
LABEL_24:
                  --v8;
                  sub_7C7A4(v4, (int)v5, *((const char **)v5 + 6));
                  v9 += 32;
                  if ( v8 <= 0 )
                    goto LABEL_22;
                  continue;
                case 6:
                  v27 = (_DWORD *)*((_DWORD *)v5 + 7);
                  if ( v27 )
                  {
                    v28 = *v27;
                    if ( (int)*v27 > 0 )
                    {
                      v29 = (_DWORD **)(v27 + 2);
                      v38 = v9;
                      v40 = v8;
                      do
                      {
                        v31 = *v29++;
                        v30 = v31;
                        v32 = (_DWORD *)sub_81B34(v31, 0);
                        if ( v32 )
                        {
                          fprintf(v4, "<%s type=nested>\n", *((_DWORD *)v5 + 13));
                          do
                          {
                            sub_7CFA4((int)v4, 1, (int)v5, v32);
                            v32 = (_DWORD *)sub_81D14(v30, (int)v32);
                          }
                          while ( v32 );
                          fprintf(v4, "</%s>\n", *((_DWORD *)v5 + 13));
                        }
                        --v28;
                      }
                      while ( v28 );
                      v9 = v38;
                      v8 = v40;
                    }
                  }
                  goto LABEL_21;
                case 7:
                  v13 = (const char *)*((_DWORD *)v5 + 7);
                  if ( !v13 )
                  {
                    if ( *a1 <= 0x1FFFF )
                      goto LABEL_21;
                    v13 = (const char *)*((_DWORD *)v5 + 6);
                    if ( *(const char **)(a1[29] + 4 * *v5) == v13 )
                      goto LABEL_21;
                  }
LABEL_20:
                  sub_7C7A4(v4, (int)v5, v13);
                  goto LABEL_21;
                default:
                  goto LABEL_21;
              }
            }
          }
          break;
        }
LABEL_21:
        --v8;
        v9 += 32;
      }
      while ( v8 > 0 );
LABEL_22:
      fclose(v4);
    }
    else
    {
      fprintf(stderr, off_B8540[0], a1[7]);
      v34 = *_errno_location();
      v35 = stderr;
      v36 = off_B84F4[0];
      v37 = strerror(v34);
      fprintf(v35, v36, v34, v37, v3);
      if ( v41 )
        free(v3);
    }
  }
}
