int sub_CF3E8()
{
  int v0; // r0
  int result; // r0

  v0 = sub_DE05C(0, 0, 0);
  if ( v0 && (dword_6DF428 = sub_10C510(v0)) != 0 )
  {
    dword_6DF42C = sub_DF6B4(sub_CF394, sub_CF3D0);
    result = 1;
    if ( !dword_6DF42C )
    {
      sub_10C574(dword_6DF428);
      dword_6DF428 = 0;
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  dword_6DF430 = result;
  return result;
}
