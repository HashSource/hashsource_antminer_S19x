void __fastcall sub_10F0FC(int a1)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  void **v5; // r5
  int v6; // r4
  _DWORD *v7; // r7
  bool v8; // cc
  unsigned int v9; // r1

  if ( a1 )
  {
    v1 = (unsigned int *)(a1 + 68);
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
    v5 = *(void ***)(a1 + 8);
    v6 = 0;
    while ( 1 )
    {
      v8 = sub_10C010((int)v5) <= v6;
      v9 = v6++;
      if ( v8 )
        break;
      v7 = (_DWORD *)sub_10C01C(v5, v9);
      sub_10EF9C((int)v7);
      sub_10EF50(v7);
    }
    sub_10BDB4(v5);
    sub_10BFDC(*(_DWORD *)(a1 + 4), (void (__fastcall *)(int))X509_OBJECT_free);
    sub_DC2BC(4u, a1, (_DWORD *)(a1 + 64));
    X509_VERIFY_PARAM_free(*(_DWORD *)(a1 + 12));
    sub_10C574(*(pthread_rwlock_t **)(a1 + 72));
    CRYPTO_free((void *)a1);
  }
}
