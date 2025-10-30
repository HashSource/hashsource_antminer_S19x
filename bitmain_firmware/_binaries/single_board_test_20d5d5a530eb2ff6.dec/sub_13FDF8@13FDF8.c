_DWORD *__fastcall sub_13FDF8(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r1
  int v3; // r5

  switch ( a1 )
  {
    case 1126:
      v1 = sub_BFD20();
      if ( !v1 )
        return v1;
      v2 = &bignum_ffdhe2048_p_ptr;
      v3 = 225;
      goto LABEL_4;
    case 1127:
      v1 = sub_BFD20();
      if ( !v1 )
        return v1;
      v2 = &bignum_ffdhe3072_p_ptr;
      v3 = 275;
      goto LABEL_4;
    case 1128:
      v1 = sub_BFD20();
      if ( !v1 )
        return v1;
      v2 = &bignum_ffdhe4096_p_ptr;
      v3 = 325;
      goto LABEL_4;
    case 1129:
      v1 = sub_BFD20();
      if ( !v1 )
        return v1;
      v2 = &bignum_ffdhe6144_p_ptr;
      v3 = 375;
      goto LABEL_4;
    case 1130:
      v1 = sub_BFD20();
      if ( !v1 )
        return v1;
      v2 = bignum_ffdhe8192_p_ptr;
      v3 = 400;
LABEL_4:
      v1[2] = *v2;
      v1[4] = v3;
      v1[3] = &bignum_const_2;
      return v1;
    default:
      sub_D0048(5, 104, 114, (int)"crypto/dh/dh_rfc7919.c", 42);
      return 0;
  }
}
