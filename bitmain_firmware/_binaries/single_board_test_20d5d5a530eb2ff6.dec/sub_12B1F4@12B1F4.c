int __fastcall sub_12B1F4(int *a1, _DWORD *a2)
{
  time_t timer[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a1 )
    return sub_12AAA0(a2, a1);
  time(timer);
  memset(a2, 0, 0x2Cu);
  return sub_1603FC(timer, a2) != 0;
}
