int __fastcall sub_1AC28(int a1, const char *a2, unsigned int a3)
{
  int v3; // r3
  size_t v4; // r0
  int v5; // r0
  char s[100]; // [sp+14h] [bp-78h] BYREF
  int v11; // [sp+78h] [bp-14h]
  int v12; // [sp+7Ch] [bp-10h]

  v12 = -2147483647;
  v11 = 0;
  memset(s, 0, sizeof(s));
  if ( !a2 || !a1 || a3 > 2 )
    return -2147483646;
  v4 = strlen(a2);
  v12 = sub_19F88(a2, v4, a3);
  if ( v12 >= 0 )
  {
    v11 = v12;
    if ( a3 )
    {
      v12 = ((int (__fastcall *)(int, char **))(&off_864BC)[4 * v11 + 3])(a1, &(&off_864BC)[4 * v11]);
      return v3;
    }
    v12 = ((int (__fastcall *)(int, char **))off_8651C[3 * v11 + 2])(a1, &off_8651C[3 * v11]);
    v3 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -2147483646 )
        strcpy(s, "bad param");
      goto LABEL_10;
    }
  }
  else
  {
    if ( !a3 )
    {
      if ( v12 == -2147483645 )
        snprintf(s, 0x64u, "not support (%s)", a2);
      else
        strcpy(s, "bad param");
LABEL_10:
      v5 = sub_67728(s);
      sub_6611C(a1, "error_message", v5);
      return v3;
    }
    v3 = v12;
    if ( v12 == -2147483645 )
      sub_15B04(a1, 0, 14, "Invalid command");
  }
  return v3;
}
