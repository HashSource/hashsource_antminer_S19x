int __fastcall sub_30E114(unsigned int *a1, unsigned __int8 **a2, unsigned int a3, size_t a4)
{
  unsigned __int8 *v4; // r12
  __int64 v7; // r6
  int v8; // lr
  signed int v10; // r9
  int v12; // r0
  int v13; // r8
  int v14; // r5
  int v15; // r7
  int v16; // r7
  int v17; // r0
  int v18; // r5
  unsigned int v19; // r3
  char *v20; // r1
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  __int64 v24; // r0
  unsigned int v25; // r1
  char *v26; // r8
  __int64 v27; // r0
  unsigned __int8 *v28; // r3
  char s[36]; // [sp+8h] [bp-24h] BYREF

  v4 = *a2;
  LODWORD(v7) = a3;
  v8 = **a2;
  if ( v8 == 89 )
  {
    *a2 = v4 + 1;
    v17 = sub_30D0AC(a2);
    v18 = v17;
    if ( v17 == -1 || a1[16] && (int)a1[17] <= v17 || sub_30D0AC(a2) == -1 )
      return -1;
    v19 = a1[16];
    if ( !v19 )
    {
      sub_30D428(v7, v18);
      return 1;
    }
    v20 = *(char **)(v19 + 4 * v18);
    if ( v20 && *v20 )
      sub_30D3E4(v7, v20);
    return 1;
  }
  switch ( a4 )
  {
    case 4u:
      if ( v8 == 69 )
        return sub_30E660();
      v22 = v8 == 75;
      if ( v8 != 75 )
        v22 = v8 == 81;
      v14 = v22;
      if ( v22 )
        return sub_310EBC(a1, a2, a3, 0, 1);
      if ( v8 == 95 )
      {
        if ( v4[1] != 109 )
        {
          v13 = 1;
          v15 = sub_30D0AC(a2);
LABEL_19:
          if ( v15 != -1 )
          {
            sprintf(s, "%d", v15);
            if ( s[0] )
              sub_30D3E4(v7, s);
            if ( v15 > 9 )
              v14 |= 1u;
            if ( (v14 & (v13 ^ 1)) != 0 && **a2 == 95 )
              ++*a2;
            return 1;
          }
          return 0;
        }
        sub_30D320(__SPAIR64__(&word_3C1464, a3), 1u);
        v13 = v14;
        *a2 += 2;
      }
      else if ( v8 == 109 )
      {
        sub_30D320(__SPAIR64__(&word_3C1464, a3), 1u);
        v13 = 1;
        ++*a2;
      }
      else
      {
        v13 = 1;
      }
      v14 = 1;
      v15 = sub_30D00C(a2);
      goto LABEL_19;
    case 6u:
      if ( v8 == 109 )
      {
        sub_30D320(__SPAIR64__(&word_3C1464, a3), 1u);
        ++*a2;
      }
      sub_30D320(__SPAIR64__(&word_3DB410, v7), 1u);
      v12 = sub_30D00C(a2);
      if ( v12 > 0 )
      {
        s[0] = v12;
        s[1] = 0;
        sub_30D320(__SPAIR64__(s, v7), 1u);
        sub_30D320(__SPAIR64__(&word_3DB410, v7), 1u);
        return 1;
      }
      return 0;
    case 5u:
      v21 = sub_30D00C(a2);
      v16 = v21;
      if ( !v21 )
      {
        sub_30D320(__SPAIR64__("false", v7), a4);
        return 1;
      }
      if ( v21 == 1 )
      {
        sub_30D320(__SPAIR64__("true", v7), 4u);
        return v16;
      }
      return 0;
    case 7u:
      if ( v8 != 69 )
      {
        HIDWORD(v7) = *a2;
        if ( v8 == 109 )
        {
          sub_30D320(__SPAIR64__(&word_3C1464, a3), 1u);
          HIDWORD(v7) = *a2 + 1;
          v28 = *a2;
          *a2 = (unsigned __int8 *)HIDWORD(v7);
          v4 = (unsigned __int8 *)HIDWORD(v7);
          v8 = v28[1];
        }
        for ( ; (word_438898[v8] & 4) != 0; v8 = (unsigned __int8)*(_BYTE *)HIDWORD(v7) )
        {
          sub_30D320(v7, 1u);
          HIDWORD(v7) = *a2 + 1;
          *a2 = (unsigned __int8 *)HIDWORD(v7);
          v4 = (unsigned __int8 *)HIDWORD(v7);
        }
        if ( v8 == 46 )
        {
          HIDWORD(v27) = ".";
          do
          {
            LODWORD(v27) = v7;
            sub_30D320(v27, 1u);
            HIDWORD(v27) = *a2 + 1;
            *a2 = (unsigned __int8 *)HIDWORD(v27);
            v23 = (unsigned __int8)*(_BYTE *)HIDWORD(v27);
          }
          while ( (word_438898[v23] & 4) != 0 );
        }
        else
        {
          v23 = *v4;
        }
        if ( v23 == 101 )
        {
          HIDWORD(v24) = &word_40CD1C;
          do
          {
            LODWORD(v24) = v7;
            sub_30D320(v24, 1u);
            HIDWORD(v24) = *a2 + 1;
            *a2 = (unsigned __int8 *)HIDWORD(v24);
          }
          while ( (word_438898[(unsigned __int8)*(_BYTE *)HIDWORD(v24)] & 4) != 0 );
        }
        return 1;
      }
      return sub_30E660();
  }
  if ( a4 - 1 > 2 )
    return 1;
  if ( v8 == 81 )
    return sub_310EBC(a1, a2, a3, 0, 1);
  v10 = sub_30D00C(a2);
  if ( v10 == -1 || (int)strlen((const char *)*a2) < v10 )
    return -1;
  if ( v10 )
  {
    HIDWORD(v7) = sub_93028(v10 + 1);
    strncpy((char *)HIDWORD(v7), (const char *)*a2, v10);
    v25 = *a1;
    *(_BYTE *)(HIDWORD(v7) + v10) = 0;
    v26 = sub_30DFAC((const char *)HIDWORD(v7), v25);
    if ( a4 == 1 )
      sub_30D320(__SPAIR64__("&", v7), 1u);
    if ( v26 )
    {
      if ( *v26 )
        sub_30D3E4(v7, v26);
      free(v26);
    }
    else if ( *(_BYTE *)HIDWORD(v7) )
    {
      sub_30D3E4(v7, (char *)HIDWORD(v7));
    }
    free((void *)HIDWORD(v7));
  }
  else
  {
    sub_30D320(__SPAIR64__("0", v7), 1u);
  }
  *a2 += v10;
  return 1;
}
