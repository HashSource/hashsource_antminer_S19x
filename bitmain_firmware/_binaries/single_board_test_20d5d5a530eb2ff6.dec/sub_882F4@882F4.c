int __fastcall sub_882F4(int a1, int a2, int a3)
{
  int v6; // r3
  int result; // r0
  int v8; // r7

  if ( a2 != sub_882E0(a1) || (result = sub_882E4(a1), a3 != result) )
  {
    v6 = a2;
    if ( a2 )
      v6 = 1;
    if ( a2 != a3 )
      v6 = 0;
    if ( v6 )
      sub_B66E0(a2);
    if ( a2 != sub_882E0(a1) )
    {
      if ( a3 == sub_882E4(a1) )
      {
        v8 = sub_882E0(a1);
        if ( v8 != sub_882E4(a1) )
          return sub_882A8(a1, a2);
      }
      sub_882A8(a1, a2);
    }
    return sub_882B8(a1, a3);
  }
  return result;
}
