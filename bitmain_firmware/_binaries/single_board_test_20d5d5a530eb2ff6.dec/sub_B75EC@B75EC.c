int __fastcall sub_B75EC(_DWORD *a1, int a2, int off, FILE **a4)
{
  FILE *v5; // r0
  int v8; // r0
  int *v9; // r0
  int v10; // r2
  int v11; // r3
  bool v12; // zf
  int v13; // r3
  bool v14; // zf
  int *v15; // r0
  char v16; // [sp+Ch] [bp-10h]
  char v17; // [sp+Ch] [bp-10h]
  _BYTE v18[8]; // [sp+14h] [bp-8h] BYREF

  v5 = (FILE *)a1[9];
  if ( a2 == 11 )
  {
    if ( fflush(v5) == -1 )
    {
      v9 = _errno_location();
      sub_D0048(2, 18, *v9, "crypto/bio/bss_file.c", 316);
      sub_D1240(1, "fflush()", v10);
      sub_D0048(32, 116, 2, "crypto/bio/bss_file.c", 318);
      return 0;
    }
    return 1;
  }
  if ( a2 <= 11 )
  {
    if ( a2 == 3 )
      return ftell(v5);
    if ( a2 > 3 )
    {
      if ( a2 == 8 )
        return a1[5];
      if ( a2 == 9 )
      {
        a1[5] = off;
        return 1;
      }
      return 0;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
        return feof(v5);
      return 0;
    }
    return fseek(v5, off, 0);
  }
  if ( a2 == 107 )
  {
    if ( a4 )
    {
      *a4 = v5;
      return 1;
    }
    return 1;
  }
  if ( a2 <= 107 )
  {
    if ( a2 != 12 )
    {
      if ( a2 == 106 )
      {
        if ( a1[5] )
        {
          v11 = a1[4];
          v12 = v11 == 0;
          if ( v11 )
            v12 = v5 == 0;
          if ( !v12 )
          {
            v16 = off;
            fclose(v5);
            LOBYTE(off) = v16;
            a1[6] = 0;
          }
        }
        a1[5] = off & 1;
        a1[9] = a4;
        a1[4] = 1;
        return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( a2 == 128 )
    return fseek(v5, off, 0);
  if ( a2 == 133 )
    return ftell(v5);
  if ( a2 != 108 )
    return 0;
  if ( a1[5] )
  {
    v13 = a1[4];
    v14 = v13 == 0;
    if ( v13 )
      v14 = v5 == 0;
    if ( !v14 )
    {
      v17 = off;
      fclose(v5);
      LOBYTE(off) = v17;
      a1[9] = 0;
      a1[6] = 0;
    }
    a1[4] = 0;
  }
  a1[5] = off & 1;
  if ( (off & 8) != 0 )
  {
    if ( (off & 2) != 0 )
      sub_E9F28(v18, "a+", 4);
    else
      sub_E9F28(v18, "a", 4);
  }
  else if ( (off & 6) == 6 )
  {
    sub_E9F28(v18, "r+", 4);
  }
  else if ( (off & 4) != 0 )
  {
    sub_E9F28(v18, "w", 4);
  }
  else
  {
    if ( (off & 2) == 0 )
    {
      sub_D0048(32, 116, 101, "crypto/bio/bss_file.c", 273);
      return 0;
    }
    sub_E9F28(v18, "r", 4);
  }
  v8 = sub_E9E04(a4, v18);
  if ( v8 )
  {
    a1[9] = v8;
    a1[4] = 1;
    sub_B66FC((int)a1, 0);
    return 1;
  }
  else
  {
    v15 = _errno_location();
    sub_D0048(2, 1, *v15, "crypto/bio/bss_file.c", 288);
    sub_D1240(5, "fopen('", a4);
    sub_D0048(32, 116, 2, "crypto/bio/bss_file.c", 290);
    return 0;
  }
}
