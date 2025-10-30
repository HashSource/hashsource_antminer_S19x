int **__fastcall sub_887E4(const char *a1)
{
  int v2; // r9
  int v3; // r0
  char *v4; // r6
  size_t v5; // r0
  int **v6; // r6
  int *v8; // r7
  int v9; // r5
  int v10[8]; // [sp+4h] [bp-28h] BYREF

  v2 = dword_B8168[0];
  v3 = sub_876C0((int)a1, 1, 2, v10);
  if ( v3 == -1 )
    return 0;
  v4 = (char *)v3;
  dword_B8168[0] = 0;
  v5 = strlen(a1);
  v6 = sub_82410(v4, a1, v5);
  if ( v6 )
  {
    sub_8791C((int)v10);
  }
  else
  {
    v8 = _errno_location();
    v9 = *v8;
    sub_8791C((int)v10);
    *v8 = v9;
  }
  dword_B8168[0] = v2;
  return v6;
}
