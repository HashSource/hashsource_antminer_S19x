char *__fastcall sub_F5190(char **a1, int *a2, char *s)
{
  char *v4; // r5
  size_t v6; // r0
  char *result; // r0
  char *v8; // r2
  int *v9; // r1
  int v10; // r8
  size_t v11; // r9
  signed int v12; // r4
  signed int v13; // r11
  int *v14; // r7
  int v15; // r6
  signed int v16; // r10
  bool v17; // zf
  int *v18; // r3
  size_t v19; // r7
  int v20; // r1
  int *v21; // r9
  char *v22; // r11
  int *v23; // r2
  bool v24; // r1
  signed int v25; // r3
  size_t v27; // r4
  char *v28; // r6
  int v29; // r5
  int v30; // r10
  int *v31; // r2
  char *i; // [sp+0h] [bp-Ch]
  char *v33; // [sp+0h] [bp-Ch]
  char *sa; // [sp+4h] [bp-8h]

  v4 = s;
  v6 = strlen(s);
  if ( v6 )
  {
    v8 = *a1;
    v9 = a2;
    v10 = 0;
    v11 = v6;
    v12 = 0;
    v13 = v6;
    sa = v8;
    v14 = v9;
    do
    {
LABEL_6:
      v15 = (unsigned __int8)v4[v12];
      if ( v10 != 39 )
        goto LABEL_8;
      ++v12;
LABEL_18:
      if ( v15 == v10 )
      {
LABEL_27:
        if ( v13 > v12 )
        {
          v15 = (unsigned __int8)v4[v12];
          v10 = 0;
          v11 = v13;
LABEL_8:
          for ( i = &v4[v12]; ; ++i )
          {
            v16 = v12 + 1;
            if ( v15 == 92 )
            {
              if ( v13 > v16 )
              {
                v12 += 2;
                if ( v13 > v12 )
                  goto LABEL_6;
              }
              v23 = v14;
              v24 = v10 == 0;
              v19 = v11;
              v25 = v13;
              v21 = v23;
              goto LABEL_36;
            }
            if ( v10 )
            {
              ++v12;
              if ( v15 != v10 )
                goto LABEL_19;
              goto LABEL_27;
            }
            if ( strchr("'", v15) )
            {
              if ( v15 == 39 )
              {
                v20 = (unsigned __int8)v4[v16];
                if ( v13 <= v16 )
                {
                  v21 = v14;
                  v22 = &v4[v16];
                  v10 = 39;
                  v19 = v12 + 1;
                  goto LABEL_21;
                }
                v10 = 39;
                v12 += 2;
                v11 = v16;
                if ( v20 != 39 )
                  goto LABEL_19;
                goto LABEL_27;
              }
              if ( v15 != 34 )
              {
                if ( v13 > v16 )
                {
                  v10 = v15;
                  ++v12;
                  v17 = v15 == 39;
                  v15 = (unsigned __int8)v4[v16];
                  v11 = v16;
                  if ( !v17 )
                    goto LABEL_8;
                  v12 = v16 + 1;
                  goto LABEL_18;
                }
                v21 = v14;
                v25 = v13;
                v19 = v12 + 1;
                v24 = v15 == 0;
                v10 = v15;
                goto LABEL_36;
              }
              v11 = v12 + 1;
              v10 = 34;
              if ( v13 <= v16 )
              {
                v21 = v14;
                v22 = &v4[v16];
                v20 = (unsigned __int8)v4[v16];
                v19 = v12 + 1;
                goto LABEL_21;
              }
            }
            else if ( v13 <= v16 )
            {
              v31 = v14;
              v25 = v13;
              v19 = v11;
              v24 = 1;
              v21 = v31;
LABEL_36:
              if ( v25 != v19 || !v24 )
              {
                v22 = &v4[v19];
                v20 = (unsigned __int8)v4[v19];
                goto LABEL_21;
              }
              goto LABEL_40;
            }
            ++v12;
            v15 = (unsigned __int8)i[1];
          }
        }
        v21 = v14;
        v10 = 0;
        v19 = v13;
LABEL_40:
        v27 = v19 - 1;
        v28 = &v4[v19 - 1];
        v33 = v4;
        do
        {
          v19 = v27;
          v17 = v27 == 0;
          v22 = v28--;
          --v27;
          if ( v17 )
          {
            v4 = v33;
            v20 = (unsigned __int8)*v33;
            v22 = v33;
            goto LABEL_21;
          }
          v29 = (unsigned __int8)*v22;
        }
        while ( !strchr(sa, v29) );
        v30 = v29;
        v4 = v33;
        if ( v30 )
          goto LABEL_23;
        goto LABEL_24;
      }
LABEL_19:
      ;
    }
    while ( v13 > v12 );
    v18 = v14;
    v19 = v11;
    v20 = (unsigned __int8)v4[v11];
    v21 = v18;
    v22 = &v4[v19];
LABEL_21:
    if ( v20 && strchr(sa, v20) )
LABEL_23:
      v22 = &v4[v19 + 1];
LABEL_24:
    result = v22;
    if ( v21 )
      *v21 = v10;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return v4;
  }
  return result;
}
