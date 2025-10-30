int __fastcall sub_61024(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int16 v5; // [sp+16h] [bp-Eh]
  int v6; // [sp+18h] [bp-Ch]
  unsigned int v7; // [sp+1Ch] [bp-8h]
  unsigned int i; // [sp+1Ch] [bp-8h]

  v6 = 0;
  if ( !a1 || !a2 || !a3 )
    return -2147482879;
  v7 = 2;
  v5 = 0;
  while ( v7 < a3 - 2 )
    v5 += a2[v7++];
  if ( v5 == (unsigned __int16)((a2[a3 - 1] << 8) + a2[a3 - 2]) )
  {
    if ( *a1 != *a2 || a1[1] != a2[1] || a1[3] != a2[3] || a2[2] + 2 != a3 )
      v6 = -2147482880;
  }
  else
  {
    v6 = -2147482880;
  }
  if ( v6 )
  {
    for ( i = 0; i < a3; ++i )
      ;
  }
  return v6;
}
