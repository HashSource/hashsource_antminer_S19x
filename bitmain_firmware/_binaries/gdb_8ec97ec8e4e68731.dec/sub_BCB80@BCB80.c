int __fastcall sub_BCB80(int a1, int a2)
{
  int v3; // r8
  __int64 v4; // r2
  int v5; // r4
  int v7; // [sp+Ch] [bp-Ch]

  v3 = sub_16F654(a1);
  v4 = *(_QWORD *)sub_BBFD8(a2);
  if ( v4 < 1 )
    return v4;
  v5 = 0;
  do
  {
    if ( sub_BC298(a2) <= 0 )
      break;
    ++v5;
    ((void (__fastcall *)(int))loc_16E5A0)(v3);
  }
  while ( v7 );
  return v5;
}
