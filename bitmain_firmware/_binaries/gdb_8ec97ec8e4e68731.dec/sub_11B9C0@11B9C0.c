int __fastcall sub_11B9C0(int a1, int a2)
{
  int v4; // r6
  __int64 v6; // r2
  int v7; // [sp+0h] [bp-8h] BYREF
  int v8; // [sp+4h] [bp-4h] BYREF

  if ( !a2 )
    return sub_26BC1C(*(_DWORD *)(a1 + 24));
  v4 = *(_DWORD *)(a1 + 36);
  if ( !sub_15DF58(a2, &v8) )
    return sub_26BC1C(*(_DWORD *)(a1 + 24));
  LODWORD(v6) = ((int (__fastcall *)(int, int *, int))loc_115880)(v4, &v7, v8);
  if ( !(_DWORD)v6 )
    return sub_26BC1C(*(_DWORD *)(a1 + 24));
  HIDWORD(v6) = v7;
  return sub_11B920(*(_DWORD *)(a1 + 24), a2, v6);
}
