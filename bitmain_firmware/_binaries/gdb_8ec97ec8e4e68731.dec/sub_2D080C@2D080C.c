_DWORD *__fastcall sub_2D080C(int a1, int a2)
{
  int v2; // r3
  _DWORD *result; // r0
  _DWORD *i; // lr
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // t1

  v2 = *(_DWORD *)(a1 + 160);
  result = *(_DWORD **)(v2 + 68);
  for ( i = **(_DWORD ***)(v2 + 2348); i; result += 8 )
  {
    v5 = i[9];
    v6 = v5 - 1;
    if ( v5 - 1 >= 0 )
    {
      if ( a2 == i[v5 + 9] )
        return result;
      v7 = (int)&i[v5 + 9];
      while ( v6-- != 0 )
      {
        v8 = *(_DWORD *)(v7 - 4);
        v7 -= 4;
        if ( v8 == a2 )
          return result;
      }
    }
    i = (_DWORD *)*i;
  }
  return i;
}
