int *__fastcall sub_984A4(int *a1, int a2)
{
  int v4; // r0

  v4 = canonicalize_file_name(a2);
  if ( !v4 )
    v4 = sub_327254(a2);
  *a1 = v4;
  return a1;
}
