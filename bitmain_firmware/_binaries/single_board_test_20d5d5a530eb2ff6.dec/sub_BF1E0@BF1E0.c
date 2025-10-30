int __fastcall sub_BF1E0(int a1, int *a2)
{
  int v4; // r0

  if ( a1 )
  {
    if ( a1 == 2 )
    {
      sub_BFB8C(*a2);
      *a2 = 0;
      return 2;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v4 = sub_BFD20();
    *a2 = v4;
    if ( v4 )
      return 2;
    else
      return 0;
  }
}
