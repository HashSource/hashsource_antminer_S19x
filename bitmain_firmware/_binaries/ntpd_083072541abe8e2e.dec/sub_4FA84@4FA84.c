__int16 *__fastcall sub_4FA84(__int16 *result)
{
  int v1; // r8
  bool *v2; // r4
  int v3; // r7
  _BYTE *v4; // r0
  int v5; // r3
  bool *v6; // r1
  char v7; // t1
  int v8; // r2
  bool v9; // r3
  int v10; // r1
  __int16 v11; // r10
  bool v12; // r3
  __int16 v13; // r3
  unsigned int v14; // lr
  unsigned int v15; // r10
  int v16; // r0
  _BOOL4 v17; // r1
  unsigned int v18; // r1
  int v19; // r3
  int v20; // r12
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r11
  int v24; // r1
  int v25; // r1
  int v26; // r1
  unsigned int v27; // r3
  unsigned int v28; // r10
  unsigned int v29; // r11
  unsigned int v30; // r10
  int v31; // r0
  int v32; // r12
  unsigned int v33; // r0
  int v34; // r0
  bool v35; // r3
  int v36; // r2
  int v37; // lr
  int v38; // kr04_4
  int v39; // r12
  int v40; // r1
  int v41; // r2
  int v42; // [sp+1Ch] [bp-30h]
  unsigned int v43; // [sp+1Ch] [bp-30h]
  unsigned int v44; // [sp+20h] [bp-2Ch]
  int v45; // [sp+34h] [bp-18h] BYREF
  int v46; // [sp+38h] [bp-14h] BYREF
  int v47; // [sp+3Ch] [bp-10h] BYREF
  int v48; // [sp+40h] [bp-Ch] BYREF

  v1 = *((_DWORD *)result + 1);
  v2 = *(bool **)(v1 + 84);
  v3 = *(_DWORD *)v2;
  if ( !*(_DWORD *)(*(_DWORD *)v2 + 20) )
    return result;
  *(_DWORD *)(v3 + 20) = 0;
  v4 = sub_39EE4((int)result, v2 + 56, 128, (_DWORD *)v2 + 58);
  v2[40] = 0;
  *((_DWORD *)v2 + 46) = v4;
  if ( v4 != (_BYTE *)&dword_24 + 1 )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_64E00(
        4,
        "NeoClock4X(%d): received data has invalid length, expected %d bytes, received %d bytes: %s",
        *(__int16 *)(v3 + 8),
        37,
        v4,
        (const char *)v2 + 56);
    return sub_394A0((__int16 *)v1, 2);
  }
  sub_4F9D8((int)(v2 + 91), &v48);
  LOBYTE(v5) = 0;
  v6 = v2 + 55;
  do
  {
    v7 = *++v6;
    v5 = (unsigned __int8)(v5 + v7);
  }
  while ( v2 + 90 != v6 );
  if ( v5 != v48 )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_64E00(4, "NeoClock4X(%d): received data has invalid chksum: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
    return sub_394A0((__int16 *)v1, 2);
  }
  v8 = v2[86];
  *(_BYTE *)(v3 + 118) = v8;
  v9 = v2[768];
  v10 = v9 & 2;
  if ( (v9 & 2) == 0 )
  {
    if ( v8 != 73 )
    {
      if ( (ntp_syslogmask & 0x200) != 0 )
        sub_64E00(5, "NeoClock4X(%d): quartz clock is not initialized: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
      v2[40] = 3;
      return sub_394A0((__int16 *)v1, 5);
    }
    goto LABEL_27;
  }
  if ( v8 != 73 && (ntp_syslogmask & 0x200) != 0 )
  {
    sub_64E00(
      5,
      "NeoClock4X(%d): using uninitialized quartz clock for time synchronization: %s",
      *(__int16 *)(v3 + 8),
      (const char *)v2 + 56);
    v9 = v2[768];
    v10 = v9 & 2;
LABEL_27:
    v16 = v2[84];
    *(_BYTE *)(v3 + 116) = v16;
    if ( v10 )
      v17 = 0;
    else
      v17 = v16 != 65;
    if ( v17 && !v9 )
    {
      result = sub_394A0((__int16 *)v1, 6);
      v2[40] = 3;
      return result;
    }
    goto LABEL_19;
  }
  *(_BYTE *)(v3 + 116) = v2[84];
LABEL_19:
  if ( (v9 & 8) != 0 )
    sub_64E00(7, "NeoClock4X(%d): received data: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
  sub_4F944((int)(v2 + 72), (int *)v2 + 47);
  sub_4F944((int)(v2 + 70), &v46);
  sub_4F944((int)(v2 + 68), &v45);
  sub_4F944((int)(v2 + 74), (int *)v2 + 49);
  sub_4F944((int)(v2 + 76), (int *)v2 + 50);
  sub_4F944((int)(v2 + 78), (int *)v2 + 51);
  sub_4F944((int)(v2 + 80), &v47);
  *((_DWORD *)v2 + 52) = 10000000 * v47;
  v11 = *(_WORD *)(v2 + 65);
  v12 = v2[67];
  *(_BYTE *)(v3 + 115) = 0;
  *(_WORD *)(v3 + 112) = v11;
  *(_BYTE *)(v3 + 114) = v12;
  *(_DWORD *)(v3 + 105) = *(_DWORD *)(v2 + 59);
  v13 = *(_WORD *)(v2 + 63);
  *(_BYTE *)(v3 + 111) = 0;
  *(_WORD *)(v3 + 109) = v13;
  *(_BYTE *)(v3 + 117) = v2[85];
  sub_4F9D8((int)(v2 + 87), (int *)(v3 + 120));
  sub_4F9D8((int)(v2 + 89), (int *)(v3 + 124));
  v14 = *((_DWORD *)v2 + 49);
  if ( v14 > 0x17
    || (v15 = *((_DWORD *)v2 + 50), v15 > 0x3B)
    || *((_DWORD *)v2 + 51) > 0x3Cu
    || (unsigned int)(v45 - 1) > 0x1E
    || (unsigned int)(v46 - 1) > 0xB
    || (v18 = *((_DWORD *)v2 + 47), v18 > 0x63) )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_64E00(4, "NeoClock4X(%d): date/time out of range: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
    return sub_394A0((__int16 *)v1, 5);
  }
  else
  {
    v19 = v46 - 2;
    v20 = v18 + 2000;
    v42 = v46 - 2;
    if ( v46 - 2 <= 0 )
      v20 = v18 + 1984;
    LOWORD(v21) = -31457;
    if ( v46 - 2 <= 0 )
    {
      v20 += 15;
      v19 = v46 + 10;
    }
    HIWORD(v21) = 20971;
    if ( v46 - 2 <= 0 )
      v42 = v19;
    v22 = *((_DWORD *)v2 + 51)
        + 60
        * (v15
         + 60
         * (v14
          + 24
          * ((v20 >> 31)
           - ((int)((unsigned __int64)(v20 * (__int64)(int)v21) >> 32) >> 5)
           + (v20 >> 2)
           + ((unsigned int)(((unsigned int)v20 * (unsigned __int64)v21) >> 32) >> 7)
           + 367 * v42 / 0xCu
           + v45
           + 365 * v20)));
    v23 = v22 - 2035175056;
    if ( *(_BYTE *)(v3 + 117) == 83 )
      v23 = v22 - 2035178656;
    sub_8B8EC(v23, 60);
    *((_DWORD *)v2 + 51) = v24;
    sub_8BB9C(v23 / 0x3C, 60);
    *((_DWORD *)v2 + 50) = v25;
    sub_8B8EC(v23 / 0xE10, 24);
    *((_DWORD *)v2 + 49) = v26;
    v27 = v23 / 0x15180 + 2509157;
    v43 = 4 * v27 / 0x23AB1;
    v28 = v27 - ((((unsigned int)&off_23AB0 + 1) * v43 + 3) >> 2);
    v29 = (4000 * v28 + 4000) / 0x164B09;
    v30 = v28 + 31 - ((1461 * v29) >> 2);
    v44 = 80 * v30 / 0x98F;
    v31 = sub_8B690();
    v32 = v44 + 2 - 12 * v31;
    v33 = v31 + v29 + 100 * v43 - 4900;
    *((_DWORD *)v2 + 47) = v33;
    v45 = v30 - 2447 * v44 / 0x50;
    v46 = v32;
    v34 = sub_6EC68(v33, v32, v45);
    v35 = v2[768];
    *((_DWORD *)v2 + 48) = v34;
    v2[40] = 0;
    if ( (v35 & 8) != 0 )
      sub_64E00(
        7,
        "NeoClock4X(%d): calculated UTC date/time: %04d-%02d-%02d %02d:%02d:%02d.%03ld",
        *(__int16 *)(v3 + 8),
        *((_DWORD *)v2 + 47),
        v46,
        v45,
        *((_DWORD *)v2 + 49),
        *((_DWORD *)v2 + 50),
        *((_DWORD *)v2 + 51),
        *((_DWORD *)v2 + 52) / 1000000);
    v36 = *((_DWORD *)v2 + 49);
    v37 = *((_DWORD *)v2 + 50);
    v38 = *((_DWORD *)v2 + 52);
    v39 = *((_DWORD *)v2 + 51);
    *(_DWORD *)(v3 + 128) = *((_DWORD *)v2 + 47);
    *(_DWORD *)(v3 + 140) = v36;
    v40 = v46;
    v41 = v45;
    *(_DWORD *)(v3 + 144) = v37;
    *(_DWORD *)(v3 + 152) = v38 / 1000000;
    *(_DWORD *)(v3 + 148) = v39;
    *(_DWORD *)(v3 + 132) = v40;
    *(_DWORD *)(v3 + 136) = v41;
    if ( sub_39CF8(v2) )
    {
      sub_39D44(v1);
      sub_394A0((__int16 *)v1, 0);
      return (__int16 *)sub_41F44(v1 + 16, (const char *)v2 + 56);
    }
    else
    {
      if ( (ntp_syslogmask & 0x200) != 0 )
        sub_64E00(4, "NeoClock4X(%d): refclock_process failed!", *(__int16 *)(v3 + 8));
      return sub_394A0((__int16 *)v1, 3);
    }
  }
}
