unsigned int __fastcall sub_FE1C8(unsigned int *a1, _BYTE *a2, _DWORD *a3, int a4)
{
  if ( a4 )
    return SEED_encrypt(a1, a2, a3);
  else
    return SEED_decrypt(a1, a2, a3);
}
