int __fastcall sub_24E048(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int result; // r0
  unsigned int v7; // r12
  unsigned int *v8; // r2
  unsigned int *v9; // r1
  unsigned int v10; // r1
  const char *v12; // r0
  unsigned int v13; // [sp+8h] [bp-10h] BYREF
  unsigned int v14; // [sp+Ch] [bp-Ch] BYREF
  unsigned int v15; // [sp+14h] [bp-4h] BYREF

  result = a2;
  v7 = a4;
  v14 = a3;
  v13 = a4;
  if ( dword_48A514 )
  {
    v12 = (const char *)sub_25AC8C(a2, a4);
    result = sub_259F10("(%d,%s,%ld)\n", a3, v12, a5);
    v7 = v13;
  }
  v8 = *(unsigned int **)(a1 + 36);
  v9 = *(unsigned int **)(a1 + 40);
  v15 = a5 + v7;
  if ( v8 == v9 )
  {
    result = sub_24FC50(a1 + 32, v8, &v14, &v13, &v15);
    v10 = v14;
  }
  else
  {
    v10 = v14;
    if ( v8 )
    {
      v8[2] = a5 + v7;
      *v8 = v10;
      v8[1] = v7;
    }
    *(_DWORD *)(a1 + 36) = v8 + 3;
  }
  if ( v10 != -1 )
    return sub_24A69C(a1, v10);
  return result;
}
