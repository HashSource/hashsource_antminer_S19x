int __fastcall sub_1337FC(int *a1, int *a2, int *a3, int ***a4)
{
  int result; // r0
  int (__fastcall *v7)(int *, int *, int *); // r3

  result = sub_131220(0, a1, a2, a3, a4);
  if ( result )
  {
    if ( a1[3] )
    {
      if ( a3[3] )
        v7 = BN_sub;
      else
        v7 = BN_add;
      return v7(a1, a1, a3);
    }
    else
    {
      return 1;
    }
  }
  return result;
}
