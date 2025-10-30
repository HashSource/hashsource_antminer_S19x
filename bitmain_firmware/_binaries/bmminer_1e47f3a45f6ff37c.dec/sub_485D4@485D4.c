void __noreturn sub_485D4()
{
  int v0; // r0
  int i; // r0
  unsigned int v2; // r0
  int v3; // r7
  int v4; // r4
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v5, "[DEBUG] Recv nonce and register.\n");
    sub_3B6AC(4, v5, 0, *(int *)"ter.\n");
  }
  v0 = sub_6AC80();
  sub_6ACAC(v0 | 0x10000);
  for ( i = sub_38AC8(); ; i = usleep(0x3E8u) )
  {
    v2 = sub_6A368(i);
    v3 = (unsigned __int8)(v2 >> 1);
    if ( (unsigned __int8)(v2 >> 1) )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          sub_6A3EC(v5);
          if ( (v5[3] & 0x80) == 0 )
            break;
          ++v4;
          sub_4BAFC(v5);
          if ( v4 == v3 )
            goto LABEL_12;
        }
        if ( (unsigned int)dword_5C30B8 <= 0x1FE && dword_5C30B0[0] <= 0x1FEu )
          sub_4BC18(v5);
        else
          sub_38AC8();
        ++v4;
      }
      while ( v4 != v3 );
    }
LABEL_12:
    ;
  }
}
