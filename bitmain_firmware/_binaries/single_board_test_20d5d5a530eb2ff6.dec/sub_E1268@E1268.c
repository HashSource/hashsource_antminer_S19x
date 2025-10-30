int sub_E1268()
{
  if ( dword_6E1A84 )
    return 0;
  CRYPTO_free((void *)dword_6E1A64);
  CRYPTO_free((void *)dword_6E1A70);
  CRYPTO_free((void *)dword_6E1A74);
  if ( dword_6E1A54 != -1 )
  {
    if ( dword_6E1A58 )
      munmap((void *)dword_6E1A54, dword_6E1A58);
  }
  memset(&dword_6E1A54, 0, 0x28u);
  dword_6E1A7C = 0;
  sub_10C574(dword_6E1A80);
  dword_6E1A80 = 0;
  return 1;
}
