bool __fastcall sub_15BAC(int a1, char *a2, const char *a3, char *a4)
{
  int *v7; // r0
  _BOOL4 v8; // r9
  int *v9; // r4
  size_t v10; // r0
  int v11; // r0
  char *v12; // r0
  char **v13; // r3
  _DWORD v15[5]; // [sp+0h] [bp-14h] BYREF

  v15[0] = a3;
  v15[3] = a4;
  v7 = (int *)sub_324030(a1, v15, 1);
  v8 = *v7 != 0;
  if ( !*v7 )
  {
    v9 = v7;
    v10 = strlen(a3);
    v11 = sub_93028(v10 + 17);
    *v9 = v11;
    v12 = strcpy((char *)(v11 + 16), a3);
    v13 = (char **)*v9;
    *v13 = v12;
    v13[1] = 0;
    v13[2] = a2;
    v13[3] = a4;
  }
  return v8;
}
