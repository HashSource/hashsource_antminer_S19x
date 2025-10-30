int __fastcall sub_15B04(int result, char a2, int a3, const char *a4)
{
  __int16 *v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v14; // [sp+Ch] [bp-48h]
  _DWORD s[12]; // [sp+14h] [bp-40h] BYREF
  __int16 v16; // [sp+44h] [bp-10h] BYREF
  int v17; // [sp+48h] [bp-Ch]
  int v18; // [sp+4Ch] [bp-8h]

  v14 = result;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  memset(s, 0, sizeof(s));
  if ( result && a4 )
  {
    v18 = sub_66A14(result);
    v17 = sub_65ED4(v18);
    if ( a2 )
      v4 = (__int16 *)"S";
    else
      v4 = &word_6972C;
    v16 = *v4;
    v5 = sub_67728(&v16);
    sub_6611C(v17, "STATUS", v5);
    v6 = sub_67C3C(dword_87754, dword_87754 >> 31);
    sub_6611C(v17, "When", v6);
    v7 = sub_67C3C(a3, a3 >> 31);
    sub_6611C(v17, "Code", v7);
    if ( a3 == 7 )
      snprintf((char *)s, 0x30u, a4, dword_92028);
    else
      snprintf((char *)s, 0x30u, "%s", a4);
    v8 = sub_67728(s);
    sub_6611C(v17, "Msg", v8);
    v9 = sub_67728(off_86C40);
    sub_6611C(v17, "Description", v9);
    sub_66EA4(v18, v17);
    result = sub_6611C(v14, "STATUS", v18);
    if ( a2 != 1 )
    {
      v10 = sub_67C3C(1, 0);
      return sub_6611C(v14, "id", v10);
    }
  }
  return result;
}
