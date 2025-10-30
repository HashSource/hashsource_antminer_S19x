int __fastcall sub_2D5FC(int a1)
{
  int v1; // r5
  bool v2; // zf

  v1 = dword_BA930;
  if ( a1 >= 0 )
  {
    dword_BA930 = a1 != 0;
    if ( v1 != (a1 != 0) )
    {
      v2 = dword_BAB18 == (_DWORD)qword_BAA28;
      if ( (_QWORD *)dword_BAB18 != qword_BAA28 )
        v2 = dword_BAB18 == (_DWORD)qword_BA938;
      if ( v2 )
        sub_2CCD0((_QWORD *)dword_BAB18);
    }
  }
  return v1;
}
