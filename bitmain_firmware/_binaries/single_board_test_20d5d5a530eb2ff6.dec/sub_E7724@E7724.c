void *__fastcall sub_E7724(int a1, void *a2, unsigned int a3)
{
  size_t v6; // r2

  sub_E7578(a1, 0, 0);
  v6 = a3;
  if ( a3 >= 0x10 )
    v6 = 16;
  return j_memcpy(a2, (const void *)(a1 + 64), v6);
}
