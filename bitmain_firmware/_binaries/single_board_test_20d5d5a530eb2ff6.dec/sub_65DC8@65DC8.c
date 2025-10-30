int sub_65DC8()
{
  int v0; // r0
  int v1; // r6
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s :  \n", "Single_Board_PT1_Plus_Test");
  word_655440 = 32;
  v0 = sub_3CC5C((int)&word_655440, v3);
  v1 = *(unsigned __int8 *)(dword_223680 + 268);
  if ( *(_BYTE *)(dword_223680 + 268) )
    return sub_63BCC();
  sub_6FBF4(v0);
  sub_1F650(v1, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Do not support");
  sub_1F650(2, "Test Mode");
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : Do not support Test Mode\n", "Single_Board_PT1_Plus_Test");
  strcpy(byte_655540, "Do not support Test Mode");
  sub_3CC5C((int)byte_655540, v3);
  return 12;
}
