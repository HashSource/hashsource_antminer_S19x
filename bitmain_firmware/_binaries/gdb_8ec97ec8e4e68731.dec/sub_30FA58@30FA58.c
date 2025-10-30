void __fastcall sub_30FA58(unsigned int *a1, const char **a2, signed int a3, _DWORD *a4)
{
  unsigned int v5; // r4
  const char **v6; // r9
  const char *v8; // r10
  unsigned __int8 *v10; // r8
  char *v11; // r0
  int v12; // r0
  unsigned __int8 *v13; // r3
  char *v14; // r2
  char *v15; // r2
  unsigned __int8 *v16; // r3
  int v17; // r0
  unsigned __int8 *v18; // r4
  char *v19; // r0
  size_t v20; // r2
  unsigned int v21; // r2
  const char *v22; // r3
  int v23; // r11
  int v24; // r3
  bool v25; // zf
  const char *v26; // r2
  int v27; // r3
  __int64 v28; // r0
  size_t v29; // r2
  unsigned __int8 *v30; // r9
  __int64 v31; // r0
  unsigned __int8 *v32; // r3
  int v33; // r2
  char *v34; // r0
  int v35; // r2
  const char *v36; // r2
  signed int v37; // r11
  unsigned int v38; // r1
  char *v39; // r0
  char *v40; // r2
  int v41; // r1
  void *v42; // r0
  __int64 v43; // r0
  char *s; // [sp+0h] [bp-34h]
  char *sa; // [sp+0h] [bp-34h]
  void *v46; // [sp+4h] [bp-30h]
  void *v47; // [sp+4h] [bp-30h]
  const char **v48; // [sp+8h] [bp-2Ch]
  char *v49; // [sp+8h] [bp-2Ch]
  unsigned __int8 *v50; // [sp+14h] [bp-20h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  int v52; // [sp+1Ch] [bp-18h]
  int v53; // [sp+20h] [bp-14h]
  void *v54; // [sp+24h] [bp-10h] BYREF
  int v55; // [sp+28h] [bp-Ch]
  int v56; // [sp+2Ch] [bp-8h]

  v5 = *a1;
  v6 = a2;
  v8 = *a2;
  v10 = (unsigned __int8 *)&(*a2)[a3];
  if ( (*a1 & 0x1000) == 0 || v8[a3] != 88 )
  {
    if ( (v5 & 0x1800) != 0 )
    {
      v11 = strstr(v8, "__pt__");
      if ( v11 )
      {
        v50 = (unsigned __int8 *)(v11 + 6);
        s = v11;
        v12 = sub_30D00C(&v50);
        if ( v12 == -1 )
          goto LABEL_13;
        v13 = v50;
        v14 = s;
        if ( v10 == &v50[v12] && *v50 == 95 )
          goto LABEL_46;
        v5 = *a1;
      }
    }
    if ( (v5 & 0x2100) != 0 )
    {
      v15 = strstr(v8, "__tm__");
      if ( v15 || (v15 = strstr(v8, "__ps__")) != 0 || (v15 = strstr(v8, "__pt__")) != 0 )
      {
        v16 = (unsigned __int8 *)(v15 + 6);
      }
      else
      {
        v34 = strstr(v8, "__S");
        v15 = v34;
        if ( !v34 )
          goto LABEL_13;
        v16 = (unsigned __int8 *)(v34 + 3);
      }
      sa = v15;
      v50 = v16;
      v17 = sub_30D00C(&v50);
      if ( v17 != -1 )
      {
        v13 = v50;
        v14 = sa;
        if ( v10 == &v50[v17] && *v50 == 95 )
        {
LABEL_46:
          HIDWORD(v28) = *v6;
          v50 = v13 + 1;
          v53 = 0;
          v29 = (size_t)&v14[-HIDWORD(v28)];
          v52 = 0;
          ptr = 0;
          if ( v29 )
          {
            LODWORD(v28) = a4;
            sub_30D320(v28, v29);
          }
          if ( a1[13] == -1 )
            a1[13] = a4[1] - *a4;
          v46 = (void *)*a1;
          *a1 |= 1u;
          sub_30D3E4((int)a4, (char *)&word_364FA4);
          if ( v10 > v50 )
          {
            v48 = v6;
            v30 = v50;
            while ( 1 )
            {
              if ( ptr )
              {
                free(ptr);
                v30 = v50;
                v52 = 0;
                v53 = 0;
                ptr = 0;
              }
              v33 = *v30;
              if ( v33 == 76 )
              {
                v32 = v30 + 1;
              }
              else
              {
                if ( v33 != 88 )
                {
                  if ( !sub_30E828(a1, &v50, (unsigned int)&ptr) )
                    goto LABEL_90;
                  if ( v30 == v50 )
                  {
                    *a1 = (unsigned int)v46;
                    return;
                  }
                  goto LABEL_59;
                }
                v50 = v30 + 1;
                if ( !sub_30E828(a1, &v50, (unsigned int)&v54) )
                  goto LABEL_90;
                sub_30D3E4((int)&ptr, "(");
                LODWORD(v31) = &ptr;
                HIDWORD(v31) = &v54;
                sub_30D52C(v31, v55);
                if ( v54 )
                {
                  free(v54);
                  v55 = 0;
                  v56 = 0;
                  v54 = 0;
                }
                sub_30D3E4((int)&ptr, ")");
                if ( *v50 != 76 )
                {
LABEL_90:
                  v42 = ptr;
                  v6 = v48;
                  if ( !ptr )
                    goto LABEL_92;
                  goto LABEL_91;
                }
                v32 = v50 + 1;
              }
              v50 = v32;
              if ( !sub_30D468(&v50, (int)&ptr) )
                goto LABEL_90;
LABEL_59:
              sub_30D52C(__SPAIR64__(&ptr, (unsigned int)a4), v52);
              sub_30D3E4((int)a4, (char *)&word_3D7D40);
              v30 = v50;
              if ( v50 >= v10 )
              {
                v42 = ptr;
                v6 = v48;
                if ( ptr )
                  goto LABEL_91;
                goto LABEL_95;
              }
            }
          }
          v42 = ptr;
          if ( !ptr )
            goto LABEL_95;
LABEL_91:
          free(v42);
          v52 = 0;
          v53 = 0;
          ptr = 0;
LABEL_92:
          if ( v50 >= v10 )
LABEL_95:
            --a4[1];
          sub_30D3E4((int)a4, ">");
          v18 = (unsigned __int8 *)*v6;
          *a1 = (unsigned int)v46;
          goto LABEL_20;
        }
      }
    }
LABEL_13:
    v18 = (unsigned __int8 *)*v6;
    if ( a3 > 10
      && !strncmp(*v6, "_GLOBAL_", 8u)
      && v18[9] == 78
      && (v41 = v18[10], v41 == v18[8])
      && strchr(&byte_471494, v41) )
    {
      sub_30D3E4((int)a4, "{anonymous}");
      v18 = (unsigned __int8 *)*v6;
    }
    else
    {
      if ( a1[13] == -1 )
        a1[13] = 0;
      if ( a3 )
      {
        sub_30D320(__SPAIR64__((unsigned int)v18, (unsigned int)a4), a3);
        v18 = (unsigned __int8 *)*v6;
      }
    }
LABEL_20:
    *v6 = (const char *)&v18[a3];
    return;
  }
  v19 = strchr(v8, 60);
  if ( v19 && (v20 = v19 - v8, v19 - v8 < a3) )
  {
    if ( v20 )
    {
      sub_30D320(__SPAIR64__((unsigned int)v8, (unsigned int)a4), v20);
      v8 = *v6;
      v5 = *a1;
    }
  }
  else if ( a3 )
  {
    sub_30D320(__SPAIR64__((unsigned int)v8, (unsigned int)a4), a3);
    v8 = *v6;
    v5 = *a1;
  }
  v21 = a1[13];
  *v6 = &v8[a3 + 1];
  v53 = 0;
  v52 = 0;
  ptr = 0;
  if ( v21 == -1 )
    a1[13] = a4[1] - *a4;
  *a1 = v5 | 1;
  sub_30D3E4((int)a4, (char *)&word_364FA4);
  while ( 2 )
  {
    if ( ptr )
    {
      free(ptr);
      v52 = 0;
      v53 = 0;
      ptr = 0;
    }
    v22 = *v6;
    v23 = *(unsigned __int8 *)*v6;
    switch ( **v6 )
    {
      case 'A':
        *v6 = v22 + 1;
        v37 = sub_30D00C((unsigned __int8 **)v6);
        if ( v37 > 0 && v37 <= (int)strlen(*v6) )
        {
          sub_30D3E4((int)&ptr, "&");
          v47 = sub_93028(v37 + 1);
          memcpy(v47, *v6, v37);
          v38 = *a1;
          *((_BYTE *)v47 + v37) = 0;
          v39 = sub_30DFAC((const char *)v47, v38);
          v40 = v39;
          if ( v39 )
          {
            if ( *v39 )
            {
              v49 = v39;
              sub_30D3E4((int)&ptr, v39);
              v40 = v49;
            }
            free(v40);
          }
          else
          {
            HIDWORD(v43) = *v6;
            LODWORD(v43) = &ptr;
            sub_30D320(v43, v37);
          }
          *v6 += v37;
          free(v47);
          goto LABEL_32;
        }
        goto LABEL_40;
      case 'S':
      case 'U':
        if ( ((v23 - 83) & 0xFD) != 0 )
          goto LABEL_40;
        v26 = v22 + 1;
        *v6 = v22 + 1;
        v27 = *((unsigned __int8 *)v22 + 1);
        switch ( v27 )
        {
          case 'N':
            sub_30D3E4((int)&ptr, (char *)&word_3C1464);
            v26 = *v6;
            break;
          case 'P':
            break;
          case 'M':
            sub_30D3E4((int)&ptr, "-2147483648");
            ++*v6;
            goto LABEL_32;
          default:
            goto LABEL_40;
        }
        *v6 = v26 + 1;
        v35 = *((unsigned __int8 *)v26 + 1);
        if ( (word_438898[v35] & 4) != 0 )
        {
          do
          {
            byte_48FEA8 = v35;
            if ( v35 )
              sub_30D3E4((int)&ptr, &byte_48FEA8);
            v36 = *v6 + 1;
            *v6 = v36;
            v35 = *(unsigned __int8 *)v36;
          }
          while ( (word_438898[v35] & 4) != 0 );
          if ( v23 == 85 )
            sub_30D3E4((int)&ptr, "U");
          goto LABEL_32;
        }
LABEL_40:
        sub_30D3E4((int)a4, ">");
        if ( ptr )
        {
          free(ptr);
          v52 = 0;
          v53 = 0;
          ptr = 0;
        }
        if ( **v6 == 95 )
          ++*v6;
        *a1 = v5;
        return;
      case 'T':
        *v6 = v22 + 1;
        if ( sub_30E828(a1, (unsigned __int8 **)v6, (unsigned int)&ptr) )
        {
LABEL_32:
          sub_30D52C(__SPAIR64__(&ptr, (unsigned int)a4), v52);
          v24 = *(unsigned __int8 *)*v6;
          v25 = v24 == 95;
          if ( v24 != 95 )
            v25 = v24 == 0;
          if ( !v25 )
          {
            sub_30D3E4((int)a4, (char *)&word_3D7D40);
            continue;
          }
        }
        goto LABEL_40;
      default:
        goto LABEL_40;
    }
  }
}
