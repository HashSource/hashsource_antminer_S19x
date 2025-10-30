int __fastcall sub_191624(char *a1)
{
  int *v2; // r0

  v2 = (int *)sub_191588(dword_487668, a1);
  if ( !v2 )
    sub_946E0("Interpreter `%s' unrecognized", a1);
  return sub_1912B4(v2, 1);
}
