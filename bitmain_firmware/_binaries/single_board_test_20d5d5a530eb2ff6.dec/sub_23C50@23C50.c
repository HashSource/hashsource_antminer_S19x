int __fastcall sub_23C50(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r5
  int v5; // r1
  char *v6; // r3
  int v8; // lr
  unsigned int v9; // r3
  char *v10; // r0
  char *v11; // r1
  int v12; // r10
  int v13; // t1
  int v14; // r1
  unsigned int v15; // r3
  int v16; // r10
  int v17; // t1
  char *v18; // r3
  int v19; // r1
  int v20; // r0
  int v21; // t1
  char v23[48]; // [sp+0h] [bp-30h] BYREF

  v4 = 0;
  while ( 1 )
  {
    if ( a1 )
    {
      v5 = 1;
      v6 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264751;
      do
      {
        if ( !*++v6 )
          v5 = 0;
      }
      while ( (char *)&unk_2337B0
            + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
            + (unsigned __int8)(a1 - 1)
            + 264752 != v6 );
      if ( v5 )
      {
        v8 = -128;
        LOBYTE(v9) = 0;
        v10 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264769;
        v11 = v10;
        do
        {
          v13 = *++v11;
          v12 = v13;
          v9 = (unsigned __int8)(v9 + 1);
          if ( v8 < v13 )
            v8 = v12;
        }
        while ( a1 > v9 );
        v14 = 127;
        LOBYTE(v15) = 0;
        do
        {
          v17 = *++v10;
          v16 = v17;
          v15 = (unsigned __int8)(v15 + 1);
          if ( v14 >= v17 )
            v14 = v16;
        }
        while ( a1 > v15 );
        if ( *(_DWORD *)(dword_223680 + 616) > v8 - v14 )
        {
          v18 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264769;
          v19 = 127;
          do
          {
            v21 = *++v18;
            v20 = v21;
            if ( v19 >= v21 )
              v19 = v20;
          }
          while ( v18 != (char *)&unk_2337B0
                       + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
                       + (unsigned __int8)(a1 - 1)
                       + 264770 );
          if ( v19 <= 35 )
            break;
        }
      }
    }
    ++v4;
    sleep(1u);
    sub_1E938(v23, 0x30u);
    printf("%s ", v23);
    printf("%s : Waiting for Hashboard cool down for %d seconds ...\n", "wait_for_cool_down", v4);
    snprintf(byte_606DC4, 0x100u, "Waiting for Hashboard cool down for %d seconds ...", v4);
    sub_3CC5C(byte_606DC4, v23);
    if ( v4 > a2 )
    {
      sub_1E938(v23, 0x30u);
      printf("%s ", v23);
      printf("%s : Wait for Hashboard cool down for %d seconds, break\n", "wait_for_cool_down", v4);
      snprintf(byte_606EC4, 0x100u, "Wait for Hashboard cool down for %d seconds, break", v4);
      sub_3CC5C(byte_606EC4, v23);
      return 0;
    }
  }
  sub_1E938(v23, 0x30u);
  printf("%s ", v23);
  printf("%s : Hashboard cool down, begin test ...\n", "wait_for_cool_down");
  strcpy(byte_606CC4, "Hashboard cool down, begin test ...");
  sub_3CC5C(byte_606CC4, v23);
  dword_21B3AC = 20;
  return 1;
}
