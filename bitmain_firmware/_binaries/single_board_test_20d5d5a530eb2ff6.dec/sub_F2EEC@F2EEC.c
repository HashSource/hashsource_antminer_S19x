int __fastcall sub_F2EEC(int a1, int a2)
{
  if ( (unsigned int)(a1 - 904) > 2 )
  {
    sub_D0048(36, 121, 120, (int)"crypto/rand/drbg_lib.c", 159);
    return 0;
  }
  else if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    sub_D0048(36, 121, 132, (int)"crypto/rand/drbg_lib.c", 168);
    return 0;
  }
  else
  {
    dword_21FB4C = a1;
    dword_6E1AB4 = a2;
    return 1;
  }
}
