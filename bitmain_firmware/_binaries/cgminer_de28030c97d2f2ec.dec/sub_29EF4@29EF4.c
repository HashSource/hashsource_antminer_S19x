int __fastcall sub_29EF4(pthread_mutex_t *a1)
{
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v3, 0x800u, "Closing socket for stratum pool %d", a1->__lock);
    sub_1E4EC(6, v3, 0);
  }
  sub_1FD4C(a1 + 30, "util.c", "suspend_stratum", 3313);
  sub_26254((int)a1);
  return sub_1FE7C(a1 + 30, "util.c", "suspend_stratum", 3315);
}
