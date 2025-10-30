int __fastcall sub_C56D4(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5

  v2 = sub_130B08();
  if ( v2 && ((v3 = a1[5]) != 0 || (v3 = sub_B822C()) != 0) )
  {
    v4 = sub_C6244(a1[3]);
    if ( v4 )
    {
      do
      {
        if ( !sub_1365E8(v3, v4) )
        {
          v4 = 0;
          goto LABEL_8;
        }
      }
      while ( sub_B85B0(v3) );
      v4 = a1[4];
      if ( v4 || (v4 = sub_C63F4(a1[3])) != 0 )
      {
        if ( sub_C7330(a1[3], v4, v3, 0, 0, v2) )
        {
          a1[5] = v3;
          a1[4] = v4;
          sub_130B5C(v2);
          return 1;
        }
      }
    }
  }
  else
  {
    v4 = 0;
    v3 = 0;
  }
LABEL_8:
  if ( !a1[4] )
    sub_C6490(v4);
  if ( v3 != a1[5] )
    sub_B895C(v3);
  sub_130B5C(v2);
  return 0;
}
