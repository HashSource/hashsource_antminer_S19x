void __fastcall sub_868A8(unsigned __int32 *a1)
{
  unsigned __int16 *v1; // r7
  char *v3; // r0
  char *v4; // r6
  FILE *v5; // r11
  const char *v6; // r6
  char *v7; // r0
  char *v8; // r0
  int v9; // r5
  unsigned __int16 *v10; // r4
  int v11; // r3
  unsigned __int32 *v12; // r2
  int v13; // r3
  _DWORD *v14; // r10
  int v15; // r9
  _DWORD **v16; // r10
  int v17; // t1
  _DWORD *v18; // r5
  _DWORD *v19; // t1
  _DWORD *v20; // r4
  const char *v21; // r2
  int v22; // r3
  _DWORD *v23; // r8
  int v24; // r6
  const char **v25; // r8
  int v26; // t1
  int v27; // r6
  const char *v28; // t1
  int v29; // r2
  char *v30; // r6
  size_t v31; // r9
  char *v32; // r8
  int v33; // r6
  FILE *v34; // r5
  int *v35; // r0
  const char *v36; // r7
  int v37; // r4
  char *v38; // r0
  bool v39; // cc
  unsigned __int32 *v40; // [sp+Ch] [bp-30h]
  unsigned __int16 *v41; // [sp+28h] [bp-14h]
  int v42; // [sp+2Ch] [bp-10h]
  const char *v43; // [sp+30h] [bp-Ch] BYREF

  v43 = 0;
  v3 = sub_80A10((int)a1, &v43);
  v4 = v3;
  if ( v3 )
  {
    v5 = (FILE *)fopen64(v3, "w");
    if ( v5 )
    {
      if ( v43 )
        free(v4);
      fwrite("#  ", 1u, 3u, v5);
      v6 = (const char *)a1[14];
      v7 = strchr(v6, 10);
      if ( v7 )
        fwrite(v6, 1u, v7 + 1 - v6, v5);
      v43 = (const char *)time(0);
      v8 = ctime((const time_t *)&v43);
      fprintf(v5, "#  preset/initialization file\n#  %s#\n", v8);
      v9 = a1[26];
      v10 = (unsigned __int16 *)a1[17];
      v40 = a1;
      do
      {
        v11 = *((_DWORD *)v10 + 4);
        if ( (v11 & 0xF) != 0 && (v11 & 0x280100) == 0 )
        {
          v12 = (unsigned __int32 *)v10[4];
          if ( v12 == &stru_7FFC.r_info || (unsigned __int32 *)*v10 == v12 )
          {
            v13 = (unsigned __int16)v11 >> 12;
            if ( (*((_DWORD *)v10 + 4) & 0x10) != 0 )
              v12 = v40;
            else
              v1 = v10;
            if ( (*((_DWORD *)v10 + 4) & 0x10) != 0 )
            {
              v12 = (unsigned __int32 *)v12[17];
              v1 = (unsigned __int16 *)&v12[16 * v10[2]];
            }
            switch ( v13 )
            {
              case 0:
                if ( (*((_DWORD *)v1 + 4) & 0x20) != 0 )
                  v29 = *((_DWORD *)v10 + 14);
                else
                  v29 = *((_DWORD *)v10 + 13);
                if ( !v29 )
                  v29 = *((_DWORD *)v10 + 13);
                fprintf(v5, "%s\n", v29, *((_DWORD *)v10 + 13));
                break;
              case 1:
                v22 = *((_DWORD *)v1 + 4);
                if ( (v22 & 0x400) == 0 )
                  goto LABEL_21;
                v23 = (_DWORD *)*((_DWORD *)v1 + 7);
                v26 = *v23;
                v25 = (const char **)(v23 + 2);
                v24 = v26;
                if ( v26 <= 1 )
                {
                  v39 = v24 <= 0;
                  v27 = v24 - 1;
                  if ( v39 )
                    break;
                }
                else
                {
                  v27 = v24 - 1;
                  *((_DWORD *)v1 + 4) = v22 & 0xFFFFFFDF;
                }
                do
                {
                  --v27;
                  v28 = *v25++;
                  sub_7DBD0(v5, (int)v1, v28);
                }
                while ( v27 != -1 );
                break;
              case 2:
                v33 = *((_DWORD *)v1 + 6);
                (*((void (__fastcall **)(int, unsigned __int16 *, unsigned __int32 *))v1 + 10))(3, v1, v12);
                sub_7DBD0(v5, (int)v1, *((const char **)v1 + 6));
                *((_DWORD *)v1 + 6) = v33;
                break;
              case 3:
                v21 = "false";
                if ( *((_DWORD *)v1 + 6) )
                  v21 = "true";
                goto LABEL_32;
              case 4:
                v30 = (char *)sub_84B1C((int)v1);
                v31 = strlen(v30);
                v32 = (char *)sub_7FBE0(v31 + 3);
                *v32 = 61;
                memcpy(v32 + 1, v30, v31 + 1);
                sub_7DBD0(v5, (int)v1, v32);
                free(v32);
                free(v30);
                break;
              case 5:
LABEL_21:
                sub_7DBD0(v5, (int)v1, *((const char **)v1 + 6));
                break;
              case 6:
                v14 = (_DWORD *)*((_DWORD *)v1 + 7);
                if ( v14 )
                {
                  v17 = *v14;
                  v16 = (_DWORD **)(v14 + 2);
                  v15 = v17;
                  if ( v17 > 0 )
                  {
                    v41 = v10;
                    v42 = v9;
                    do
                    {
                      v19 = *v16++;
                      v18 = v19;
                      v20 = (_DWORD *)sub_83074(v19, 0);
                      if ( v20 )
                      {
                        fprintf(v5, "<%s type=nested>\n", *((_DWORD *)v1 + 13));
                        do
                        {
                          sub_7E400((int)v5, 1, (int)v1, v20);
                          v20 = (_DWORD *)sub_83260(v18, (int)v20);
                        }
                        while ( v20 );
                        fprintf(v5, "</%s>\n", *((_DWORD *)v1 + 13));
                      }
                      --v15;
                    }
                    while ( v15 );
                    v10 = v41;
                    v9 = v42;
                  }
                }
                break;
              case 7:
                v21 = (const char *)*((_DWORD *)v1 + 7);
                if ( v21
                  || (int)*v40 > (int)&loc_1FFFC + 3
                  && (v21 = (const char *)*((_DWORD *)v1 + 6), *(const char **)(v40[29] + 4 * *v1) != v21) )
                {
LABEL_32:
                  sub_7DBD0(v5, (int)v1, v21);
                }
                break;
              default:
                break;
            }
          }
        }
        --v9;
        v10 += 32;
      }
      while ( v9 > 0 );
      fclose(v5);
    }
    else
    {
      fprintf(stderr, off_B9544, a1[7]);
      v34 = stderr;
      v35 = _errno_location();
      v36 = off_B94F8;
      v37 = *v35;
      v38 = strerror(*v35);
      fprintf(v34, v36, v37, v38, v4);
      if ( v43 )
        free(v4);
    }
  }
}
