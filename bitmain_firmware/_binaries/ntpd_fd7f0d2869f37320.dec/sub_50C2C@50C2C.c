int __fastcall sub_50C2C(int result)
{
  int v1; // r8
  bool *v2; // r4
  int v3; // r7
  _BYTE *v4; // r0
  bool *v5; // r1
  int v6; // r3
  char v7; // t1
  int v8; // r3
  int v9; // r1
  _BOOL4 v10; // r2
  unsigned int v11; // r3
  __int16 v12; // r10
  bool v13; // r3
  __int16 v14; // r3
  unsigned int v15; // r3
  int v16; // r2
  unsigned int v17; // r1
  int v18; // r10
  bool v19; // cc
  unsigned int v20; // r1
  unsigned int v21; // r11
  int v22; // r1
  unsigned int v23; // r3
  unsigned int v24; // lr
  unsigned int v25; // r3
  unsigned int v26; // r0
  int v27; // r1
  unsigned int v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r0
  __int64 v31; // r10
  unsigned int v32; // r1
  unsigned int v33; // r0
  int v34; // r0
  bool v35; // r3
  int v36; // r10
  int v37; // r0
  int v38; // r2
  int v39; // r3
  int v40; // r0
  int v41; // r2
  int v42; // r3
  int v43; // r0
  int v44; // [sp+18h] [bp-34h]
  unsigned int v45; // [sp+18h] [bp-34h]
  unsigned int v46; // [sp+1Ch] [bp-30h]
  int v47; // [sp+20h] [bp-2Ch]
  unsigned int v48; // [sp+24h] [bp-28h]
  int v49; // [sp+28h] [bp-24h]
  int v50; // [sp+28h] [bp-24h]
  unsigned int v51; // [sp+2Ch] [bp-20h]
  int v52; // [sp+34h] [bp-18h] BYREF
  int v53; // [sp+38h] [bp-14h] BYREF
  int v54; // [sp+3Ch] [bp-10h] BYREF
  int v55; // [sp+40h] [bp-Ch] BYREF

  v1 = *(_DWORD *)(result + 4);
  v2 = *(bool **)(v1 + 84);
  v3 = *(_DWORD *)v2;
  if ( !*(_DWORD *)(*(_DWORD *)v2 + 20) )
    return result;
  *(_DWORD *)(v3 + 20) = 0;
  v4 = sub_3A6D4(result, v2 + 56, 128, (_DWORD *)v2 + 58);
  v2[40] = 0;
  *((_DWORD *)v2 + 46) = v4;
  if ( v4 != (_BYTE *)&dword_24 + 1 )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_65D40(
        4,
        "NeoClock4X(%d): received data has invalid length, expected %d bytes, received %d bytes: %s",
        *(__int16 *)(v3 + 8),
        37,
        v4,
        (const char *)v2 + 56);
    return sub_39C88(v1, 2);
  }
  sub_50B6C((int)(v2 + 91), &v55);
  v5 = v2 + 55;
  LOBYTE(v6) = 0;
  do
  {
    v7 = *++v5;
    v6 = (unsigned __int8)(v6 + v7);
  }
  while ( v5 != v2 + 90 );
  if ( v6 != v55 )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_65D40(4, "NeoClock4X(%d): received data has invalid chksum: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
    return sub_39C88(v1, 2);
  }
  v8 = v2[86];
  *(_BYTE *)(v3 + 118) = v8;
  if ( (v2[768] & 2) != 0 )
  {
    if ( v8 != 73 && (ntp_syslogmask & 0x200) != 0 )
      sub_65D40(
        5,
        "NeoClock4X(%d): using uninitialized quartz clock for time synchronization: %s",
        *(__int16 *)(v3 + 8),
        (const char *)v2 + 56);
  }
  else if ( v8 != 73 )
  {
    if ( (ntp_syslogmask & 0x200) != 0 )
      sub_65D40(5, "NeoClock4X(%d): quartz clock is not initialized: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
    v2[40] = 3;
    return sub_39C88(v1, 5);
  }
  v9 = v2[84];
  *(_BYTE *)(v3 + 116) = v9;
  v10 = v2[768];
  v11 = ((v10 ^ 2u) >> 1) & 1;
  if ( v9 == 65 )
    v11 = 0;
  if ( v11 && !v10 )
  {
    result = sub_39C88(v1, 6);
    v2[40] = 3;
  }
  else
  {
    if ( (v10 & 8) != 0 )
      sub_65D40(7, "NeoClock4X(%d): received data: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
    sub_50AC8((int)(v2 + 72), (int *)v2 + 47);
    sub_50AC8((int)(v2 + 70), &v53);
    sub_50AC8((int)(v2 + 68), &v52);
    sub_50AC8((int)(v2 + 74), (int *)v2 + 49);
    sub_50AC8((int)(v2 + 76), (int *)v2 + 50);
    sub_50AC8((int)(v2 + 78), (int *)v2 + 51);
    sub_50AC8((int)(v2 + 80), &v54);
    *((_DWORD *)v2 + 52) = 10000000 * v54;
    v12 = *(_WORD *)(v2 + 65);
    v13 = v2[67];
    *(_BYTE *)(v3 + 115) = 0;
    *(_WORD *)(v3 + 112) = v12;
    *(_BYTE *)(v3 + 114) = v13;
    *(_DWORD *)(v3 + 105) = *(_DWORD *)(v2 + 59);
    v14 = *(_WORD *)(v2 + 63);
    *(_BYTE *)(v3 + 111) = 0;
    *(_WORD *)(v3 + 109) = v14;
    *(_BYTE *)(v3 + 117) = v2[85];
    sub_50B6C((int)(v2 + 87), (int *)(v3 + 120));
    sub_50B6C((int)(v2 + 89), (int *)(v3 + 124));
    v15 = *((_DWORD *)v2 + 49);
    if ( v15 > 0x17
      || (v46 = *((_DWORD *)v2 + 50), v46 > 0x3B)
      || (v48 = *((_DWORD *)v2 + 51), v48 > 0x3C)
      || (v47 = v52, (unsigned int)(v52 - 1) > 0x1E)
      || (v16 = v53, (unsigned int)(v53 - 1) > 0xB)
      || (v17 = *((_DWORD *)v2 + 47), v17 > 0x63) )
    {
      if ( (ntp_syslogmask & 0x200) != 0 )
        sub_65D40(4, "NeoClock4X(%d): date/time out of range: %s", *(__int16 *)(v3 + 8), (const char *)v2 + 56);
      return sub_39C88(v1, 5);
    }
    else
    {
      v18 = v17 + 2000;
      v19 = v53 - 2 <= 0;
      *((_DWORD *)v2 + 47) = v17 + 2000;
      if ( v16 - 2 <= 0 )
        v18 = v17 + 1984;
      v44 = v16 - 2;
      if ( v16 - 2 <= 0 )
      {
        v18 += 15;
        v16 += 10;
      }
      v51 = v15;
      if ( v19 )
        v44 = v16;
      v49 = (v18 >> 2) + sub_8CE58(v18, -100);
      v50 = v49 + sub_8CE58(v18, 400);
      v20 = v48 + 60 * (v46 + 60 * (v51 + 24 * (v47 + v50 + sub_8CE58(367 * v44, 12) + 365 * v18)));
      v21 = v20 - 2035175056;
      if ( *(_BYTE *)(v3 + 117) == 83 )
        v21 = v20 - 2035178656;
      sub_8CE3C(v21, 60);
      *((_DWORD *)v2 + 50) = v21 / 0x3C % 0x3C;
      *((_DWORD *)v2 + 51) = v22;
      sub_8CE3C(v21 / 0x3C / 0x3C, 24);
      v23 = v21 / 0x3C / 0x3C / 0x18 + 2509157;
      v24 = 4 * v23 / 0x23AB1;
      v25 = v23 - (((unsigned int)&loc_23AB0 * v24 + 3) >> 2);
      v26 = v25 + 31;
      *((_DWORD *)v2 + 49) = v27;
      v28 = (4000 * v25 + 4000) / 0x164B09;
      v29 = v26 - ((1461 * v28) >> 2);
      v30 = 80 * v29 / 0x98F;
      v45 = v30 + 2;
      v31 = 8407827979139LL * v30;
      v32 = v30 / 0xB;
      v33 = v28 + 100 * v24 - 4900 + v30 / 0xB;
      *((_DWORD *)v2 + 47) = v33;
      v52 = v29 - (HIDWORD(v31) >> 6);
      v53 = v45 - 12 * v32;
      v34 = sub_6FBFC(v33, v53, v52);
      v35 = v2[768];
      v2[40] = 0;
      *((_DWORD *)v2 + 48) = v34;
      if ( (v35 & 8) != 0 )
      {
        v36 = *(__int16 *)(v3 + 8);
        v37 = sub_8CE58(*((_DWORD *)v2 + 52), &unk_F4240);
        sub_65D40(
          7,
          "NeoClock4X(%d): calculated UTC date/time: %04d-%02d-%02d %02d:%02d:%02d.%03ld",
          v36,
          *((_DWORD *)v2 + 47),
          v53,
          v52,
          *((_DWORD *)v2 + 49),
          *((_DWORD *)v2 + 50),
          *((_DWORD *)v2 + 51),
          v37);
      }
      v38 = v53;
      v39 = v52;
      *(_DWORD *)(v3 + 128) = *((_DWORD *)v2 + 47);
      v40 = *((_DWORD *)v2 + 49);
      *(_DWORD *)(v3 + 132) = v38;
      v41 = *((_DWORD *)v2 + 50);
      *(_DWORD *)(v3 + 136) = v39;
      v42 = *((_DWORD *)v2 + 51);
      *(_DWORD *)(v3 + 140) = v40;
      *(_DWORD *)(v3 + 144) = v41;
      v43 = *((_DWORD *)v2 + 52);
      *(_DWORD *)(v3 + 148) = v42;
      *(_DWORD *)(v3 + 152) = sub_8CE58(v43, &unk_F4240);
      if ( sub_3A4E8(v2) )
      {
        sub_3A534(v1);
        sub_39C88(v1, 0);
        return sub_42D0C(v1 + 16, (const char *)v2 + 56);
      }
      else
      {
        if ( (ntp_syslogmask & 0x200) != 0 )
          sub_65D40(4, "NeoClock4X(%d): refclock_process failed!", *(__int16 *)(v3 + 8));
        return sub_39C88(v1, 3);
      }
    }
  }
  return result;
}
