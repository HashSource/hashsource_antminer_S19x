int *__fastcall sub_439C0(int a1, int a2)
{
  int *result; // r0

  if ( a2 )
  {
    result = (int *)sub_43898(1);
    if ( !result )
    {
      sub_152D58(dword_46AF74, sub_412E8, 0);
      return sub_40FCC();
    }
  }
  else
  {
    sub_152E2C(dword_46AF74);
    return (int *)sub_43898(0);
  }
  return result;
}
