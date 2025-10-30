void __fastcall sub_E1864(void *a1)
{
  size_t v2; // r6

  if ( a1 )
  {
    if ( sub_E1820((unsigned int)a1) )
    {
      sub_10C554(dword_6E1A80);
      v2 = sub_E0A2C((unsigned int)a1);
      sub_E07F8(a1, v2);
      dword_6E1A84 -= v2;
      if ( (unsigned int)a1 < dword_6E1A5C || (unsigned int)a1 >= dword_6E1A60 + dword_6E1A5C )
        sub_BC328("assertion failed: WITHIN_ARENA(ptr)", "crypto/mem_sec.c", 607);
      sub_E0B5C((unsigned int *)a1);
      sub_10C564(dword_6E1A80);
    }
    else
    {
      CRYPTO_free(a1);
    }
  }
}
