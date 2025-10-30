int __fastcall sub_793BC(_DWORD *a1, char *filename, int a3)
{
  FILE *v5; // r4
  int v6; // r5

  v5 = fopen(filename, "w");
  if ( !v5 )
    return -1;
  v6 = sub_793A4(a1, (int)v5, a3);
  if ( fclose(v5) )
    return -1;
  return v6;
}
