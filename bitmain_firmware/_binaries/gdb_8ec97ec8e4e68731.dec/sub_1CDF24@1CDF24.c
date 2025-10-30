_DWORD *__fastcall sub_1CDF24(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r2

  if ( a2[2] && a3 > 1 && (a3 != 2 || *a2 == a4) && (v8 = sub_1CDD20((int)a2, a5), v8[2] == a5) && v8[3] == a6 )
  {
    v9 = v8[5];
    v10 = v8[6];
    *a1 = v8[4];
    a1[1] = v9;
    a1[2] = v10;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}
