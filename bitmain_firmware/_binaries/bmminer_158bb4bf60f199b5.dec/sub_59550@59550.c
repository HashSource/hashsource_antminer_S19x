unsigned __int64 __fastcall sub_59550(_DWORD *a1)
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

  v2 = sub_778A4(a1[54], a1[55]) * 6.27710174e57;
  v3 = v2 + sub_778A4(a1[52], a1[53]) * 3.40282367e38;
  v4 = sub_778A4(a1[50], a1[51]);
  v5 = sub_778A4(a1[48], a1[49]) + v3 + v4 * 1.84467441e19;
  if ( v5 == 0.0 )
    v5 = 0.0;
  round();
  v6 = sub_77970(COERCE_UNSIGNED_INT64(2.69595353e67 / v5), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v5)));
  if ( pthread_mutex_lock(&stru_2440BC) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v10, "cgminer.c", "share_diff", 5145);
    goto LABEL_14;
  }
  v7 = pthread_rwlock_wrlock(&rwlock);
  if ( v7 )
  {
    v11 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v11, "cgminer.c", "share_diff", 5145);
    goto LABEL_14;
  }
  if ( qword_1AF0D0 < v6 )
  {
    qword_1AF0D0 = v6;
    v7 = 1;
    sub_51B18(v6, dword_9ED70, 8u, 0);
  }
  v8 = (unsigned __int64 *)(a1[65] + 368);
  if ( *v8 < v6 )
    *v8 = v6;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v12 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v12, "cgminer.c", "share_diff", 5159);
    goto LABEL_14;
  }
  if ( pthread_mutex_unlock(&stru_2440BC) )
  {
    v13 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v13, "cgminer.c", "share_diff", 5159);
LABEL_14:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( v7 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
  {
    snprintf(s, 0x800u, "New best share: %s", dword_9ED70);
    sub_47AB4(6, s, 0);
  }
  return v6;
}
