bool __fastcall sub_4D1CC(int a1, int a2, _WORD *a3)
{
  int v4; // r2

  v4 = (unsigned __int16)a3[252];
  if ( (unsigned int)(v4 - 1) > 5 )
  {
    if ( write(*(_DWORD *)(a2 + 28), "\r", 1u) != 1 )
      sub_39C88(a1, 3);
    sub_4B63C(a1, 2, "\r");
    a3[248] = 0;
    return 0;
  }
  else
  {
    if ( off_B56E4[5 * (__int16)v4 + 138] == (int (*)())&byte_6 )
      *((_BYTE *)a3 + (__int16)a3[203] + 488) = 1;
    a3[248] = 0;
    return sub_4CBA4(a1, a2, (int)a3);
  }
}
