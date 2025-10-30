size_t __fastcall sub_245D4C(int a1)
{
  size_t result; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  result = fwrite(&v3, 4u, 1u, *(FILE **)(a1 + 4));
  if ( !result )
    sub_258B04(*(_DWORD *)(a1 + 8));
  return result;
}
