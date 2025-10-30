int __fastcall sub_20840(_BYTE *a1, int a2)
{
  int v2; // r0
  _DWORD *v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  v5 = a1 + 1;
  if ( a2 > 127 )
  {
    if ( a2 > 16511 )
    {
      if ( a2 > 2113663 )
        v6 = 4;
      else
        v6 = 3;
    }
    else
    {
      v6 = 2;
    }
  }
  else
  {
    v6 = 1;
  }
  sub_1F008();
  *v5 = v2;
  *a1 = v6;
  return v6 + 1;
}
