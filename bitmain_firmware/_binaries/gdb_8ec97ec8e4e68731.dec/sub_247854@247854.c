bool __fastcall sub_247854(_DWORD *a1, _DWORD *a2)
{
  bool v3; // zf
  unsigned int v4; // r3
  unsigned int v5; // r0

  if ( *a1 != *a2 )
    return *a1 < *a2;
  v3 = *a1 == -1;
  v4 = a1[1];
  v5 = a2[1];
  if ( v3 )
    return v4 < v5;
  else
    return (int)v5 > (int)v4;
}
