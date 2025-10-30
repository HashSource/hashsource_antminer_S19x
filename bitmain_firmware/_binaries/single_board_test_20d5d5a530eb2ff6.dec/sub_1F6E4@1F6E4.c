int __fastcall sub_1F6E4(const char *a1, int a2, int a3, int a4)
{
  int v6; // r5
  const char *v9; // r1
  int v10; // r4
  char v11; // t1
  char v13[48]; // [sp+0h] [bp-30h] BYREF

  v6 = a2 + a3;
  if ( strlen(a1) < a2 + a3 )
  {
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : You want copy to many chars\n", "substr");
    strcpy(byte_5FE9B0, "You want copy to many chars");
    sub_3CC5C(byte_5FE9B0, v13);
    return 0;
  }
  else
  {
    v9 = &a1[a2];
    v10 = a4 - 1;
    if ( a3 )
    {
      do
      {
        v11 = *v9++;
        *(_BYTE *)++v10 = v11;
      }
      while ( v9 != &a1[v6] );
    }
    *(_BYTE *)(a4 + a3) = 0;
    return 1;
  }
}
