int __fastcall sub_83F7C(_DWORD *a1)
{
  int v1; // r3
  int v3; // r1
  int result; // r0
  int v5; // r2
  int v6; // r5
  int v7; // r3
  int v8; // [sp+Ch] [bp-4h]

  v1 = a1[31];
  if ( a1[7] )
    v3 = 33;
  else
    v3 = 17;
  if ( *(_DWORD *)(v1 + 556) )
    return (*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, v3) != 0;
  v5 = a1[285];
  if ( v5 && *(_DWORD *)(v5 + 4) )
  {
    v6 = *(_DWORD *)(v1 + 528);
    v8 = v3;
    v7 = *(_DWORD *)(a1[1] + 100);
    *(_DWORD *)(v5 + 440) = v6;
    result = (*(int (**)(void))(v7 + 8))();
    v3 = v8;
    if ( result )
      return (*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, v3) != 0;
  }
  else
  {
    sub_D0048(20, 292, 133, "ssl/s3_msg.c", 24);
    return 0;
  }
  return result;
}
