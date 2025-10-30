int __fastcall sub_ADAF4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  if ( !a6 )
    return 0;
  if ( a1 )
    *a1 = *a6;
  if ( a2 )
    *a2 = a6[1];
  if ( a3 )
    *a3 = a6[2];
  if ( a4 )
    *a4 = a6[4];
  if ( a5 )
    *a5 = a6[3];
  return 1;
}
