char *__fastcall sub_64A1C(signed int a1, signed int a2, int a3)
{
  int v3; // r5
  int v4; // r0

  v3 = (unsigned int)a1 >> 31;
  if ( a1 < 0 )
  {
    a2 = -a2;
    if ( a2 )
      v4 = -a1;
    else
      v4 = 1 - a1;
    a1 = v4 - 1;
  }
  return sub_6474C(a1, a2, v3, a3, 0);
}
