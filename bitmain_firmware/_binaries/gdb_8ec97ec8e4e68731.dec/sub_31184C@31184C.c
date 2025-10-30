int __fastcall sub_31184C(__int64 a1, int a2, int a3)
{
  const char **v3; // r6
  unsigned int *v6; // r7
  unsigned int v7; // r1
  unsigned __int8 *v8; // r4
  unsigned __int8 *v9; // r6
  int v10; // r8
  int v11; // r9
  unsigned __int8 *v13; // r4
  int v14; // r2
  int v15; // r7
  char **v16; // r11
  const char *v17; // r9
  size_t i; // r0
  const char *v19; // t1
  char *v20; // r1
  char **v21; // r10
  const char *v22; // r8
  int v23; // r7
  int v24; // r9
  size_t j; // r0
  const char *v26; // t1
  char *v27; // r1
  int v28; // r9
  size_t v29; // r0
  const char *v30; // t1
  int v31; // r7
  char **v32; // r10
  const char *v33; // r9
  const char *v34; // t1
  int v35; // r2
  unsigned __int8 *v36; // r9
  unsigned __int8 *v37; // [sp+8h] [bp-14h] BYREF
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v39; // [sp+10h] [bp-Ch]
  int v40; // [sp+14h] [bp-8h]

  v3 = (const char **)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)HIDWORD(a1);
  v6 = (unsigned int *)a1;
  if ( a3 != HIDWORD(a1) )
  {
    LODWORD(a1) = a2;
    sub_30D320(a1, a3 - HIDWORD(a1));
  }
  sub_30D298((unsigned int)a2 | 0x100000000LL);
  **(_BYTE **)(a2 + 4) = 0;
  v7 = *v6;
  *v3 = (const char *)(a3 + 2);
  if ( (v7 & 0x1000) != 0 && *(_BYTE *)(a3 + 2) == 88 )
  {
    sub_30FA58(v6, v3, 0, (_DWORD *)a2);
    v7 = *v6;
  }
  v8 = *(unsigned __int8 **)a2;
  if ( (v7 & 0x3C00) != 0 )
  {
    if ( !strcmp(*(const char **)a2, "__ct") )
    {
      ++v6[10];
      *(_DWORD *)(a2 + 4) = v8;
      return 1;
    }
    if ( !strcmp((const char *)v8, "__dt") )
    {
      ++v6[11];
      *(_DWORD *)(a2 + 4) = v8;
      return 1;
    }
  }
  v9 = *(unsigned __int8 **)(a2 + 4);
  v10 = *v8;
  v11 = v9 - v8;
  if ( v9 - v8 <= 2 )
    goto LABEL_10;
  if ( v10 != 111 )
  {
    if ( v11 <= 4 || v10 != 116 )
    {
LABEL_10:
      if ( v10 == 95 && v8[1] == 95 )
      {
        v14 = v8[2];
        if ( v14 == 111 && v8[3] == 112 )
        {
          v13 = v8 + 4;
          goto LABEL_23;
        }
        if ( (word_438898[v14] & 8) != 0 && (word_438898[v8[3]] & 8) != 0 )
        {
          v15 = v8[4];
          if ( v8[4] )
          {
            if ( v14 == 97 )
            {
              v31 = v8[5];
              if ( !v8[5] )
              {
                v32 = off_432950;
                while ( ++v31 != 79 )
                {
                  v34 = v32[3];
                  v32 += 3;
                  v33 = v34;
                  if ( strlen(v34) == 3 && *(unsigned __int8 *)v33 == v8[2] )
                  {
                    v35 = *((unsigned __int8 *)v33 + 1);
                    v36 = (unsigned __int8 *)(v33 + 1);
                    if ( v35 == v8[3] && v36[1] == v8[4] )
                    {
                      *(_DWORD *)(a2 + 4) = v8;
                      sub_30D3E4(a2, "operator");
                      v20 = off_432950[3 * v31 + 1];
                      if ( v20 )
                        goto LABEL_39;
                      goto LABEL_24;
                    }
                  }
                }
              }
            }
            return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
          }
          v16 = off_432950;
          v17 = "nw";
          for ( i = 2; i != 2 || *(unsigned __int8 *)v17 != v8[2] || *((unsigned __int8 *)v17 + 1) != v8[3]; i = strlen(v19) )
          {
            if ( ++v15 == 79 )
              return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
            v19 = v16[3];
            v16 += 3;
            v17 = v19;
          }
          goto LABEL_38;
        }
      }
      return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
    }
LABEL_17:
    if ( v8[1] != 121 || v8[2] != 112 || v8[3] != 101 )
      return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
    if ( strchr(&byte_471494, v8[4]) )
    {
      v13 = v8 + 5;
LABEL_23:
      v37 = v13;
      if ( sub_30E828(v6, &v37, (unsigned int)&ptr) )
      {
        *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
        sub_30D3E4(a2, "operator ");
        sub_30D52C(__SPAIR64__(&ptr, a2), v39);
        if ( ptr )
        {
          free(ptr);
          v8 = *(unsigned __int8 **)a2;
          v39 = 0;
          v40 = 0;
          ptr = 0;
          v9 = *(unsigned __int8 **)(a2 + 4);
          return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
        }
      }
      goto LABEL_24;
    }
    goto LABEL_10;
  }
  if ( v8[1] == 112 && strchr(&byte_471494, v8[2]) )
  {
    v21 = off_432950;
    LOWORD(v22) = (unsigned __int16)"nw";
    if ( v11 > 9 )
    {
      v23 = memcmp(v8 + 3, "assign_", 7u);
      if ( !v23 )
      {
        v24 = v11 - 10;
        HIWORD(v22) = (unsigned int)"nw" >> 16;
        for ( j = 2; j != v24 || memcmp(v22, v8 + 10, j); j = strlen(v26) )
        {
          if ( ++v23 == 79 )
            return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
          v26 = v21[3];
          v21 += 3;
          v22 = v26;
        }
        *(_DWORD *)(a2 + 4) = v8;
        sub_30D3E4(a2, "operator");
        v27 = off_432950[3 * v23 + 1];
        if ( v27 && *v27 )
          sub_30D3E4(a2, v27);
        sub_30D3E4(a2, (char *)&word_3FDE24);
        v8 = *(unsigned __int8 **)a2;
        v9 = *(unsigned __int8 **)(a2 + 4);
        return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
      }
    }
    v28 = v11 - 3;
    HIWORD(v22) = (unsigned int)"nw" >> 16;
    v29 = 2;
    v15 = 0;
    while ( v29 != v28 || memcmp(v22, v8 + 3, v29) )
    {
      if ( ++v15 == 79 )
        return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
      v30 = v21[3];
      v21 += 3;
      v22 = v30;
      v29 = strlen(v30);
    }
LABEL_38:
    *(_DWORD *)(a2 + 4) = v8;
    sub_30D3E4(a2, "operator");
    v20 = off_432950[3 * v15 + 1];
    if ( v20 )
    {
LABEL_39:
      if ( *v20 )
        sub_30D3E4(a2, v20);
    }
LABEL_24:
    v8 = *(unsigned __int8 **)a2;
    v9 = *(unsigned __int8 **)(a2 + 4);
    return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
  }
  if ( v11 > 4 && *v8 == 116 )
    goto LABEL_17;
  return v9 == v8 || v9 - v8 != 1 || *v8 != 46;
}
