int __fastcall sub_35C24(const char *a1, int a2)
{
  int *v4; // r0
  int v5; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v4, "bmminer.c", a1, a2);
  return sub_3B6AC(3, s, 1, v5);
}
