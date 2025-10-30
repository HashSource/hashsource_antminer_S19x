int __fastcall sub_CE074(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int result; // r0

  if ( dword_6DF3F4 || (result = sub_10BFCC(a1), (dword_6DF3F4 = result) != 0) )
  {
    v2 = (_DWORD *)CRYPTO_malloc(4, "crypto/engine/eng_lib.c", 130);
    v3 = v2;
    if ( v2 )
    {
      *v2 = a1;
      result = sub_10BD3C(dword_6DF3F4, v2);
      if ( result <= 0 )
        return CRYPTO_free(v3, "crypto/engine/eng_lib.c", 157);
    }
    else
    {
      return sub_D0048(38, 199, 65, "crypto/engine/eng_lib.c", 131);
    }
  }
  return result;
}
