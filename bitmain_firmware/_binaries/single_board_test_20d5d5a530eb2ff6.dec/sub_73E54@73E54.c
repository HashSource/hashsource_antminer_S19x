int __fastcall sub_73E54(int a1, unsigned __int8 a2)
{
  char v4; // r6
  int v6; // [sp+8h] [bp-28h] BYREF
  char v7; // [sp+Ch] [bp-24h]
  unsigned __int8 v8; // [sp+Dh] [bp-23h]
  char v9; // [sp+Eh] [bp-22h]
  char v10; // [sp+Fh] [bp-21h]
  unsigned __int8 s[32]; // [sp+10h] [bp-20h] BYREF

  v4 = a2 - 127;
  v6 = -2130269611;
  v7 = 0;
  memset(s, 0, sizeof(s));
  v8 = a2;
  v10 = v4;
  v9 = 6;
  if ( sub_73C90(a1, (unsigned __int8 *)&v6, 8u, s, 8u) )
    return -1;
  else
    return v8;
}
