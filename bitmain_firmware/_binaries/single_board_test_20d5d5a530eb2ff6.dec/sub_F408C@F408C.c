void __fastcall sub_F408C(_DWORD *a1)
{
  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( a1[3] )
        ((void (__fastcall *)(_DWORD, _DWORD, const char *, int))loc_E18E0)(*a1, a1[6], "crypto/rand/rand_lib.c", 526);
      else
        sub_E0758((void *)*a1, a1[6], (size_t)"crypto/rand/rand_lib.c");
    }
    CRYPTO_free(a1);
  }
}
