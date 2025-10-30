int __fastcall sub_331A4(int a1)
{
  int v2; // r12
  int v3; // r2
  int result; // r0
  int (__fastcall *v5)(int); // r3
  int *v6; // r0
  int *v7; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    snprintf(
      s,
      0x800u,
      "%s %d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_20F58(6, s, 0);
  }
  if ( pthread_mutex_lock(&stru_766C4) )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "cgminer.c", "inc_hw_errors", 8756);
    goto LABEL_12;
  }
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v2 + 44) + 1;
  ++dword_73368;
  *(_DWORD *)(v2 + 44) = v3;
  if ( pthread_mutex_unlock(&stru_766C4) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "inc_hw_errors", 8759);
LABEL_12:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  result = off_67ED8();
  v5 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84);
  if ( v5 )
    return v5(a1);
  return result;
}
