void __noreturn sub_46704()
{
  int v0; // r0
  int i; // r0
  unsigned int v2; // r0
  int v3; // r8
  int v4; // r4
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v5, "[DEBUG] Recv nonce and register.\n");
    sub_3AF5C(4, v5, 0, *(int *)"ter.\n");
  }
  v0 = sub_5C494();
  sub_5C4C0(v0 | 0x10000);
  for ( i = sub_3848C(); ; i = usleep(0x3E8u) )
  {
    v2 = sub_5BB4C(i);
    v3 = (unsigned __int8)(v2 >> 1);
    if ( (unsigned __int8)(v2 >> 1) )
      break;
LABEL_12:
    ;
  }
  v4 = 0;
  while ( 1 )
  {
    sub_5BBD4(v5);
    if ( v5[3] < 0 )
      break;
    if ( (unsigned int)dword_5BE200 <= 0x1FE && dword_5BE1F8[0] <= 0x1FEu )
    {
      sub_49D90();
LABEL_7:
      if ( v3 == ++v4 )
        goto LABEL_12;
    }
    else
    {
      ++v4;
      sub_3848C();
      if ( v3 == v4 )
        goto LABEL_12;
    }
  }
  sub_49C80(v5);
  goto LABEL_7;
}
