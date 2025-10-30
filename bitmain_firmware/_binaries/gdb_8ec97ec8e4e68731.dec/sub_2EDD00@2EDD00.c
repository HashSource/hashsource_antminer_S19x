int __fastcall sub_2EDD00(int a1, char *a2)
{
  int v2; // r3
  int v3; // r7
  char v6; // r2
  _DWORD *v7; // r5
  int v8; // r10
  int v9; // r3
  bool v10; // zf
  int v11; // r3
  char *i; // r4
  bool v13; // zf
  int v15; // r3
  _DWORD *v16; // r5
  int v17; // r9
  int v18; // r4
  int v19; // r3
  int v20; // r3
  _DWORD *v21; // r5
  int j; // r9
  int v23; // r4
  int v24; // r3
  int v25; // r0
  char v26; // r3
  int v27; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v28[10]; // [sp+8h] [bp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v27 = 1;
  v3 = *(_DWORD *)(v2 + 444);
  if ( (*(_BYTE *)(v3 + 466) & 2) != 0 && *(_DWORD *)(*((_DWORD *)a2 + 7) + 40) == 1 )
  {
    (*(void (__fastcall **)(char *))(v3 + 184))(a2);
    v6 = a2[3];
    v7 = (_DWORD *)*((_DWORD *)a2 + 14);
    v8 = *((_DWORD *)a2 + 7);
    v9 = v6 & 0x60;
    v10 = v9 == 64;
    if ( v9 != 64 )
      v10 = v7 == 0;
    if ( !v10 )
    {
      do
      {
        v11 = v7[25];
        if ( v11 && (*(_WORD *)(v11 + 24) & 0x380) != 0x200 )
        {
          for ( i = sub_2AD7AC((int)v7, ".eh_frame"); i; i = sub_2AD7CC(0, (const char **)i) )
          {
            if ( !sub_2E297C(v28, (int)a2, (int)i) )
              break;
            sub_2F1D74();
            if ( *(_DWORD *)(*((_DWORD *)i + 35) + 136) && (*((_DWORD *)i + 5) & 0x100000) == 0 )
              *(_DWORD *)(v7[40] + 584) = i;
            sub_2DBC08((int)v28, (int)i);
          }
          v6 = a2[3];
        }
        v7 = (_DWORD *)v7[39];
        v9 = v6 & 0x60;
        v13 = v9 == 64;
        if ( v9 != 64 )
          v13 = v7 == 0;
      }
      while ( !v13 );
    }
    sub_2FCBD4(v8, sub_2DC8D0, &v27, v9);
    if ( !v27 )
      return 0;
    sub_2FCBD4(v8, sub_2E2A44, &v27, v27);
    if ( !v27 )
      return 0;
    v15 = *(_DWORD *)(v8 + 48);
    if ( v15 || (v15 = *a2, v15 < 0) )
      sub_2FCBD4(v8, *(_DWORD *)(v3 + 188), a2, v15);
    v16 = (_DWORD *)*((_DWORD *)a2 + 14);
    v17 = *(_DWORD *)(v3 + 192);
    if ( v16 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v16[1] + 4) == 5 && (*(_BYTE *)(v16[40] + 2340) & 0x3F) == *(_DWORD *)(v8 + 44) )
        {
          if ( (*(int (**)(void))(v3 + 116))() )
          {
            v18 = v16[25];
            if ( v18 )
            {
              if ( (*(_WORD *)(v18 + 24) & 0x380) != 0x200 )
                break;
            }
          }
        }
LABEL_39:
        v16 = (_DWORD *)v16[39];
        if ( !v16 )
          goto LABEL_40;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v18 + 24) & 8) == 0 )
          {
            v20 = *(_DWORD *)(v18 + 20);
            if ( (v20 & 0x8000) == 0 )
            {
              if ( (v20 & 0x200000) != 0 )
                break;
              v19 = *(_DWORD *)(v18 + 140);
              if ( *(_DWORD *)(v19 + 4) == 7 && !*(_DWORD *)(v19 + 124) )
                break;
            }
          }
          v18 = *(_DWORD *)(v18 + 12);
          if ( !v18 )
            goto LABEL_39;
        }
        if ( !sub_2ED50C((int)a2, v18, v17) )
          return 0;
        v18 = *(_DWORD *)(v18 + 12);
        if ( !v18 )
          goto LABEL_39;
      }
    }
LABEL_40:
    (*(void (__fastcall **)(char *, int))(v3 + 196))(a2, v17);
    v21 = (_DWORD *)*((_DWORD *)a2 + 14);
    for ( j = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444); v21; v21 = (_DWORD *)v21[39] )
    {
      if ( *(_DWORD *)(v21[1] + 4) == 5 && (*(_BYTE *)(v21[40] + 2340) & 0x3F) == *(_DWORD *)(*((_DWORD *)a2 + 7) + 44) )
      {
        if ( (*(int (**)(void))(j + 116))() )
        {
          v23 = v21[25];
          if ( v23 )
          {
            if ( (*(_WORD *)(v23 + 24) & 0x380) != 0x200 )
            {
              do
              {
                v24 = *(_DWORD *)(v23 + 20);
                v25 = v24 | 0x8000;
                if ( (v24 & 0x2000000) != 0 )
                  *(_BYTE *)(v23 + 24) = *(_BYTE *)(v23 + 24) & 0xF7
                                       | (8 * ((*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v23 + 140) + 124) + 24) & 8) != 0));
                if ( (*(_BYTE *)(v23 + 24) & 8) == 0 && (v24 & 0x8000) == 0 )
                {
                  v26 = a2[6];
                  *(_DWORD *)(v23 + 20) = v25;
                  if ( (v26 & 1) != 0 )
                  {
                    if ( *(_DWORD *)(v23 + 36) )
                      sub_2A6A5C("Removing unused section '%A' in file '%B'", v23, v21);
                  }
                }
                v23 = *(_DWORD *)(v23 + 12);
              }
              while ( v23 );
            }
          }
        }
      }
    }
    return 1;
  }
  else
  {
    sub_2A6A5C("Warning: gc-sections option ignored");
    return 1;
  }
}
