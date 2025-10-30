int __fastcall sub_3EBD8(char *a1, int a2)
{
  char *v2; // r1
  unsigned int v3; // r2
  char v4; // t1

  if ( !a2 )
    return 0;
  v2 = &a1[a2];
  v3 = -1;
  do
  {
    v4 = *a1++;
    v3 = *(_DWORD *)&aTqFreezethaw[4 * (unsigned __int8)(v4 ^ v3) + 2792] ^ (v3 >> 8);
  }
  while ( a1 != v2 );
  return ~v3;
}
