int sub_204F8()
{
  int result; // r0
  _DWORD v1[74]; // [sp+4h] [bp-128h] BYREF

  sub_6DD44(v1);
  result = v1[0];
  if ( v1[0] )
  {
    dword_21B3A8 = v1[18 * v1[0] - 17];
    return dword_21B3A8 == 3;
  }
  return result;
}
