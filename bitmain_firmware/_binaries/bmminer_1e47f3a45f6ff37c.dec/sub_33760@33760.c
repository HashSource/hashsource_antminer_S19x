void __noreturn sub_33760()
{
  int v0; // r7
  _BOOL4 v1; // r0
  int v2; // r0
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = 0;
  while ( 1 )
  {
    do
    {
      do
      {
        sub_3E0F0(1000);
        v1 = sub_22934();
      }
      while ( !v1 );
    }
    while ( !byte_B4138 || sub_40F54(v1) != 3 );
    if ( (unsigned int)dword_B308C > 4 )
    {
      v2 = sub_662E0();
      snprintf(v4, 0x800u, "get power %d", v2);
      sub_3B6AC(4, v4, 0, v3);
    }
    if ( sub_191F8() > 74 && sub_662E0() > 3950 )
    {
      v0 = 1;
      sub_334D8(0);
      sleep(0x64u);
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v4, "rise freq");
      sub_3B6AC(4, v4, 0, &v4[8]);
    }
    if ( sub_191F8() <= 73 && v0 && sub_662E0() <= 3949 )
    {
      v0 = 0;
      sub_334D8(1);
    }
  }
}
