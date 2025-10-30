int __fastcall sub_1ADEC(int a1, _DWORD *a2)
{
  int v3; // r6
  int v5[27]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v3 = sub_1AD08(a1, (int)v5);
  if ( !v3 )
    sub_193BC(a2, v5[20], 0);
  return v3;
}
