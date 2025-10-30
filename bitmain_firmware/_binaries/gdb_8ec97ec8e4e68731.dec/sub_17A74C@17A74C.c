_DWORD *__fastcall sub_17A74C(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r4
  const char **v7; // r6
  const char *v8; // r0
  const char *v9; // r4
  char *v10; // r4
  char *v11; // r2
  size_t v13; // r0
  const char *v14; // r0
  const char **v15; // [sp+0h] [bp-Ch] BYREF

  v4 = sub_26BC70(a2);
  v5 = sub_170040(v4);
  v6 = sub_26EBA8(a2);
  sub_1B240C(&v15, v6);
  v7 = v15;
  if ( !v15 )
  {
    v14 = (const char *)sub_25AC8C(v5, v6);
    sub_946E0("could not find minimal symbol for typeinfo address %s", v14);
  }
  v8 = (const char *)sub_21B790(v15);
  v9 = v8;
  if ( !v8 || strncmp(v8, "typeinfo for ", 0xDu) )
    sub_946E0("typeinfo symbol '%s' has unexpected name", *v7);
  v10 = (char *)(v9 + 13);
  v11 = strchr(v10, 64);
  *a1 = a1 + 2;
  if ( v11 )
  {
    sub_17A69C(a1, v10, (int)v11);
  }
  else
  {
    v13 = strlen(v10);
    sub_17A69C(a1, v10, (int)&v10[v13]);
  }
  return a1;
}
