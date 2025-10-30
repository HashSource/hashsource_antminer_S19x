bool __fastcall sub_25B6D0(char *a1, unsigned __int8 *a2, int a3, _BOOL4 a4, int a5, int a6)
{
  unsigned __int8 *v6; // r6
  bool v7; // zf
  char v8; // r9
  unsigned __int8 *v9; // r5
  char *v10; // r4
  int v11; // r8
  int v12; // r7
  _BOOL4 v13; // r7
  char *v16; // r7
  int v17; // r0
  int v18; // r4
  int v19; // r0
  _BOOL4 v20; // r0
  int v21; // r0
  _BOOL4 v22; // r0
  char *v23; // r3
  _BOOL4 v24; // r0
  char *i; // r5
  char *v26; // r4
  int v27; // r7
  _BOOL4 result; // r0
  char *v29; // r4
  int v30; // t1
  unsigned __int8 *v31; // r4
  int v32; // t1
  int v33; // r7
  int v34; // r0
  _BOOL4 v35; // r7
  size_t v36; // r7
  int v37; // r4
  int v38; // r0
  char *v39; // r5
  size_t v40; // r0
  const char *v41; // r0
  const char *v42; // r7
  signed int v43; // r4
  const char *v44; // r12
  int v45; // r3
  bool v46; // zf
  int v47; // r3
  unsigned __int8 *v50; // [sp+18h] [bp-18h] BYREF
  char *s1; // [sp+1Ch] [bp-14h] BYREF
  char *v52; // [sp+20h] [bp-10h] BYREF
  char *v53; // [sp+24h] [bp-Ch] BYREF
  char *v54; // [sp+28h] [bp-8h] BYREF
  char *v55; // [sp+2Ch] [bp-4h] BYREF

  v6 = &a2[a3];
  v7 = a5 == 7;
  if ( a5 != 7 )
    v7 = (a5 & 0xFFFFFFF7) == 4;
  v8 = v7;
  s1 = a1;
  v50 = a2;
LABEL_7:
  while ( 2 )
  {
    sub_258300((unsigned __int8 **)&s1, &v50, v6);
    v9 = v50;
    v10 = s1;
    v11 = (unsigned __int8)*s1;
    if ( v6 == v50 )
      goto LABEL_37;
LABEL_8:
    v12 = *v9;
    if ( v12 == 91 )
      goto LABEL_12;
    v13 = v12 == 95;
    if ( isalnum(*v9) )
      v13 = 1;
    if ( v13 )
    {
LABEL_12:
      if ( v11 )
        goto LABEL_13;
      return 1;
    }
    while ( 1 )
    {
LABEL_37:
      v23 = v10;
      while ( v11 == 91 )
      {
        v24 = sub_258748((const char **)&s1);
        v23 = s1;
        if ( !v24 )
          break;
        v11 = (unsigned __int8)*s1;
      }
      if ( a6 )
      {
        if ( v23 != v10 )
        {
          v52 = v10;
          v53 = v23;
          sub_25C5E8(a6 + 4, &v52, &v53);
          v10 = s1;
        }
      }
      else
      {
        v10 = v23;
      }
      for ( i = v10; ; s1 = i )
      {
        v11 = (unsigned __int8)*i;
        v10 = i++;
        if ( !isspace(v11) )
          break;
      }
      v9 = v50;
      if ( !v11 )
      {
        if ( v6 != v50 )
          return 1;
LABEL_50:
        if ( a4 )
        {
          result = *s1 != 40;
          if ( !*s1 )
            return 0;
        }
        else
        {
          if ( a6 )
          {
LABEL_52:
            v26 = s1;
            while ( 1 )
            {
              v26 = (char *)sub_338BD4(v26, "[abi:");
              s1 = v26;
              if ( !v26 )
                break;
              while ( sub_258748((const char **)&s1) && *s1 == 91 )
                ;
              if ( v26 != s1 )
              {
                v54 = v26;
                v55 = s1;
                sub_25C5E8(a6 + 4, &v54, &v55);
                goto LABEL_52;
              }
            }
          }
          return 0;
        }
        return result;
      }
      if ( v6 == v50 )
        goto LABEL_50;
LABEL_13:
      if ( v11 != 58 || !(v8 & 1) )
        break;
      if ( v10[1] != 58 )
        goto LABEL_21;
      if ( *v9 != 58 )
        return 1;
      v50 = v9 + 1;
      s1 = v10 + 1;
      if ( v9 + 1 == v6 )
        goto LABEL_50;
      if ( v9[1] != 58 )
        return 1;
      v29 = v10 + 2;
      s1 = v29;
      v50 = v9 + 2;
      while ( 1 )
      {
        v16 = v29;
        v30 = (unsigned __int8)*v29++;
        v11 = v30;
        if ( !isspace(v30) )
          break;
        s1 = v29;
      }
      if ( v9 + 2 >= v6 )
      {
        v18 = v9[2];
        v9 += 2;
        goto LABEL_32;
      }
      v31 = v9 + 2;
      do
      {
        v32 = *v31++;
        if ( !isspace(v32) )
          break;
        v50 = v31;
      }
      while ( v31 != v6 );
LABEL_102:
      v16 = s1;
      v11 = (unsigned __int8)*s1;
      v17 = isspace(v11);
      v9 = v50;
LABEL_28:
      v18 = *v9;
      if ( v17 )
      {
        v19 = isalnum(*v9);
        v7 = v19 == 0;
        v20 = v19 != 0;
        if ( v7 )
          v20 = v18 == 95;
        if ( !v20 )
          goto LABEL_7;
      }
LABEL_32:
      if ( isspace(v18) )
      {
        v21 = isalnum(v11);
        v7 = v21 == 0;
        v22 = v21 != 0;
        if ( v7 )
          v22 = v11 == 95;
        if ( !v22 )
          goto LABEL_7;
      }
      v10 = v16;
      if ( v6 != v9 )
        goto LABEL_8;
    }
    if ( v11 != 111 || a5 != 4 )
      goto LABEL_21;
    if ( a1 != v10 )
    {
      v33 = (unsigned __int8)*(v10 - 1);
      v34 = isalnum(v33) != 0;
      if ( v33 == 95 )
        v34 |= 1u;
      if ( v34 )
        goto LABEL_21;
    }
    if ( strncmp(v10, "operator", 8u) )
      goto LABEL_21;
    v35 = v10[8] == 95;
    if ( isalnum((unsigned __int8)v10[8]) )
      v35 = 1;
    if ( v35 )
    {
LABEL_21:
      if ( dword_4879F4 )
      {
        if ( dword_4879F4 == 1 )
        {
          v27 = tolower(v11);
          if ( v27 != tolower(*v9) )
            return 1;
        }
      }
      else if ( *v9 != v11 )
      {
        return 1;
      }
      ++v9;
      v16 = v10 + 1;
      if ( !isspace(v11) && !isalnum(v11) && v11 != 95 )
      {
        s1 = v10 + 1;
        v50 = v9;
        continue;
      }
      s1 = v10 + 1;
      v50 = v9;
      v11 = (unsigned __int8)v10[1];
      v17 = isspace(v11);
      goto LABEL_28;
    }
    break;
  }
  v36 = v6 - v9;
  if ( (unsigned int)(v6 - v9) >= 8 )
    v36 = 8;
  if ( strncmp(v10, (const char *)v9, v36) )
    return 1;
  v50 = &v9[v36];
  s1 = &v10[v36];
  if ( &v9[v36] == v6 )
  {
    if ( v10[v36] == 40 )
      goto LABEL_115;
    while ( 1 )
    {
LABEL_90:
      sub_258300((unsigned __int8 **)&s1, &v50, v6);
      v39 = s1;
      v40 = strlen(s1);
      v41 = sub_258584(v39, (unsigned __int8 *)&v39[v40]);
      v42 = (const char *)v50;
      v43 = v41 - v39;
      v44 = sub_258584((const char *)v50, v6);
      if ( v43 > v44 - v42 )
      {
        v43 = v44 - v42;
        if ( v6 != (unsigned __int8 *)v44 )
          return 1;
      }
      else if ( v6 != (unsigned __int8 *)v44 )
      {
        if ( v43 != v44 - v42 || strncmp(v39, v42, v43) )
          return 1;
        goto LABEL_94;
      }
      if ( strncmp(v39, v42, v43) )
        return 1;
LABEL_94:
      s1 = &v39[v43];
      v50 = (unsigned __int8 *)&v42[v43];
      v45 = (unsigned __int8)v39[v43];
      v46 = v45 == 0;
      if ( v39[v43] )
        v46 = v45 == 40;
      v47 = v46;
      if ( &v42[v43] == (const char *)v6 )
        v47 |= 1u;
      if ( v47 || v42[v43] == 40 )
        goto LABEL_102;
    }
  }
  v37 = v9[v36];
  v38 = isalnum(v37) != 0;
  if ( v37 == 95 )
    v38 |= 1u;
  if ( v38 )
    return 1;
  sub_258300((unsigned __int8 **)&s1, &v50, v6);
  if ( *s1 != 40 )
    goto LABEL_90;
  if ( v50 != v6 )
  {
    if ( *v50 == 40 )
    {
      ++v50;
      ++s1;
      goto LABEL_90;
    }
    return 1;
  }
LABEL_115:
  result = a4;
  if ( a4 )
    return 1;
  return result;
}
