bool __fastcall sub_4BB10(__int16 *a1, int a2, __int16 *a3)
{
  int v5; // r2

  v5 = a3[252];
  if ( (unsigned __int16)(v5 - 1) > 5u )
  {
    if ( write(*(_DWORD *)(a2 + 28), "\r", 1u) != 1 )
      sub_394A0(a1, 3);
    sub_4A084((int)a1, 2, "\r");
    a3[248] = 0;
    return 0;
  }
  else
  {
    if ( off_B46E4[5 * v5 + 138] == (int (*)())&byte_6 )
      *((_BYTE *)a3 + a3[203] + 488) = 1;
    a3[248] = 0;
    return sub_4B4B4((int)a1, a2, (int)a3);
  }
}
