int __fastcall sub_FA528(int a1, int a2)
{
  int v3; // r0

  if ( !a1 )
    return 1;
  v3 = sub_D8C70(a1);
  if ( a2 == 3 )
  {
    sub_D0048(4, 140, 141, (int)"crypto/rsa/rsa_pmeth.c", 360);
    return 0;
  }
  else
  {
    if ( a2 != 5 )
    {
      if ( v3 == 117 )
        return 1;
      if ( v3 > 117 )
      {
        if ( v3 >= 676 )
        {
          if ( (unsigned int)(v3 - 1096) <= 3 )
            return 1;
        }
        else if ( v3 >= 672 || v3 == 257 )
        {
          return 1;
        }
      }
      else
      {
        if ( v3 == 64 )
          return 1;
        if ( v3 > 64 )
        {
          if ( v3 == 95 || v3 == 114 )
            return 1;
          goto LABEL_14;
        }
        if ( (unsigned int)(v3 - 3) <= 1 )
          return 1;
      }
LABEL_14:
      sub_D0048(4, 140, 157, (int)"crypto/rsa/rsa_pmeth.c", 390);
      return 0;
    }
    if ( sub_FBCAC(v3) != -1 )
      return 1;
    sub_D0048(4, 140, 142, (int)"crypto/rsa/rsa_pmeth.c", 366);
    return 0;
  }
}
