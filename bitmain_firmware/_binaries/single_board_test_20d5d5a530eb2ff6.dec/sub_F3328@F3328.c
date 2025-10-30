int __fastcall sub_F3328(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v5; // r0
  int result; // r0
  int v7; // r7
  unsigned int v8; // r6
  int v9; // r2
  _BOOL4 v10; // r3
  int v11; // r4

  if ( a1[6] )
  {
    sub_D0048(36, 102, 68, (int)"crypto/rand/drbg_lib.c", 478);
    v5 = a1[6];
    a1[23] = 2;
    sub_F408C(v5);
    result = 0;
    a1[6] = 0;
    return result;
  }
  v7 = a2;
  if ( a2 )
  {
    v8 = a3;
    if ( !a4 )
    {
      if ( a3 > a1[15] )
      {
        sub_D0048(36, 102, 102, (int)"crypto/rand/drbg_lib.c", 507);
        a1[23] = 2;
        return 0;
      }
      goto LABEL_7;
    }
    if ( a3 > a1[11] )
    {
      sub_D0048(36, 102, 106, (int)"crypto/rand/drbg_lib.c", 489);
    }
    else
    {
      if ( a4 <= 8 * a3 )
      {
        result = sub_F4038(a2, a3, a4);
        a1[6] = result;
        if ( !result )
          return result;
        goto LABEL_16;
      }
      sub_D0048(36, 102, 124, (int)"crypto/rand/drbg_lib.c", 495);
    }
    a1[23] = 2;
    return 0;
  }
LABEL_16:
  v8 = 0;
  v7 = 0;
LABEL_7:
  v9 = a1[23];
  if ( v9 == 2 )
  {
    sub_F3198((int)a1);
    v9 = a1[23];
  }
  v10 = 0;
  if ( !v9 )
  {
    sub_F2FB8(a1, (int)"OpenSSL NIST SP 800-90A DRBG", 0x1Cu);
    v9 = a1[23];
    v10 = v9 == 1;
  }
  if ( v9 == 1 )
  {
    if ( v7 )
    {
      (*(void (__fastcall **)(_DWORD *, int, unsigned int))(a1[60] + 4))(a1, v7, v8);
    }
    else if ( !v10 && !sub_F31DC(a1, 0, 0, 0) )
    {
      sub_D0048(36, 102, 118, (int)"crypto/rand/drbg_lib.c", 545);
    }
  }
  sub_F408C(a1[6]);
  v11 = a1[23];
  a1[6] = 0;
  return v11 == 1;
}
