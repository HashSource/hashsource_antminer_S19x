int __fastcall sub_32690(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  _BYTE s[1036]; // [sp+4h] [bp-410h] BYREF
  char v8; // [sp+410h] [bp-4h] BYREF

  memset(s, 0, sizeof(s));
  v4 = sub_1C8EC(a1, (int)s);
  if ( v4 )
  {
    v5 = 65128;
    a2 += a1 << 8;
  }
  else
  {
    v5 = (int)&v8;
  }
  if ( v4 )
    HIWORD(v5) = 82;
  else
    a2 = v5 + 4 * a2;
  if ( v4 )
    return *(_DWORD *)(v5 + 4 * a2);
  else
    return *(_DWORD *)(a2 - 1028);
}
