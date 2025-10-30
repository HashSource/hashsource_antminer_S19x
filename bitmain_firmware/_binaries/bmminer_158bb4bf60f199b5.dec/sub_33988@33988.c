void __noreturn sub_33988()
{
  int v0; // r0
  int i; // r0
  unsigned int v2; // r0
  int v3; // r8
  int v4; // r4
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v5, "[DEBUG] Recv nonce and register.\n");
    sub_47AB4(4, v5, 0);
  }
  v0 = sub_702AC();
  sub_702CC(v0 | 0x10000);
  for ( i = sub_2E9B8(); ; i = usleep(0x3E8u) )
  {
    v2 = sub_6FD6C(i);
    v3 = (unsigned __int8)(v2 >> 1);
    if ( (unsigned __int8)(v2 >> 1) )
      break;
LABEL_12:
    ;
  }
  v4 = 0;
  while ( 1 )
  {
    sub_6FDC4(v5);
    if ( v5[3] < 0 )
      break;
    if ( (unsigned int)dword_241D70 <= 0x1FE && dword_241D68[0] <= 0x1FEu )
    {
      sub_376A4();
LABEL_7:
      if ( v3 == ++v4 )
        goto LABEL_12;
    }
    else
    {
      ++v4;
      sub_2E9B8();
      if ( v3 == v4 )
        goto LABEL_12;
    }
  }
  sub_37594(v5);
  goto LABEL_7;
}
