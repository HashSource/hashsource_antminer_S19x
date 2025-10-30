int __fastcall sub_5C620(int a1)
{
  const char *v1; // r0
  const char *v2; // r0
  int v3; // r0
  int v4; // r0
  char v7[16]; // [sp+14h] [bp-990h] BYREF
  char s[128]; // [sp+814h] [bp-190h] BYREF
  _BYTE v9[92]; // [sp+894h] [bp-110h] BYREF
  char v10[160]; // [sp+8F0h] [bp-B4h] BYREF
  _DWORD *v11; // [sp+990h] [bp-14h]
  _DWORD *v12; // [sp+994h] [bp-10h]
  int v13; // [sp+998h] [bp-Ch]
  int v14; // [sp+99Ch] [bp-8h]

  v12 = 0;
  v11 = 0;
  memset(s, 0, sizeof(s));
  v14 = -1;
  v13 = -1;
  sub_3B8EC(s);
  v12 = (_DWORD *)sub_63DE8(s, 0, v9);
  if ( v12 && !*v12 )
  {
    v11 = (_DWORD *)sub_652F0(v12, "bitmain-work-mode");
    if ( v11 && *v11 == 2 )
    {
      v1 = (const char *)sub_66AE0(v11);
      v14 = atoi(v1);
    }
    v11 = (_DWORD *)sub_652F0(v12, "bitmain-freq-level");
    if ( v11 && *v11 == 2 )
    {
      v2 = (const char *)sub_66AE0(v11);
      v13 = atoi(v2);
    }
    sub_5B3A8((int)v12);
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v7, 0x800u, "%s: JSON decode of file '%s' failed\n %s", "load_conf_info", s, v10);
    sub_1DB6C(3, v7, 0);
  }
  v3 = sub_66F54(v14, v14 >> 31);
  sub_65420(a1, "miner-mode", v3);
  v4 = sub_66F54(v13, v13 >> 31);
  return sub_65420(a1, "freq-level", v4);
}
