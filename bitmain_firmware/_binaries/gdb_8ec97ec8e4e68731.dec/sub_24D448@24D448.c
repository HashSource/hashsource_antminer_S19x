_BYTE *__fastcall sub_24D448(unsigned __int8 *a1, char **a2, int *a3)
{
  unsigned __int8 *v6; // r0
  char *v7; // r4
  int v8; // r0
  unsigned int v9; // r3
  char *v10; // r0
  signed int v11; // kr00_4
  _BYTE *v12; // r0
  _BYTE *v13; // r0
  char *v14; // r4
  size_t v15; // r0
  _BYTE *v16; // r5
  size_t v17; // r0
  _BYTE *result; // r0
  unsigned int v19; // [sp+0h] [bp-8h] BYREF

  v6 = sub_99188(a1, &v19);
  v7 = (char *)(v6 + 1);
  v8 = sub_16F654((int)v6);
  v9 = v19;
  *a3 = v8;
  a3[1] = v9;
  v10 = strchr(v7, 58);
  if ( !v10 )
    sub_946E0("bad marker definition: %s", (const char *)a1);
  v11 = v10 - v7 + 1;
  v12 = sub_93028(v11);
  a3[2] = (int)v12;
  v13 = sub_991F8((unsigned __int8 *)v7, v12, v11 / 2);
  v14 = &v7[2 * (_DWORD)v13 + 1];
  v13[a3[2]] = 0;
  v15 = strlen(v14);
  v16 = sub_93028(v15 + 1);
  a3[3] = (int)v16;
  v17 = strlen(v14);
  result = sub_991F8((unsigned __int8 *)v14, v16, v17 >> 1);
  result[a3[3]] = 0;
  if ( a2 )
    *a2 = v14;
  return result;
}
