int __fastcall sub_1CE1F0(int a1, int a2)
{
  int result; // r0
  _DWORD v5[3]; // [sp+0h] [bp-Ch] BYREF

  while ( *(_DWORD *)(a2 + 24) )
    a2 = *(_DWORD *)(a2 + 24);
  result = *(_DWORD *)(a2 + 56);
  if ( !result && !*(_BYTE *)(a2 + 52) )
  {
    ((void (__fastcall *)(_DWORD *))loc_211D58)(v5);
    (*(void (__fastcall **)(int, int))(a2 + 60))(a2, a1);
    result = *(_DWORD *)(a2 + 56);
    if ( v5[0] )
      *(_DWORD *)v5[0] = v5[1];
  }
  return result;
}
