int __fastcall sub_21E80(int a1)
{
  int v1; // r5
  int v2; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = a1;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "%s to %d.\n", "set_voltage_by_steps", a1);
    a1 = sub_3AF5C(3, s, 0, v2);
  }
  if ( sub_67F18(a1) >= 0 )
  {
    usleep(0x7A120u);
    dword_B1064 = v1;
    dword_B1068 = v1;
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "bitmain_set_voltage failed");
      sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    return -1;
  }
}
