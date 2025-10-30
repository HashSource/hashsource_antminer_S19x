int __fastcall sub_1AE90(int a1, int a2, int a3, int a4)
{
  int v6; // r5
  char **v7; // r0
  int result; // r0
  char **v9; // r0
  int v10; // [sp+Ch] [bp-4h] BYREF

  v10 = 0;
  sub_18AD4((unsigned int *)a1, 59, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_15B00((unsigned int *)a1, ",\"PGAS\":[");
    v7 = (char **)sub_18850(0, "Count", 6, (const char *)&v10, 0);
    result = sub_17D00((unsigned int *)a1, v7, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_15B00((unsigned int *)a1, "PGAS,");
    v9 = (char **)sub_18850(0, "Count", 6, (const char *)&v10, 0);
    return sub_17D00((unsigned int *)a1, v9, 0, 0);
  }
  return result;
}
