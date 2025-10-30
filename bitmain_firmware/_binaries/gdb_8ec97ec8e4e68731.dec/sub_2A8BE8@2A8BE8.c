__int64 __fastcall sub_2A8BE8(int a1)
{
  int v1; // r3
  __int64 v3; // [sp+30h] [bp-40h]

  v1 = *(_DWORD *)(a1 + 12);
  if ( !v1 )
    return 0;
  if ( (*(int (**)(void))(v1 + 24))() )
    return 0;
  return v3;
}
