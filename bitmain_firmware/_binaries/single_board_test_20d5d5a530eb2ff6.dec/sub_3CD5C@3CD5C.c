size_t __fastcall sub_3CD5C(FILE *a1, int a2, size_t a3, void *a4)
{
  unsigned int v8; // r0
  size_t v9; // r4

  if ( a1 )
  {
    fseek(a1, 0, 2);
    v8 = ftell(a1);
    if ( a2 + a3 <= v8 )
      v9 = a3;
    else
      v9 = v8 - a2;
    fseek(a1, a2, 0);
    fread(a4, 1u, v9, a1);
  }
  return a3;
}
