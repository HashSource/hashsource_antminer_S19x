int __fastcall sub_92E1C(int a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  size_t v4; // r3
  size_t v5; // r5
  int result; // r0
  int v7; // r4
  const void *v8; // r0
  int v9; // r4

  v2 = a2[1];
  if ( v2
    && (v4 = (size_t)(v2 - 1), v5 = **a2, v5 <= v4)
    && (v7 = (int)(*a2 + 1), v5 == v4)
    && (v8 = *a2 + 1, *a2 = (unsigned __int8 *)(v7 + v5), a2[1] = 0, !memchr(v8, 0, v5)) )
  {
    CRYPTO_free(*(_DWORD *)(a1 + 1564), "ssl/statem/../packet_local.h", 482);
    v9 = sub_E9EF4(v7, v5, "ssl/statem/../packet_local.h", 485);
    *(_DWORD *)(a1 + 1564) = v9;
    result = 1;
    if ( !v9 )
    {
      sub_95494(a1, 80, 576, 68, "ssl/statem/extensions_srvr.c", 239);
      return 0;
    }
  }
  else
  {
    sub_95494(a1, 50, 576, 110, "ssl/statem/extensions_srvr.c", 229);
    return 0;
  }
  return result;
}
