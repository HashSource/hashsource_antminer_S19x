unsigned int __fastcall sub_179640(unsigned __int8 **a1)
{
  unsigned __int8 *v2; // r5

  v2 = OPENSSL_LH_strhash(*a1);
  return (unsigned int)OPENSSL_LH_strhash(a1[1]) ^ (4 * (_DWORD)v2);
}
