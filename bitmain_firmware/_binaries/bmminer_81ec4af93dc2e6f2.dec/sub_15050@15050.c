void __fastcall __noreturn sub_15050(const char *a1)
{
  int v1; // r3
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 1 )
  {
    snprintf(s, 0x800u, "%s: %s\n", "stop_mining_and_restart", a1);
    a1 = (const char *)sub_3AF5C(1, s, 0, v1);
  }
  v2 = sub_3EE80(a1);
  v3 = sub_3F2C8(v2);
  v4 = sub_570AC(v3);
  sub_57144(v4);
  strcpy(s, "restart\n");
  sub_3AF5C(0, s, 0, &s[8]);
  _assert_fail("0", "driver-btm-api.c", 0x195u, "stop_mining_and_restart");
}
