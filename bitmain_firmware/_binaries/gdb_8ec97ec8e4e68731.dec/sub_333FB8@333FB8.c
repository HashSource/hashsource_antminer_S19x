int __fastcall sub_333FB8(
        wchar_t *a1,
        wchar_t *s,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v7; // r5
  wchar_t *v8; // r4
  size_t v10; // r0
  wchar_t v11; // r1
  unsigned int v12; // r2
  wchar_t *v13; // r8
  _DWORD *v14; // r9
  bool v15; // cc
  int v16; // r3
  bool v17; // zf
  wchar_t v18; // t1
  wchar_t v19; // r3
  wchar_t *v20; // r1
  int result; // r0
  char v22; // cc
  int v23; // r6
  int *v24; // r8
  char *v25; // r0
  int v26; // r3
  char v27; // cc
  int *v28; // r0
  int *v29; // r3
  unsigned int v30; // r6
  unsigned int v31; // r7
  unsigned int v32; // r5
  wchar_t *v33; // r0
  unsigned int v34; // r6
  unsigned int v35; // r9
  unsigned int v36; // r7
  unsigned int v37; // r5
  _DWORD *v38; // r8
  int v39; // r3
  int v40; // r3
  bool v41; // zf
  unsigned int v42; // r3
  unsigned int v43; // r6
  unsigned int v44; // r4
  unsigned int v45; // r7
  unsigned int v46; // r9
  int *v47; // r5
  int v48; // r3
  bool v49; // zf
  unsigned int v50; // r3
  int v51; // [sp+8h] [bp-44h] BYREF
  int *v52; // [sp+Ch] [bp-40h] BYREF
  unsigned int v53; // [sp+10h] [bp-3Ch]
  unsigned int v54; // [sp+14h] [bp-38h]
  unsigned int v55; // [sp+18h] [bp-34h]
  wchar_t *v56; // [sp+1Ch] [bp-30h]
  int *v57; // [sp+24h] [bp-28h] BYREF

  v7 = 0;
  v56 = a1;
  v54 = a4;
  v8 = s + 1;
  v57 = 0;
  v10 = wcslen(s);
  v11 = s[1];
  v55 = v10;
  v53 = a5;
  if ( !v11 )
    return -1;
  v12 = 0;
  v13 = v8;
  v14 = &v57;
  while ( 1 )
  {
    while ( v11 == 91 )
    {
      if ( !dword_48FEE8 )
      {
        v52 = (int *)v12;
        v25 = getenv("POSIXLY_CORRECT");
        v12 = (unsigned int)v52;
        if ( v25 )
          v26 = 1;
        else
          v26 = -1;
        dword_48FEE8 = v26;
      }
      v19 = v8[1];
      if ( v19 == 33 || ((v19 == 94) & ((unsigned int)dword_48FEE8 >> 31)) != 0 )
      {
        v19 = v8[2];
        v20 = v8 + 2;
      }
      else
      {
        v20 = v8 + 1;
      }
      if ( v19 == 93 )
      {
        v19 = v20[1];
        ++v20;
      }
      while ( 1 )
      {
        v8 = v20 + 1;
        if ( v19 == 93 )
          break;
        if ( !v19 )
          return -1;
        v19 = *v8;
        ++v20;
      }
      v11 = v20[1];
      if ( !v11 )
        return -1;
    }
    while ( 1 )
    {
      v15 = (unsigned int)(v11 - 63) > 1;
      if ( (unsigned int)(v11 - 63) > 1 )
        v15 = (unsigned int)(v11 - 42) > 1;
      v16 = !v15;
      if ( v11 == 33 )
        v16 |= 1u;
      if ( !v16 || v8[1] != 40 )
        break;
      ++v12;
      ++v8;
      v11 = 40;
    }
    if ( v11 == 41 )
      break;
    v17 = v12 == 0;
    if ( !v12 )
      v17 = v11 == 124;
    if ( !v17 )
      goto LABEL_16;
    if ( (unsigned int)v56 - 63 <= 1 )
      v12 = v55;
    else
      v7 = (char *)v8 - (char *)v13;
    if ( (unsigned int)v56 - 63 > 1 )
      v12 = (v7 >> 2) + 1;
    v27 = (v12 != 0x3FFFFFFF) & __CFADD__(v12, -1073741823);
    if ( v12 <= 0x3FFFFFFF )
      v27 = 4 * v12 > 0x1F3B;
    if ( v27 )
      v7 = 1;
    else
      v7 = 0;
    if ( v27 )
      return -1;
    v52 = &v51;
    v28 = (int *)wmempcpy(&v52, v13, v8 - v13);
    v29 = v52;
    v13 = v8 + 1;
    *v28 = v7;
    v12 = v7;
    v11 = v8[1];
    ++v8;
    *v29 = v7;
    *v14 = v29;
    v14 = v29;
LABEL_17:
    if ( !v11 )
      return -1;
  }
  v17 = v12-- == 0;
  if ( !v17 )
  {
LABEL_16:
    v18 = v8[1];
    ++v8;
    v11 = v18;
    goto LABEL_17;
  }
  if ( (unsigned int)v56 - 63 > 1 )
    v55 = v8 - v13 + 1;
  v22 = (v55 != 0x3FFFFFFF) & __CFADD__(v55, -1073741823);
  if ( v55 <= 0x3FFFFFFF )
    v22 = 4 * v55 > 0x1F3B;
  v23 = v22;
  if ( v22 )
    return -1;
  *(_DWORD *)wmempcpy(&v52, v13, v8 - v13) = v23;
  *v14 = &v51;
  v24 = v57;
  v51 = v23;
  if ( !v57 )
    _assert_fail("list != NULL", "../.././gnulib/import/fnmatch_loop.c", 0x454u, "ext_wmatch");
  if ( *(v8 - 1) != 41 )
    _assert_fail("p[-1] == L_(')')", "../.././gnulib/import/fnmatch_loop.c", 0x455u, "ext_wmatch");
  switch ( (unsigned int)v56 )
  {
    case '!':
      if ( a3 > v54 )
        return 1;
      v43 = a3;
      v56 = v8;
      v44 = v54;
      v55 = a6 & 5;
      v45 = a6 & 0xFFFFFFFB;
      v46 = v53;
      if ( (a6 & 1) != 0 )
        v45 = a6;
      while ( 2 )
      {
        v47 = v24;
        while ( sub_3345D8(v47 + 1, a3, v43, v46, v45) )
        {
          v47 = (int *)*v47;
          if ( !v47 )
          {
            if ( a3 == v43 )
            {
              v50 = v46;
            }
            else
            {
              v48 = *(_DWORD *)(v43 - 4);
              v49 = v48 == 47;
              if ( v48 == 47 )
                v50 = v55;
              else
                v50 = 0;
              if ( v49 )
                v50 = v50 == 5;
            }
            if ( !sub_3345D8(v56, v43, v44, v50, v45) )
              return 0;
            break;
          }
        }
        v43 += 4;
        if ( v44 >= v43 )
          continue;
        break;
      }
      return 1;
    case '*':
      if ( sub_3345D8(v8, a3, v54, v53, a6) )
        goto LABEL_69;
      return 0;
    case '+':
LABEL_69:
      v56 = s - 1;
      v34 = v54;
      v35 = v53;
      if ( (a6 & 1) != 0 )
        v36 = a6;
      else
        v36 = a6 & 0xFFFFFFFB;
      v52 = v24;
      do
      {
        if ( a3 <= v34 )
        {
          v37 = a3;
          v38 = v52 + 1;
          v55 = a6 & 5;
          do
          {
            v39 = sub_3345D8(v38, a3, v37, v35, v36);
            if ( !v39 )
            {
              if ( a3 == v37 )
              {
                if ( !sub_3345D8(v8, a3, v34, v35, v36) )
                  return 0;
              }
              else
              {
                if ( *(_DWORD *)(v37 - 4) == 47 )
                  v39 = v55 == 5;
                if ( !sub_3345D8(v8, v37, v34, v39, v36) )
                  return 0;
                v40 = *(_DWORD *)(v37 - 4);
                v41 = v40 == 47;
                if ( v40 == 47 )
                  v42 = v55;
                else
                  v42 = 0;
                if ( v41 )
                  v42 = v42 == 5;
                if ( !sub_3345D8(v56, v37, v34, v42, v36) )
                  return 0;
              }
            }
            v37 += 4;
          }
          while ( v34 >= v37 );
        }
        v17 = *v52 == 0;
        v52 = (int *)*v52;
        v57 = v52;
      }
      while ( !v17 );
      return 1;
    case '?':
      if ( !sub_3345D8(v8, a3, v54, v53, a6) )
        return 0;
      goto LABEL_62;
    case '@':
LABEL_62:
      v30 = v54;
      v31 = v53;
      v32 = a6 & 0xFFFFFFFB;
      if ( (a6 & 1) != 0 )
        v32 = a6;
      break;
    default:
      _assert_fail(
        "! \"Invalid extended matching operator\"",
        "../.././gnulib/import/fnmatch_loop.c",
        0x4AFu,
        "ext_wmatch");
      return result;
  }
  while ( 1 )
  {
    v33 = wcscat(v24 + 1, v8);
    if ( !sub_3345D8(v33, a3, v30, v31, v32) )
      break;
    v24 = (int *)*v24;
    v57 = v24;
    if ( !v24 )
      return 1;
  }
  return 0;
}
