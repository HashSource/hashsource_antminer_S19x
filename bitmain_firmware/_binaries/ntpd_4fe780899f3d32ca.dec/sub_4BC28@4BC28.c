int __fastcall sub_4BC28(unsigned __int8 *a1, int a2)
{
  const char *v3; // r10
  unsigned int v4; // r4
  int v5; // r9
  int v6; // r6
  size_t v7; // r8
  int v8; // r11
  int v9; // r7
  const unsigned __int16 **v10; // r0
  int v11; // r1
  int v12; // t1
  const unsigned __int16 *v13; // r0
  int v14; // r3
  char *v15; // r3
  const char *v16; // r11
  unsigned int v17; // r3
  unsigned int v18; // r1
  int v20; // [sp+10h] [bp-64h]
  _BYTE v22[4]; // [sp+18h] [bp-5Ch] BYREF
  char v23[88]; // [sp+1Ch] [bp-58h] BYREF

  sub_4A084((int)a1, 1, "Refclock: Telephone JJY");
  *(_BYTE *)a2 = 100;
  *(_DWORD *)(a2 + 4) = 11;
  *(_BYTE *)(a2 + 192) = 1;
  *(_BYTE *)(a2 + 404) = 1;
  *(_WORD *)(a2 + 8) = 32;
  *(_DWORD *)(a2 + 188) = &off_B6F54;
  *(_DWORD *)(a2 + 500) = 0;
  v3 = (const char *)sys_phone[0];
  if ( sys_phone[0] )
  {
    v4 = dword_B921C;
    if ( dword_B921C )
    {
      v5 = 1;
      sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be only one.");
      *(_BYTE *)(a2 + 10) = 1;
    }
    else
    {
      v5 = 0;
      v6 = 0;
      v7 = strlen((const char *)sys_phone[0]);
      v8 = sys_phone[0] - 1;
      v9 = 1 - sys_phone[0];
      v20 = 0;
      while ( v9 + v8 < v7 )
      {
        while ( 1 )
        {
          v10 = _ctype_b_loc();
          v12 = *(unsigned __int8 *)++v8;
          v11 = v12;
          v13 = *v10;
          v14 = v13[v12] & 0x800;
          if ( (v13[v12] & 0x800) == 0 )
            break;
          ++v6;
          if ( v4 <= 2 )
          {
            v15 = &v23[v4++ + 84];
            *(v15 - 88) = v11;
          }
          if ( v9 + v8 >= v7 )
            goto LABEL_9;
        }
        if ( v11 == 44 )
        {
          if ( v5 == 1 )
          {
            sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be zero or one comma.");
            *(_BYTE *)(a2 + 10) = 1;
            return v5;
          }
          v4 = v14;
          v20 = v8 - (_DWORD)v3;
          v5 = 1;
        }
        else if ( v11 != 45 )
        {
          v5 = 1;
          sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be a number or a hyphen.");
          *(_BYTE *)(a2 + 10) = 1;
          return v5;
        }
      }
LABEL_9:
      v22[v4] = 0;
      if ( v5 != 1 || v20 == 1 && *v3 == 48 )
      {
        if ( (unsigned int)(v6 - v20 - 6) > 4 )
        {
          v5 = 1;
          sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : Number of digits should be 6 to 10.", v3);
          *(_BYTE *)(a2 + 10) = 1;
        }
        else
        {
          v16 = &v22[v20];
          if ( !strncmp(&v22[v20], "00", 2u)
            || !strncmp(v16, "10", 2u)
            || !strncmp(v16, "11", 2u)
            || !strncmp(v16, "12", 2u)
            || !strncmp(v16, "171", 3u)
            || !strncmp(v16, "177", 3u)
            || v22[0] == 48 && v22[2] == 48 )
          {
            v5 = 1;
            sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : First 2 or 3 digits are not allowed.", v3);
            *(_BYTE *)(a2 + 10) = 1;
          }
          else
          {
            sub_6C054(v23, 80, "phone=%s", v3);
            sub_4A084((int)a1, 1, v23);
            v17 = a1[65];
            if ( v17 <= 7 )
            {
              v18 = a1[94];
              a1[65] = 8;
              v5 = 0;
              if ( v18 <= 7 )
                a1[94] = 8;
              if ( a1[66] <= 7u )
                a1[66] = 8;
              sub_6C054(v23, 80, "minpoll=%d -> %d", v17, 8);
              sub_4A084((int)a1, 1, v23);
            }
            else
            {
              return 0;
            }
          }
        }
      }
      else
      {
        sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : Getting an outside line should be '0,'.");
        *(_BYTE *)(a2 + 10) = 1;
      }
    }
  }
  else
  {
    v5 = 1;
    sub_64E00(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf must be specified.");
    *(_BYTE *)(a2 + 10) = 1;
  }
  return v5;
}
