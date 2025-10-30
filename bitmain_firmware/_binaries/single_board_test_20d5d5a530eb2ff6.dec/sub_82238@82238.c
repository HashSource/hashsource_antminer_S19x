bool __fastcall sub_82238(int a1)
{
  int v2; // r0

  v2 = sub_E0740(860, "ssl/s3_lib.c", 3296);
  if ( v2 && (*(_DWORD *)(a1 + 124) = v2, sub_A65F8(a1)) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 16))(a1) != 0;
  else
    return 0;
}
