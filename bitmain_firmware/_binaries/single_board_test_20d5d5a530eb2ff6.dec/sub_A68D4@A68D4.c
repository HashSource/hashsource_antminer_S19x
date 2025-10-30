int __fastcall sub_A68D4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  if ( a2 )
  {
    if ( a1[392] )
    {
      if ( !((int (*)(void))sub_B89E4)() )
      {
        sub_B895C(a1[392]);
        a1[392] = 0;
      }
    }
    else
    {
      a1[392] = sub_B8A2C(a2);
    }
  }
  if ( a3 )
  {
    v9 = a1[393];
    if ( v9 )
    {
      if ( !sub_B89E4(v9, a3) )
      {
        sub_B895C(a1[393]);
        a1[393] = 0;
      }
    }
    else
    {
      a1[393] = sub_B8A2C(a3);
    }
  }
  if ( a4 )
  {
    v10 = a1[394];
    if ( v10 )
    {
      if ( !sub_B89E4(v10, a4) )
      {
        sub_B895C(a1[394]);
        a1[394] = 0;
      }
    }
    else
    {
      a1[394] = sub_B8A2C(a4);
    }
  }
  if ( a5 )
  {
    v11 = a1[399];
    if ( v11 )
    {
      if ( !sub_B89E4(v11, a5) )
      {
        sub_B895C(a1[399]);
        a1[399] = 0;
      }
    }
    else
    {
      a1[399] = sub_B8A2C(a5);
    }
  }
  if ( a6 )
  {
    v12 = a1[400];
    if ( v12 )
      CRYPTO_free(v12, "ssl/tls_srp.c", 237);
    v13 = sub_E9E3C(a6, "ssl/tls_srp.c", 238);
    a1[400] = v13;
    if ( !v13 )
      return -1;
  }
  if ( a1[392] && a1[393] && a1[394] && a1[399] )
    return 1;
  else
    return -1;
}
