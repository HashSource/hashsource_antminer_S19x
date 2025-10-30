int __fastcall sub_4D2E4(unsigned __int8 *a1, int a2)
{
  const char *v3; // r5
  unsigned int v4; // r4
  int result; // r0
  size_t v6; // r11
  size_t v7; // r10
  int v8; // r9
  int v9; // r8
  size_t v10; // r6
  char *v11; // r3
  char *v12; // r3
  const unsigned __int16 **v13; // r0
  int v14; // r1
  const unsigned __int16 *v15; // r0
  const char *v16; // r10
  unsigned int v17; // r3
  unsigned int v18; // r1
  _BYTE v20[4]; // [sp+10h] [bp-5Ch] BYREF
  char v21[80]; // [sp+14h] [bp-58h] BYREF
  char v22; // [sp+68h] [bp-4h] BYREF

  sub_4B63C((int)a1, 1, "Refclock: Telephone JJY");
  *(_BYTE *)a2 = 100;
  *(_BYTE *)(a2 + 192) = 1;
  *(_BYTE *)(a2 + 404) = 1;
  *(_DWORD *)(a2 + 188) = &off_B7F54;
  *(_DWORD *)(a2 + 4) = 11;
  *(_WORD *)(a2 + 8) = 32;
  *(_WORD *)(a2 + 500) = 0;
  *(_WORD *)(a2 + 502) = 0;
  v3 = (const char *)sys_phone[0];
  if ( !sys_phone[0] )
  {
    sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf must be specified.");
    *(_BYTE *)(a2 + 10) = 1;
    return 1;
  }
  v4 = dword_BA21C;
  if ( dword_BA21C )
  {
    sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be only one.");
    result = 1;
    *(_BYTE *)(a2 + 10) = 1;
    return result;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = strlen((const char *)sys_phone[0]);
  while ( v6 < v10 )
  {
    v13 = _ctype_b_loc();
    v14 = (unsigned __int8)v3[v6];
    v15 = *v13;
    v11 = (char *)(v15[v14] & 0x800);
    if ( (v15[v14] & 0x800) != 0 )
    {
      if ( v4 <= 2 )
        v11 = &v22;
      ++v9;
      if ( v4 <= 2 )
      {
        v12 = &v11[v4++];
        *(v12 - 88) = v14;
      }
      v10 = strlen(v3);
    }
    else if ( v14 == 44 )
    {
      if ( v8 == 1 )
      {
        sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be zero or one comma.");
        *(_BYTE *)(a2 + 10) = 1;
        return 1;
      }
      v4 = v15[44] & 0x800;
      v7 = v6;
      v8 = 1;
    }
    else if ( v14 != 45 )
    {
      sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be a number or a hyphen.");
LABEL_17:
      *(_BYTE *)(a2 + 10) = 1;
      return 1;
    }
    ++v6;
  }
  v20[v4] = 0;
  if ( v8 == 1 && (v7 != 1 || *v3 != 48) )
  {
    sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : Getting an outside line should be '0,'.");
    goto LABEL_17;
  }
  if ( v9 - v7 - 6 > 4 )
  {
    sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : Number of digits should be 6 to 10.", v3);
    goto LABEL_41;
  }
  v16 = &v20[v7];
  if ( !strncmp(v16, "00", 2u)
    || !strncmp(v16, "10", 2u)
    || !strncmp(v16, "11", 2u)
    || !strncmp(v16, "12", 2u)
    || !strncmp(v16, "171", 3u)
    || !strncmp(v16, "177", 3u)
    || v20[0] == 48 && v20[2] == 48 )
  {
    sub_65D40(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : First 2 or 3 digits are not allowed.", v3);
LABEL_41:
    *(_BYTE *)(a2 + 10) = 1;
    return 1;
  }
  sub_6D00C(v21, 80, "phone=%s", v3);
  sub_4B63C((int)a1, 1, v21);
  v17 = a1[65];
  if ( v17 > 7 )
    return 0;
  v18 = a1[94];
  a1[65] = 8;
  if ( v18 <= 7 )
    a1[94] = 8;
  if ( a1[66] <= 7u )
    a1[66] = 8;
  sub_6D00C(v21, 80, "minpoll=%d -> %d", v17, 8);
  sub_4B63C((int)a1, 1, v21);
  return 0;
}
