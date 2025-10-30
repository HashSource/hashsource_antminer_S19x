int __fastcall sub_29AB6C(const char *a1, int a2)
{
  char *v3; // r0
  char *v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r4
  size_t v9; // r10
  bool v10; // zf
  int v11; // r2
  char *v12; // r0
  char *v13; // r8
  ssize_t v14; // r9
  char *v15; // r11
  bool v16; // cf
  char *v17; // r10
  int v18; // r2
  bool v19; // cf
  char *v20; // r4
  char *v21; // r6
  int v22; // r10
  char *v23; // r7
  char *v24; // r7
  int v25; // r0
  int v26; // r6
  const unsigned __int16 **v27; // r0
  int v28; // [sp+4h] [bp-70h]
  char v29[16]; // [sp+8h] [bp-6Ch] BYREF
  int v30; // [sp+18h] [bp-5Ch]
  size_t v31; // [sp+38h] [bp-3Ch]
  int v32; // [sp+3Ch] [bp-38h]

  v3 = sub_29A5B4(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = open64(v3, 0);
    v6 = v5;
    if ( v5 != -1 )
    {
      if ( _fxstat64(3, v5, v29) == -1 )
      {
        v7 = *_errno_location();
        close(v6);
        goto LABEL_4;
      }
      if ( (v30 & 0xF000) != 0x8000 )
      {
        v7 = 22;
        close(v6);
        goto LABEL_4;
      }
      v9 = v31;
      v10 = v32 == 0;
      if ( !v32 )
        v10 = 1;
      v11 = !v10;
      if ( v11 | (v31 == -1) )
      {
        v7 = 27;
        close(v6);
        *_errno_location() = 27;
        goto LABEL_4;
      }
      v12 = (char *)malloc(v31 + 1);
      v13 = v12;
      if ( !v12 )
      {
        v7 = 0;
        close(v6);
        goto LABEL_4;
      }
      v14 = read(v6, v12, v9);
      close(v6);
      if ( v14 <= 0 )
      {
        if ( v14 )
        {
          v7 = *_errno_location();
          goto LABEL_39;
        }
      }
      else
      {
        v15 = &v13[v14 - 1];
        v16 = 1;
        if ( a2 )
          v16 = v13 >= v15;
        if ( v16 )
        {
          v21 = &v13[v14 - 1];
          v20 = v21;
        }
        else
        {
          v17 = &v13[v14 - 1];
          v18 = (unsigned __int8)byte_48BB34;
          do
          {
            v21 = v17--;
            if ( *v21 == 10 )
            {
              if ( (unsigned __int8)*v15 != v18
                || (v28 = v18, v27 = _ctype_b_loc(), v18 = v28, ((*v27)[(unsigned __int8)v15[1]] & 0x800) == 0) )
              {
                --a2;
              }
            }
            v19 = 1;
            if ( a2 )
              v19 = v13 >= v17;
            v20 = v17;
            v15 = v21;
          }
          while ( !v19 );
        }
        if ( v20 > v13 )
        {
          v22 = (unsigned __int8)byte_48BB34;
          while ( 1 )
          {
            v23 = v20--;
            if ( *v23 == 10
              && ((unsigned __int8)*v21 != v22 || ((*_ctype_b_loc())[(unsigned __int8)v21[1]] & 0x800) == 0) )
            {
              break;
            }
            v21 = v23;
            if ( v20 == v13 )
              goto LABEL_40;
          }
          v24 = v23 + 1;
          if ( v13 < v24 )
          {
            v25 = open64(v4, 513);
            v26 = v25;
            if ( v25 != -1 )
            {
              v7 = 0;
              write(v25, v24, v14 - (v24 - v13));
              close(v26);
LABEL_39:
              free(v13);
              goto LABEL_4;
            }
          }
        }
      }
LABEL_40:
      v7 = 0;
      goto LABEL_39;
    }
  }
  v7 = *_errno_location();
LABEL_4:
  sub_297758(v4);
  return v7;
}
