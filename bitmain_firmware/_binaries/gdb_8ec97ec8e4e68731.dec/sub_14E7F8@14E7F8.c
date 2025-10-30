int __fastcall sub_14E7F8(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 != 2 )
    sub_946E0("Can't get dimensions for a non-array type");
  result = 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 20);
    if ( !v3 )
      break;
    v1 = *(_DWORD *)(v3 + 24);
    if ( *(_BYTE *)v1 == 2 )
      ++result;
  }
  return result;
}
