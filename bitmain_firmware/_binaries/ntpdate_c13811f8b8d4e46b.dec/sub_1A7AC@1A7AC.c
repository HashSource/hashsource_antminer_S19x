int __fastcall sub_1A7AC(int a1, _DWORD *a2)
{
  int v3; // r6
  int v5[27]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  v3 = sub_1A6F0(a1, (int)v5);
  if ( !v3 )
    sub_18DD0(a2, v5[20], 0);
  return v3;
}
