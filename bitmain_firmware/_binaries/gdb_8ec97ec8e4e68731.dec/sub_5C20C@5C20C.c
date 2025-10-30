int __fastcall sub_5C20C(int a1, int a2, int a3)
{
  const char *v3; // r4
  int v6; // r11
  int v7; // r7
  int v8; // r0
  int result; // r0
  int v11; // [sp+10h] [bp-14h] BYREF
  _BYTE v12[4]; // [sp+14h] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+18h] [bp-Ch] BYREF

  v3 = "-catch-load";
  if ( !a1 )
    v3 = "-catch-unload";
  v6 = 0;
  v7 = 1;
  v11 = 0;
  while ( 1 )
  {
    v8 = sub_602EC(v3, a3, a2, "H`;", &v11, v12);
    if ( v8 < 0 )
      break;
    if ( v8 )
    {
      if ( v8 == 1 )
        v7 = 0;
    }
    else
    {
      v6 = 1;
    }
  }
  if ( v11 >= a3 )
    sub_946E0("-catch-load/unload: Missing <library name>");
  if ( v11 < a3 - 1 )
    sub_946E0("-catch-load/unload: Garbage following the <library name>");
  sub_5BEAC(v13);
  result = sub_D9144(*(_DWORD *)(a2 + 4 * v11), a1, v6, v7);
  if ( v13[0] )
    *(_DWORD *)v13[0] = v13[1];
  return result;
}
