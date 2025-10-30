int __fastcall sub_2AB1E8(int a1, int a2)
{
  int v2; // r4
  int v3; // r8
  const char *v5; // r7
  int v6; // r5
  _BYTE v8[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = *(_DWORD *)(a2 + 40);
  if ( !v2 )
    return 1;
  while ( 1 )
  {
    v5 = *(const char **)(v2 + 4);
    v6 = strlen(v5) + 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(v6, v8);
      if ( sub_2A8884((int)v8, 2, a1) != 2 )
        break;
    }
    if ( sub_2A8884((int)v5, v6, a1) != v6 )
      break;
    v2 = *(_DWORD *)(v2 + 16);
    if ( !v2 )
      return 1;
  }
  return 0;
}
