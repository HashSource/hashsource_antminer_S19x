int __fastcall sub_16E7C(int a1)
{
  int result; // r0
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  result = dword_B0ED0;
  if ( !dword_B0ED0 )
  {
    result = sub_54150(0, &off_186A0);
    dword_B0ED0 = result;
  }
  if ( result < 0 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      strcpy(v4, "pwm for fan init error");
      return sub_3AF5C(3, v4, 0, *(unsigned __int16 *)"");
    }
  }
  else if ( a1 != dword_B0ED4 )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v4, 0x800u, "set pwm = %d", a1);
      sub_3AF5C(4, v4, 0, v3);
    }
    sub_5430C();
    result = sub_268FC(a1);
    dword_B0ED4 = a1;
  }
  return result;
}
