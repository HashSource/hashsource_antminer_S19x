int __fastcall sub_A6F3C(int a1)
{
  int v2; // r0
  int result; // r0

  sub_7C588(a1 + 1616);
  sub_82270(a1);
  v2 = *(_DWORD *)(a1 + 128);
  if ( v2 )
  {
    sub_A6EEC(a1);
    sub_A6F14(a1);
    sub_A86F8(*(_DWORD *)(*(_DWORD *)(a1 + 128) + 272));
    sub_A86F8(*(_DWORD *)(*(_DWORD *)(a1 + 128) + 276));
    v2 = *(_DWORD *)(a1 + 128);
  }
  result = CRYPTO_free(v2, "ssl/d1_lib.c", 151);
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}
