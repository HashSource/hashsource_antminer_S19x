int __fastcall sub_3332C(int a1, int a2)
{
  int v4; // r12
  int v5; // r1
  int result; // r0
  int (__fastcall *v7)(int); // r3
  int *v8; // r0
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s%d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_20F58(3, s, 0);
  }
  if ( pthread_mutex_lock(&stru_766C4) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "inc_hw_errors_with_diff",
      8770);
    goto LABEL_12;
  }
  v4 = *(_DWORD *)(a1 + 36);
  v5 = *(_DWORD *)(v4 + 44) + a2;
  dword_73368 += a2;
  *(_DWORD *)(v4 + 44) = v5;
  if ( pthread_mutex_unlock(&stru_766C4) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "inc_hw_errors_with_diff",
      8773);
LABEL_12:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  result = off_67ED8();
  v7 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84);
  if ( v7 )
    return v7(a1);
  return result;
}
