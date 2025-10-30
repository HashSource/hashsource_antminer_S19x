size_t __fastcall sub_139734(int *a1, int a2)
{
  int v3; // r6
  int v5; // r0
  size_t result; // r0
  int v7; // r5
  int v8; // r1

  v3 = *a1;
  v5 = sub_10E65C(a2);
  result = sub_10E6E0(v3, v5);
  if ( !result )
  {
    v7 = a1[1];
    v8 = sub_10E664(a2);
    return sub_126528(v7, v8);
  }
  return result;
}
