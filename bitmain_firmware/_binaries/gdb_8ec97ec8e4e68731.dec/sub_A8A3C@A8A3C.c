int __fastcall sub_A8A3C(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int result; // r0
  int v8; // r0
  bool v9; // zf

  v2 = sub_26BC70(a1);
  if ( sub_A0C94(v2) )
  {
    v3 = sub_A83C4(a1, 1);
    if ( v3 )
    {
      v4 = sub_A140C(a1);
      v6 = sub_26C4E0(v4, v5);
      return sub_2647C8(v3, v6);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v8 = sub_26BC70(a1);
    v9 = !sub_A0CFC(v8);
    result = a1;
    if ( !v9 )
      return sub_A8914();
  }
  return result;
}
