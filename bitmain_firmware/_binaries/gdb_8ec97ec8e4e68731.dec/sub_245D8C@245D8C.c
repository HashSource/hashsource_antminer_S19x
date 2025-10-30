size_t __fastcall sub_245D8C(int a1, void *ptr, size_t size)
{
  size_t result; // r0

  result = fwrite(ptr, size, 1u, *(FILE **)(a1 + 4));
  if ( !result )
    sub_258B04(*(_DWORD *)(a1 + 8));
  return result;
}
