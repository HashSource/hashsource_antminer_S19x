int sub_63BCC()
{
  char v1[52]; // [sp+8h] [bp-34h] BYREF

  byte_5FE894 = 0;
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : Start %s, gPattern_test_counter = %d\n",
    "Single_Board_PT1_Plus_Software_Pattern_Test",
    "Single_Board_PT1_Plus_Software_Pattern_Test",
    (unsigned __int8)byte_5FE894);
  snprintf(
    byte_652440,
    0x100u,
    "Start %s, gPattern_test_counter = %d",
    "Single_Board_PT1_Plus_Software_Pattern_Test",
    (unsigned __int8)byte_5FE894);
  sub_3CC5C((int)byte_652440, v1);
  sub_2146C("test init", 0, 0);
  if ( sub_5EC4C() )
    return sub_632A0();
  else
    return 12;
}
