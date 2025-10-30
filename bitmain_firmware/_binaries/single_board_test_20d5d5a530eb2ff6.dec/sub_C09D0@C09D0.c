int __fastcall sub_C09D0(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r4
  void (*v6)(void); // r3

  if ( result )
  {
    v1 = (unsigned int *)(result + 36);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return result;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = *(_DWORD *)(result + 44);
    v5 = result;
    if ( v4 )
    {
      v6 = *(void (**)(void))(v4 + 28);
      if ( v6 )
        v6();
    }
    sub_CDDF8(*(_DWORD *)(v5 + 48));
    sub_DC2BC(7, v5, v5 + 40);
    sub_10C574(*(_DWORD *)(v5 + 52));
    sub_B87C8(*(int **)(v5 + 8));
    sub_B87C8(*(int **)(v5 + 12));
    sub_B87C8(*(int **)(v5 + 16));
    sub_B87C8(*(int **)(v5 + 20));
    sub_B87C8(*(int **)(v5 + 24));
    return CRYPTO_free(v5, "crypto/dsa/dsa_lib.c", 131);
  }
  return result;
}
