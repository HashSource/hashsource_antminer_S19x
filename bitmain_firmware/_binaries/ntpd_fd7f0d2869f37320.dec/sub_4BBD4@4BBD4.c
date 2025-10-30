int __fastcall sub_4BBD4(int a1, int a2, int a3)
{
  if ( write(*(_DWORD *)(a2 + 28), "\r", 1u) != 1 )
    sub_39C88(a1, 3);
  sub_4B63C(a1, 2, "\r");
  *(_WORD *)(a3 + 496) = 0;
  return 1;
}
