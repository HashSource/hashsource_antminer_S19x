int __fastcall sub_E1C60(int *a1, int a2)
{
  int v2; // r6
  int v3; // r7
  int v4; // r5
  int result; // r0
  int v7; // r1
  bool v8; // zf

  v2 = a1[1];
  v3 = v2 + a2;
  v4 = -991146299 * ((*(_DWORD *)(*a1 + 28) - *(_DWORD *)(*a1 + 24)) >> 2);
  if ( v2 + a2 < (unsigned int)(v4 - 1) )
  {
    a1[1] = v3;
    return a2;
  }
  else
  {
    result = sub_E0C48(*a1);
    if ( v3 == v4 - 1 )
    {
      v8 = result == 0;
      result = v7;
      if ( v8 )
        a1[1] = v3;
      else
        a1[1] = v4;
    }
    else
    {
      v8 = result == 0;
      a1[1] = v4;
      if ( result )
        v7 = ~v2;
      else
        result = v4 - v2;
      if ( !v8 )
        return v7 + v4;
    }
  }
  return result;
}
