int __fastcall sub_87874(_DWORD *a1)
{
  unsigned int v1; // r3
  int v2; // r1
  int v3; // r2

  v1 = a1[3];
  v2 = a1[1];
  v3 = a1[2];
  if ( v1 <= 1 )
    return ((int (__fastcall *)(_DWORD, int, int, int))a1[4])(*a1, v2, v3, *a1 + 3916);
  if ( v1 == 2 )
    return ((int (__fastcall *)(_DWORD, int, int))a1[4])(*a1, v2, v3);
  return -1;
}
