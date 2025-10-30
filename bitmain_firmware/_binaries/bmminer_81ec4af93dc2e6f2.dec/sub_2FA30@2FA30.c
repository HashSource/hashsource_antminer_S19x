void __noreturn sub_2FA30()
{
  int v0; // r0
  int i; // r0
  unsigned int v2; // r5
  int j; // r4
  _BYTE v4[20]; // [sp+8h] [bp-14h] BYREF

  v0 = sub_5C494();
  sub_5C4C0(v0 | 0x10000);
  for ( i = prctl(15, "nonce_reg_process", 0); ; i = sub_3D9D4(1) )
  {
    v2 = (unsigned int)sub_5BB4C(i) >> 1;
    if ( v2 )
    {
      for ( j = 0; j != v2; ++j )
      {
        while ( 1 )
        {
          sub_5BBD4(v4);
          if ( v4[3] < 0 )
            break;
          ++j;
          sub_392CC(v4);
          if ( v2 == j )
            goto LABEL_7;
        }
        sub_38F48(v4);
      }
    }
LABEL_7:
    ;
  }
}
