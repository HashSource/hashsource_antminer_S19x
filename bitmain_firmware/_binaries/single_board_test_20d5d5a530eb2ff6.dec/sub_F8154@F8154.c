void __fastcall sub_F8154(int a1)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r3
  void (*v6)(void); // r3

  if ( a1 )
  {
    v1 = (unsigned int *)(a1 + 60);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 )
    {
      v6 = *(void (**)(void))(v4 + 32);
      if ( v6 )
        v6();
    }
    sub_CDDF8(*(_DWORD *)(a1 + 12));
    sub_DC2BC(9u, a1, (_DWORD *)(a1 + 56));
    sub_10C574(*(_DWORD *)(a1 + 92));
    sub_B895C(*(_DWORD *)(a1 + 16));
    sub_B895C(*(_DWORD *)(a1 + 20));
    sub_B87C8(*(int **)(a1 + 24));
    sub_B87C8(*(int **)(a1 + 28));
    sub_B87C8(*(int **)(a1 + 32));
    sub_B87C8(*(int **)(a1 + 36));
    sub_B87C8(*(int **)(a1 + 40));
    sub_B87C8(*(int **)(a1 + 44));
    sub_F78A4(*(_DWORD *)(a1 + 52));
    sub_10BFDC(*(_DWORD *)(a1 + 48), rsa_multip_info_free);
    sub_130600(*(_DWORD *)(a1 + 84));
    sub_130600(*(_DWORD *)(a1 + 88));
    CRYPTO_free(*(void **)(a1 + 80));
    CRYPTO_free((void *)a1);
  }
}
