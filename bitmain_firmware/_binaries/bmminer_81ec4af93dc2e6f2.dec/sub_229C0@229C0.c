int sub_229C0()
{
  int v0; // s15
  int result; // r0
  int v2; // r3
  int v3; // r2
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = (int)((double)sub_227EC() * 0.99);
  dword_B1098 = 1000 * (v0 / 1000);
  result = sub_40F20(274877907 * v0);
  if ( result )
  {
    v3 = dword_B1098;
    if ( dword_B1098 <= 123000 )
    {
      v4 = 118000;
      if ( dword_B1098 > 118000 )
        result = 54464;
      else
        v4 = 49464;
      if ( dword_B1098 > 118000 )
      {
        HIWORD(result) = 1;
        dword_B1098 = result;
      }
      else
      {
        HIWORD(v4) = 1;
      }
      if ( v3 <= 118000 )
      {
        result = v4;
        dword_B1098 = v4;
      }
    }
    else
    {
      result = 125000;
      dword_B1098 = 125000;
    }
  }
  else
  {
    result = dword_B1098;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v5, 0x800u, "sale_hash_rate = %d\n", result);
    sub_3AF5C(4, v5, 0, v2);
    return dword_B1098;
  }
  return result;
}
