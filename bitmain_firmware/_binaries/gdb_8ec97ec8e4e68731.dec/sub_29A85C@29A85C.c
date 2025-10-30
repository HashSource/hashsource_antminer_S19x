int __fastcall sub_29A85C(const char *a1, int a2, int a3)
{
  char *v5; // r0
  char *v6; // r6
  int v7; // r0
  int v8; // r7
  int v9; // r4
  size_t v11; // r10
  char *v12; // r5
  bool v13; // zf
  __int64 v14; // r2
  int v15; // r9
  char *v16; // r0
  ssize_t v17; // r10
  char *v18; // r11
  _BOOL4 v19; // r2
  char *v20; // r7
  int v21; // r10
  char *v22; // r2
  _BOOL4 v23; // r1
  int v24; // t1
  char *v25; // r7
  char *v26; // r4
  char *v27; // r1
  const unsigned __int16 **v28; // r0
  char *v29; // r0
  const unsigned __int16 **v30; // r0
  char *v31; // [sp+4h] [bp-70h]
  char v32[48]; // [sp+8h] [bp-6Ch] BYREF
  size_t v33; // [sp+38h] [bp-3Ch]
  int v34; // [sp+3Ch] [bp-38h]

  v5 = sub_29A5B4(a1);
  v6 = v5;
  if ( !v5 )
  {
    v9 = *_errno_location();
    if ( !v9 )
      return 5;
    return v9;
  }
  v7 = open64(v5, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( _fxstat64(3, v7, v32) == -1 )
    {
      v9 = *_errno_location();
      if ( v9 )
      {
        v12 = 0;
        close(v8);
        goto LABEL_13;
      }
      v9 = 5;
      v12 = 0;
    }
    else
    {
      v11 = v33;
      v12 = 0;
      v13 = v34 == 0;
      if ( !v34 )
        v13 = 1;
      LODWORD(v14) = !v13;
      HIDWORD(v14) = v33 == -1;
      v15 = v14 | HIDWORD(v14);
      if ( v14 || (v16 = (char *)malloc(v33 + 1), (v12 = v16) == 0) )
      {
        v9 = 27;
        *_errno_location() = 27;
        close(v8);
        goto LABEL_13;
      }
      v17 = read(v8, v16, v11);
      if ( v17 >= 0 )
      {
        v18 = &v12[v17];
        close(v8);
        v19 = v12 < &v12[v17];
        if ( a2 <= 0 )
          v19 = 0;
        if ( a3 < 0 )
          a3 = v17;
        if ( v19 )
        {
          v20 = v12;
          v21 = (unsigned __int8)byte_48BB34;
          v22 = v12;
          do
          {
            v24 = (unsigned __int8)*v20++;
            if ( v24 == 10 )
            {
              v22 = v20;
              if ( (unsigned __int8)*v20 == v21
                && (v30 = _ctype_b_loc(), v22 = v20, ((*v30)[(unsigned __int8)v20[1]] & 0x800) != 0) )
              {
                v22 = v20;
              }
              else
              {
                ++v15;
              }
            }
            v23 = v18 > v20;
            if ( v15 >= a2 )
              v23 = 0;
          }
          while ( v23 );
        }
        else
        {
          v15 = 0;
          v22 = v12;
        }
        if ( v18 > v22 )
        {
          v25 = 0;
          v26 = v22;
          do
          {
            v27 = v26++;
            if ( *v27 == 10 )
            {
              if ( v22 < v27 && *(v26 - 2) == 13 )
                *(v26 - 2) = 0;
              else
                *(v26 - 1) = 0;
              if ( *v22 )
              {
                if ( byte_48BB34 == *v22
                  && (v31 = v22, v28 = _ctype_b_loc(), v22 = v31, ((*v28)[(unsigned __int8)v31[1]] & 0x800) != 0) )
                {
                  --v15;
                  v25 = v31;
                }
                else
                {
                  sub_297B48(v22);
                  if ( v25 )
                  {
                    v29 = v25;
                    v25 = 0;
                    sub_297AAC(v29);
                  }
                }
              }
              if ( a3 <= ++v15 )
                break;
              v22 = v26;
            }
          }
          while ( v26 < v18 );
        }
        v9 = 0;
        free(v6);
        goto LABEL_14;
      }
      v9 = *_errno_location();
      if ( !v9 )
        v9 = 5;
    }
    close(v8);
  }
  else
  {
    v9 = *_errno_location();
    if ( !v9 )
    {
      free(v6);
      return 5;
    }
    v12 = 0;
  }
LABEL_13:
  free(v6);
  if ( v12 )
  {
LABEL_14:
    free(v12);
    return v9;
  }
  return v9;
}
