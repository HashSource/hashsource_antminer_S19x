unsigned __int64 __fastcall sub_334C0(_DWORD *a1)
{
  double v2; // d8
  double v3; // d8
  double v4; // d6
  double v5; // d8
  unsigned __int64 v6; // r6
  int v7; // r8
  unsigned __int64 *v8; // r3
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = sub_4A10C(a1[54], a1[55]) * 6.27710174e57;
  v3 = v2 + sub_4A10C(a1[52], a1[53]) * 3.40282367e38;
  v4 = sub_4A10C(a1[50], a1[51]);
  v5 = sub_4A10C(a1[48], a1[49]) + v3 + v4 * 1.84467441e19;
  if ( v5 == 0.0 )
    v5 = 0.0;
  round();
  v6 = sub_4A1D8(COERCE_UNSIGNED_INT64(2.69595353e67 / v5), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v5)));
  if ( pthread_mutex_lock(&stru_7453C) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v10, "cgminer.c", "share_diff", 5150);
    goto LABEL_14;
  }
  v7 = pthread_rwlock_wrlock(&rwlock);
  if ( v7 )
  {
    v11 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v11, "cgminer.c", "share_diff", 5150);
    goto LABEL_14;
  }
  if ( qword_68FF0 < v6 )
  {
    qword_68FF0 = v6;
    v7 = 1;
    sub_2AEF8(v6, dword_68728, 8u, 0);
  }
  v8 = (unsigned __int64 *)(a1[65] + 368);
  if ( *v8 < v6 )
    *v8 = v6;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v12 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v12, "cgminer.c", "share_diff", 5164);
    goto LABEL_14;
  }
  if ( pthread_mutex_unlock(&stru_7453C) )
  {
    v13 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v13, "cgminer.c", "share_diff", 5164);
LABEL_14:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  if ( v7 && (byte_74500 || byte_68BD4 || dword_67DB4 > 5) )
  {
    snprintf(s, 0x800u, "New best share: %s", dword_68728);
    sub_20F58(6, s, 0);
  }
  return v6;
}
