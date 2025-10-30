int __fastcall sub_2CDE4C(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r11
  unsigned int v4; // r2
  void (*v5)(const char *, ...); // r3
  _DWORD *v6; // r3
  int i; // r7
  _DWORD *v8; // r6
  int v9; // r5
  int v10; // r4
  unsigned int *v11; // r3
  unsigned int *v12; // t1
  unsigned int v13; // r2
  int v15; // r1
  int v16; // r1
  unsigned int v17; // r9
  bool v18; // zf
  int v19; // r2
  int v20; // [sp+Ch] [bp-10h]

  v2 = (_DWORD *)a1[25];
  v3 = *(_DWORD *)(a1[40] + 2316);
  if ( v2 )
  {
    v20 = 1;
    while ( 1 )
    {
      v6 = (_DWORD *)v2[35];
      if ( (v6[2] & 0x80) != 0 )
        break;
      if ( v6[1] != 17 || v6[31] )
      {
LABEL_6:
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          goto LABEL_11;
      }
      else
      {
        v20 = 0;
        sub_2A6A5C("%B: SHT_GROUP section [index %d] has no SHF_GROUP sections", a1, v6[23]);
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          goto LABEL_11;
      }
    }
    v4 = v6[7];
    if ( v4 )
    {
      v15 = a1[40];
      if ( *(_DWORD *)(v15 + 532) <= v4 || (v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 64) + 4 * v4) + 44)) == 0 )
      {
        sub_2A6A5C("%B: sh_link [%d] in section `%A' is incorrect", v2[37]);
        v16 = 0;
        v6 = (_DWORD *)v2[35];
        v20 = 0;
      }
      v6[25] = v16;
    }
    else
    {
      v5 = *(void (**)(const char *, ...))(*(_DWORD *)(a1[1] + 444) + 376);
      if ( v5 )
        v5("%B: warning: sh_link not set for section `%A'", a1, v2);
    }
    goto LABEL_6;
  }
  v20 = 1;
LABEL_11:
  if ( v3 != -1 && v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( 1 )
      {
        v8 = *(_DWORD **)(*(_DWORD *)(a1[40] + 2312) + 4 * i);
        if ( v8 )
        {
          if ( v8[11] )
          {
            v9 = v8[12];
            if ( v9 )
              break;
          }
        }
        v19 = i++;
        v20 = 0;
        sub_2A6A5C("%B: section group entry number %u is corrupt", a1, v19);
        if ( v3 == i )
          return v20;
      }
      v10 = v8[6] >> 2;
LABEL_18:
      while ( --v10 )
      {
        while ( 1 )
        {
          v12 = *(unsigned int **)(v9 + 4);
          v9 += 4;
          v11 = v12;
          if ( !v12 )
            break;
          v13 = v11[11];
          if ( !v13 )
          {
            v17 = v11[1];
            v18 = v17 == 4;
            if ( v17 != 4 )
              v18 = v17 == 9;
            if ( !v18 )
            {
              if ( *v11 )
                sub_2CD85C((int)a1, *(_DWORD *)(a1[40] + 60), *v11);
              v20 = 0;
              sub_2A6A5C(aBUnknownTypeXS_0, a1, v17);
            }
            goto LABEL_18;
          }
          --v10;
          *(_DWORD *)(*(_DWORD *)(v13 + 140) + 120) = v8[11];
          if ( !v10 )
            goto LABEL_22;
        }
      }
LABEL_22:
      ;
    }
  }
  return v20;
}
