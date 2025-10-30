_DWORD *__fastcall sub_160A70(int a1, const char *a2, size_t *a3, int a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4

  v6 = sub_160910(a1, a4);
  v7 = v6;
  if ( v6 )
  {
    if ( sub_1609C4(v6, "POST", a2) && (!a3 || sub_1609FC(v7, a3)) )
      return v7;
    sub_1608E0((int)v7);
  }
  return 0;
}
