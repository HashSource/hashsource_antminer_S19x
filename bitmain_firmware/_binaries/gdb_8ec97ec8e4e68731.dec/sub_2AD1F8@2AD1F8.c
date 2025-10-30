int __fastcall sub_2AD1F8(int a1, char *a2, int a3)
{
  char *v3; // r2
  unsigned int v4; // r0
  char v5; // t1

  v3 = &a2[a3];
  v4 = ~a1;
  if ( a2 < v3 )
  {
    do
    {
      v5 = *a2++;
      v4 = dword_411D28[(unsigned __int8)(v5 ^ v4)] ^ (v4 >> 8);
    }
    while ( v3 != a2 );
  }
  return ~v4;
}
