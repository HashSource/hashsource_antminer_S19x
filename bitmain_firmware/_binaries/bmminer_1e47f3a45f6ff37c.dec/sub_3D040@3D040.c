void __fastcall sub_3D040(const char *a1, int a2)
{
  int *v4; // r0
  int v5; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v4, "util.c", a1, a2);
  sub_3B6AC(3, s, 1, v5);
  nullsub_1();
}
