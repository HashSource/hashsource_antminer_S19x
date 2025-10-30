_DWORD *sub_1A2BB4()
{
  void *v0; // r0
  int v1; // r0
  _DWORD *result; // r0
  int v3; // [sp+1Ch] [bp-54h] BYREF
  int s[10]; // [sp+20h] [bp-50h] BYREF
  _BYTE v5[4]; // [sp+48h] [bp-28h] BYREF
  int v6; // [sp+4Ch] [bp-24h]
  int v7; // [sp+58h] [bp-18h]

  v0 = memset(s, 0, sizeof(s));
  v1 = sub_15F884((int)v0);
  if ( v1 && sub_15E124(v1, &v3) )
  {
    sub_21DEAC(s, v3);
  }
  else
  {
    sub_203210(v5);
    s[1] = v6;
    s[4] = v7;
  }
  result = sub_1A2AC0(s[0], s[1], s[2], s[3], s[4]);
  if ( !result )
    return sub_1A2B84();
  return result;
}
