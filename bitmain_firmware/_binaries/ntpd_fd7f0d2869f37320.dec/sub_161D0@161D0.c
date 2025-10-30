void *__fastcall sub_161D0(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0
  _DWORD *v5; // r4
  int v6; // t1
  int v7; // r1
  int v8; // r2

  result = memset(a1, 0, 0x1Cu);
  *(_WORD *)a1 = *a2;
  if ( *a2 == 2 )
  {
    a1[1] = a2[1];
  }
  else if ( *a2 == 10 )
  {
    v6 = a2[1];
    v5 = a2 + 1;
    result = (void *)v5[1];
    v7 = v5[2];
    v8 = v5[3];
    a1[2] = v6;
    a1[3] = result;
    a1[4] = v7;
    a1[5] = v8;
  }
  return result;
}
