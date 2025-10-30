int __fastcall sub_9A6F0(const char *a1)
{
  const char *v1; // r4
  size_t v2; // r0
  int v3; // r5
  bool v4; // zf
  int v5; // r3
  unsigned __int8 *v6; // r2
  int v7; // t1
  _BOOL4 v8; // r3
  int i; // r3
  int result; // r0
  int v11; // r5
  int v12; // r3
  unsigned __int8 *v13; // r2
  int v14; // t1
  bool v15; // zf
  bool v16; // zf
  int v17; // t1
  unsigned int v18; // r3
  bool v19; // cc
  unsigned __int8 *v20; // r4
  bool v21; // cc
  unsigned int v22; // r3
  unsigned int v23; // t1
  unsigned int v24; // r2
  int v25; // t1
  unsigned int v26; // r3
  bool v27; // cc
  unsigned __int8 *v28; // r4
  bool v29; // cc
  unsigned int v30; // r3
  unsigned int v31; // t1
  unsigned int v32; // r2
  int v33; // r3
  unsigned __int8 *v34; // r2
  int v35; // t1
  int v36; // r3
  bool v37; // zf
  int v38; // r2

  v1 = a1;
  v2 = strlen(a1);
  v3 = *(unsigned __int8 *)v1;
  if ( v2 > 3 && v3 == 95 )
  {
    if ( v1[1] != 95 || (unsigned int)*((unsigned __int8 *)v1 + 2) - 48 > 9 )
      goto LABEL_21;
    v3 = *((unsigned __int8 *)v1 + 3);
    v1 += 3;
    if ( (unsigned int)(v3 - 48) <= 9 )
    {
      do
      {
        v25 = *(unsigned __int8 *)++v1;
        v3 = v25;
      }
      while ( (unsigned int)(v25 - 48) <= 9 );
    }
  }
  v4 = v3 == 36;
  if ( v3 != 36 )
    v4 = v3 == 46;
  if ( v4 )
  {
    v5 = *((unsigned __int8 *)v1 + 1);
    v6 = (unsigned __int8 *)(v1 + 1);
    if ( (unsigned int)(v5 - 48) <= 9 )
    {
      do
      {
        v7 = *++v6;
        v5 = v7;
      }
      while ( (unsigned int)(v7 - 48) <= 9 );
    }
    if ( !v5 )
      return 1;
  }
  v8 = v3 == 95;
  if ( v2 <= 3 )
    v8 = 0;
  if ( v8 )
  {
LABEL_21:
    v11 = *((unsigned __int8 *)v1 + 1);
    if ( v11 == 95 )
    {
      if ( v1[2] == 95 )
      {
        v33 = *((unsigned __int8 *)v1 + 3);
        v34 = (unsigned __int8 *)(v1 + 3);
        if ( (unsigned int)(v33 - 48) <= 9 )
        {
          do
          {
            v35 = *++v34;
            v33 = v35;
          }
          while ( (unsigned int)(v35 - 48) <= 9 );
        }
        if ( !v33 )
          return 1;
      }
      if ( !strcmp(v1, "TKB") )
        return 1;
    }
    else
    {
      if ( !strcmp(v1, "TKB") )
        return 1;
      if ( v11 == 69 && (unsigned int)*((unsigned __int8 *)v1 + 2) - 48 <= 9 )
      {
        v12 = *((unsigned __int8 *)v1 + 3);
        v13 = (unsigned __int8 *)(v1 + 3);
        if ( (unsigned int)(v12 - 48) <= 9 )
        {
          do
          {
            v14 = *++v13;
            v12 = v14;
          }
          while ( (unsigned int)(v14 - 48) <= 9 );
        }
        v15 = v12 == 115;
        if ( v12 != 115 )
          v15 = v12 == 98;
        if ( v15 && !v13[1] )
          return 1;
      }
    }
LABEL_15:
    i = *(unsigned __int8 *)v1;
    goto LABEL_16;
  }
  if ( !strcmp(v1, "TKB") )
    return 1;
  if ( v3 != 88 )
    goto LABEL_15;
  for ( i = *(unsigned __int8 *)++v1; ; i = v17 )
  {
    result = i == 95;
    if ( !i )
      result = 1;
    if ( result )
      break;
    v16 = i == 110;
    if ( i != 110 )
      v16 = i == 98;
    if ( !v16 )
      return result;
    v17 = *(unsigned __int8 *)++v1;
  }
LABEL_16:
  if ( !i )
    return 1;
  if ( i != 95 )
  {
    if ( i != 36 || (unsigned int)*((unsigned __int8 *)v1 + 1) - 48 > 9 )
      return 0;
    v26 = *((unsigned __int8 *)v1 + 2);
    if ( v1[2] )
    {
      v27 = v26 > 0x5F;
      if ( v26 != 95 )
        v27 = v26 - 48 > 9;
      if ( !v27 )
      {
        v28 = (unsigned __int8 *)(v1 + 2);
        while ( 1 )
        {
          v31 = *++v28;
          v30 = v31;
          v32 = v31 - 48;
          if ( !v31 )
            break;
          v29 = v30 > 0x5F;
          if ( v30 != 95 )
            v29 = v32 > 9;
          if ( v29 )
            return 0;
        }
        return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( v1[1] != 95 )
    return 0;
  result = *((unsigned __int8 *)v1 + 2);
  if ( v1[2] )
  {
    if ( result != 95 )
    {
      if ( (unsigned int)(result - 48) > 9 )
        return 0;
      v18 = *((unsigned __int8 *)v1 + 3);
      if ( v1[3] )
      {
        v19 = v18 > 0x5F;
        if ( v18 != 95 )
          v19 = v18 - 48 > 9;
        if ( !v19 )
        {
          v20 = (unsigned __int8 *)(v1 + 3);
          while ( 1 )
          {
            v23 = *++v20;
            v22 = v23;
            v24 = v23 - 48;
            if ( !v23 )
              break;
            v21 = v22 > 0x5F;
            if ( v22 != 95 )
              v21 = v24 > 9;
            if ( v21 )
              return 0;
          }
          return 1;
        }
        return 0;
      }
      return 1;
    }
    if ( !strcmp(v1 + 3, "JM") || !strcmp(v1 + 3, "LJM") )
      return 1;
    if ( v1[3] != 88 )
      return 0;
    v36 = *((unsigned __int8 *)v1 + 4);
    v37 = v36 == 85;
    if ( v36 != 85 )
      v37 = v36 == 68;
    v38 = v37;
    if ( v36 == 80 )
      v38 |= 1u;
    if ( (v36 & 0xFB) == 0x42 )
      v38 |= 1u;
    if ( v38 )
      return 1;
    if ( v36 != 82 )
      return 0;
    return *((unsigned __int8 *)v1 + 5) != 84;
  }
  return result;
}
