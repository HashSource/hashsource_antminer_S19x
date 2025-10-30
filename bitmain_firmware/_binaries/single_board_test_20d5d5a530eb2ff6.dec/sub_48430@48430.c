int __fastcall sub_48430(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r3
  int v2; // t1
  unsigned __int8 *v3; // r3
  int v4; // r0
  int v5; // r3

  v1 = a1;
  do
    v2 = *v1++;
  while ( (unsigned __int8)a456789[v2] <= 0x3Fu );
  v3 = (unsigned __int8 *)(v1 - a1);
  v4 = (int)(v3 + 5);
  v5 = (int)(v3 + 2);
  if ( v5 < 0 )
    v5 = v4;
  return 3 * (v5 >> 2) + 1;
}
