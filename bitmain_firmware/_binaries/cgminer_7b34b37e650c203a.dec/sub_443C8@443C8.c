int __fastcall sub_443C8(void *src, size_t n, _DWORD *a3)
{
  int v4; // r12
  size_t v5; // r3

  v4 = a3[1];
  v5 = v4 + n;
  if ( v4 + n <= *a3 )
  {
    memcpy((void *)(a3[2] + v4), src, n);
    v5 = n + a3[1];
  }
  a3[1] = v5;
  return 0;
}
