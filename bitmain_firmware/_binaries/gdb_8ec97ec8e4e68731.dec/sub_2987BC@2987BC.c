unsigned __int8 *__fastcall sub_2987BC(int a1, int *a2, int a3)
{
  int v3; // r12
  int v4; // r6
  size_t v5; // r4
  char *v6; // r3
  size_t v8; // r2
  int v9; // r8
  int v10; // r9
  int v11; // r6
  char *v12; // r7
  bool v13; // zf
  int v14; // r2
  int v15; // r3
  int v16; // r3
  char *v17; // r5
  int v18; // r4
  int (__fastcall *v19)(char *, int); // r4
  size_t v20; // r0
  char *v21; // r0
  int v22; // r0
  int v23; // r3
  int v25; // r0
  int v26; // t1
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0
  char *v31; // r0
  char *v32; // r0
  int v33; // r9
  unsigned __int8 **v34; // r7
  void **v35; // r0
  int v36; // r3
  void **v37; // r5
  int v38; // r8
  void **v39; // r9
  int v40; // r4
  void *v41; // t1
  int v42; // r3
  void *v43; // r0
  void **v44; // r4
  void *v45; // t1
  void *v46; // r0
  void **v47; // r4
  void *v48; // t1
  char *src; // [sp+4h] [bp-18h]
  int v52; // [sp+Ch] [bp-10h]
  _DWORD v53[3]; // [sp+10h] [bp-Ch] BYREF

  v3 = *a2;
  if ( byte_4707B4 != *(_BYTE *)(a1 + *a2) )
    return 0;
  v4 = v3 + 1;
  v5 = *(unsigned __int8 *)(a1 + v3 + 1);
  v6 = (char *)(a1 + v3 + 1);
  src = v6;
  if ( (unsigned __int8)byte_4707B4 == v5 )
  {
    v29 = dword_490158;
    v30 = dword_4707AC;
    *a2 = v3 + 2;
    v27 = sub_2979C4(v29 - 1 + v30);
    if ( v27 )
      return *(unsigned __int8 **)v27;
    return 0;
  }
  if ( v5 == 45 )
    v4 = v3 + 2;
  else
    v3 = 1;
  if ( v5 == 45 )
  {
    v5 = *(unsigned __int8 *)(a1 + v4);
    v6 = (char *)(a1 + v4);
    v3 = -1;
    src = (char *)(a1 + v4);
  }
  v8 = v5 - 48;
  if ( (unsigned __int8)(v5 - 48) <= 9u )
  {
    v25 = 0;
    do
    {
      v26 = (unsigned __int8)*++v6;
      ++v4;
      v25 = v8 + 10 * v25;
      v8 = v26 - 48;
    }
    while ( (unsigned __int8)(v26 - 48) <= 9u );
    *a2 = v4;
    if ( v3 == -1 )
      v25 = dword_490158 + dword_4707AC - v25;
    v27 = sub_2979C4(v25);
    if ( v27 )
      return *(unsigned __int8 **)v27;
    return 0;
  }
  if ( v5 == 63 )
  {
    ++v4;
    v9 = 1;
    v5 = *(unsigned __int8 *)(a1 + v4);
    src = (char *)(a1 + v4);
  }
  else
  {
    v9 = 0;
  }
  if ( !v5 )
  {
    v12 = src;
    v10 = v4;
    v17 = (char *)sub_93028(1u);
    goto LABEL_33;
  }
  v10 = v4;
  v52 = v4;
  v11 = v5;
  v12 = src;
  while ( 1 )
  {
    if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
    {
      v53[0] = 0;
      v53[1] = 0;
      sub_29B320(a1, v10, v53);
      v28 = sub_29B1F4(v12, v53);
      if ( v28 > 1 )
      {
        v10 += v28 - 1;
        goto LABEL_26;
      }
    }
    if ( !v9 )
    {
      v13 = v11 == 9;
      if ( v11 != 9 )
        v13 = v11 == 32;
      v14 = v13;
      if ( v11 == 58 )
        v14 |= 1u;
      if ( v14
        || dword_48BB5C && strchr((const char *)dword_48BB5C, v11)
        || (v15 = (unsigned __int8)*v12, v15 == a3)
        || v15 == 10 )
      {
        v5 = v10 - v52;
        v31 = (char *)sub_93028(v10 - v52 + 1);
        v17 = v31;
        if ( v10 == v52 )
        {
          *v31 = 0;
          goto LABEL_61;
        }
        goto LABEL_64;
      }
      goto LABEL_26;
    }
    v16 = (unsigned __int8)*v12;
    if ( v16 == 10 )
      break;
    if ( v16 == 63 )
    {
LABEL_32:
      v5 = v10 - v52;
      v17 = (char *)sub_93028(v10 - v52 + 1);
      if ( v10 == v52 )
        goto LABEL_33;
      goto LABEL_64;
    }
LABEL_26:
    ++v10;
    v11 = *(unsigned __int8 *)(a1 + v10);
    v12 = (char *)(a1 + v10);
    if ( !*(_BYTE *)(a1 + v10) )
      goto LABEL_32;
  }
  v5 = v10 - v52;
  v32 = (char *)sub_93028(v10 - v52 + 1);
  v17 = v32;
  if ( v10 == v52 )
  {
    *v32 = 0;
    goto LABEL_34;
  }
LABEL_64:
  strncpy(v17, src, v5);
LABEL_33:
  v17[v5] = 0;
  if ( !v9 )
  {
LABEL_61:
    v19 = (int (__fastcall *)(char *, int))sub_29B050;
    *a2 = v10;
    goto LABEL_41;
  }
LABEL_34:
  if ( *v12 == 63 )
  {
    *a2 = v10 + 1;
    if ( *v17 )
      goto LABEL_82;
LABEL_36:
    v18 = dword_48BB38;
    if ( dword_48BB38 )
    {
      v19 = (int (__fastcall *)(char *, int))sub_29B048;
      sub_297758(v17);
      v20 = strlen((const char *)dword_48BB38);
      v21 = (char *)sub_93028(v20 + 1);
      v17 = strcpy(v21, (const char *)dword_48BB38);
      goto LABEL_41;
    }
    dword_490164 = dword_490158;
    sub_297758(v17);
    return (unsigned __int8 *)v18;
  }
  *a2 = v10;
  if ( !*v17 )
    goto LABEL_36;
LABEL_82:
  v19 = (int (__fastcall *)(char *, int))sub_29B048;
  while ( 1 )
  {
LABEL_41:
    v22 = v19(v17, -1);
    if ( v22 )
      v23 = v9;
    else
      v23 = 1;
    if ( v22 < 0 )
    {
LABEL_45:
      dword_490164 = dword_490158;
      sub_297758(v17);
      return 0;
    }
    if ( v23 )
      break;
    if ( !dword_490164 )
      goto LABEL_45;
    --dword_490164;
  }
  v33 = v22;
  v34 = (unsigned __int8 **)sub_297918();
  dword_490164 = dword_490158;
  if ( v9 )
  {
    if ( dword_48BB38 )
      free((void *)dword_48BB38);
    dword_48BB38 = (int)v17;
    if ( dword_48BB3C )
      free((void *)dword_48BB3C);
    v35 = (void **)sub_298578(*v34, v33, v53);
    v36 = v53[0];
    v37 = v35;
    if ( v53[0] != -1 )
    {
      if ( v35 )
      {
        v38 = (int)v35[v53[0]];
        if ( v53[0] > 0 )
        {
          v39 = v35 - 1;
          v40 = 0;
          do
          {
            v41 = v39[1];
            ++v39;
            ++v40;
            sub_297758(v41);
            v36 = v53[0];
          }
          while ( v40 < v53[0] );
        }
        v42 = v36 + 1;
        v43 = v37[v42];
        v44 = &v37[v42];
        if ( v43 )
        {
          do
          {
            sub_297758(v43);
            v45 = v44[1];
            ++v44;
            v43 = v45;
          }
          while ( v45 );
        }
        sub_297758(v37);
        goto LABEL_78;
      }
LABEL_89:
      v38 = (int)v35;
      goto LABEL_78;
    }
    if ( !v35 )
      goto LABEL_89;
    v46 = *v35;
    if ( v46 )
    {
      v47 = v37;
      do
      {
        sub_297758(v46);
        v48 = v47[1];
        ++v47;
        v46 = v48;
      }
      while ( v48 );
    }
    v38 = 0;
    free(v37);
LABEL_78:
    dword_48BB3C = v38;
  }
  else
  {
    sub_297758(v17);
  }
  return *v34;
}
