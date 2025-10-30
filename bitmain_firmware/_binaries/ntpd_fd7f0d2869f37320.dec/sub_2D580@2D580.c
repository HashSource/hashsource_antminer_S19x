int __fastcall sub_2D580(_QWORD *a1)
{
  bool v2; // zf
  int result; // r0

  v2 = a1 == qword_BAA28;
  if ( a1 != qword_BAA28 )
    v2 = a1 == qword_BA938;
  if ( v2 )
  {
    dword_BAB18 = (int)a1;
    result = 1;
  }
  else
  {
    result = dword_BAB18;
  }
  if ( !v2 )
    return a1 == (_QWORD *)result;
  return result;
}
