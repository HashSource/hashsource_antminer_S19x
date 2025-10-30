int __fastcall sub_2566DC(int a1)
{
  int v1; // r3
  int v3; // r0
  int v4; // r0

  v1 = *(unsigned __int8 *)(a1 + 12);
  *(_DWORD *)a1 = off_3F2974;
  if ( v1 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  if ( *(_BYTE *)(a1 + 13) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return a1;
}
