int __fastcall sub_47ED8(int a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v5; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v5 = 0;
  v7 = a1;
  if ( a1 )
    v2 = *(_DWORD *)(a1 + 352);
  else
    v2 = 0;
  v6 = v2;
  while ( v7 )
  {
    if ( *(_DWORD *)(v7 + 340) == a2 )
      return v7;
    v7 = v6;
    if ( v6 )
      v3 = *(_DWORD *)(v6 + 352);
    else
      v3 = 0;
    v6 = v3;
  }
  return v5;
}
