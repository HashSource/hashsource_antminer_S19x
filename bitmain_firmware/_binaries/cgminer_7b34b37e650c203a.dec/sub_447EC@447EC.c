int __fastcall sub_447EC(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(__int16 *, int, int), int a6)
{
  int v7; // r5
  int v8; // r8
  unsigned int v9; // r7
  char v11; // r9
  char *v12; // r3
  int v13; // r3
  int v14; // r6
  int v16; // r5
  int v17; // r0
  __int64 v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r8
  int v22; // r6
  int v23; // r11
  int v24; // r9
  const char *v25; // r10
  size_t v26; // r0
  int v27; // r0
  unsigned int v28; // r9
  int v29; // r8
  int v30; // r3
  int v31; // r11
  unsigned int v32; // r10
  int v33; // r0
  int v34; // r0
  int v35; // r9
  unsigned int v36; // r7
  int v37; // r5
  int v38; // r8
  int v39; // r11
  unsigned int v40; // r6
  const char *v41; // r10
  const char *v42; // t1
  int v43; // r9
  size_t v44; // r0
  int v45; // r8
  char *v46; // [sp+Ch] [bp-98h]
  int v47; // [sp+Ch] [bp-98h]
  int v48; // [sp+Ch] [bp-98h]
  int v49; // [sp+10h] [bp-94h]
  int v50; // [sp+10h] [bp-94h]
  int v51; // [sp+14h] [bp-90h]
  int v52; // [sp+14h] [bp-90h]
  size_t nmemb; // [sp+18h] [bp-8Ch]
  int v54; // [sp+1Ch] [bp-88h]
  int v55; // [sp+20h] [bp-84h]
  void *base; // [sp+24h] [bp-80h]
  int v57; // [sp+28h] [bp-7Ch]
  int v58; // [sp+28h] [bp-7Ch]
  int v59; // [sp+2Ch] [bp-78h]
  unsigned int v60; // [sp+30h] [bp-74h]
  int v61; // [sp+34h] [bp-70h]
  __int16 s[52]; // [sp+3Ch] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  v7 = a4;
  v8 = a2 & 0x10000;
  v9 = a2 & 0xFFFEFFFF;
  v11 = a2;
  switch ( *a1 )
  {
    case 0:
      v12 = ":";
      if ( (a2 & 0x20) == 0 )
        v12 = ": ";
      v46 = v12;
      if ( (a2 & 0x20) != 0 )
        v13 = 1;
      else
        v13 = 2;
      v49 = v13;
      v14 = sub_44794(v7, a1, (char *)s);
      if ( v14 )
        return -1;
      v51 = sub_48364(a1);
      if ( v8 )
      {
        if ( !v51 )
          goto LABEL_45;
      }
      else
      {
        if ( a5((__int16 *)"{", 1, a6) )
          return -1;
        if ( !v51 )
        {
          sub_45B70(v7, (char *)s);
          return a5((__int16 *)"}", 1, a6);
        }
      }
      if ( sub_446E4(v9, a3 + 1, 0, a5, a6) )
        return -1;
      if ( (v11 & 0x80) == 0 )
      {
        v55 = v8;
        v21 = a3 + 1;
        v22 = v51;
        v23 = v49;
        v50 = a3;
        while ( 1 )
        {
          v24 = sub_483B0(a1, v22);
          v25 = (const char *)sub_483E4(v22);
          v26 = strlen(v25);
          sub_4445C((int)v25, v26, (int (__fastcall *)(char *, int, int))a5, a6, v9);
          if ( a5((__int16 *)v46, v23, a6) )
            return -1;
          v27 = sub_483F0(v22);
          if ( sub_447EC(v27, v9, v21, v7, a5, a6) )
            return -1;
          if ( !v24 )
          {
            v45 = v55;
            v14 = 0;
            if ( sub_446E4(v9, v50, 0, a5, a6) )
              return -1;
            goto LABEL_68;
          }
          if ( !a5((__int16 *)",", 1, a6) )
          {
            v22 = v24;
            if ( !sub_446E4(v9, v21, 1, a5, a6) )
              continue;
          }
          return -1;
        }
      }
      v57 = sub_480E0(a1);
      v34 = sub_4774C(4 * v57);
      base = (void *)v34;
      if ( !v34 )
        return -1;
      v60 = v9;
      v61 = v7;
      v35 = v34 - 4;
      v59 = v34 - 4;
      v36 = 0;
      v37 = v51;
      while ( 1 )
      {
        *(_DWORD *)(v35 + 4) = sub_483E4(v37);
        v35 += 4;
        v37 = sub_483B0(a1, v37);
        if ( !v37 )
          break;
        ++v36;
      }
      nmemb = v36 + 1;
      v7 = v61;
      if ( v57 != v36 + 1 )
        _assert_fail("i == size", "dump.c", 0x160u, "do_dump");
      qsort(base, nmemb, 4u, (__compar_fn_t)sub_44450);
      v58 = v8;
      v38 = v59;
      v39 = a3 + 1;
      v40 = 0;
      v54 = a3;
      do
      {
        v42 = *(const char **)(v38 + 4);
        v38 += 4;
        v41 = v42;
        v43 = sub_480FC(a1, v42);
        if ( !v43 )
          _assert_fail("value", "dump.c", 0x16Bu, "do_dump");
        v44 = strlen(v41);
        sub_4445C((int)v41, v44, (int (__fastcall *)(char *, int, int))a5, a6, v60);
        if ( a5((__int16 *)v46, v49, a6) || sub_447EC(v43, v60, v39, v61, a5, a6) )
        {
LABEL_64:
          v14 = -1;
          sub_47764(base);
          return v14;
        }
        if ( v40 < v36 )
        {
          if ( a5((__int16 *)",", 1, a6) || sub_446E4(v60, v39, 1, a5, a6) )
            goto LABEL_64;
        }
        else if ( sub_446E4(v60, v54, 0, a5, a6) )
        {
          goto LABEL_64;
        }
        ++v40;
      }
      while ( v40 != nmemb );
      v45 = v58;
      v14 = 0;
      sub_47764(base);
LABEL_68:
      sub_45B70(v7, (char *)s);
      if ( !v45 )
        return a5((__int16 *)"}", 1, a6);
      return v14;
    case 1:
      v14 = sub_44794(a4, a1, (char *)s);
      if ( v14 )
        return -1;
      v47 = sub_48468(a1);
      if ( v8 )
      {
        if ( !v47 )
        {
LABEL_45:
          sub_45B70(v7, (char *)s);
          return v14;
        }
      }
      else
      {
        if ( a5((__int16 *)"[", 1, a6) )
          return -1;
        if ( !v47 )
        {
          sub_45B70(v7, (char *)s);
          return a5(&word_5616C, 1, a6);
        }
      }
      v28 = sub_446E4(v9, a3 + 1, 0, a5, a6);
      if ( v28 )
        return -1;
      v52 = v8;
      v29 = a3 + 1;
      v30 = v47;
      v48 = a3;
      v31 = v30;
      v32 = v30 - 1;
      break;
    case 2:
      v16 = sub_48630(a1);
      v17 = sub_4864C(a1);
      return sub_4445C(v16, v17, (int (__fastcall *)(char *, int, int))a5, a6, v9);
    case 3:
      v18 = sub_4888C(a1);
      v19 = snprintf((char *)s, 0x64u, "%lld", v18);
      return a5(s, v19, a6);
    case 4:
      sub_48938(a1);
      v20 = sub_47AB8(s, 100, (unsigned __int16)v9 >> 11);
      if ( v20 < 0 )
        return -1;
      return a5(s, v20, a6);
    case 5:
      return a5((__int16 *)"true", 4, a6);
    case 6:
      return a5((__int16 *)"false", 5, a6);
    case 7:
      return a5((__int16 *)"null", 4, a6);
    default:
      return -1;
  }
  do
  {
    v33 = sub_48484(a1, v28);
    v14 = sub_447EC(v33, v9, v29, v7, a5, a6);
    if ( v14 )
      return -1;
    if ( v32 <= v28 )
    {
      if ( sub_446E4(v9, v48, 0, a5, a6) )
        return -1;
    }
    else if ( a5((__int16 *)",", 1, a6) || sub_446E4(v9, v29, 1, a5, a6) )
    {
      return -1;
    }
    ++v28;
  }
  while ( v31 != v28 );
  sub_45B70(v7, (char *)s);
  if ( !v52 )
    return a5(&word_5616C, 1, a6);
  return v14;
}
