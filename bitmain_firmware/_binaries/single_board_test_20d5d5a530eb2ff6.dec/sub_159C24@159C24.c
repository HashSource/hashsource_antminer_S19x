int __fastcall sub_159C24(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // r0
  _DWORD *v6; // r4
  _BYTE *v7; // [sp+Ch] [bp-8h] BYREF

  result = sub_C8950(a1, a2, a3, (int *)&v7);
  if ( result )
  {
    v6 = sub_B8AEC(v7, result, a4);
    CRYPTO_free(v7);
    return (int)v6;
  }
  return result;
}
