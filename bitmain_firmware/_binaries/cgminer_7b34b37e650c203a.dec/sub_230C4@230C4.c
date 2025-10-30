int __fastcall sub_230C4(int a1, int a2)
{
  char v3; // r2
  int result; // r0
  int v5; // r2

  if ( a2 > 127 )
  {
    LOWORD(v5) = 16511;
    if ( a2 > 16511 )
    {
      HIWORD(v5) = 32;
      if ( a2 <= v5 )
        result = 4;
      else
        result = 5;
      if ( a2 <= v5 )
        v3 = 3;
      else
        v3 = 4;
    }
    else
    {
      result = 3;
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
    result = 2;
  }
  *(_DWORD *)(a1 + 1) = a2;
  *(_BYTE *)a1 = v3;
  return result;
}
