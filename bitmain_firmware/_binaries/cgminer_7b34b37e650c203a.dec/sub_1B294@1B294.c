int __fastcall sub_1B294(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  char **v11; // r0
  int result; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  char **v17; // r1

  sub_18AD4((unsigned int *)a1, 22, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_15B00((unsigned int *)a1, ",\"VERSION\":[");
    v7 = sub_18850(0, "BMMiner", 1, a10, 0);
    v8 = sub_18850((int)v7, "API", 2, "3.1", 0);
    v9 = sub_18850((int)v8, "Miner", 1, byte_6ABC0, 0);
    v10 = sub_18850((int)v9, "CompileTime", 1, byte_6A74C, 0);
    v11 = (char **)sub_18850((int)v10, "Type", 1, byte_6A84C, 0);
    result = sub_17D00((unsigned int *)a1, v11, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_15B00((unsigned int *)a1, "VERSION,");
    v13 = sub_18850(0, "BMMiner", 1, a10, 0);
    v14 = sub_18850((int)v13, "API", 2, "3.1", 0);
    v15 = sub_18850((int)v14, "Miner", 1, byte_6ABC0, 0);
    v16 = sub_18850((int)v15, "CompileTime", 1, byte_6A74C, 0);
    v17 = (char **)sub_18850((int)v16, "Type", 1, byte_6A84C, 0);
    return sub_17D00((unsigned int *)a1, v17, 0, 0);
  }
  return result;
}
