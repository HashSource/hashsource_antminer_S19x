int __fastcall sub_21FE8(int a1)
{
  double v1; // d0
  int result; // r0
  int v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_65B38();
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "read_feedback_voltage chain = %d, voltage = %f\n", a1, v1);
    return sub_3B6AC(4, s, 0, v4);
  }
  return result;
}
