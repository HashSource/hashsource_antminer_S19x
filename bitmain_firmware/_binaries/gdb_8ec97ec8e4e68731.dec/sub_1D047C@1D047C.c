char *__fastcall sub_1D047C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r5
  char *v4; // r6
  int v5; // lr
  char *v6; // r5
  char *result; // r0
  int v8; // r2
  char *v9; // r4
  char *v10; // r0

  v2 = a2[9];
  v3 = a1[27];
  v4 = (char *)a1[28];
  v5 = (int)&v4[-v3];
  v6 = (char *)(v3 + 4 * v2);
  result = (char *)(a1[31] - a1[30]);
  v8 = ((int)result >> 2) - a2[11];
  a2[10] = (v5 >> 2) - v2;
  a2[12] = v8;
  if ( v4 != v6 )
  {
    sub_1CF768(v6, v4, 2 * (31 - __clz((v4 - v6) >> 2)), 0);
    if ( v4 - v6 <= 64 )
    {
      return sub_1CF54C(v6, v4);
    }
    else
    {
      v9 = v6 + 64;
      for ( result = sub_1CF54C(v6, v6 + 64); v4 != v9; result = (char *)sub_1CF4FC(v10) )
      {
        v10 = v9;
        v9 += 4;
      }
    }
  }
  return result;
}
