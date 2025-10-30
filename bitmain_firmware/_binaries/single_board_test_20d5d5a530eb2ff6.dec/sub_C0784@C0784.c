int __fastcall sub_C0784(int a1, int *a2)
{
  int v4; // r0

  if ( a1 )
  {
    if ( a1 == 2 )
    {
      sub_C09D0(*a2);
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
    v4 = DSA_new();
    *a2 = v4;
    if ( v4 )
      return 2;
    else
      return 0;
  }
}
