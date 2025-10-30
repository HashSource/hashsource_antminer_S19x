_QWORD *__fastcall sub_2D4D0(int a1)
{
  _QWORD *result; // r0
  _QWORD *v3; // r9

  result = (_QWORD *)dword_BAB18;
  if ( (_QWORD *)dword_BAB18 == qword_BA938 )
  {
    v3 = qword_BAA28;
  }
  else if ( (_QWORD *)dword_BAB18 == qword_BAA28 )
  {
    v3 = qword_BA938;
  }
  else
  {
    v3 = qword_BAA28;
    sub_2CCD0(qword_BA938);
    sub_2CCD0(qword_BAA28);
    result = qword_BA938;
    dword_BAB18 = (int)qword_BA938;
  }
  if ( a1 )
  {
    memcpy(v3, result, 0xF0u);
    return v3;
  }
  return result;
}
