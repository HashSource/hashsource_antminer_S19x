int __fastcall sub_33790(int *a1, int a2)
{
  double v4; // d8
  unsigned __int64 v5; // r0
  int v6; // r2
  int v7; // r3
  double v8; // d8
  double v9; // r0
  int v10; // r5
  int v11; // r2
  int v12; // r3
  double v13; // r0
  int v14; // r5
  int v15; // r2
  int v16; // r3
  double v17; // r0
  int v18; // r4
  int v20; // r12
  int v21; // r2
  bool v22; // zf
  int v23; // r2
  int *v24; // r0
  int *v25; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = dbl_68748;
  v5 = sub_334C0((_DWORD *)a2);
  *(_QWORD *)(a2 + 232) = v5;
  if ( v4 <= sub_4A10C(v5, HIDWORD(v5)) )
  {
    v20 = *(_DWORD *)(a2 + 260);
    v21 = (unsigned __int8)byte_74500;
    *(_BYTE *)(a2 + 283) = 1;
    v22 = v21 == 0;
    v23 = dword_7345C + 1;
    ++*(_DWORD *)(v20 + 32);
    dword_7345C = v23;
    *(_BYTE *)(a2 + 282) = 1;
    if ( !v22 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 260));
      sub_20F58(5, s, 0);
    }
  }
  if ( pthread_mutex_lock(&stru_766C4) )
  {
    v24 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v24, "cgminer.c", "update_work_stats", 8836);
    goto LABEL_10;
  }
  v8 = *(double *)(a2 + 224);
  v9 = sub_4A11C(qword_76850, HIDWORD(qword_76850), v6, v7);
  qword_76850 = sub_4A1B4(COERCE_UNSIGNED_INT64(v9 + v8), HIDWORD(COERCE_UNSIGNED_INT64(v9 + v8)));
  v10 = *a1;
  v13 = sub_4A11C(*(_DWORD *)(*a1 + 192), *(_DWORD *)(*a1 + 196), v11, v12);
  *(_QWORD *)(v10 + 192) = sub_4A1B4(COERCE_UNSIGNED_INT64(v13 + v8), HIDWORD(COERCE_UNSIGNED_INT64(v13 + v8)));
  v14 = *(_DWORD *)(a2 + 260);
  v17 = sub_4A11C(*(_DWORD *)(v14 + 40), *(_DWORD *)(v14 + 44), v15, v16);
  *(_QWORD *)(v14 + 40) = sub_4A1B4(
                            COERCE_UNSIGNED_INT64(v17 + *(double *)(a2 + 224)),
                            HIDWORD(COERCE_UNSIGNED_INT64(v17 + *(double *)(a2 + 224))));
  v18 = *a1;
  *(_DWORD *)(v18 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_766C4) )
  {
    v25 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v25,
      "cgminer.c",
      "update_work_stats",
      8841);
LABEL_10:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  return off_67ED8();
}
