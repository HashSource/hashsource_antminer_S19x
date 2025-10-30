int __fastcall sub_CF3D0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0;
  if ( *a1 > *a2 )
    return 1;
  return -1;
}
