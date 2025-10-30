int __fastcall sub_1E9AF0(int a1, const char *a2, const char *a3, const char *a4)
{
  int v7; // r0
  int v8; // r0
  const char **v9; // r7
  char *v10; // r4
  size_t v11; // r10
  char *v12; // r8
  unsigned int v13; // r0
  char *v14; // r4
  char *v15; // r4
  size_t v16; // r0
  int v17; // r0
  char *v18; // r4
  size_t v19; // r0
  int v20; // r0
  char *v21; // r4
  size_t v22; // r0
  int v23; // r0
  int v24; // r0
  char *v25; // r0
  const char *v26; // r4

  v7 = sub_16F654(a1);
  v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
  v9 = (const char **)dword_488C94;
  v10 = *(char **)dword_488C94;
  v11 = sub_1E2890(v8);
  v12 = &v10[v11];
  v13 = sub_93170(v10, v11, "QTNotes:");
  v14 = &v10[v13];
  if ( a2 )
  {
    v15 = &v14[sub_93170(v14, v11 - v13, "user:")];
    v16 = strlen(a2);
    v17 = sub_99420((int)a2, v15, v16);
    v15[2 * v17] = 59;
    v14 = &v15[2 * v17 + 1];
  }
  if ( a3 )
  {
    v18 = &v14[sub_93170(v14, v12 - v14, "notes:")];
    v19 = strlen(a3);
    v20 = sub_99420((int)a3, v18, v19);
    v18[2 * v20] = 59;
    v14 = &v18[2 * v20 + 1];
  }
  if ( a4 )
  {
    v21 = &v14[sub_93170(v14, v12 - v14, "tstop:")];
    v22 = strlen(a4);
    v23 = sub_99420((int)a4, v21, v22);
    v21[2 * v23] = 59;
    v14 = &v21[2 * v23 + 1];
  }
  *v14 = 0;
  v24 = sub_1E7DEC(*v9);
  v25 = sub_1E98E8(v24);
  v26 = v25;
  if ( !*v25 )
    return (unsigned __int8)*v25;
  if ( strcmp(v25, "OK") )
    sub_946E0("Bogus reply from target: %s", v26);
  return 1;
}
