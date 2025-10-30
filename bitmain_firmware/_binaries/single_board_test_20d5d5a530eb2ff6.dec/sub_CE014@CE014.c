int __fastcall sub_CE014(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  if ( dword_6DF3F4 || (result = sub_10BFCC(a1), (dword_6DF3F4 = result) != 0) )
  {
    v2 = (_DWORD *)CRYPTO_malloc(4, "crypto/engine/eng_lib.c", 130);
    if ( v2 )
    {
      *v2 = a1;
      return sub_10BA90(dword_6DF3F4, v2, 0);
    }
    else
    {
      return sub_D0048(38, 199, 65, "crypto/engine/eng_lib.c", 131);
    }
  }
  return result;
}
