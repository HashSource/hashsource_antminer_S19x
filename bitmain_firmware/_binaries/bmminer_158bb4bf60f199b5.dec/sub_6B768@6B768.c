int __fastcall sub_6B768(_DWORD *a1, int a2, __int16 a3)
{
  FILE *v5; // r4
  int v6; // r5

  v5 = (FILE *)fopen64(a2, "w");
  if ( !v5 )
    return -1;
  v6 = sub_6B69C(a1, (int (__fastcall *)(__int16 *, int, int))sub_6ACD4, (int)v5, a3);
  fclose(v5);
  return v6;
}
