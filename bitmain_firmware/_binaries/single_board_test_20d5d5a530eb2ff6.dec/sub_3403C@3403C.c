int sub_3403C()
{
  const char *v0; // r5
  int v1; // r0
  int result; // r0
  int v3; // [sp+6Ch] [bp-4h] BYREF
  int v4; // [sp+70h] [bp+0h] BYREF
  int v5; // [sp+74h] [bp+4h] BYREF
  char v6[52]; // [sp+78h] [bp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  sub_1F6E4(dword_6E3390, 0, 3, (int)&v3);
  sub_1F6E4(dword_6E3390, 3, 2, (int)&v4);
  sub_1F6E4(dword_6E3390, 5, 2, (int)&v5);
  v0 = (const char *)dword_223680;
  v1 = sub_37DAC(&dword_6E3318);
  result = sub_32B0C(v0 + 16, v0 + 32, v0 + 48, (const char *)&v3, (const char *)&v4, (const char *)&v5, haystack, v1);
  if ( result )
  {
    byte_622648 = 1;
  }
  else
  {
    byte_622648 = 0;
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Can't find");
    sub_1F650(2, "test standard");
    sub_1F650(3, "please re-scan");
    sub_1E938(v6, 0x30u);
    printf("%s ", v6);
    printf("%s : Can't find test standard\n", "prepare_test_standard");
    strcpy(byte_62264C, "Can't find test standard");
    sub_3CC5C(byte_62264C, v6);
    return 0;
  }
  return result;
}
