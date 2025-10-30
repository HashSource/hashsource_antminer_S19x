int __fastcall sub_15E0EC(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r0
  void *v10; // r4

  if ( dword_6E1D3C || (dword_6E1D3C = (int)sub_10BFD4(sub_15E0C0)) != 0 )
  {
    v9 = CRYPTO_malloc((void *)0x14);
    v10 = v9;
    if ( v9 )
    {
      *v9 = a1;
      v9[1] = a2;
      v9[2] = a3;
      v9[3] = a4;
      v9[4] = a5;
      if ( sub_10BD3C((int *)dword_6E1D3C, (int)v9) )
        return 1;
      CRYPTO_free(v10);
    }
  }
  sub_D0048(6, 160, 65, (int)"crypto/evp/evp_pbe.c", 187);
  return 0;
}
