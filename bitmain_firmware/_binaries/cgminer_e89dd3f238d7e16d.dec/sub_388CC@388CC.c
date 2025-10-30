int __fastcall sub_388CC(int a1)
{
  int v2; // r0
  const char *v3; // r3
  int v4; // r4
  const char *v5; // r3
  char v8[2048]; // [sp+10h] [bp-884h] BYREF
  int v9; // [sp+810h] [bp-84h] BYREF
  char v10[68]; // [sp+814h] [bp-80h] BYREF
  _DWORD s2[8]; // [sp+858h] [bp-3Ch] BYREF
  unsigned __int8 v12; // [sp+87Bh] [bp-19h]
  char *v13; // [sp+87Ch] [bp-18h]
  _DWORD *v14; // [sp+880h] [bp-14h]
  unsigned __int8 v15; // [sp+887h] [bp-Dh]

  v14 = *(_DWORD **)(a1 + 260);
  v15 = 1;
  v13 = (char *)(v14[392] + 43);
  v12 = *(v13 - 1);
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 282) )
  {
    sub_2CF28(s2, (_DWORD *)(a1 + 4));
    sub_1FDA0(v10, (int)s2, 32);
    if ( v12 <= 4u )
    {
      sub_2AF08(&v9, v13, v12, "cgminer.c", "test_work_current", 5712);
      sub_2CDC0();
      v9 = v2 - 1;
    }
    sub_2D95C((int)(v14 + 53), "cgminer.c", "test_work_current", 5717);
    if ( *((_BYTE *)v14 + 680) )
    {
      *((_BYTE *)v14 + 680) = 0;
      *(_BYTE *)(a1 + 280) = 1;
    }
    sub_2DA5C((int)(v14 + 53), "cgminer.c", "test_work_current", 5725);
    if ( (unsigned __int8)sub_368A4(v10, s2, a1) != 1 )
    {
      sub_2AF08(v14 + 136, s2, 0x20u, "cgminer.c", "test_work_current", 5733);
      if ( dword_94208 == 1 )
      {
        v15 = 0;
LABEL_68:
        *(_BYTE *)(a1 + 280) = 0;
        return v15;
      }
      *(_DWORD *)(a1 + 336) = ++dword_86EF4;
      if ( *(_BYTE *)(a1 + 280) )
      {
        if ( *(_BYTE *)(a1 + 284) )
        {
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            snprintf(v8, 0x800u, "Stratum from pool %d detected new block at height %d", *v14, v9);
            sub_1DB6C(7, v8, 0);
          }
        }
        else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          if ( *(_BYTE *)(a1 + 324) )
            v3 = "GBT ";
          else
            v3 = byte_6E658;
          snprintf(v8, 0x800u, "%sLONGPOLL from pool %d detected new block", v3, **(_DWORD **)(a1 + 260));
          sub_1DB6C(7, v8, 0);
        }
      }
      else if ( byte_942F4 && *((_BYTE *)v14 + 900) != 1 )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v8, "New block detected on network before pool notification");
          sub_1DB6C(7, v8, 0);
        }
      }
      else if ( *((_BYTE *)v14 + 900) != 1 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v8, "New block detected on network");
        sub_1DB6C(7, v8, 0);
      }
    }
    else
    {
      if ( memcmp(v14 + 136, s2, 0x20u) )
      {
        if ( !memcmp(s2, &unk_86F20, 0x20u) )
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
          {
            snprintf(v8, 0x800u, "Pool %d now up to date at height %d", *v14, v9);
            sub_1DB6C(6, v8, 0);
          }
          sub_2AF08(v14 + 136, s2, 0x20u, "cgminer.c", "test_work_current", 5783);
        }
        else
        {
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            snprintf(v8, 0x800u, "Stale data from pool %d at height %d", *v14, v9);
            sub_1DB6C(7, v8, 0);
          }
          v15 = 0;
        }
      }
      if ( !*(_BYTE *)(a1 + 280) )
        goto LABEL_68;
      *(_DWORD *)(a1 + 336) = ++dword_86EF4;
      if ( !sub_31738() )
      {
        v4 = *(_DWORD *)(a1 + 260);
        if ( v4 != sub_2E98C() )
          goto LABEL_68;
      }
      if ( *(_BYTE *)(a1 + 284) )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
        {
          snprintf(v8, 0x800u, "Stratum from pool %d requested work restart", *v14);
          sub_1DB6C(5, v8, 0);
        }
      }
      else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        if ( *(_BYTE *)(a1 + 324) )
          v5 = "GBT ";
        else
          v5 = byte_6E658;
        snprintf(v8, 0x800u, "%sLONGPOLL from pool %d requested work restart", v5, **(_DWORD **)(a1 + 260));
        sub_1DB6C(5, v8, 0);
      }
    }
    sub_36334();
    goto LABEL_68;
  }
  return v15;
}
