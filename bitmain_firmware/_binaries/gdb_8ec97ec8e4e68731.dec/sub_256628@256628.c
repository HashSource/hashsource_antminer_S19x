size_t __fastcall sub_256628(int a1, void *ptr, size_t size)
{
  return fwrite(ptr, size, 1u, *(FILE **)(a1 + 4));
}
