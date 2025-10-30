int __fastcall sub_BFB8C(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r4
  void (*v6)(void); // r3

  if ( result )
  {
    v1 = (unsigned int *)(result + 56);
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
    v4 = *(_DWORD *)(result + 64);
    v5 = result;
    if ( v4 )
    {
      v6 = *(void (**)(void))(v4 + 20);
      if ( v6 )
        v6();
    }
    sub_CDDF8(*(_DWORD *)(v5 + 68));
    sub_DC2BC(6, v5, v5 + 60);
    sub_10C574(*(_DWORD *)(v5 + 72));
    sub_B87C8(*(int **)(v5 + 8));
    sub_B87C8(*(int **)(v5 + 12));
    sub_B87C8(*(int **)(v5 + 36));
    sub_B87C8(*(int **)(v5 + 40));
    CRYPTO_free(*(_DWORD *)(v5 + 44), "crypto/dh/dh_lib.c", 123);
    sub_B87C8(*(int **)(v5 + 52));
    sub_B87C8(*(int **)(v5 + 20));
    sub_B87C8(*(int **)(v5 + 24));
    return CRYPTO_free(v5, "crypto/dh/dh_lib.c", 127);
  }
  return result;
}
