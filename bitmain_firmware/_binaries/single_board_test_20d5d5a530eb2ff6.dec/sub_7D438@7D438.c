void *__fastcall sub_7D438(_DWORD *a1)
{
  _DWORD *v2; // r0
  void *result; // r0

  v2 = a1 + 5;
  *(v2 - 3) = 240;
  v2[549] = 0;
  a1[555] = 0;
  a1[556] = 0;
  a1[557] = 0;
  a1[558] = 0;
  a1[560] = 0;
  a1[561] = 0;
  a1[562] = 0;
  a1[563] = 0;
  sub_7EFB0();
  sub_7F15C(*a1);
  a1[3] = 0;
  sub_7F1C0(a1 + 170);
  sub_7D420((int)a1);
  result = (void *)sub_7D42C((int)a1);
  if ( a1[570] )
    return sub_7C4D4((int)a1);
  return result;
}
