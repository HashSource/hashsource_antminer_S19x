_DWORD *__fastcall sub_2FE4C(int a1)
{
  _DWORD *v2; // r4
  int v3; // r3

  v2 = sub_2FD8C();
  sub_2CA90((int)v2, a1, 0);
  *((_BYTE *)v2 + 273) = 1;
  sub_239A4((struct timeval *)v2 + 52);
  v3 = v2[66];
  *((_BYTE *)v2 + 280) = 0;
  *((_BYTE *)v2 + 282) = 0;
  v2[66] = v3 - 1;
  return v2;
}
