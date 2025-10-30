int __fastcall sub_2FCD78(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  _BOOL4 v5; // r5
  int v6; // r0

  if ( a1[30] )
    return 1;
  v2 = (*(int (**)(void))(a1[1] + 260))();
  v3 = v2;
  if ( v2 < 0 )
    return 0;
  v4 = sub_2ACBF4((int)a1, v2);
  a1[30] = v4;
  v5 = v3 != 0;
  if ( v4 )
    v5 = 0;
  if ( v5 )
    return 0;
  v6 = (*(int (__fastcall **)(_DWORD *, int))(a1[1] + 264))(a1, v4);
  if ( v6 < 0 )
    return 0;
  a1[31] = v6;
  return 1;
}
