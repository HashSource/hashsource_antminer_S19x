int __fastcall sub_10FD78(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  if ( a2 )
    *a2 = *a1;
  if ( a3 )
    *a3 = a1[1];
  if ( a4 )
    *a4 = a1[2];
  if ( a5 )
    *a5 = a1[3];
  return a1[3] & 1;
}
