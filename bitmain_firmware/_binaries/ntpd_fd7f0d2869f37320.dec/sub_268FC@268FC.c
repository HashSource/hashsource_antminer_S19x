int sub_268FC()
{
  int result; // r0
  _DWORD v1[2]; // [sp+4h] [bp-Ch] BYREF

  result = 0;
  v1[1] = 0;
  v1[0] = 0;
  if ( sys_leap != 3 )
  {
    sub_6055C(v1);
    return v1[0];
  }
  return result;
}
