bool __fastcall sub_11C2EC(int *a1, int *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  int v4; // lr
  int v5; // r12

  v2 = (_DWORD *)*a1;
  v3 = (_DWORD *)*a2;
  v4 = *a1;
  if ( *a1 )
    v4 = 1;
  v5 = *a2;
  if ( v3 )
    v5 = 1;
  return v4 == v5 && (!v2 || *v2 == *v3) && a1[1] == a2[1];
}
