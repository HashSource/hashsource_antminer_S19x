bool __fastcall sub_2ABFF8(int a1, int *a2)
{
  int v4; // r8
  FILE *v5; // r6
  int i; // r9
  size_t v7; // r0
  char *v8; // r1
  unsigned int v9; // r0
  char *v10; // r2
  char v11; // t1

  if ( !a1 )
    sub_2A6BBC("opncls.c", 1320);
  if ( !a2 )
    sub_2A6BBC("opncls.c", 1321);
  v4 = *a2;
  v5 = sub_2A8794(a1, (int)"r");
  if ( !v5 )
    return 0;
  for ( i = 0; ; i = ~v9 )
  {
    v7 = fread(byte_48DBFC, 1u, 0x2000u, v5);
    if ( !v7 )
      break;
    v8 = &byte_48DBFC[v7];
    v9 = ~i;
    if ( v8 > byte_48DBFC )
    {
      v10 = byte_48DBFC;
      do
      {
        v11 = *v10++;
        v9 = dword_411D28[(unsigned __int8)(v11 ^ v9)] ^ (v9 >> 8);
      }
      while ( v8 != v10 );
    }
  }
  fclose(v5);
  return i == v4;
}
