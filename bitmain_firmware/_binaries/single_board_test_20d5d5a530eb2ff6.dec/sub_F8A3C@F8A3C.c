int *sub_F8A3C()
{
  int *v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v0 = (int *)sub_E0740((void *)0x14);
  if ( v0 )
  {
    v1 = sub_B8264();
    *v0 = v1;
    if ( v1 )
    {
      v2 = sub_B8264();
      v0[1] = v2;
      if ( v2 )
      {
        v3 = sub_B8264();
        v0[2] = v3;
        if ( v3 )
        {
          v4 = sub_B8264();
          v0[3] = v4;
          if ( v4 )
            return v0;
        }
      }
      v1 = *v0;
    }
    sub_B895C(v1);
    sub_B895C(v0[1]);
    sub_B895C(v0[2]);
    sub_B895C(v0[3]);
    CRYPTO_free(v0);
    return 0;
  }
  else
  {
    sub_D0048(4, 166, 65, (int)"crypto/rsa/rsa_mp.c", 37);
    return 0;
  }
}
