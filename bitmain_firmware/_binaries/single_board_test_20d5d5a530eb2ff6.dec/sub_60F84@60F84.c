int sub_60F84()
{
  int result; // r0
  int v1; // r0
  char v2[52]; // [sp+10h] [bp-34h] BYREF

  byte_5FE894 = 0;
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf(
    "%s : Start %s, gPattern_test_counter = %d\n",
    "Single_Board_Reset_Low_Test",
    "Single_Board_Reset_Low_Test",
    (unsigned __int8)byte_5FE894);
  snprintf(
    byte_64EF3C,
    0x100u,
    "Start %s, gPattern_test_counter = %d",
    "Single_Board_Reset_Low_Test",
    (unsigned __int8)byte_5FE894);
  sub_3CC5C((int)byte_64EF3C, v2);
  result = sub_5EC4C();
  if ( result )
  {
    sub_6DDF4(2);
    sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : Set fan speed as %d\n", "Single_Board_Reset_Low_Test", *(_DWORD *)(dword_223680 + 632));
    snprintf(byte_64F03C, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
    sub_3CC5C((int)byte_64F03C, v2);
    sub_1F408();
    if ( sub_20CBC() )
    {
      sub_1E938(v2, 0x30u);
      printf("%s ", v2);
      printf("%s : Set Chain %d baud: %d\n", "Single_Board_Reset_Low_Test", dword_21B3A4, 26);
      snprintf(byte_64F13C, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
      sub_3CC5C((int)byte_64F13C, v2);
      sub_71D60(dword_21B3A4, 26);
      sub_787F0((unsigned __int8)dword_21B3A4);
      sub_71AF4(dword_21B3A4);
      sleep(1u);
      byte_5FE775 = 1;
      if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_2135C, 0) )
      {
        byte_5FE775 = 0;
        pthread_join(dword_5FE768, 0);
        v1 = sub_6E9D8(dword_21B3B0, 0);
        sub_6FBF4(v1);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Show thread");
        sub_1F650(2, "Creat  fail");
        sub_1F650(3, aStartAg);
        sub_1E938(v2, 0x30u);
        printf("%s ", v2);
        printf("%s : Show thread creat fail, Start again\n", "Single_Board_Reset_Low_Test");
        strcpy(byte_64F23C, "Show thread creat fail, Start again");
        return sub_3CC5C((int)byte_64F23C, v2);
      }
      else if ( sub_23588()
             && sub_22D88(*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32]) )
      {
        if ( sub_23A5C() )
        {
          sub_5C888(dword_21B3A4);
          byte_2334AC = 0;
        }
        else
        {
          byte_2334AC = 0;
          sub_5C888(dword_21B3A4);
        }
        pthread_join(dword_5FE768, 0);
        return pthread_join(dword_5FE76C, 0);
      }
      else
      {
        byte_5FE775 = 0;
        sub_6E9D8(dword_21B3B0, 0);
        return pthread_join(dword_5FE768, 0);
      }
    }
    else
    {
      return sub_6E9D8(dword_21B3B0, 0);
    }
  }
  return result;
}
