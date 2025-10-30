int __fastcall sub_B2B00(int a1, int **a2, int a3)
{
  int *v3; // r3
  int v4; // r2
  char *v5; // r1

  v3 = *a2;
  if ( (*(_DWORD *)(a3 + 20) & 2) != 0 )
  {
    v4 = *v3;
    v5 = "%d\n";
  }
  else
  {
    v4 = *v3;
    v5 = "%u\n";
  }
  return sub_B550C(a1, v5, v4);
}
