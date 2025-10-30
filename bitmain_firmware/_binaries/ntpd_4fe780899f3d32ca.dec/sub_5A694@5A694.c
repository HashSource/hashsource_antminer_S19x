__int16 *__fastcall sub_5A694(__int16 *result)
{
  int v1; // r4
  _DWORD *v2; // r5
  int v3; // r2
  int v4; // [sp+0h] [bp-8Ch] BYREF
  char v5[128]; // [sp+4h] [bp-88h] BYREF

  v1 = *((_DWORD *)result + 21);
  v2 = *(_DWORD **)v1;
  if ( *(_DWORD *)(v1 + 28) == -1 )
  {
    if ( (*(_BYTE *)(v1 + 768) & 2) == 0 )
      goto LABEL_3;
LABEL_11:
    sub_6C054(v5, 128, "/var/spool/lock/LCK..cua%d", *v2);
    result = (__int16 *)unlink(v5);
    goto LABEL_3;
  }
  sub_25EE0((__int16 *)((char *)&dword_88 + 3), (int)result, "close");
  v4 = 2;
  if ( ioctl(*(_DWORD *)(v1 + 28), 0x5417u, &v4) < 0 )
    sub_64E00(3, "acts: ioctl(TIOCMBIC) failed: %m");
  result = sub_18E64(v1 + 8);
  *(_DWORD *)(v1 + 28) = -1;
  if ( (*(_BYTE *)(v1 + 768) & 2) != 0 )
    goto LABEL_11;
LABEL_3:
  if ( v2[4] || (v3 = v2[3], v3 <= 0) || !sys_phone[v3] )
  {
    v2[1] = 0;
    v2[2] = 0;
  }
  else
  {
    v2[1] = 0;
    v2[2] = 30;
  }
  return result;
}
