int __fastcall sub_3986C(int a1)
{
  const char *v2; // r3
  int v3; // r4
  const char *v4; // r3
  char v7[2048]; // [sp+10h] [bp-884h] BYREF
  int v8; // [sp+810h] [bp-84h] BYREF
  char v9[68]; // [sp+814h] [bp-80h] BYREF
  _DWORD s2[8]; // [sp+858h] [bp-3Ch] BYREF
  unsigned __int8 v11; // [sp+87Bh] [bp-19h]
  char *v12; // [sp+87Ch] [bp-18h]
  _DWORD *v13; // [sp+880h] [bp-14h]
  unsigned __int8 v14; // [sp+887h] [bp-Dh]

  v13 = *(_DWORD **)(a1 + 260);
  v14 = 1;
  v12 = (char *)(v13[396] + 43);
  v11 = *(v12 - 1);
  v8 = 0;
  if ( !*(_BYTE *)(a1 + 282) )
  {
    sub_2DF98(s2, (_DWORD *)(a1 + 4));
    sub_2067C(v9, (int)s2, 32);
    if ( v11 <= 4u )
    {
      sub_2BEFC(&v8, v12, v11, "cgminer.c", "test_work_current", 5712);
      --v8;
    }
    sub_2E980((int)(v13 + 53), "cgminer.c", "test_work_current", 5717);
    if ( *((_BYTE *)v13 + 696) )
    {
      *((_BYTE *)v13 + 696) = 0;
      *(_BYTE *)(a1 + 280) = 1;
    }
    sub_2EA74((int)(v13 + 53), "cgminer.c", "test_work_current", 5725);
    if ( (unsigned __int8)sub_37894(v9, s2, a1) != 1 )
    {
      sub_2BEFC(v13 + 136, s2, 0x20u, "cgminer.c", "test_work_current", 5733);
      if ( dword_953A0 == 1 )
      {
        v14 = 0;
LABEL_69:
        *(_BYTE *)(a1 + 280) = 0;
        return v14;
      }
      *(_DWORD *)(a1 + 336) = ++dword_8808C;
      if ( *(_BYTE *)(a1 + 280) )
      {
        if ( *(_BYTE *)(a1 + 284) )
        {
          if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            snprintf(v7, 0x800u, "Stratum from pool %d detected new block at height %d", *v13, v8);
            sub_1E4EC(7, v7, 0);
          }
        }
        else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          if ( *(_BYTE *)(a1 + 324) )
            v2 = "GBT ";
          else
            v2 = byte_6F818;
          snprintf(v7, 0x800u, "%sLONGPOLL from pool %d detected new block", v2, **(_DWORD **)(a1 + 260));
          sub_1E4EC(7, v7, 0);
        }
      }
      else if ( byte_9548C && *((_BYTE *)v13 + 916) != 1 )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v7, "New block detected on network before pool notification");
          sub_1E4EC(7, v7, 0);
        }
      }
      else if ( *((_BYTE *)v13 + 916) != 1 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v7, "New block detected on network");
        sub_1E4EC(7, v7, 0);
      }
    }
    else
    {
      if ( memcmp(v13 + 136, s2, 0x20u) )
      {
        if ( !memcmp(s2, &unk_880B8, 0x20u) )
        {
          if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
          {
            snprintf(v7, 0x800u, "Pool %d now up to date at height %d", *v13, v8);
            sub_1E4EC(6, v7, 0);
          }
          sub_2BEFC(v13 + 136, s2, 0x20u, "cgminer.c", "test_work_current", 5783);
        }
        else
        {
          if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            snprintf(v7, 0x800u, "Stale data from pool %d at height %d", *v13, v8);
            sub_1E4EC(7, v7, 0);
          }
          v14 = 0;
        }
      }
      if ( !*(_BYTE *)(a1 + 280) )
        goto LABEL_69;
      *(_DWORD *)(a1 + 336) = ++dword_8808C;
      if ( !sub_32860() )
      {
        v3 = *(_DWORD *)(a1 + 260);
        if ( v3 != sub_2F984() )
          goto LABEL_69;
      }
      if ( *(_BYTE *)(a1 + 284) )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
        {
          snprintf(v7, 0x800u, "Stratum from pool %d requested work restart", *v13);
          sub_1E4EC(5, v7, 0);
        }
      }
      else if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        if ( *(_BYTE *)(a1 + 324) )
          v4 = "GBT ";
        else
          v4 = byte_6F818;
        snprintf(v7, 0x800u, "%sLONGPOLL from pool %d requested work restart", v4, **(_DWORD **)(a1 + 260));
        sub_1E4EC(5, v7, 0);
      }
    }
    sub_37350();
    goto LABEL_69;
  }
  return v14;
}
