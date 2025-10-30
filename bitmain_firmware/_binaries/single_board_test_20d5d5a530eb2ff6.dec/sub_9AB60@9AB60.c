int __fastcall sub_9AB60(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  __int16 v4; // r0
  int v6; // [sp+0h] [bp-8h] BYREF
  int v7; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1[32] + 276);
  v7 = 0;
  v6 = sub_A8788(v2);
  v3 = sub_A878C(&v6);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v4 = sub_9A8D0(*(unsigned __int16 *)(*(_DWORD *)(v3 + 8) + 8), *(_DWORD *)(*(_DWORD *)(v3 + 8) + 20));
    if ( sub_9AA24(a1, v4, &v7) <= 0 )
      break;
    v3 = sub_A878C(&v6);
    if ( !v3 )
      return 1;
  }
  return -1;
}
