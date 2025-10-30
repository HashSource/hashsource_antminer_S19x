int sub_41FE8()
{
  int i; // r4
  int result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "soft open core");
    sub_3AF5C(3, v2, 0, *(int *)"re");
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      sub_767A4((unsigned __int8)i, 1);
      usleep((__useconds_t)&loc_30D40);
      sub_767A4((unsigned __int8)i, 0);
      usleep((__useconds_t)sub_61A80);
      sub_7685C((unsigned __int8)i);
      result = usleep((__useconds_t)&loc_30D40);
    }
  }
  return result;
}
