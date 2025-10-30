int sub_1F408()
{
  int v0; // r4
  int v1; // r2
  int v3; // r3
  unsigned int v4; // r12
  int *v5; // lr
  int v6; // r7
  int v7; // r6
  int v8; // r1
  int v9; // t1
  unsigned int v10; // r3
  int i; // r8
  unsigned int j; // r2
  unsigned int v13; // r3
  char v14[48]; // [sp+0h] [bp-30h] BYREF

  sub_1E938(v14, 0x30u);
  printf("%s ", v14);
  printf("%s :  \n", "reset_global_variables");
  word_5FE660 = 32;
  sub_3CC5C(&word_5FE660, v14);
  dword_5FE760 = 0;
  dword_5FE764 = 0;
  dword_5FE768 = 0;
  dword_5FE76C = 0;
  dword_5FE770 = 0;
  byte_5FE774 = 0;
  byte_5FE775 = 0;
  byte_5FE776 = 0;
  byte_5FE777 = 0;
  byte_5FE778 = 0;
  byte_5FE779 = 0;
  byte_5FE77A = 0;
  byte_5FE77B = 0;
  byte_5FE77C = 0;
  dword_5FE780 = 0;
  dword_5FE784 = 0;
  dword_5FE788 = 0;
  byte_5FE78C = 0;
  byte_2334AC = 0;
  dword_6E3300 = 0;
  dword_21B3A4 = -1;
  dword_21B3A8 = -1;
  dword_21B3AC = 1;
  if ( dword_5FE790 )
  {
    memset((void *)dword_5FE790, 0, 0x27FCu);
  }
  else
  {
    dword_5FE790 = (int)calloc(0x27FCu, 1u);
    if ( !dword_5FE790 )
    {
      sub_1E938(v14, 0x30u);
      printf("%s ", v14);
      printf("%s : malloc reg_value_buf failed\n", "reset_global_variables");
      strcpy(byte_5FE794, "malloc reg_value_buf failed");
      sub_3CC5C(byte_5FE794, v14);
    }
  }
  v0 = dword_223680;
  if ( *(_BYTE *)dword_223680 == 80
    && *(_BYTE *)(dword_223680 + 1) == 84
    && ((v3 = *(unsigned __int8 *)(dword_223680 + 2), v3 == 50) || v3 == 51)
    && !*(_BYTE *)(dword_223680 + 3)
    || !strcmp((const char *)dword_223680, "PT1+") )
  {
    if ( *(_BYTE *)(v0 + 268) )
    {
      if ( *(_BYTE *)(v0 + 276) )
        return sub_1F320((unsigned __int8)byte_5FE894);
      v1 = *(unsigned __int8 *)(v0 + 269);
      if ( *(_BYTE *)(v0 + 269) )
        goto LABEL_17;
    }
    else
    {
      v1 = *(unsigned __int8 *)(v0 + 269);
      if ( *(_BYTE *)(v0 + 269) )
      {
        if ( *(_BYTE *)(v0 + 276) )
          return sub_1F320((unsigned __int8)byte_5FE894);
LABEL_17:
        v4 = 1;
LABEL_18:
        v5 = &dword_7169AC;
        v6 = 0;
        while ( 1 )
        {
          v7 = *(_DWORD *)(v0 + 72);
          v9 = v5[1];
          ++v5;
          v8 = v9;
          if ( v1 )
            v7 = *(_DWORD *)(v0 + 68);
          if ( v7 )
          {
            v10 = *(_DWORD *)(v0 + 312);
            for ( i = 0; i != v7; ++i )
            {
              for ( j = 0; v10 > j; v10 = *(_DWORD *)(v0 + 312) )
              {
                v13 = j + i * v10;
                ++j;
                *(_DWORD *)(v8 + 60 * v13 + 4) = 0;
              }
            }
          }
          if ( ++v6 >= v4 )
            break;
          v1 = *(unsigned __int8 *)(v0 + 269);
        }
        return sub_1F320((unsigned __int8)byte_5FE894);
      }
      if ( !*(_BYTE *)(v0 + 271) || *(_BYTE *)(v0 + 276) )
        return sub_1F320((unsigned __int8)byte_5FE894);
    }
    v4 = *(_DWORD *)(v0 + 64);
    if ( !v4 )
      return sub_1F320((unsigned __int8)byte_5FE894);
    v1 = 0;
    goto LABEL_18;
  }
  return sub_1F320((unsigned __int8)byte_5FE894);
}
