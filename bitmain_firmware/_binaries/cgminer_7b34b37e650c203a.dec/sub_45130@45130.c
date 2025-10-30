int __fastcall sub_45130(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r4
  int v6; // r5

  v5 = (FILE *)fopen64(a2, "w");
  if ( !v5 )
    return -1;
  v6 = sub_44FFC(a1, (int (__fastcall *)(__int16 *, int, int))sub_4440C, (int)v5, a3);
  if ( fclose(v5) )
    return -1;
  return v6;
}
