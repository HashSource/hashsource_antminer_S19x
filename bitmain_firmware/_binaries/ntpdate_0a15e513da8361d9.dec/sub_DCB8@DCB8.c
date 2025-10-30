int sub_DCB8()
{
  int result; // r0
  int *v1; // r3

  result = dword_3333C;
  if ( dword_3333C )
  {
    v1 = *(int **)dword_3333C;
    dword_3333C = *(_DWORD *)dword_3333C;
    if ( dword_3333C )
    {
      if ( dword_33340 != result )
      {
LABEL_4:
        --dword_33328;
        return result;
      }
      v1 = &dword_3333C;
    }
    dword_33340 = (int)v1;
    goto LABEL_4;
  }
  return result;
}
