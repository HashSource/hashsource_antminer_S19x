int __fastcall sub_4183C(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r10
  int v8; // r11
  int v9; // r5
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r3
  const char *v15; // r0
  const char *v16; // r3
  const char *v17; // r0
  const char *v18; // r3
  char **v19; // r1
  _BOOL4 v20; // r3
  int v21; // [sp+Ch] [bp-8h] BYREF

  if ( !dword_245140 )
    return sub_3F65C((unsigned int *)a1, 10, 0, 0, a4);
  result = sub_3F65C((unsigned int *)a1, 69, 0, 0, a4);
  if ( !a4 )
  {
    v21 = 0;
    if ( dword_245140 <= 0 )
      return result;
    v7 = 0;
    goto LABEL_6;
  }
  result = sub_3C770((unsigned int *)a1, ",\"DEVDETAILS\":[");
  v7 = result;
  v21 = 0;
  if ( dword_245140 > 0 )
  {
LABEL_6:
    v8 = 0;
    result = 0;
    do
    {
      v9 = sub_56518(result);
      v10 = sub_3F3D8(v8, "DEVDETAILS", 6, (const char *)&v21, 0);
      v11 = sub_3F3D8((int)v10, "Name", 1, *(const char **)(*(_DWORD *)(v9 + 4) + 8), 0);
      v12 = sub_3F3D8((int)v11, "ID", 6, (const char *)(v9 + 8), 0);
      v13 = sub_3F3D8((int)v12, "Driver", 1, *(const char **)(*(_DWORD *)(v9 + 4) + 4), 0);
      v14 = *(const char **)(v9 + 168);
      if ( !v14 )
        v14 = "";
      v15 = sub_3F3D8((int)v13, "Kernel", 2, v14, 0);
      v16 = *(const char **)(v9 + 12);
      if ( !v16 )
        v16 = "";
      v17 = sub_3F3D8((int)v15, "Model", 2, v16, 0);
      v18 = *(const char **)(v9 + 16);
      if ( !v18 )
        v18 = "";
      v19 = (char **)sub_3F3D8((int)v17, "Device Path", 2, v18, 0);
      v20 = a4;
      if ( a4 )
        v20 = v21 > 0;
      v8 = sub_3E88C((unsigned int *)a1, v19, a4, v20);
      result = ++v21;
    }
    while ( v21 < dword_245140 );
  }
  if ( v7 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
