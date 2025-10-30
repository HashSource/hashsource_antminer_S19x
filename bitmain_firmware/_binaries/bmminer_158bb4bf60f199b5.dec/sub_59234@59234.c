int __fastcall sub_59234(int a1, int a2)
{
  int v4; // r12
  int v5; // r1
  int result; // r0
  int (__fastcall *v7)(int); // r3
  int *v8; // r0
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s%d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_47AB4(3, s, 0);
  }
  if ( pthread_mutex_lock(&stru_246244) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "inc_hw_errors_with_diff",
      8764);
    goto LABEL_12;
  }
  v4 = *(_DWORD *)(a1 + 36);
  v5 = *(_DWORD *)(v4 + 44) + a2;
  dword_242EE8 += a2;
  *(_DWORD *)(v4 + 44) = v5;
  if ( pthread_mutex_unlock(&stru_246244) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "inc_hw_errors_with_diff",
      8767);
LABEL_12:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  result = off_9E444();
  v7 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84);
  if ( v7 )
    return v7(a1);
  return result;
}
