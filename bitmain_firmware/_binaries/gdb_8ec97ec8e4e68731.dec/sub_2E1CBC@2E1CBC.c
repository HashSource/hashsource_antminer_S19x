int __fastcall sub_2E1CBC(int a1, int *a2)
{
  const char *v2; // r11
  int v4; // r5
  int result; // r0
  int v7; // r9
  const char *v8; // r8
  int v9; // r10
  char *v10; // r0
  int v11; // r3
  int v12; // r3
  bool v13; // zf
  int **v14; // r7
  signed int v15; // r8
  _BYTE *v16; // r0
  _BYTE *v17; // r9
  int v18; // r11
  size_t v19; // r2
  int v20; // r8
  int *v21; // r3
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r1
  int v28; // [sp+Ch] [bp-10h] BYREF
  int v29; // [sp+10h] [bp-Ch] BYREF
  int v30; // [sp+14h] [bp-8h]

  v4 = *a2;
  v30 = 0;
  v29 = v4;
  if ( !sub_2E1954(a1, &v29) )
  {
    result = v30;
    if ( !v30 )
      return result;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a1 + 51) & 2) == 0 )
    return 1;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = *(const char **)(a1 + 4);
  v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 444);
  v10 = strchr(v8, 64);
  v11 = *(_DWORD *)(a1 + 64);
  if ( !v10 )
  {
LABEL_24:
    if ( !v11 )
    {
      v22 = *(_DWORD *)(*a2 + 132);
      if ( v22 )
      {
        v23 = sub_2FF548(v22, *(_DWORD *)(a1 + 4), &v28);
        *(_DWORD *)(a1 + 64) = v23;
        if ( v23 )
        {
          if ( v28 )
            (*(void (__fastcall **)(int, int, int))(v9 + 224))(v4, a1, 1);
        }
      }
    }
    return 1;
  }
  if ( v11 )
    return 1;
  v12 = (unsigned __int8)v10[1];
  v13 = v12 == 64;
  if ( v12 == 64 )
    v12 = (unsigned __int8)v10[2];
  else
    v2 = v10 + 1;
  if ( v13 )
    v2 = v10 + 2;
  if ( !v12 )
    return 1;
  v14 = *(int ***)(*a2 + 132);
  if ( v14 )
  {
    while ( strcmp((const char *)v14[1], v2) )
    {
      v14 = (int **)*v14;
      if ( !v14 )
        goto LABEL_30;
    }
    v15 = v2 - v8;
    v16 = sub_2AB368(v15);
    v17 = v16;
    if ( !v16 )
      goto LABEL_3;
    v18 = v15 - 1;
    v19 = v15 - 1;
    v20 = v15 - 2;
    memcpy(v16, *(const void **)(a1 + 4), v19);
    v17[v18] = 0;
    if ( v17[v20] == 64 )
      v17[v20] = 0;
    v21 = v14[3];
    *(_DWORD *)(a1 + 64) = v14;
    v14[13] = (int *)1;
    if ( (!v21 || !((int (__fastcall *)(int **, _DWORD, _BYTE *))v14[14])(v14 + 3, 0, v17))
      && v14[7]
      && ((int (__fastcall *)(int **, _DWORD, _BYTE *))v14[14])(v14 + 7, 0, v17)
      && *(_DWORD *)(a1 + 32) != -1
      && (*(_BYTE *)v4 & 0x10) == 0 )
    {
      (*(void (__fastcall **)(int, int, int))(v9 + 224))(v4, a1, 1);
    }
    free(v17);
    v11 = *(_DWORD *)(a1 + 64);
    goto LABEL_24;
  }
LABEL_30:
  if ( (*(_BYTE *)v4 & 3u) <= 1 )
  {
    if ( *(_DWORD *)(a1 + 32) != -1 )
    {
      v24 = sub_2AD09C(v7, 0x3Cu);
      if ( !v24 )
        goto LABEL_3;
      v25 = *a2;
      v24[12] = -1;
      v26 = 1;
      v24[1] = v2;
      v27 = *(_DWORD **)(v25 + 132);
      v24[13] = 1;
      if ( v27 )
      {
        v26 = v27[2] != 0;
        while ( 1 )
        {
          ++v26;
          if ( !*v27 )
            break;
          v27 = (_DWORD *)*v27;
        }
      }
      else
      {
        v27 = (_DWORD *)(v25 + 132);
      }
      v24[2] = v26;
      *v27 = v24;
      *(_DWORD *)(a1 + 64) = v24;
    }
    return 1;
  }
  sub_2A6A5C("%B: version node not found for symbol %s", v7, v8);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
LABEL_3:
  result = 0;
  a2[1] = 1;
  return result;
}
