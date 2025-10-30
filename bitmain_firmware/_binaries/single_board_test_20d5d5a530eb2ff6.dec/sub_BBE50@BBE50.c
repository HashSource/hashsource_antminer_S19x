int __fastcall sub_BBE50(int a1, int a2, char a3)
{
  int v6; // r4
  int v7; // r8
  int v8; // r7

  v6 = sub_13B1CC(0);
  if ( !v6 )
  {
    v8 = 0;
    v7 = 0;
    goto LABEL_5;
  }
  v7 = a1;
  if ( a1 || (v7 = sub_BBDD4()) != 0 )
  {
    if ( sub_13B230(v6, v7, 0) <= 0 )
    {
      v8 = a3 & 0x10;
      if ( (a3 & 0x10) != 0 )
      {
        if ( (sub_D065C() & 0xFFF) == 0x72 )
        {
          sub_D00F0(114);
          v8 = 1;
        }
        else
        {
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = sub_BB7E8(v6, a2, a3);
    }
LABEL_5:
    if ( a1 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v8 = 0;
LABEL_16:
  CRYPTO_free(v7, "crypto/conf/conf_mod.c", 142);
LABEL_6:
  sub_13B200(v6);
  if ( (a3 & 2) != 0 )
    return 1;
  else
    return v8;
}
