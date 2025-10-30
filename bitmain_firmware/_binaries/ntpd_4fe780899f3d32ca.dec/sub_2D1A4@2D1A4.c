int __fastcall sub_2D1A4(void *a1)
{
  bool v2; // zf
  int result; // r0

  v2 = a1 == &unk_B9938;
  if ( a1 != &unk_B9938 )
    v2 = a1 == &unk_B9A28;
  if ( v2 )
  {
    result = 1;
    dword_B9B18 = (int)a1;
  }
  else
  {
    result = dword_B9B18;
  }
  if ( !v2 )
    return result == (_DWORD)a1;
  return result;
}
