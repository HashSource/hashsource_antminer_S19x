bool __fastcall sub_23670(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return a1[1] < a2[1];
  else
    return *a1 < *a2;
}
