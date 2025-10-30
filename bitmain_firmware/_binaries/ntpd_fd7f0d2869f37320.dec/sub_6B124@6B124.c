int sub_6B124()
{
  int result; // r0
  int *v1; // r3

  result = dword_108244;
  if ( dword_108244 )
  {
    v1 = *(int **)dword_108244;
    dword_108244 = *(_DWORD *)dword_108244;
    if ( dword_108244 )
    {
      if ( dword_108248 != result )
      {
LABEL_4:
        --dword_108230;
        return result;
      }
      v1 = &dword_108244;
    }
    dword_108248 = (int)v1;
    goto LABEL_4;
  }
  return result;
}
