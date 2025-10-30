int __fastcall sub_2FC68(int a1, int a2)
{
  int v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r3
  int result; // r0
  int v8; // r3
  int v9; // [sp+0h] [bp-14h] BYREF
  _DWORD v10[3]; // [sp+8h] [bp-Ch] BYREF

  sub_1B2488((int)&v9, "_dl_runtime_resolve");
  if ( !v9 )
    return 0;
  v3 = sub_1B141C((int)v10, "_dl_fixup");
  v4 = v10[0];
  if ( !v10[0] )
  {
    v3 = sub_1B141C((int)v10, "fixup");
    v4 = v10[0];
    if ( !v10[0] )
      return 0;
  }
  v5 = *(__int16 *)(v4 + 22);
  v6 = *(_DWORD *)(v4 + 8);
  if ( v5 != -1 )
  {
    if ( v6 + *(_DWORD *)(*(_DWORD *)(v10[1] + 144) + 4 * v5) == a2 )
    {
      sub_15F70C(v3, v5);
      JUMPOUT(0x15F9E0);
    }
    return 0;
  }
  result = sub_94700("glibc-tdep.c", 69, "Section index is uninitialized", v6);
  v8 = *(_DWORD *)(result + 4);
  if ( v8 )
    *(_BYTE *)(v8 + 8) = 0;
  return result;
}
