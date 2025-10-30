int __fastcall sub_1718C(int a1)
{
  int result; // r0
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  result = dword_B3C40;
  if ( dword_B3C40 )
  {
    if ( dword_B3C40 >= 0 )
      goto LABEL_3;
  }
  else
  {
    result = sub_548A0(0, 100000);
    dword_B3C40 = result;
    if ( result >= 0 )
    {
LABEL_3:
      if ( a1 != dword_B3C44 )
      {
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(v4, 0x800u, "set pwm = %d", a1);
          sub_3B6AC(4, v4, 0, v3);
        }
        sub_54B28();
        result = sub_26E24(a1);
        dword_B3C44 = a1;
      }
      return result;
    }
  }
  if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    strcpy(v4, "pwm for fan init error");
    return sub_3B6AC(3, v4, 0, *(unsigned __int16 *)"");
  }
  return result;
}
