void __fastcall __noreturn sub_62FAC(int a1)
{
  int v1; // r0
  char v2[52]; // [sp+0h] [bp-34h] BYREF

  byte_5FE775 = 0;
  sub_6FBF4(a1);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Max temp");
  sub_1F650(2, "out of range");
  sub_6E9D8(dword_21B3B0, 100);
  sub_71AF4(dword_21B3A4);
  sleep(1u);
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : drive mos low\n", "show_temp_protect_and_power_down");
    strcpy(&byte_651440[256], "drive mos low");
    sub_3CC5C((int)&byte_651440[256], v2);
    sub_72644((unsigned __int8)dword_21B3A4);
    sleep(1u);
  }
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Please check zhiju and reset POWER.\n", "show_temp_protect_and_power_down");
  strcpy(&byte_651440[512], "Please check zhiju and reset POWER.");
  v1 = sub_3CC5C((int)&byte_651440[512], v2);
  sub_6F490(v1);
  exit(1);
}
