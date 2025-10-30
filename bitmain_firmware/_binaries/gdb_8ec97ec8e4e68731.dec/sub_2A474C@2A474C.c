int __fastcall sub_2A474C(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  const char *v4; // r6
  const char *v5; // r4
  size_t v6; // r12
  size_t v9; // r5
  int v10; // r3
  const char *v11; // r7
  const char *v12; // r0
  size_t v13; // r5
  const char *v14; // r11
  size_t v15; // r0
  size_t v16; // r7
  unsigned __int8 *v17; // r10
  size_t v19; // r5
  char *v20; // r7
  int v21; // r6
  const char *v22; // r10
  int v23; // r3
  size_t v24; // r5
  const char *v25; // r9
  _BYTE *v26; // r11
  char *v27; // r0
  size_t v28; // r0
  char v29; // r1
  char v30; // r2
  int v31; // r3
  int v32; // r0
  bool v33; // r2
  size_t n; // [sp+4h] [bp-20h]
  const char *v37; // [sp+8h] [bp-1Ch]
  int v39; // [sp+10h] [bp-14h]
  size_t maxlen; // [sp+14h] [bp-10h]

  v4 = 0;
  v5 = *(const char **)(a1 + 148);
  v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26);
  *a4 = 0;
  n = v6;
  if ( !v5 )
    return 1;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v11 = *(const char **)v5;
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
      {
        v10 = *((_DWORD *)v5 + 35);
        if ( v10 && (*(_BYTE *)(v10 + 44) & 1) == 0 )
          v11 = *(const char **)v10;
        if ( !v4 || j_strcmp(v4, v11) )
        {
          if ( *v11 == 47 )
          {
            v12 = v11;
          }
          else
          {
            v12 = v11;
            if ( **(_BYTE **)a1 != 47 )
              v12 = (const char *)sub_2A300C(v11, *(const char **)a1);
          }
          v13 = strlen(v12) + v9;
          if ( a2 )
            v9 = v13 + 2;
          else
            v9 = v13 + 1;
          v4 = v11;
        }
        goto LABEL_16;
      }
      v14 = (const char *)sub_3245A4(*(_DWORD *)v5);
      v15 = strlen(v14);
      v16 = v15;
      if ( n >= v15 )
        break;
      if ( (*(_DWORD *)(a1 + 40) & 0x8000) == 0 )
      {
        v19 = v15 + v9;
        if ( a2 )
          v9 = v19 + 2;
        else
          v9 = v19 + 1;
        goto LABEL_16;
      }
      v16 = n;
      v17 = (unsigned __int8 *)**((_DWORD **)v5 + 34);
      if ( j_strncmp(v14, (const char *)v17, n) )
      {
        v16 = n;
        memcpy(v17, v14, n);
        v33 = 1;
        goto LABEL_72;
      }
LABEL_26:
      if ( v16 <= 0xF && v17[v16] != *(unsigned __int8 *)(*((_DWORD *)v5 + 1) + 25) )
        goto LABEL_20;
LABEL_16:
      v5 = (const char *)*((_DWORD *)v5 + 36);
      if ( !v5 )
        goto LABEL_22;
    }
    v17 = (unsigned __int8 *)**((_DWORD **)v5 + 34);
    if ( !j_strncmp(v14, (const char *)v17, v15) )
      goto LABEL_26;
LABEL_20:
    memcpy(v17, v14, v16);
    if ( n > v16 )
      goto LABEL_21;
    v33 = n == v16;
LABEL_72:
    if ( v16 > 0xF || !v33 )
      goto LABEL_16;
LABEL_21:
    v17[v16] = *(_BYTE *)(*((_DWORD *)v5 + 1) + 25);
    v5 = (const char *)*((_DWORD *)v5 + 36);
  }
  while ( v5 );
LABEL_22:
  if ( !v9 )
    return 1;
  v20 = (char *)sub_2AD09C(a1, v9);
  *a3 = v20;
  if ( v20 )
  {
    v21 = *(_DWORD *)(a1 + 148);
    *a4 = v9;
    if ( v21 )
    {
      v37 = v5;
      v39 = a2;
      maxlen = n - 1;
      v22 = *(const char **)v21;
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
        goto LABEL_36;
LABEL_51:
      v25 = (const char *)sub_3245A4(v22);
LABEL_55:
      v28 = strlen(v25);
      v24 = v28;
      if ( n >= v28 && (*(_BYTE *)(a1 + 44) & 1) == 0 )
        goto LABEL_49;
      v26 = **(_BYTE ***)(v21 + 136);
      if ( v25 != v5 )
      {
        memcpy(v20, v25, v28 + 1);
        v31 = (int)&v20[v24];
        if ( v39 )
          v29 = 47;
        else
          v31 = 10;
        if ( v39 )
          v30 = 10;
        else
          v20[v24] = v31;
        if ( v39 )
        {
          v20[v24] = v29;
          *(_BYTE *)(v31 + 1) = v30;
        }
        v37 = &v20[-*a3];
      }
LABEL_43:
      *v26 = *(_BYTE *)(*(_DWORD *)(v21 + 4) + 25);
      v27 = v26 + 1;
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && *(_QWORD *)(v21 + 56) )
      {
        v32 = snprintf(v27, maxlen, "%-ld:", v37);
        sub_2A3308(&v26[v32 + 1], maxlen - v32, "%-ld");
      }
      else
      {
        sub_2A3308(v27, maxlen, "%-ld");
      }
      if ( v25 != v5 )
      {
        v20 += v24 + 1;
        v5 = v22;
        if ( v39 )
          ++v20;
      }
LABEL_49:
      while ( 1 )
      {
        v21 = *(_DWORD *)(v21 + 144);
        if ( !v21 )
          break;
        v22 = *(const char **)v21;
        if ( (*(_BYTE *)(a1 + 44) & 1) == 0 )
          goto LABEL_51;
LABEL_36:
        v23 = *(_DWORD *)(v21 + 140);
        if ( v23 && (*(_BYTE *)(v23 + 44) & 1) == 0 )
          v22 = *(const char **)v23;
        if ( !v5 || j_strcmp(v5, v22) )
        {
          if ( *v22 == 47 || **(_BYTE **)a1 == 47 )
            v25 = v22;
          else
            v25 = (const char *)sub_2A300C(v22, *(const char **)a1);
          goto LABEL_55;
        }
        v24 = strlen(v5);
        if ( n < v24 || (*(_BYTE *)(a1 + 44) & 1) != 0 )
        {
          v25 = v5;
          v26 = **(_BYTE ***)(v21 + 136);
          goto LABEL_43;
        }
      }
    }
    return 1;
  }
  return (int)v5;
}
