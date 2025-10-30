int __fastcall sub_116070(int a1, int ***a2)
{
  int **v3; // r6
  int **v4; // r5

  if ( a1 == 3 )
  {
    sub_DA240((int)(*a2)[2]);
    return 1;
  }
  else if ( a1 == 5 )
  {
    v3 = *a2;
    v4 = *a2;
    sub_DA240((int)(*a2)[2]);
    v4[2] = 0;
    sub_D1260();
    if ( sub_115FC8(v4 + 2, v3) == -1 )
    {
      return 0;
    }
    else
    {
      sub_D128C();
      return 1;
    }
  }
  else
  {
    return 1;
  }
}
