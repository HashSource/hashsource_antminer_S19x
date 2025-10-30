int **__fastcall sub_C6130(int *a1)
{
  int **v2; // r0
  int **v3; // r4
  int v4; // r3
  int (__fastcall *v5)(int **); // r3
  int v7; // r0
  int v8; // r0

  if ( a1 )
  {
    if ( a1[2] )
    {
      v2 = (int **)sub_E0740(104, "crypto/ec/ec_lib.c", 33);
      v3 = v2;
      if ( v2 )
      {
        v4 = *a1;
        *v2 = a1;
        if ( (v4 & 2) != 0 )
          goto LABEL_5;
        v7 = sub_B822C();
        v3[2] = (int *)v7;
        if ( !v7 )
        {
LABEL_10:
          sub_B895C(v7);
          sub_B895C((int)v3[3]);
          CRYPTO_free(v3, "crypto/ec/ec_lib.c", 57);
          return 0;
        }
        v8 = sub_B822C();
        v3[3] = (int *)v8;
        if ( v8 )
        {
LABEL_5:
          v5 = (int (__fastcall *)(int **))a1[2];
          v3[5] = (int *)1;
          v3[7] = (int *)4;
          if ( v5(v3) )
            return v3;
        }
        v7 = (int)v3[2];
        goto LABEL_10;
      }
      sub_D0048(16, 108, 65, "crypto/ec/ec_lib.c", 35);
      return 0;
    }
    else
    {
      sub_D0048(16, 108, 66, "crypto/ec/ec_lib.c", 29);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 108, 108, "crypto/ec/ec_lib.c", 25);
    return 0;
  }
}
