int __fastcall sub_121C38(char *s1, unsigned int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  int v5; // lr
  char *v6; // r10
  unsigned int v7; // r8
  int v8; // r7
  char *v9; // r6
  const char *v10; // r9
  int v11; // r4
  int v12; // r5
  unsigned int v13; // r11
  const char *v14; // r0
  int v15; // r2
  int v16; // t1
  bool v17; // cc
  int result; // r0
  char *v19; // r8
  int v20; // r5
  int v21; // r6
  char *v22; // r10
  const char *v23; // r2
  int v24; // r3
  int v25; // t1
  int v26; // t1
  unsigned int v27; // r2
  unsigned int v28; // r3
  char *v30; // r3
  int v31; // t1
  unsigned int v32; // r2
  int v33; // r3
  int v34; // r2
  unsigned __int8 *v35; // r8
  const char *v36; // r1
  unsigned __int8 *v37; // r10
  int v38; // t1
  int v39; // t1
  unsigned int v40; // r6
  const char *v41; // r11
  const char *v42; // r4
  char *v43; // r9
  int v44; // r12
  const char *v45; // r6
  int v46; // r3
  int v47; // t1
  int v48; // t1
  unsigned int v49; // r0
  int v50; // r0
  int v51; // r3
  int v52; // t1
  unsigned int v53; // r1
  unsigned int v54; // r2
  bool v55; // cc

  v6 = s1;
  v7 = a2;
  if ( a4 > 1 && *a3 == 46 )
    goto LABEL_50;
  if ( !a2 )
    goto LABEL_77;
  v8 = 0;
  v9 = s1;
  v10 = 0;
  v11 = 0;
  v12 = 1;
  v13 = a2 - 1;
  do
  {
    while ( 1 )
    {
      v14 = v9;
      v16 = (unsigned __int8)*v9++;
      v15 = v16;
      if ( v16 != 42 )
        break;
      if ( v13 == v11 )
      {
        v5 = 1;
        v27 = 1;
      }
      else
      {
        v27 = (unsigned __int8)*v9;
      }
      if ( v13 != v11 )
      {
        v27 = v27 == 46;
        v5 = v27;
      }
      if ( v10 || v12 & 8 | v8 || (a5 & 4) != 0 && !(v12 & 1) >= v27 || !(v12 & 1 | v5) )
      {
LABEL_49:
        v6 = s1;
        goto LABEL_50;
      }
      v12 &= ~1u;
      v10 = v14;
      v8 = 0;
LABEL_10:
      if ( v7 == ++v11 )
        goto LABEL_18;
    }
    if ( (v15 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v15 - 48) > 9 )
    {
      if ( v15 == 46 )
      {
        if ( (v12 & 5) != 0 )
          goto LABEL_49;
        ++v8;
        v12 = 1;
      }
      else
      {
        if ( v15 != 45 || (v12 & 1) != 0 )
          goto LABEL_49;
        v12 |= 4u;
      }
      goto LABEL_10;
    }
    if ( (v12 & 1) != 0 && v7 - v11 > 3 && !strncasecmp(v14, "xn--", 4u) )
      v12 |= 8u;
    ++v11;
    v12 &= 0xFFFFFFFA;
  }
  while ( v7 != v11 );
LABEL_18:
  v17 = (int)v10 <= 0;
  if ( v10 )
    v17 = v8 <= 1;
  v6 = s1;
  result = v17;
  if ( (v12 & 5) != 0 )
    result |= 1u;
  if ( result )
  {
LABEL_50:
    if ( (a5 & 0x8000) != 0 )
    {
      v28 = a4;
      if ( a4 >= v7 )
        goto LABEL_78;
      if ( *v6 )
      {
        if ( *v6 != 46 || !((a5 >> 4) & 1) )
        {
          v30 = v6 + 1;
          while ( 1 )
          {
            --v7;
            v6 = v30;
            if ( a4 == v7 )
              break;
            v31 = (unsigned __int8)*v30++;
            result = v31;
            if ( v31 == 46 )
              v32 = (a5 >> 4) & 1;
            else
              v32 = 0;
            if ( !result )
              return result;
            if ( v32 )
              return 0;
          }
LABEL_64:
          if ( !v7 )
            return 1;
          v33 = (unsigned __int8)*v6;
          v34 = *(unsigned __int8 *)a3;
          if ( !*v6 )
            return v33;
          v35 = (unsigned __int8 *)&v6[v7];
          v36 = a3;
          v37 = (unsigned __int8 *)(v6 + 1);
          while ( v33 == v34 )
          {
LABEL_69:
            if ( v37 == v35 )
              return 1;
            v38 = *v37++;
            v33 = v38;
            v39 = *(unsigned __int8 *)++v36;
            v34 = v39;
            if ( !v33 )
              return v33;
          }
          v40 = v34 - 65;
          if ( (unsigned int)(v33 - 65) <= 0x19 )
          {
            v33 = (unsigned __int8)(v33 + 32);
            if ( v40 > 0x19 )
              goto LABEL_68;
          }
          else if ( v40 > 0x19 )
          {
            return 0;
          }
          v34 = (unsigned __int8)(v34 + 32);
LABEL_68:
          if ( v34 != v33 )
            return 0;
          goto LABEL_69;
        }
      }
    }
LABEL_77:
    v28 = a4;
LABEL_78:
    if ( v28 != v7 )
      return 0;
    goto LABEL_64;
  }
  v19 = &s1[v7];
  v20 = v10 - s1;
  v21 = v19 - v10 - 1;
  if ( a4 < v19 - 1 - s1 )
    return result;
  if ( !v20 )
  {
    v42 = &a3[a4 - v21];
    if ( v19 - v10 != 1 )
    {
      v41 = a3;
      goto LABEL_81;
    }
    v44 = *((unsigned __int8 *)v10 + 1);
    v41 = a3;
LABEL_92:
    if ( v44 == 46 )
    {
      if ( v41 != v42 )
      {
        v49 = (a5 >> 3) & 1;
        if ( v42 == v41 + 1 && *v41 == 42 )
          return 1;
        goto LABEL_95;
      }
      return 0;
    }
LABEL_107:
    if ( a4 > 3 )
    {
      result = strncasecmp(a3, "xn--", 4u);
      if ( !result )
        return result;
    }
    if ( (v42 != v41 + 1 || *v41 != 42) && v41 != v42 )
    {
      v49 = 0;
LABEL_95:
      v50 = v49 ^ 1;
      while ( 1 )
      {
        v52 = *(unsigned __int8 *)v41++;
        v51 = v52;
        v53 = v52 - 48;
        v54 = (v52 & 0xFFFFFFDF) - 65;
        v55 = v54 > 0x19;
        if ( v54 > 0x19 )
          v55 = v53 > 9;
        if ( v55 && v51 != 45 )
        {
          if ( v51 == 46 ? v50 : v50 | 1 )
            break;
        }
        if ( v42 == v41 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  result = (unsigned __int8)*s1;
  v22 = s1 + 1;
  v23 = a3;
  v24 = *(unsigned __int8 *)a3;
  if ( !*s1 )
    return result;
  while ( 2 )
  {
    if ( v24 == result )
      goto LABEL_33;
    if ( (unsigned int)(result - 65) > 0x19 )
    {
      if ( (unsigned int)(v24 - 65) > 0x19 )
        return 0;
      goto LABEL_76;
    }
    result = (unsigned __int8)(result + 32);
    if ( (unsigned int)(v24 - 65) <= 0x19 )
LABEL_76:
      v24 = (unsigned __int8)(v24 + 32);
    if ( v24 != result )
      return 0;
LABEL_33:
    if ( v22 != v10 )
    {
      v25 = (unsigned __int8)*v22++;
      result = v25;
      v26 = *(unsigned __int8 *)++v23;
      v24 = v26;
      if ( !result )
        return result;
      continue;
    }
    break;
  }
  v41 = &a3[v20];
  v42 = &a3[a4 - v21];
  if ( v19 - v10 == 1 )
    goto LABEL_107;
LABEL_81:
  result = *(unsigned __int8 *)v42;
  v43 = (char *)(v10 + 2);
  v44 = (unsigned __int8)*(v43 - 1);
  v45 = v42;
  v46 = v44;
  if ( *v42 )
  {
    while ( 2 )
    {
      if ( v46 != result )
      {
        if ( (unsigned int)(result - 65) > 0x19 )
        {
          if ( (unsigned __int8)(v46 - 65) > 0x19u )
            return 0;
        }
        else
        {
          result = (unsigned __int8)(result + 32);
          if ( (unsigned __int8)(v46 - 65) > 0x19u )
          {
LABEL_85:
            if ( v46 != result )
              return 0;
            goto LABEL_86;
          }
        }
        v46 = (unsigned __int8)(v46 + 32);
        goto LABEL_85;
      }
LABEL_86:
      if ( v43 == v19 )
      {
        if ( !v20 )
          goto LABEL_92;
        goto LABEL_107;
      }
      v47 = *(unsigned __int8 *)++v45;
      result = v47;
      v48 = (unsigned __int8)*v43++;
      v46 = v48;
      if ( !result )
        return result;
      continue;
    }
  }
  return result;
}
