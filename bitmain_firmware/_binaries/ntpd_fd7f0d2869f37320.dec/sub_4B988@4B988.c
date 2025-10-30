int __fastcall sub_4B988(int a1, int a2)
{
  if ( write(*(_DWORD *)(a2 + 28), "ATH0\r\n", 6u) != 6 )
    sub_39C88(a1, 3);
  sub_4B63C(a1, 2, "ATH0\r\n");
  return 1;
}
