void __noreturn sub_2090C()
{
  int v0; // r0
  int i; // r0
  unsigned int v2; // r0
  int v3; // r5
  int v4; // r4
  _BYTE v5[20]; // [sp+8h] [bp-14h] BYREF

  v0 = sub_702AC();
  sub_702CC(v0 | 0x10000);
  for ( i = prctl(15, "nonce_reg_process", 0); ; i = sub_4A804(1) )
  {
    v2 = sub_6FD6C(i);
    v3 = (unsigned __int8)(v2 >> 1);
    if ( (unsigned __int8)(v2 >> 1) )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          sub_6FDC4(v5);
          if ( v5[3] < 0 )
            break;
          ++v4;
          sub_2F194(v5);
          if ( v3 == v4 )
            goto LABEL_7;
        }
        ++v4;
        sub_2EE74(v5);
      }
      while ( v3 != v4 );
    }
LABEL_7:
    ;
  }
}
