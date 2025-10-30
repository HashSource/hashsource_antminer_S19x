int sub_D868()
{
  int result; // r0
  int *v1; // r1

  result = dword_33338;
  if ( dword_33338 )
  {
    v1 = *(int **)dword_33338;
    dword_33338 = *(_DWORD *)dword_33338;
    if ( dword_33338 )
    {
      if ( dword_3333C != result )
      {
LABEL_4:
        --dword_33324;
        return result;
      }
      v1 = &dword_33338;
    }
    dword_3333C = (int)v1;
    goto LABEL_4;
  }
  return result;
}
