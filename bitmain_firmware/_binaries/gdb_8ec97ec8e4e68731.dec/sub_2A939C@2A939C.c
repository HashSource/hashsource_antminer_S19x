__int64 __fastcall sub_2A939C(int *a1, const void *a2, __int64 a3)
{
  FILE *v5; // r4
  __int64 v6; // r8

  if ( (int *)dword_48BBE4 == a1 )
    v5 = *(FILE **)(dword_48BBE4 + 8);
  else
    v5 = (FILE *)sub_2A90F8(a1, 0);
  if ( !v5 )
    return 0;
  v6 = fwrite(a2, 1u, a3, v5);
  if ( (unsigned int)v6 < a3 && ferror(v5) )
  {
    v6 = -1;
    ((void (__fastcall *)(int))loc_2A6C48)(1);
  }
  return v6;
}
