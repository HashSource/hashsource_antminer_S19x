int __fastcall sub_2E3474(int a1, int a2, const char *a3)
{
  int v6; // r5
  char *v8; // r0
  char *v9; // r8
  size_t v10; // r11
  char *v11; // r0
  char *v12; // r10
  size_t v13; // r2
  char *v14; // r8
  int v15; // r5
  size_t v16; // [sp+Ch] [bp-8h]

  v6 = sub_2FC920(*(_DWORD *)(a2 + 28), a3, 0);
  if ( v6 )
    return v6;
  v8 = strchr(a3, 64);
  v9 = v8;
  if ( !v8 || v8[1] != 64 )
    return v6;
  v10 = strlen(a3);
  v11 = (char *)sub_2ACBF4(a1, v10);
  v12 = v11;
  if ( !v11 )
    return -72;
  v13 = v9 - a3 + 1;
  v14 = &v11[v13];
  v16 = v13;
  memcpy(v11, a3, v13);
  memcpy(v14, &a3[v16 + 1], v10 - v16);
  v15 = sub_2FC920(*(_DWORD *)(a2 + 28), v12, 0);
  if ( !v15 )
  {
    *(v14 - 1) = 0;
    v15 = sub_2FC920(*(_DWORD *)(a2 + 28), v12, 0);
  }
  sub_2AD1F0(a1);
  return v15;
}
