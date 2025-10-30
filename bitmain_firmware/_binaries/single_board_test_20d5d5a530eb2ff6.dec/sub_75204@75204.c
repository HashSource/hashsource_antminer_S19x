int sub_75204()
{
  bool v0; // cc
  int v1; // r4
  int v2; // r0
  int v3; // r5
  int result; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4
  unsigned __int8 v8; // [sp+8h] [bp-81Ch] BYREF
  char v9; // [sp+9h] [bp-81Bh]
  char v10; // [sp+Ah] [bp-81Ah]
  char v11; // [sp+Bh] [bp-819h]
  char v12; // [sp+Ch] [bp-818h]
  char v13; // [sp+Dh] [bp-817h]
  int v14; // [sp+10h] [bp-814h] BYREF
  int v15; // [sp+14h] [bp-810h]
  int v16; // [sp+18h] [bp-80Ch]
  __int16 v17; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( !dword_65E464 )
  {
    v7 = sub_74ABC();
    if ( v7 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
      nullsub_8();
      return v7;
    }
  }
  v0 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v0 = (unsigned int)(dword_65E468 - 100) > 2;
  v1 = !v0;
  if ( !v0 )
  {
    memset(s, 0, 20);
    v14 = 235186773;
    LOWORD(v15) = 3588;
    result = sub_73C90(dword_65E460, (unsigned __int8 *)&v14, 6u, (unsigned __int8 *)s, 0xEu);
    v5 = result;
    if ( result )
    {
      strcpy(s, "can nont get power status\n");
      nullsub_8();
      return v5;
    }
    return result;
  }
  if ( dword_65E468 == 193 )
  {
    v8 = 85;
    v9 = -86;
    v10 = 4;
    v11 = 10;
    v13 = BYTE1(v1);
    v14 = v1;
    v12 = 14;
    v15 = v1;
    v16 = v1;
    v17 = v1;
    v6 = sub_73B38(dword_65E460, &v8, 6u, (unsigned __int8 *)&v14, 0xEu);
    v3 = v15;
    if ( !v6 )
      goto LABEL_11;
  }
  else
  {
    v8 = 85;
    v9 = -86;
    v10 = 4;
    v13 = BYTE1(v1);
    v11 = 10;
    v12 = 14;
    v14 = v1;
    v15 = v1;
    v2 = sub_73B38(dword_65E460, &v8, 6u, (unsigned __int8 *)&v14, 8u);
    v3 = (unsigned __int16)v15;
    if ( !v2 )
      goto LABEL_11;
  }
  v3 = -2147482880;
  strcpy(s, "get power status failed\n");
  nullsub_8();
LABEL_11:
  if ( v3 != -2147482880 )
    return v3;
  strcpy(s, "can nont get power status\n");
  nullsub_8();
  return -2147482880;
}
