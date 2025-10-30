int __fastcall sub_62ECC(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r5

  v2 = a1 + 2;
  v3 = *a2;
  if ( sub_23F1E0(a1[2], a1[3], a1[4]) && v3 == ps_getpid_0(v2) )
    sub_231EB4(*v2, v2[1], v2[2]);
  return 0;
}
