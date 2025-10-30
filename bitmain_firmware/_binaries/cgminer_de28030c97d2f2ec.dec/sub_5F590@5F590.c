int __fastcall sub_5F590(const void *a1, size_t a2, _DWORD *a3)
{
  if ( a3[1] + a2 <= *a3 )
    memcpy((void *)(a3[2] + a3[1]), a1, a2);
  a3[1] += a2;
  return 0;
}
