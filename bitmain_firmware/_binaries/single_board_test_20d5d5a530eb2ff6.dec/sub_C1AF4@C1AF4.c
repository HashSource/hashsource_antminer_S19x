_DWORD *__fastcall sub_C1AF4(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r4
  int v6; // r5
  int (__fastcall *v8)(_DWORD *); // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int (__fastcall *v13)(_DWORD *); // r3

  v5 = a1;
  v6 = 0;
  if ( a1 )
  {
LABEL_2:
    if ( v5[7] )
    {
      sub_D0048(37, 112, 110, "crypto/dso/dso_lib.c", 140);
      goto LABEL_4;
    }
    if ( !a2 )
      goto LABEL_24;
    if ( !sub_C1A64((int)v5, a2) )
    {
      sub_D0048(37, 112, 112, "crypto/dso/dso_lib.c", 149);
      goto LABEL_4;
    }
    if ( v5[7] )
    {
      v8 = *(int (__fastcall **)(_DWORD *))(*v5 + 4);
      if ( v8 )
      {
        if ( v8(v5) )
          return v5;
        sub_D0048(37, 112, 103, "crypto/dso/dso_lib.c", 162);
      }
      else
      {
        sub_D0048(37, 112, 108, "crypto/dso/dso_lib.c", 158);
      }
    }
    else
    {
LABEL_24:
      sub_D0048(37, 112, 111, "crypto/dso/dso_lib.c", 154);
    }
LABEL_4:
    if ( !v6 )
      return 0;
LABEL_22:
    sub_C1788(v5);
    return 0;
  }
  if ( !dword_6DF3F0 )
    dword_6DF3F0 = sub_1414E8();
  v10 = sub_E0740(40, "crypto/dso/dso_lib.c", 27);
  v5 = (_DWORD *)v10;
  if ( v10 )
  {
    v11 = sub_10BFCC(v10);
    v5[1] = v11;
    if ( v11 )
    {
      *v5 = dword_6DF3F0;
      __dmb(0xBu);
      v5[2] = 1;
      __dmb(0xBu);
      v12 = sub_10C510(v11);
      v5[9] = v12;
      if ( v12 )
      {
        v13 = *(int (__fastcall **)(_DWORD *))(*v5 + 28);
        if ( !v13 || v13(v5) )
        {
          if ( sub_C19C4(v5, 2, a4) < 0 )
          {
            sub_D0048(37, 112, 100, "crypto/dso/dso_lib.c", 133);
            goto LABEL_22;
          }
          v6 = 1;
          goto LABEL_2;
        }
        sub_C1788(v5);
      }
      else
      {
        sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 43);
        sub_10BDB4(v5[1]);
        CRYPTO_free(v5, "crypto/dso/dso_lib.c", 45);
      }
    }
    else
    {
      sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 35);
      CRYPTO_free(v5, "crypto/dso/dso_lib.c", 36);
    }
  }
  else
  {
    sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 29);
  }
  sub_D0048(37, 112, 65, "crypto/dso/dso_lib.c", 127);
  return 0;
}
