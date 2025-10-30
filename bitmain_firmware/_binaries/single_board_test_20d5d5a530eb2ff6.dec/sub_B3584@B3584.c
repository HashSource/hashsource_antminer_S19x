int __fastcall sub_B3584(_DWORD *a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r5
  int v5; // r1
  int v6; // r2

  if ( !*a1 )
    return 0;
  v2 = (_DWORD *)*a1;
  v3 = 0;
  while ( v2[5] == 1 || *v2 != a2 )
  {
    v3 = v2;
    v2 = (_DWORD *)v2[6];
    if ( !v2 )
      return 0;
  }
  if ( v2[4] == 1 )
  {
    v6 = v2[6];
    if ( (_DWORD *)*a1 == v2 )
      *a1 = v6;
    else
      v3[6] = v6;
    CRYPTO_free(v2, "crypto/async/async_wait.c", 165);
    --a1[1];
    return 1;
  }
  else
  {
    v5 = a1[2];
    v2[5] = 1;
    a1[2] = v5 + 1;
    return 1;
  }
}
