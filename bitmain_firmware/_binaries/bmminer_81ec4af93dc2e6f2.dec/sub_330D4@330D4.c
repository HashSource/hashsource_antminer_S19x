void __noreturn sub_330D4()
{
  int v0; // r8
  _BOOL4 v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = 0;
  while ( 1 )
  {
    do
    {
      do
      {
        sub_3D9D4(1000);
        v1 = sub_223FC();
      }
      while ( !v1 );
      v2 = (unsigned __int8)byte_B13C8;
    }
    while ( !byte_B13C8 || sub_3F36C(v1) != 3 );
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v3 = sub_66F00();
      snprintf(v5, 0x800u, "get power %d", v3);
      sub_3AF5C(4, v5, 0, v4);
    }
    if ( sub_18DB4() > 74 && sub_66F00() > 3950 )
    {
      v0 = v2;
      sub_32E54(0);
      sleep(0x64u);
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v5, "rise freq");
      sub_3AF5C(4, v5, 0, &v5[8]);
    }
    if ( sub_18DB4() <= 73 && v0 && sub_66F00() <= 3949 )
    {
      v0 = 0;
      sub_32E54(1);
    }
  }
}
