void __fastcall __noreturn sub_25B64(int a1)
{
  int *v2; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = _errno_location();
  snprintf(
    s,
    0x800u,
    "Failed to pthread_mutex_init errno=%d in %s %s():%d",
    *v2,
    "bmminer.c",
    "bitmain_soc_prepare",
    a1);
  sub_47AB4(3, s, 1);
  sub_62EC0(1);
}
