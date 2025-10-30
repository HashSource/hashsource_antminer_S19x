int __fastcall sub_312998(_DWORD *a1, unsigned __int8 **a2, const void **a3)
{
  unsigned __int8 *v4; // r4
  int v7; // r2
  bool v8; // zf
  int v9; // r0
  char *v10; // r4
  int v11; // r5
  int v12; // r4
  int v14; // r5
  char *v15; // r9
  int v16; // r3
  signed int v17; // r4
  unsigned __int8 *v18; // r5
  unsigned __int8 *v19; // r4
  unsigned __int8 *v20; // r4
  int v21; // r3
  size_t v22; // r3
  char *v23; // r0
  char *v24; // r1
  char *v25; // r1
  unsigned __int8 *v26; // r9
  unsigned __int8 *v27; // r4
  size_t v28; // r7
  int v29; // r1
  char *v30; // r5
  char *v31; // r0
  int v32; // r3
  int v33; // r0
  signed int v34; // r0
  int v35; // r1
  signed int v36; // [sp+Ch] [bp-40h]
  size_t v37; // [sp+Ch] [bp-40h]
  char s[56]; // [sp+14h] [bp-38h] BYREF

  v4 = *a2;
  if ( **a2 != 95 )
    goto LABEL_2;
  v14 = v4[1];
  if ( v4[1] )
  {
    if ( strchr(&byte_471494, v4[1]) && v4[2] == 95 )
    {
      v32 = a1[11];
      v11 = 1;
      *a2 = v4 + 3;
      a1[11] = v32 + 1;
      return v11;
    }
    if ( v14 == 95 )
    {
      if ( v4[2] != 118 || v4[3] != 116 || v4[4] != 95 )
        goto LABEL_2;
      v20 = v4 + 5;
      *a2 = v20;
    }
    else
    {
      if ( v14 != 118 )
        goto LABEL_24;
      if ( v4[2] != 116 || !v4[3] || !strchr(&byte_471494, v4[3]) )
        goto LABEL_2;
      v20 = v4 + 4;
      *a2 = v20;
    }
    v11 = 1;
LABEL_50:
    v21 = *v20;
    if ( !*v20 )
    {
LABEL_65:
      sub_30D3E4((int)a3, " virtual table");
      return v11;
    }
    while ( v21 != 81 )
    {
      if ( v21 == 116 )
      {
        v11 = sub_310880(a1, a2, a3, 0, 1, 1);
LABEL_85:
        v20 = *a2;
        v23 = strpbrk((const char *)*a2, &byte_471494);
        if ( !v11 )
          return 0;
        goto LABEL_59;
      }
      if ( v21 == 75 )
        break;
      if ( (word_438898[v21] & 4) != 0 )
      {
        v33 = sub_30D00C(a2);
        v20 = *a2;
        v36 = v33;
        v34 = strlen((const char *)*a2);
        v22 = v36;
        if ( v34 < v36 )
        {
          v23 = strpbrk((const char *)v20, &byte_471494);
          v11 = 1;
          goto LABEL_59;
        }
        if ( v36 == -1 )
          return 0;
      }
      else
      {
        v22 = strcspn((const char *)v20, &byte_471494);
      }
      if ( v22 )
      {
        v37 = v22;
        sub_30D320(__SPAIR64__((unsigned int)v20, (unsigned int)a3), v22);
        v20 = *a2;
        v22 = v37;
      }
      v20 += v22;
      *a2 = v20;
      v23 = strpbrk((const char *)v20, &byte_471494);
LABEL_59:
      if ( !v23 )
      {
        v20 = *a2;
        goto LABEL_50;
      }
      if ( v20 != (unsigned __int8 *)v23 )
        return 0;
      v24 = "::";
      if ( (*a1 & 4) != 0 )
        v24 = ".";
      sub_30D3E4((int)a3, v24);
      v20 = *a2 + 1;
      *a2 = v20;
      v21 = *v20;
      if ( !*v20 )
        goto LABEL_65;
    }
    v11 = sub_310EBC(a1, a2, a3, 0, 1);
    goto LABEL_85;
  }
LABEL_24:
  if ( strchr("0123456789Qt", v14) )
  {
    v15 = strpbrk((const char *)v4, &byte_471494);
    if ( v15 )
    {
      *a2 = v4 + 1;
      v16 = v4[1];
      if ( v16 != 81 )
      {
        if ( v16 == 116 )
        {
          v11 = sub_310880(a1, a2, a3, 0, 1, 1);
LABEL_67:
          if ( !v11 )
            return 0;
          v19 = *a2;
          goto LABEL_69;
        }
        if ( v16 != 75 )
        {
          v17 = sub_30D00C(a2);
          if ( v17 < 0 )
            return 0;
          v18 = *a2;
          if ( (int)strlen((const char *)*a2) < v17 )
            return 0;
          if ( v17 <= 10 )
          {
            if ( !v17 )
              goto LABEL_35;
          }
          else if ( !strncmp((const char *)v18, "_GLOBAL_", 8u) && v18[9] == 78 )
          {
            v35 = v18[10];
            if ( v35 == v18[8] )
            {
              if ( strchr(&byte_471494, v35) )
              {
                v11 = 1;
                sub_30D3E4((int)a3, "{anonymous}");
                v19 = &(*a2)[v17];
                *a2 = v19;
                v15 = strpbrk((const char *)v19, &byte_471494);
                goto LABEL_69;
              }
            }
          }
          sub_30D320(__SPAIR64__((unsigned int)v18, (unsigned int)a3), v17);
          v18 = *a2;
LABEL_35:
          v19 = &v18[v17];
          v11 = 1;
          *a2 = v19;
LABEL_69:
          if ( v15 != (char *)v19 )
            return 0;
          v25 = ".";
          v26 = (unsigned __int8 *)(v15 + 1);
          if ( (*a1 & 4) == 0 )
            v25 = "::";
          *a2 = v26;
          sub_30D3E4((int)a3, v25);
          v27 = *a2;
          v28 = strlen((const char *)*a2);
          if ( v28 )
          {
            sub_30D320(__SPAIR64__((unsigned int)v27, (unsigned int)a3), v28);
            v27 = *a2;
          }
          *a2 = &v27[v28];
          return v11;
        }
      }
      v11 = sub_310EBC(a1, a2, a3, 0, 1);
      goto LABEL_67;
    }
  }
LABEL_2:
  if ( strncmp((const char *)v4, "__thunk_", 8u) )
  {
    if ( strncmp((const char *)v4, "__t", 3u) )
      return 0;
    v7 = v4[3];
    v8 = v7 == 102;
    if ( v7 != 102 )
      v8 = v7 == 105;
    if ( !v8 )
      return 0;
    *a2 = v4 + 4;
    v9 = v4[4];
    if ( v7 == 105 )
      v10 = " type_info node";
    else
      v10 = " type_info function";
    if ( v9 != 81 )
    {
      if ( v9 == 116 )
      {
        v11 = sub_310880(a1, a2, a3, 0, 1, 1);
        goto LABEL_15;
      }
      if ( v9 != 75 )
      {
        v11 = sub_30E828(a1, a2, (unsigned int)a3);
LABEL_15:
        if ( v11 && !**a2 )
        {
          if ( *v10 )
            sub_30D3E4((int)a3, v10);
          return v11;
        }
        return 0;
      }
    }
    v11 = sub_310EBC(a1, a2, a3, 0, 1);
    goto LABEL_15;
  }
  *a2 = v4 + 8;
  v12 = sub_30D00C(a2);
  if ( v12 == -1 )
    return 0;
  if ( **a2 != 95 )
    return 0;
  v29 = (int)(*a2 + 1);
  *a2 = (unsigned __int8 *)v29;
  v30 = (char *)sub_312FE4(a1, v29);
  if ( !v30 )
    return 0;
  sprintf(s, "virtual function thunk (delta:%d) for ", -v12);
  if ( s[0] )
    sub_30D3E4((int)a3, s);
  if ( *v30 )
    sub_30D3E4((int)a3, v30);
  v31 = v30;
  v11 = 1;
  free(v31);
  *a2 += strlen((const char *)*a2);
  return v11;
}
