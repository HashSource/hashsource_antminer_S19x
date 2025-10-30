int __fastcall sub_41E1C(int a1, int a2, int a3, int a4)
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

  sub_3F65C((unsigned int *)a1, 22, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_3C770((unsigned int *)a1, ",\"VERSION\":[");
    v7 = sub_3F3D8(0, "BMMiner", 1, "1.0.0", 0);
    v8 = sub_3F3D8((int)v7, "API", 2, "3.1", 0);
    v9 = sub_3F3D8((int)v8, "Miner", 1, byte_1B0A18, 0);
    v10 = sub_3F3D8((int)v9, "CompileTime", 1, byte_1B07E4, 0);
    v11 = (char **)sub_3F3D8((int)v10, "Type", 1, byte_1B08E4, 0);
    result = sub_3E88C((unsigned int *)a1, v11, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_3C770((unsigned int *)a1, "VERSION,");
    v13 = sub_3F3D8(0, "BMMiner", 1, "1.0.0", 0);
    v14 = sub_3F3D8((int)v13, "API", 2, "3.1", 0);
    v15 = sub_3F3D8((int)v14, "Miner", 1, byte_1B0A18, 0);
    v16 = sub_3F3D8((int)v15, "CompileTime", 1, byte_1B07E4, 0);
    v17 = (char **)sub_3F3D8((int)v16, "Type", 1, byte_1B08E4, 0);
    return sub_3E88C((unsigned int *)a1, v17, 0, 0);
  }
  return result;
}
