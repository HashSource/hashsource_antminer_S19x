void __fastcall sub_1BDD8(_DWORD *a1)
{
  FILE *v2; // r0

  if ( a1 )
  {
    v2 = (FILE *)a1[1];
    if ( v2 )
      fclose(v2);
    free(a1);
  }
}
