int __fastcall sub_2A504C(int a1, unsigned int a2)
{
  char *v3; // r6
  int v4; // r4
  int v5; // r9
  void *v6; // r11
  int v7; // r8
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r0
  int i; // r10
  size_t v13; // r5
  int *v14; // r7
  int v15; // r0
  int v16; // r0
  char **v17; // r1
  int v18; // r2
  __int64 v19; // r0
  int v20; // r5
  const char *v21; // r0
  int v22; // r7
  int v24; // r0
  int v25; // r4
  int v26; // [sp+8h] [bp-2Ch]
  int v27; // [sp+10h] [bp-24h]
  int *v28; // [sp+14h] [bp-20h]
  int v29; // [sp+18h] [bp-1Ch]
  unsigned int v30; // [sp+20h] [bp-14h]
  int v31; // [sp+24h] [bp-10h]
  int v32; // [sp+28h] [bp-Ch]

  v30 = a2;
  if ( a2 )
    v30 = (a2 + 61) & 0xFFFFFFFE;
  v3 = (char *)sub_2AB368(24576, a2);
  if ( !v3 )
    return 0;
  v31 = sub_2ACBF4(a1, 1);
  if ( v31 )
  {
    v4 = *(_DWORD *)(a1 + 148);
    if ( v4 )
    {
      while ( !strcmp(*(const char **)v4, "__.SYMDEF") )
      {
        v4 = *(_DWORD *)(v4 + 144);
        *(_DWORD *)(a1 + 148) = v4;
        if ( !v4 )
          goto LABEL_42;
      }
      v5 = 0;
      v32 = 0;
      v6 = 0;
      v7 = 0;
      v29 = 1024;
      v26 = a1;
      do
      {
        if ( sub_2AA86C(v4, 1) && (*(_DWORD *)(v4 + 40) & 0x200) != 0 )
        {
          v8 = (*(int (__fastcall **)(int))(*(_DWORD *)(v4 + 4) + 260))(v4);
          v10 = v8;
          if ( v8 < 0 )
          {
LABEL_45:
            v22 = v26;
            if ( v32 )
LABEL_36:
              free(v6);
            free(v3);
            sub_2AD1F0(v22, v31);
            return 0;
          }
          if ( v8 )
          {
            if ( v8 > v32 )
            {
              if ( v32 )
                free(v6);
              v6 = (void *)sub_2AB368(v10, v9);
              if ( !v6 )
              {
LABEL_35:
                v22 = v26;
                goto LABEL_36;
              }
              v32 = v10;
            }
            v11 = (*(int (__fastcall **)(int, void *))(*(_DWORD *)(v4 + 4) + 264))(v4, v6);
            v27 = v11;
            if ( v11 < 0 )
              goto LABEL_35;
            if ( v11 )
            {
              for ( i = 0; v27 != i; ++i )
              {
                v18 = *((_DWORD *)v6 + i);
                v19 = *(_QWORD *)(v18 + 12);
                if ( ((v19 & 0x802082) != 0 || (*(_DWORD *)(HIDWORD(v19) + 20) & 0x1000) != 0)
                  && (char **)HIDWORD(v19) != &off_4708A8 )
                {
                  if ( v5 == v29 )
                  {
                    v29 = 2 * v5;
                    v24 = sub_2AB3FC(v3, 48 * v5);
                    if ( !v24 )
                      goto LABEL_35;
                    v18 = *((_DWORD *)v6 + i);
                    v3 = (char *)v24;
                  }
                  v20 = *(_DWORD *)(v18 + 4);
                  if ( *(_BYTE *)v20 == 95 && *(_BYTE *)(v20 + 1) == 95 )
                  {
                    if ( *(_BYTE *)(v20 + 2) == 95 )
                      v21 = (const char *)(v20 + 1);
                    else
                      v21 = *(const char **)(v18 + 4);
                    if ( !strcmp(v21, "__gnu_lto_slim") )
                    {
                      sub_2A6A5C("%B: plugin needed to handle lto object", v4);
                      v20 = *(_DWORD *)(*((_DWORD *)v6 + i) + 4);
                    }
                  }
                  v13 = strlen((const char *)v20);
                  v14 = (int *)&v3[24 * v5];
                  v15 = sub_2ACBF4(v26, 4);
                  *v14 = v15;
                  v28 = (int *)v15;
                  if ( !v15 )
                    goto LABEL_35;
                  v16 = sub_2ACBF4(v26, v13 + 1);
                  v17 = *(char ***)&v3[24 * v5];
                  *v28 = v16;
                  if ( !*v17 )
                    goto LABEL_35;
                  ++v5;
                  strcpy(*v17, *(const char **)(*((_DWORD *)v6 + i) + 4));
                  v14[4] = v7;
                  v7 += 1 + v13;
                  v14[2] = v4;
                }
              }
            }
          }
          if ( !(*(int (__fastcall **)(int))(*(_DWORD *)(v4 + 4) + 152))(v4) )
            goto LABEL_45;
        }
        v4 = *(_DWORD *)(v4 + 144);
      }
      while ( v4 );
      a1 = v26;
      v25 = (*(int (__fastcall **)(int, unsigned int, char *, int, int))(*(_DWORD *)(v26 + 4) + 232))(
              v26,
              v30,
              v3,
              v5,
              v7);
      if ( v32 )
        free(v6);
    }
    else
    {
LABEL_42:
      v25 = (*(int (__fastcall **)(int, unsigned int, char *))(*(_DWORD *)(a1 + 4) + 232))(a1, v30, v3);
    }
    free(v3);
    sub_2AD1F0(a1, v31);
    return v25;
  }
  else
  {
    free(v3);
    return 0;
  }
}
