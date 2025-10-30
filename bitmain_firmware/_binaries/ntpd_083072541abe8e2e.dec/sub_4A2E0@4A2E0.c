int __fastcall sub_4A2E0(__int16 *a1, int a2)
{
  if ( write(*(_DWORD *)(a2 + 28), "ATH0\r\n", 6u) != 6 )
    sub_394A0(a1, 3);
  sub_4A084((int)a1, 2, "ATH0\r\n");
  return 1;
}
