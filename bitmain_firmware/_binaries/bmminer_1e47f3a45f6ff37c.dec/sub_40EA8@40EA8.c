void __fastcall __noreturn sub_40EA8(const char *a1)
{
  int v1; // r3
  unsigned int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 1 )
  {
    snprintf(s, 0x800u, "%s: %s\n", "stop_mining_and_restart", a1);
    sub_3B6AC(1, s, 0, v1);
  }
  sub_4099C();
  v2 = sub_40E04();
  v3 = sub_55AF0(v2);
  sub_55B70(v3);
  strcpy(s, "restart\n");
  sub_3B6AC(0, s, 0, (int)&s[8]);
  _assert_fail("0", "driver-btm-api.c", 0x195u, "stop_mining_and_restart");
}
