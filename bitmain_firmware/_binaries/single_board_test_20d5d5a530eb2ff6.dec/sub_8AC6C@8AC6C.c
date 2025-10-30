int __fastcall sub_8AC6C(int a1, const void *a2, size_t a3)
{
  if ( a3 > 0x100 )
    return 0;
  memcpy((void *)(a1 + 72), a2, a3);
  *(_DWORD *)(a1 + 4) = a3;
  return 1;
}
