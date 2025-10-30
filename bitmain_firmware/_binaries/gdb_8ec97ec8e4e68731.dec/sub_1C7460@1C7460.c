const char **__fastcall sub_1C7460(const char **result, const char *a2, int a3)
{
  const char *v3; // r3
  const char **v4; // r5
  int v7; // r0
  int v8; // r1
  _DWORD v9[3]; // [sp+0h] [bp-10h] BYREF
  const char *v10; // [sp+Ch] [bp-4h] BYREF

  v3 = *result;
  v4 = result;
  v10 = *result;
  if ( v10 && *v3 == 47 )
  {
    v10 = v3 + 1;
    sub_1C553C((char *)v9, &v10, (unsigned __int8)byte_487CF8, 0);
    v7 = v9[0];
    v8 = v9[1];
    *(_DWORD *)a3 = v9[0];
    *(_DWORD *)(a3 + 4) = v8;
    result = (const char **)sub_1C6D14(v7, *(unsigned __int8 *)(a3 + 4), *(unsigned __int8 *)(a3 + 5), a2);
    byte_487CF8 = *(_BYTE *)(a3 + 4);
    *v4 = v10;
  }
  else
  {
    *(_DWORD *)a3 = 1;
    *(_WORD *)(a3 + 4) = 0;
    *(_BYTE *)(a3 + 6) = 0;
    *result = v3;
  }
  return result;
}
