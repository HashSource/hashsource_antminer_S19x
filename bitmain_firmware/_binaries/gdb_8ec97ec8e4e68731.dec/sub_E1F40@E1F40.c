int __fastcall sub_E1F40(int a1)
{
  int v1; // r4
  int v2; // r4
  int v3; // r0
  int v5; // r0
  int v6; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]
  int v9; // [sp+10h] [bp-8h]

  if ( *(_DWORD *)(a1 + 276) == *(_DWORD *)(a1 + 280) )
    return 1;
  v9 = v1;
  v2 = a1 + 252;
  sub_E17BC(&v6, a1 + 252);
  if ( v2 == v6 )
  {
    v3 = v7;
    if ( !v7 )
      v3 = v8;
    return v3 == 0;
  }
  else
  {
    v5 = sub_15CD0();
    return (int)sub_9253C(919596, v5);
  }
}
