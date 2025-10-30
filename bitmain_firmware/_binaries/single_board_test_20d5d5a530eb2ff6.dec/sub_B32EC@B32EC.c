int sub_B32EC()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r6
  int v2; // r0
  int v3; // r0
  int i; // r4
  int v5; // r4
  int result; // r0

  v0 = (_DWORD *)sub_10C5B4(&unk_6DF3AC);
  if ( v0 )
  {
    v1 = v0;
    v2 = *v0;
    if ( v2 )
    {
      v3 = sub_10BD80(v2);
      for ( i = v3; v3; i = v3 )
      {
        CRYPTO_free(*(_DWORD *)(v3 + 8), "crypto/async/async.c", 96);
        CRYPTO_free(i, "crypto/async/async.c", 98);
        v3 = sub_10BD80(*v1);
      }
      v2 = *v1;
    }
    sub_10BDB4(v2);
    CRYPTO_free(v1, "crypto/async/async.c", 384);
    v0 = (_DWORD *)sub_10C5BC(&unk_6DF3AC, 0);
  }
  nullsub_3(v0);
  v5 = sub_B2DB0();
  result = sub_10C5BC(&unk_6DF3A8, 0);
  if ( result )
    return CRYPTO_free(v5, "crypto/async/async.c", 73);
  return result;
}
