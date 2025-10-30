int __fastcall sub_335110(int a1, char *s, unsigned int a3, unsigned int a4, unsigned __int8 a5, unsigned int a6)
{
  char *i; // r4
  size_t v9; // r0
  int v10; // r1
  char *v11; // r7
  _DWORD *v12; // r9
  int v13; // r8
  bool v14; // cc
  int v15; // r3
  bool v16; // zf
  int v17; // t1
  int v18; // r3
  char *v19; // r2
  int result; // r0
  _BYTE *v21; // r0
  int *v22; // r9
  int v23; // r3
  int v24; // r3
  int v25; // r8
  char *v26; // r1
  size_t v27; // r2
  _BYTE *v28; // r0
  int *v29; // r3
  unsigned int v30; // r6
  int v31; // r7
  unsigned int v32; // r5
  char *v33; // r0
  char *v34; // r8
  unsigned int v35; // r6
  int v36; // r9
  unsigned int v37; // r7
  unsigned int v38; // r5
  _DWORD *v39; // r8
  int v40; // r3
  int v41; // r3
  bool v42; // zf
  int v43; // r3
  unsigned int v44; // r6
  int v45; // r5
  unsigned int v46; // r7
  unsigned int v47; // r8
  int *v48; // r4
  int v49; // r3
  bool v50; // zf
  int v51; // r3
  int v52; // [sp+8h] [bp-44h] BYREF
  int *dest; // [sp+Ch] [bp-40h] BYREF
  int v54; // [sp+10h] [bp-3Ch]
  unsigned int v55; // [sp+14h] [bp-38h]
  int v56; // [sp+18h] [bp-34h]
  int v57; // [sp+1Ch] [bp-30h]
  int *v58; // [sp+24h] [bp-28h] BYREF

  v57 = a1;
  v55 = a4;
  i = s + 1;
  v58 = 0;
  v9 = strlen(s);
  v10 = (unsigned __int8)s[1];
  v56 = v9;
  v54 = a5;
  if ( !v10 )
    return -1;
  v11 = i;
  v12 = &v58;
  v13 = 0;
  while ( 1 )
  {
    while ( v10 == 91 )
    {
      if ( !dword_48FEE8 )
      {
        if ( getenv("POSIXLY_CORRECT") )
          v23 = 1;
        else
          v23 = -1;
        dword_48FEE8 = v23;
      }
      v18 = (unsigned __int8)i[1];
      if ( v18 == 33 || ((v18 == 94) & ((unsigned int)dword_48FEE8 >> 31)) != 0 )
      {
        v18 = (unsigned __int8)i[2];
        v19 = i + 2;
      }
      else
      {
        v19 = i + 1;
      }
      if ( v18 != 93 )
        goto LABEL_27;
      v18 = (unsigned __int8)*++v19;
      for ( i = v19 + 1; v18 != 93; i = v19 + 1 )
      {
        if ( !v18 )
          return -1;
        v18 = (unsigned __int8)*i;
        v19 = i;
LABEL_27:
        ;
      }
      v10 = (unsigned __int8)v19[1];
      if ( !v19[1] )
        return -1;
    }
    while ( 1 )
    {
      v14 = (unsigned int)(v10 - 42) > 1;
      if ( (unsigned int)(v10 - 42) > 1 )
        v14 = (unsigned int)(v10 - 63) > 1;
      v15 = !v14;
      if ( v10 == 33 )
        v15 |= 1u;
      if ( !v15 || i[1] != 40 )
        break;
      ++v13;
      ++i;
      v10 = 40;
    }
    if ( v10 == 41 )
      break;
    v16 = v10 == 124;
    if ( v10 == 124 )
      v16 = v13 == 0;
    if ( !v16 )
      goto LABEL_16;
    if ( (unsigned int)(v57 - 63) > 1 )
      v24 = i - v11 + 1;
    else
      v24 = v56;
    if ( ((v24 + 7) & 0xFFFFFFFC) - 4 > 0x1F3B )
      return -1;
    v25 = i - v11;
    v26 = v11;
    v27 = i - v11;
    dest = &v52;
    v11 = i + 1;
    v28 = memcpy(&dest, v26, v27);
    v29 = dest;
    v28[v25] = 0;
    v13 = 0;
    v10 = (unsigned __int8)*++i;
    *v29 = 0;
    *v12 = v29;
    v12 = v29;
LABEL_17:
    if ( !v10 )
      return -1;
  }
  v16 = v13-- == 0;
  if ( !v16 )
  {
LABEL_16:
    v17 = (unsigned __int8)*++i;
    v10 = v17;
    goto LABEL_17;
  }
  if ( (unsigned int)(v57 - 63) > 1 )
    v56 = i - v11 + 1;
  if ( ((v56 + 7) & 0xFFFFFFFC) - 4 > 0x1F3B )
    return -1;
  v21 = memcpy(&dest, v11, i - v11);
  *v12 = &v52;
  v22 = v58;
  v21[i - v11] = 0;
  v52 = 0;
  if ( !v22 )
    _assert_fail("list != NULL", "../.././gnulib/import/fnmatch_loop.c", 0x454u, "ext_match");
  if ( *(i - 1) != 41 )
    _assert_fail("p[-1] == L_(')')", "../.././gnulib/import/fnmatch_loop.c", 0x455u, "ext_match");
  switch ( v57 )
  {
    case '!':
      if ( a3 > v55 )
        return 1;
      v44 = a3;
      v45 = v54;
      v57 = (int)i;
      v56 = a6 & 5;
      v46 = a6 & 0xFFFFFFFB;
      v47 = v55;
      if ( (a6 & 1) != 0 )
        v46 = a6;
      while ( 2 )
      {
        v48 = v22;
        while ( 2 )
        {
          if ( sub_335718(v48 + 1, a3, v44, v45, v46) )
          {
            v48 = (int *)*v48;
            if ( v48 )
              continue;
            if ( a3 == v44 )
            {
              v51 = v45;
            }
            else
            {
              v49 = *(unsigned __int8 *)(v44 - 1);
              v50 = v49 == 47;
              if ( v49 == 47 )
                v51 = v56;
              else
                v51 = 0;
              if ( v50 )
                v51 = v51 == 5;
            }
            if ( !sub_335718(v57, v44, v47, v51, v46) )
              return 0;
          }
          break;
        }
        if ( v47 >= ++v44 )
          continue;
        break;
      }
      return 1;
    case '*':
      if ( sub_335718(i, a3, v55, v54, a6) )
        goto LABEL_56;
      return 0;
    case '+':
LABEL_56:
      v34 = s - 1;
      dest = v22;
      v35 = v55;
      v36 = v54;
      v37 = a6 & 0xFFFFFFFB;
      if ( (a6 & 1) != 0 )
        v37 = a6;
      v57 = (int)v34;
      do
      {
        if ( a3 <= v35 )
        {
          v38 = a3;
          v39 = dest + 1;
          v56 = a6 & 5;
          do
          {
            v40 = sub_335718(v39, a3, v38, v36, v37);
            if ( !v40 )
            {
              if ( a3 == v38 )
              {
                if ( !sub_335718(i, a3, v35, v36, v37) )
                  return 0;
              }
              else
              {
                if ( *(_BYTE *)(v38 - 1) == 47 )
                  v40 = v56 == 5;
                if ( !sub_335718(i, v38, v35, v40, v37) )
                  return 0;
                v41 = *(unsigned __int8 *)(v38 - 1);
                v42 = v41 == 47;
                if ( v41 == 47 )
                  v43 = v56;
                else
                  v43 = 0;
                if ( v42 )
                  v43 = v43 == 5;
                if ( !sub_335718(v57, v38, v35, v43, v37) )
                  return 0;
              }
            }
            ++v38;
          }
          while ( v35 >= v38 );
        }
        v16 = *dest == 0;
        dest = (int *)*dest;
        v58 = dest;
      }
      while ( !v16 );
      return 1;
    case '?':
      if ( !sub_335718(i, a3, v55, v54, a6) )
        return 0;
      goto LABEL_49;
    case '@':
LABEL_49:
      v30 = v55;
      v31 = v54;
      v32 = a6 & 0xFFFFFFFB;
      if ( (a6 & 1) != 0 )
        v32 = a6;
      break;
    default:
      _assert_fail(
        "! \"Invalid extended matching operator\"",
        "../.././gnulib/import/fnmatch_loop.c",
        0x4AFu,
        "ext_match");
      return result;
  }
  while ( 2 )
  {
    v33 = strcat((char *)v22 + 4, i);
    if ( !sub_335718(v33, a3, v30, v31, v32) )
      return 0;
    v22 = (int *)*v22;
    v58 = v22;
    if ( v22 )
      continue;
    break;
  }
  return 1;
}
