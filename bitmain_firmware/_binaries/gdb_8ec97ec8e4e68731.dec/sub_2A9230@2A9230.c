int __fastcall sub_2A9230(int *a1, int a2)
{
  FILE *v3; // r0
  int v4; // r0
  int v5; // r4

  if ( (int *)dword_48BBE4 == a1 )
    v3 = *(FILE **)(dword_48BBE4 + 8);
  else
    v3 = (FILE *)sub_2A90F8(a1, 4);
  if ( !v3 )
    return -1;
  v4 = fileno(v3);
  v5 = _fxstat64(3, v4, a2);
  if ( v5 >= 0 )
    return v5;
  ((void (__fastcall *)(int))loc_2A6C48)(1);
  return v5;
}
