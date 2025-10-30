int __fastcall sub_9A868(_DWORD *a1, int a2)
{
  int v5; // r0

  if ( a2 <= 0 )
  {
    if ( !sub_A718C() || sub_95D8C((int)a1) )
    {
      return a2;
    }
    else if ( sub_95448((int)a1) )
    {
      return sub_A728C(a1);
    }
    else
    {
      v5 = sub_882E0((int)a1);
      sub_B6710(v5, 1);
      return a2;
    }
  }
  else
  {
    sub_95494(a1, 80, 339, 68, (int)"ssl/statem/statem_dtls.c", 972);
    return 0;
  }
}
