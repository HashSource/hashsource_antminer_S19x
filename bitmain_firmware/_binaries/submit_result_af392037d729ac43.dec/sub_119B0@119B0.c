int __fastcall sub_119B0(void *src, size_t n, _DWORD *a3)
{
  int v4; // r6
  size_t v6; // r3

  v4 = a3[1];
  v6 = n + v4;
  if ( n + v4 <= *a3 )
  {
    memcpy((void *)(a3[2] + v4), src, n);
    v6 = n + a3[1];
  }
  a3[1] = v6;
  return 0;
}
