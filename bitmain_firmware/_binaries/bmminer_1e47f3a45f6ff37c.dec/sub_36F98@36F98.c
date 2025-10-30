int __fastcall sub_36F98(int a1)
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
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s %d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_3B6AC(7, s, 0, v2);
  }
  if ( pthread_mutex_lock(&stru_5C2FEC) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "bmminer.c", "inc_hw_errors", 1467);
    sub_3B6AC(3, s, 1, v8);
  }
  v3 = *(_DWORD *)(a1 + 36);
  v4 = *(_DWORD *)(v3 + 44);
  ++dword_5BFE40;
  *(_DWORD *)(v3 + 44) = v4 + 1;
  if ( pthread_mutex_unlock(&stru_5C2FEC) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v9, "bmminer.c", "inc_hw_errors", 1470);
    sub_3B6AC(3, s, 1, v10);
  }
  result = off_B31B8();
  v6 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84);
  if ( v6 )
    return v6(a1);
  return result;
}
