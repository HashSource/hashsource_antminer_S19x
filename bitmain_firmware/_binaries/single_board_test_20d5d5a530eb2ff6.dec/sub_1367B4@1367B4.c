void __fastcall sub_1367B4(_DWORD *a1)
{
  if ( a1 )
  {
    sub_B895C((int)a1);
    sub_B895C((int)(a1 + 5));
    if ( (a1[12] & 1) != 0 )
      CRYPTO_free(a1);
  }
}
