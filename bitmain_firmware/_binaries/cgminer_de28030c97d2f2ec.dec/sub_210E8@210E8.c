int __fastcall sub_210E8(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-8h]

  if ( a2 > 127 )
  {
    if ( a2 > 16511 )
    {
      if ( a2 > 2113663 )
        v3 = 4;
      else
        v3 = 3;
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  *(_DWORD *)(a1 + 1) = a2;
  *(_BYTE *)a1 = v3;
  return v3 + 1;
}
