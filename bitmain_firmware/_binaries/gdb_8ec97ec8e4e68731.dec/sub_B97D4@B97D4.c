int __fastcall sub_B97D4(int a1, char *a2, const char *a3, const char *a4, char *a5)
{
  char ***v8; // r0
  char ***v10; // r4
  size_t v11; // r0
  size_t v12; // r9
  size_t v13; // r0
  char *v14; // r0
  const char *v15; // r9
  char *v16; // r9
  char **v17; // r3
  char *v18; // r0
  char *v19; // r0
  _DWORD v20[4]; // [sp+0h] [bp-10h] BYREF

  v20[0] = a3;
  v20[3] = a5;
  v8 = (char ***)sub_324030(a1, v20, 1);
  if ( *v8 )
    return 1;
  v10 = v8;
  v11 = strlen(a3);
  v12 = v11;
  if ( a4 )
  {
    v13 = strlen(a4);
    v14 = (char *)sub_93028(v12 + 18 + v13);
    v15 = v14 + 16;
    *v10 = (char **)v14;
    strcpy(v14 + 16, a3);
    **v10 = (char *)v15;
    v16 = (char *)&v15[strlen(v15) + 1];
    strcpy(v16, a4);
    v17 = *v10;
    (*v10)[1] = v16;
  }
  else
  {
    v18 = (char *)sub_93028(v11 + 17);
    *v10 = (char **)v18;
    v19 = strcpy(v18 + 16, a3);
    v17 = *v10;
    *v17 = v19;
    v17[1] = 0;
  }
  v17[2] = a2;
  v17[3] = a5;
  return 0;
}
