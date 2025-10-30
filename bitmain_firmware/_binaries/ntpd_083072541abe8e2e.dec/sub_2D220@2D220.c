int __fastcall sub_2D220(int a1)
{
  int v1; // r5
  bool v2; // zf

  v1 = dword_B9930;
  if ( a1 >= 0 )
  {
    dword_B9930 = a1 != 0;
    if ( (a1 != 0) != v1 )
    {
      v2 = dword_B9B18 == (_DWORD)&unk_B9A28;
      if ( (_UNKNOWN *)dword_B9B18 != &unk_B9A28 )
        v2 = dword_B9B18 == (_DWORD)&unk_B9938;
      if ( v2 )
        sub_2C96C(dword_B9B18);
    }
  }
  return v1;
}
