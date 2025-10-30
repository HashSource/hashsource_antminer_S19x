int __fastcall sub_1071E4(int a1, void *s, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r0
  int v7; // r4
  void *v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
  v7 = *(_DWORD *)(v5 + 24);
  if ( v6 )
  {
    if ( s )
      return sub_1686A4(v7, v6, a4, a5, s, a3);
  }
  else
  {
    v11 = a4;
    v10 = a3;
    v9 = s;
    v6 = sub_1080C4();
    s = v9;
    a3 = v10;
    a4 = v11;
    if ( v9 )
      return sub_1686A4(v7, v6, a4, a5, s, a3);
  }
  if ( sub_1685B8(v7, v6, a5, a3) )
    return 1;
  else
    return -1;
}
