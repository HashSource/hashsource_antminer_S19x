int sub_43C2C()
{
  int i; // r4
  int result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "soft open core");
    sub_3B6AC(3, v2, 0, *(int *)"re");
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      sub_79BE8((unsigned __int8)i, 1);
      usleep((__useconds_t)sub_30D40);
      sub_79BE8((unsigned __int8)i, 0);
      usleep(0x61A80u);
      sub_79CA0((unsigned __int8)i);
      result = usleep((__useconds_t)sub_30D40);
    }
  }
  return result;
}
