int __fastcall sub_434B8(int a1, int a2, int a3, int a4)
{
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  char **v9; // r0
  int result; // r0
  int v11; // r4
  int v12; // r9
  int v13; // r5
  int v14; // r3
  int (*v15)(void); // r6
  int v16; // r0
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  char **v20; // r0
  int v21; // [sp+Ch] [bp-20h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  sub_3F65C((unsigned int *)a1, 70, 0, 0, a4);
  if ( !a4 )
  {
    v6 = sub_3F3D8(0, "BMMiner", 1, "1.0.0", 0);
    v7 = sub_3F3D8((int)v6, "Miner", 1, byte_1B0A18, 0);
    v8 = sub_3F3D8((int)v7, "CompileTime", 1, byte_1B07E4, 0);
    v9 = (char **)sub_3F3D8((int)v8, "Type", 1, byte_1B08E4, 0);
    result = sub_3E88C((unsigned int *)a1, v9, 0, 0);
    if ( dword_245140 <= 0 )
      return result;
    v21 = 0;
    goto LABEL_5;
  }
  v21 = sub_3C770((unsigned int *)a1, ",\"STATS\":[");
  v17 = sub_3F3D8(0, "BMMiner", 1, "1.0.0", 0);
  v18 = sub_3F3D8((int)v17, "Miner", 1, byte_1B0A18, 0);
  v19 = sub_3F3D8((int)v18, "CompileTime", 1, byte_1B07E4, 0);
  v20 = (char **)sub_3F3D8((int)v19, "Type", 1, byte_1B08E4, 0);
  result = sub_3E88C((unsigned int *)a1, v20, 1, 0);
  if ( dword_245140 > 0 )
  {
LABEL_5:
    v11 = 0;
    v12 = 0;
    do
    {
      result = sub_56518(v11);
      v13 = result;
      if ( result )
      {
        v14 = *(_DWORD *)(result + 4);
        if ( v14 )
        {
          v15 = *(int (**)(void))(v14 + 28);
          if ( v15 )
          {
            v16 = v15();
            v14 = *(_DWORD *)(v13 + 4);
            v15 = (int (*)(void))v16;
          }
          sprintf(s, "%s%d", *(const char **)(v14 + 8), *(_DWORD *)(v13 + 8));
          result = sub_43158((unsigned int *)a1, v12, s, (const char *)(v13 + 292), (int)v15, a4);
          v12 = result;
        }
      }
      ++v11;
    }
    while ( dword_245140 > v11 );
  }
  if ( v21 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
