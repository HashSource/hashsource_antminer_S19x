int __fastcall sub_2F6268(int a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v7; // r10
  int v9; // r6
  const char *v10; // r7
  int i; // r5
  const char *v12; // r0
  int v13; // r11
  int v14; // r3
  bool v15; // zf
  const char *v16; // r11
  int v17; // r5
  int v18; // r4
  bool v19; // zf
  int v20; // r2
  int v21; // r3
  bool v22; // zf
  _DWORD *v23; // r0
  _DWORD *v24; // r8
  int v25; // r10
  int v26; // r5
  int v27; // r4
  int v28; // r3
  bool v29; // zf
  const char *v30; // r11
  int v31; // r0
  int v32; // r9
  int v33; // r9
  int v34; // r3
  int v35; // r1
  int v36; // r5
  _DWORD *j; // [sp+8h] [bp-Ch]

  v2 = a2[28];
  if ( v2 )
  {
    if ( v2 > 0 )
    {
      v3 = a2[29] + 8;
      do
      {
        v4 = *(_DWORD *)(v3 - 4);
        --v2;
        v5 = *(_DWORD *)(v3 - 8);
        v3 += 8;
        *(_DWORD *)(v5 + 28) = v4;
      }
      while ( v2 );
    }
    return 1;
  }
  v7 = a2[6];
  v9 = a1;
  v10 = *(const char **)(a2[2] + 24);
  while ( 1 )
  {
    for ( i = *(_DWORD *)(v9 + 100); i; ++v2 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(i + 60);
        v15 = v14 == 0;
        if ( v14 )
          v15 = v14 == i;
        if ( (v15 || (*(_DWORD *)(i + 20) & 0x2000) != 0) && !*(_DWORD *)(i + 28) )
        {
          v16 = *(const char **)i;
          if ( !strcmp(*(const char **)i, v10) )
            break;
          v12 = v16;
          v13 = *(_DWORD *)(i + 20);
          if ( !strncmp(v12, ".gnu.linkonce.wi.", 0x11u) || (v13 & 1) != 0 && a1 == v9 )
            break;
        }
        i = *(_DWORD *)(i + 12);
        if ( !i )
          goto LABEL_20;
      }
      i = *(_DWORD *)(i + 12);
    }
LABEL_20:
    if ( v7 == v9 )
      break;
    v9 = v7;
  }
  if ( v2 <= 1 )
  {
    a2[28] = -1;
LABEL_25:
    if ( a1 != v9 )
    {
      v17 = *(_DWORD *)(a1 + 100);
      v18 = *(_DWORD *)(v9 + 100);
      v19 = v17 == 0;
      if ( v17 )
        v19 = v18 == 0;
      if ( !v19 )
      {
        do
        {
          if ( (*(_DWORD *)(v18 + 20) & 0x2000) != 0 )
            break;
          if ( !strcmp(*(const char **)v17, *(const char **)v18) )
          {
            v20 = *(_DWORD *)(v17 + 56);
            v21 = *(_DWORD *)(v17 + 28);
            *(_DWORD *)(v18 + 60) = *(_DWORD *)(v17 + 60);
            *(_DWORD *)(v18 + 56) = v20;
            *(_DWORD *)(v18 + 28) = v21;
          }
          v17 = *(_DWORD *)(v17 + 12);
          v18 = *(_DWORD *)(v18 + 12);
          v22 = v17 == 0;
          if ( v17 )
            v22 = v18 == 0;
        }
        while ( !v22 );
      }
    }
    return 1;
  }
  v23 = sub_2AB368(8 * v2);
  v24 = v23;
  if ( v23 )
  {
    v9 = a1;
    v25 = 0;
    v26 = 0;
    a2[29] = v23;
    a2[28] = v2;
    for ( j = a2; ; v9 = j[6] )
    {
      v27 = *(_DWORD *)(v9 + 100);
      if ( v27 )
        break;
LABEL_59:
      if ( v9 == j[6] )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v28 = *(_DWORD *)(v27 + 60);
      v29 = v28 == 0;
      if ( v28 )
        v29 = v28 == v27;
      if ( !v29 && (*(_DWORD *)(v27 + 20) & 0x2000) == 0 || *(_DWORD *)(v27 + 28) )
        goto LABEL_46;
      v30 = *(const char **)v27;
      v31 = strcmp(*(const char **)v27, v10);
      v32 = *(_DWORD *)(v27 + 20) & 1;
      if ( !v31 || !strncmp(v30, ".gnu.linkonce.wi.", 0x11u) )
        break;
      if ( v32 && a1 == v9 )
      {
        v35 = *(_DWORD *)(v27 + 40);
        v36 = v26 - 1;
        if ( !v35 )
          v35 = *(_DWORD *)(v27 + 36);
        v34 = -(1 << *(_DWORD *)(v27 + 64)) & (v36 + (1 << *(_DWORD *)(v27 + 64)));
        v26 = v34 + v35;
        *(_DWORD *)(v27 + 28) = v34;
LABEL_58:
        *v24 = v27;
        v24 += 2;
        v27 = *(_DWORD *)(v27 + 12);
        *(v24 - 1) = v34;
        if ( !v27 )
          goto LABEL_59;
      }
      else
      {
LABEL_46:
        v27 = *(_DWORD *)(v27 + 12);
        if ( !v27 )
          goto LABEL_59;
      }
    }
    v33 = *(_DWORD *)(v27 + 40);
    if ( !v33 )
      v33 = *(_DWORD *)(v27 + 36);
    if ( *(_DWORD *)(v27 + 64) )
      sub_2A6BBC("./dwarf2.c", 3971);
    *(_DWORD *)(v27 + 28) = v25;
    v34 = v25;
    v25 += v33;
    goto LABEL_58;
  }
  return 0;
}
