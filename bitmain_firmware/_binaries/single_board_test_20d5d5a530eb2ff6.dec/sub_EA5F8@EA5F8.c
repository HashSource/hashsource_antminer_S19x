void __fastcall sub_EA5F8(int a1, void (__fastcall *a2)(int, int), int a3)
{
  int v6; // r0
  int v7; // r0
  signed int v8; // r4
  int v9; // r0
  int v10; // [sp+4h] [bp-Ch] BYREF
  size_t nmemb; // [sp+8h] [bp-8h]
  void *base; // [sp+Ch] [bp-4h]

  v10 = a1;
  v6 = sub_DFC2C(dword_6E1A94);
  base = CRYPTO_malloc((void *)(4 * v6));
  if ( base )
  {
    v7 = a1;
    v8 = 0;
    nmemb = 0;
    sub_EA5D0(v7, (int)sub_EA214, (int)&v10);
    qsort(base, nmemb, 4u, (__compar_fn_t)sub_EA1F8);
    if ( (int)nmemb > 0 )
    {
      do
      {
        v9 = *((_DWORD *)base + v8++);
        a2(v9, a3);
      }
      while ( (int)nmemb > v8 );
    }
    CRYPTO_free(base);
  }
}
