void __fastcall rand_drbg_cleanup_entropy(int a1, void *a2, size_t a3)
{
  size_t v5; // r6

  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( a2 )
      {
        if ( sub_E1820((unsigned int)a2) )
        {
          sub_10C554(dword_6E1A80);
          v5 = sub_E0A2C((unsigned int)a2);
          sub_E07F8(a2, v5);
          dword_6E1A84 -= v5;
          if ( (unsigned int)a2 < dword_6E1A5C || (unsigned int)a2 >= dword_6E1A60 + dword_6E1A5C )
            sub_BC328("assertion failed: WITHIN_ARENA(ptr)", "crypto/mem_sec.c", 607);
          sub_E0B5C((unsigned int *)a2);
          sub_10C564(dword_6E1A80);
        }
        else
        {
          sub_E07F8(a2, a3);
          CRYPTO_free(a2);
        }
      }
    }
    else
    {
      sub_E0758(a2, a3, (size_t)"crypto/rand/rand_lib.c");
    }
  }
}
