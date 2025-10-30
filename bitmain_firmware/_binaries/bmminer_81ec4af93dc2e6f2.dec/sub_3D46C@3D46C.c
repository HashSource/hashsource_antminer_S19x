bool __fastcall sub_3D46C(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return a1[1] < a2[1];
  else
    return *a1 < *a2;
}
