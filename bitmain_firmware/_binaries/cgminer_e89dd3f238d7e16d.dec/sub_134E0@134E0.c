int __fastcall sub_134E0(int result, const char **a2)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v7; // [sp+4h] [bp-30h]
  _DWORD v8[4]; // [sp+Ch] [bp-28h] BYREF
  _DWORD s[4]; // [sp+1Ch] [bp-18h] BYREF
  int v10; // [sp+2Ch] [bp-8h]

  v7 = result;
  memset(s, 0, sizeof(s));
  memset(v8, 0, sizeof(v8));
  if ( result )
  {
    if ( a2 )
    {
      v10 = sub_651D4();
      v2 = sub_66A38("S");
      sub_65420(v10, "STATUS", v2);
      v3 = sub_66F54(dword_865BC, dword_865BC >> 31);
      sub_65420(v10, "when", v3);
      snprintf((char *)s, 0x10u, "%s", *a2);
      v4 = sub_66A38(s);
      sub_65420(v10, "Msg", v4);
      snprintf((char *)v8, 0x10u, "%s", a2[1]);
      v5 = sub_66A38(v8);
      sub_65420(v10, "api_version", v5);
      return sub_65420(v7, "STATUS", v10);
    }
  }
  return result;
}
