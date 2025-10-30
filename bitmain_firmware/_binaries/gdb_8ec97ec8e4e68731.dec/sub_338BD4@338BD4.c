int __fastcall sub_338BD4(const char *a1, _BYTE *a2)
{
  int v2; // r12
  const char *v3; // r8
  _BYTE *v4; // r11
  int v5; // lr
  _BOOL4 v6; // r7
  int v7; // t1
  unsigned int v8; // r5
  char *v10; // r0
  bool v11; // zf
  char *v12; // r4
  unsigned __int8 *v13; // r6
  char *v14; // r11
  int v15; // r6
  size_t v17; // r10
  unsigned int v18; // r8
  int v19; // r7
  int i; // r2
  int v21; // r9
  _BOOL4 v22; // r0
  unsigned int v23; // r3
  char *v24; // r12
  char *v25; // r2
  int v26; // r0
  int v27; // t1
  int v28; // t1
  unsigned int v29; // r1
  char *v30; // r3
  char *v31; // r0
  int v32; // lr
  int v33; // t1
  int v34; // t1
  size_t v35; // r3
  char *v36; // r8
  int v37; // r2
  size_t v38; // r6
  size_t v39; // r3
  size_t v40; // r10
  int v41; // r9
  _BOOL4 v42; // r0
  char *v43; // r1
  size_t v44; // r2
  char *v45; // r0
  int v46; // r12
  int v47; // t1
  int v48; // t1
  char *v49; // r2
  char *v50; // r1
  int v51; // r0
  int v52; // t1
  int v53; // t1
  int v54; // [sp+4h] [bp-20h]
  size_t v55; // [sp+4h] [bp-20h]
  size_t v56; // [sp+8h] [bp-1Ch]
  char *v57; // [sp+Ch] [bp-18h]
  int v58; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(unsigned __int8 *)a1;
  if ( !*a1 )
  {
    if ( *a2 )
      return 0;
    else
      return (int)a1;
  }
  if ( !*a2 )
    return (int)a1;
  v3 = a1;
  v4 = a2 + 1;
  v5 = (unsigned __int8)*a2;
  LOBYTE(v6) = 1;
  while ( 1 )
  {
    v6 = v5 == v2 && v6;
    v7 = *(unsigned __int8 *)++v3;
    v2 = v7;
    v5 = (unsigned __int8)*v4;
    if ( !v7 )
      break;
    if ( !*v4 )
      goto LABEL_11;
    ++v4;
  }
  if ( !*v4 )
  {
LABEL_11:
    if ( !v6 )
    {
      v8 = v4 - a2;
      v10 = strchr(a1 + 1, (unsigned __int8)*a2);
      v11 = v8 == 1;
      if ( v8 != 1 )
        v11 = v10 == 0;
      v12 = v10;
      if ( !v11 )
      {
        v13 = (unsigned __int8 *)&a1[v8];
        v14 = &v4[-v8];
        if ( v13 < (unsigned __int8 *)v10 )
          v15 = 1;
        else
          v15 = v13 - (unsigned __int8 *)v10;
        if ( v8 > 0x1F )
          return sub_338814((int)v10, v15, v14, v8);
        if ( v8 > 2 )
        {
          v17 = sub_338704((int)v14, v8, &v58);
          v54 = v58;
        }
        else
        {
          v17 = v8 - 1;
          v54 = 1;
          v58 = 1;
        }
        v18 = memcmp(v14, &v14[v54], v17);
        if ( !v18 )
        {
          v19 = 0;
          for ( i = v15; ; i = v21 )
          {
            v21 = v8 + v19;
            v22 = sub_3385F0(&v12[i], 0, v8 + v19 - i) == 0;
            if ( !(v8 + v19) )
              v22 = 0;
            if ( !v22 )
              return 0;
            if ( v17 < v18 )
              v23 = v18;
            else
              v23 = v17;
            if ( v8 > v23 )
            {
              v24 = &v14[v23];
              v25 = &v12[v23 + v19];
              if ( v14[v23] != *v25 )
              {
LABEL_47:
                v18 = 0;
                v19 += v23 + 1 - v17;
                continue;
              }
              while ( v8 != ++v23 )
              {
                v27 = (unsigned __int8)*++v24;
                v26 = v27;
                v28 = (unsigned __int8)*++v25;
                if ( v26 != v28 )
                  goto LABEL_47;
              }
            }
            v29 = v17 - 1;
            if ( v17 > v18 && (v30 = &v12[v19 - 1 + v17], v14[v17 - 1] == *v30) )
            {
              v31 = &v14[v17 - 1];
              while ( v29 - 1 != v18 - 1 )
              {
                v33 = (unsigned __int8)*--v31;
                v32 = v33;
                v34 = (unsigned __int8)*--v30;
                if ( v32 != v34 )
                  break;
                --v29;
              }
            }
            else
            {
              v29 = v17;
            }
            if ( v18 + 1 > v29 )
              goto LABEL_65;
            v18 = v8 - v54;
            v19 += v54;
          }
        }
        v35 = v8 - v17;
        if ( v8 - v17 < v17 )
          v35 = v17;
        v57 = &v14[v17 - 1];
        v36 = &v14[v17];
        v56 = v35 + 1;
        v37 = v15;
        v58 = v35 + 1;
        v38 = v17;
        v39 = 1 - v17;
        v19 = 0;
        v40 = v17 - 1;
        v55 = v39;
        while ( 1 )
        {
          v41 = v8 + v19;
          v42 = sub_3385F0(&v12[v37], 0, v8 + v19 - v37) == 0;
          if ( !(v8 + v19) )
            v42 = 0;
          if ( !v42 )
            return 0;
          if ( v8 > v38 )
          {
            v43 = &v12[v38 + v19];
            if ( *v43 != *v36 )
            {
              v44 = v38;
LABEL_69:
              v19 += v44 + v55;
              goto LABEL_70;
            }
            v45 = v36;
            v44 = v38;
            while ( v8 > ++v44 )
            {
              v47 = (unsigned __int8)*++v45;
              v46 = v47;
              v48 = (unsigned __int8)*++v43;
              if ( v46 != v48 )
                goto LABEL_69;
            }
          }
          if ( v40 == -1 )
            goto LABEL_65;
          v49 = &v12[v19 + v40];
          if ( *v49 == *v57 )
          {
            v50 = v57;
            while ( v14 != v50 )
            {
              v52 = (unsigned __int8)*--v50;
              v51 = v52;
              v53 = (unsigned __int8)*--v49;
              if ( v51 != v53 )
                goto LABEL_71;
            }
LABEL_65:
            v12 += v19;
            return (int)v12;
          }
LABEL_71:
          v19 += v56;
LABEL_70:
          v37 = v41;
        }
      }
      return (int)v12;
    }
    return (int)a1;
  }
  return 0;
}
