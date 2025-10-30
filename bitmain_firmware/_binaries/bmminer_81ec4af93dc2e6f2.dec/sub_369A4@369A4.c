int __fastcall sub_369A4(int a1)
{
  int v2; // r3
  int v3; // r12
  int v4; // r2
  int result; // r0
  int (__fastcall *v6)(int); // r3
  int *v7; // r0
  int v8; // r3
  int *v9; // r0
  int v10; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s %d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_3AF5C(7, s, 0, v2);
  }
  if ( pthread_mutex_lock(&stru_5BE134) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "bmminer.c", "inc_hw_errors", 1467);
    sub_3AF5C(3, s, 1, v8);
  }
  v3 = *(_DWORD *)(a1 + 36);
  v4 = *(_DWORD *)(v3 + 44) + 1;
  ++dword_5BAF88;
  *(_DWORD *)(v3 + 44) = v4;
  if ( pthread_mutex_unlock(&stru_5BE134) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v9, "bmminer.c", "inc_hw_errors", 1470);
    sub_3AF5C(3, s, 1, v10);
  }
  result = off_AFD50();
  v6 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84);
  if ( v6 )
    return v6(a1);
  return result;
}
