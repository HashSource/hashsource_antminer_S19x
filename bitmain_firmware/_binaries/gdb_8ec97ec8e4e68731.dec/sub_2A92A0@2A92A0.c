int __fastcall sub_2A92A0(int *a1)
{
  FILE *v1; // r0
  int v2; // r4

  if ( (int *)dword_48BBE4 == a1 )
    v1 = *(FILE **)(dword_48BBE4 + 8);
  else
    v1 = (FILE *)sub_2A90F8(a1, 1);
  if ( !v1 )
    return 0;
  v2 = fflush(v1);
  if ( v2 >= 0 )
    return v2;
  ((void (__fastcall *)(int))loc_2A6C48)(1);
  return v2;
}
