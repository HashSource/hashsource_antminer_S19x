int __fastcall sub_AA69C(char *s2, size_t n, _DWORD *a3)
{
  const char *v3; // r10
  size_t v4; // r11
  int v6; // r2
  int v7; // r9
  char *v8; // r7
  int v9; // r2
  _DWORD *v10; // r4
  int v11; // r8
  int v12; // r6
  int v13; // r5
  _DWORD *v14; // r3
  int *v15; // r2
  bool v16; // zf
  int v17; // r1
  int v18; // r5
  int v20; // r3
  int v21; // r3
  int v22; // r8
  int v23; // r4
  _DWORD *v24; // r6
  int v25; // [sp+4h] [bp-10h]
  int v26; // [sp+8h] [bp-Ch]
  _DWORD *v27; // [sp+Ch] [bp-8h]

  v3 = s2;
  if ( !s2 )
    return 0;
  v4 = n;
  if ( n == -1 )
  {
    v7 = a3[20];
    v8 = (char *)a3[19];
    if ( v7 )
    {
      v9 = *a3;
      v26 = 0;
      v25 = 1;
      goto LABEL_30;
    }
    return 0;
  }
  v6 = (unsigned __int8)*s2;
  if ( v6 == 43 )
  {
    v3 = s2 + 1;
    v4 = n - 1;
    v26 = 0;
    v25 = 1;
  }
  else
  {
    if ( v6 != 45 )
    {
      v7 = a3[20];
      v8 = (char *)a3[19];
      if ( v7 )
      {
        v9 = *a3;
        v26 = 0;
        v25 = 1;
        goto LABEL_7;
      }
      return v7;
    }
    v3 = s2 + 1;
    v26 = 1;
    v4 = n - 1;
    v25 = 0;
  }
  v7 = a3[20];
  v8 = (char *)a3[19];
  if ( v7 )
  {
    v9 = *a3;
    if ( v4 != -1 )
    {
LABEL_7:
      v10 = v8 + 116;
      v11 = v9 & 0xC;
      v12 = 0;
      v27 = a3;
      while ( 1 )
      {
        v13 = *(v10 - 27);
        ++v12;
        v8 = (char *)(v10 - 29);
        __pld(v10);
        if ( (v11 & v13) != 0 && *(v10 - 28) == v4 && !strncasecmp((const char *)*(v10 - 29), v3, v4) )
          break;
        v10 += 4;
        if ( v12 == v7 )
          return 0;
      }
      v14 = v27;
      goto LABEL_13;
    }
LABEL_30:
    v22 = v9 & 0xC;
    v23 = 0;
    v24 = a3;
    while ( 1 )
    {
      v13 = *((_DWORD *)v8 + 2);
      ++v23;
      __pld(v8 + 136);
      if ( (v22 & v13) != 0 && !strcmp(*(const char **)v8, v3) )
        break;
      v8 += 16;
      if ( v23 == v7 )
        return 0;
    }
    v14 = v24;
LABEL_13:
    v15 = (int *)v14[5];
    if ( v15 )
    {
      v16 = (v13 & 1) == 0;
      v17 = v25;
      v18 = v13 & 0xF00;
      if ( !v16 )
        v17 = v26;
      if ( v18 == 256 )
      {
        v15 = (int *)v14[15];
      }
      else if ( v18 == 512 )
      {
        v15 = (int *)v14[16];
      }
      else if ( v18 )
      {
        return 1;
      }
      v20 = *((_DWORD *)v8 + 3);
      if ( v17 )
        v21 = v20 | *v15;
      else
        v21 = *v15 & ~v20;
      *v15 = v21;
    }
    return 1;
  }
  return v7;
}
