int __fastcall sub_113B10(int *a1, int a2)
{
  int v3; // r0
  int v5; // [sp+4h] [bp-4h]

  if ( !a1 )
    return 0;
  v3 = *a1;
  if ( v3 )
    return sub_126EFC(v3, a2);
  v5 = a2;
  v3 = sub_B20A4();
  a2 = v5;
  *a1 = v3;
  if ( v3 )
    return sub_126EFC(v3, a2);
  else
    return 0;
}
