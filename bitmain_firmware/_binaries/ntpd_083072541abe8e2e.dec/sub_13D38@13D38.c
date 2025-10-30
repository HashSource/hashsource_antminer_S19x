bool __fastcall sub_13D38(unsigned __int16 *a1)
{
  int v1; // r2

  v1 = *a1;
  if ( v1 == 2 )
    return *((_DWORD *)a1 + 1) == 0;
  if ( v1 == 10 )
    return memcmp(a1 + 4, &in6addr_any, 0x10u) == 0;
  return 0;
}
