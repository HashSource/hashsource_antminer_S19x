int __fastcall sub_4A52C(__int16 *a1, int a2, int a3)
{
  if ( write(*(_DWORD *)(a2 + 28), "\r", 1u) != 1 )
    sub_394A0(a1, 3);
  sub_4A084((int)a1, 2, "\r");
  *(_WORD *)(a3 + 496) = 0;
  return 1;
}
