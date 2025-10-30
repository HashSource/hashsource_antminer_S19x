int sub_69820()
{
  int v0; // r0
  int v1; // r6
  int result; // r0
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s :  \n", "Single_Board_PT2_Test");
  word_65A740 = 32;
  v0 = sub_3CC5C((int)&word_65A740, v3);
  if ( *(_BYTE *)(dword_223680 + 268) )
    return sub_65EEC(v0);
  if ( *(_BYTE *)(dword_223680 + 269) )
    return sub_6805C(v0);
  if ( *(_BYTE *)(dword_223680 + 270) )
    return sub_63E2C();
  v1 = *(unsigned __int8 *)(dword_223680 + 271);
  result = 12;
  if ( !*(_BYTE *)(dword_223680 + 271) )
  {
    sub_6FBF4(12);
    sub_1F650(v1, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Do not support");
    sub_1F650(2, "Test Mode");
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Do not support Test Mode\n", "Single_Board_PT2_Test");
    strcpy(byte_65A840, "Do not support Test Mode");
    sub_3CC5C((int)byte_65A840, v3);
    return 12;
  }
  return result;
}
