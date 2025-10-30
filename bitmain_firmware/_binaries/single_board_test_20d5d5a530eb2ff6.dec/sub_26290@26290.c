int sub_26290()
{
  int v0; // r0
  _DWORD v2[4]; // [sp+0h] [bp-20h] BYREF
  char s[4]; // [sp+10h] [bp-10h] BYREF
  int v4; // [sp+14h] [bp-Ch]
  int v5; // [sp+18h] [bp-8h]
  int v6; // [sp+1Ch] [bp-4h]

  memset(v2, 0, sizeof(v2));
  v0 = sub_42BFC(v2);
  if ( v2[0] < 0 )
    return sub_2146C("Sweep test", "Err", 0);
  sub_6FBF4(v0);
  *(_DWORD *)s = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  sprintf(s, "Level:  %d", v2[0]);
  return sub_2146C("Sweep: OK", s, 0);
}
