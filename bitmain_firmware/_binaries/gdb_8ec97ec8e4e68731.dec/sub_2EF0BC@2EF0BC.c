bool __fastcall sub_2EF0BC(_DWORD *a1)
{
  _BYTE *v1; // r2

  if ( (*a1 & 1) != 0 && a1[1] )
    return 0;
  return ((*a1 & 2) == 0 || (v1 = (_BYTE *)a1[2]) == 0 || !*v1) && (*a1 & 4) == 0;
}
