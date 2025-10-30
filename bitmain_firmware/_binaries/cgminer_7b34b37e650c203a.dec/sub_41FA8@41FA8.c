int __fastcall sub_41FA8(const void *a1, size_t a2)
{
  _BOOL4 v2; // r4
  void *v5; // r0
  int *v6; // r2
  int v7; // r1
  size_t v8; // r10
  int v9; // r6
  int v10; // r1
  int v11; // lr
  size_t v12; // r4
  int v13; // r12
  int v14; // r8
  _DWORD *v15; // r6
  int v16; // r1
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 )
    v2 = a2 == 0;
  else
    v2 = 1;
  if ( !byte_68BD5 )
  {
LABEL_26:
    if ( !v2 )
      goto LABEL_9;
    if ( byte_74500 || byte_68BD4 )
    {
LABEL_31:
      snprintf(s, 0x800u, "%s input err: data @ %p; len is %d", "cb_bitmain_api_stats", a1, a2);
      sub_20F58(3, s, 0);
      return -1;
    }
LABEL_29:
    if ( dword_67DB4 <= 2 )
      return -1;
    goto LABEL_31;
  }
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
  {
    snprintf(s, 0x800u, "got api len %d", a2);
    sub_20F58(7, s, 0);
    goto LABEL_26;
  }
  if ( v2 )
    goto LABEL_29;
LABEL_9:
  if ( pthread_mutex_lock(&stru_76874) )
  {
    v18 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v18,
      "socketa_api.c",
      "cb_bitmain_api_stats",
      116);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  dword_6ACD0 = a2;
  if ( dword_6ACD4 )
    free((void *)dword_6ACD4);
  v5 = malloc(a2);
  dword_6ACD4 = (int)v5;
  if ( v5 )
  {
    memcpy(v5, a1, dword_6ACD0);
    if ( pthread_mutex_lock(&stru_7688C) )
    {
      v19 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v19,
        "socketa_api.c",
        "cb_bitmain_api_stats",
        134);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
    v6 = (int *)(dword_6ACD4 + a2 - 296);
    v7 = v6[1];
    dword_6ACD8 = *v6;
    dword_6ACDC = v7;
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(s, 0x800u, "[%s], hash 0x%llx", "cb_bitmain_api_stats", *(_QWORD *)&dword_6ACD8);
      sub_20F58(7, s, 0);
    }
    if ( pthread_mutex_unlock(&stru_7688C) )
    {
      v21 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v21,
        "socketa_api.c",
        "cb_bitmain_api_stats",
        138);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
    v8 = a2 - 284;
    off_67ED8();
    v9 = dword_6ACD4;
    v10 = *(_DWORD *)(dword_6ACD4 + a2 - 288);
    dword_73368 = v10;
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(s, 0x800u, "[%s], hwerr %d", "cb_bitmain_api_stats", v10);
      sub_20F58(7, s, 0);
      v9 = dword_6ACD4;
    }
    v11 = *(_DWORD *)(v9 + v8 + 8);
    v12 = v9 + a2;
    v13 = *(_DWORD *)(v9 + v8 + 12);
    v14 = *(_DWORD *)(v9 + v8);
    dword_6ABA8 = *(_DWORD *)(v9 + v8 + 4);
    dword_6ABAC = v11;
    dword_6ABB0 = v13;
    v15 = (_DWORD *)(v9 + a2 - 12);
    dword_6ABA4 = v14;
    memcpy(byte_6ABC0, (const void *)(v12 - 268), 0x100u);
    v16 = v15[1];
    LODWORD(dbl_6ABB8) = *v15;
    HIDWORD(dbl_6ABB8) = v16;
    dword_687F4[0] = *(_DWORD *)(v12 - 4);
    if ( pthread_mutex_unlock(&stru_76874) )
    {
      v20 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v20,
        "socketa_api.c",
        "cb_bitmain_api_stats",
        157);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
    off_67ED8();
    return 0;
  }
  else
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      snprintf(s, 0x800u, "%s, alloc failed", "cb_bitmain_api_stats");
      sub_20F58(3, s, 0);
    }
    if ( pthread_mutex_unlock(&stru_76874) )
    {
      v22 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v22,
        "socketa_api.c",
        "cb_bitmain_api_stats",
        126);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
    off_67ED8();
    return -2;
  }
}
