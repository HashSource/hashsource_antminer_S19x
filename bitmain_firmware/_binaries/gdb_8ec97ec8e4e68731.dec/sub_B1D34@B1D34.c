int __fastcall sub_B1D34(int a1, int a2, int *a3, int a4)
{
  int v8; // r1
  int result; // r0
  int v10; // r6
  const char *v11; // r4
  int v12; // r0
  size_t v13; // r2
  __int64 v14; // [sp+8h] [bp-Ch] BYREF

  if ( sub_A05D4(a2, *a3, &v14, a3) )
  {
    if ( *(_BYTE *)(a2 + *a3 - 1) == 109 && **(_BYTE **)(a1 + 24) == 8 )
      a1 = 0;
    result = sub_B3E5C(a1, v8, v14, HIDWORD(v14), a4);
    if ( *(_BYTE *)(a2 + *a3) == 95 )
      *a3 += 2;
  }
  else
  {
    v10 = *a3;
    v11 = (const char *)(a2 + *a3);
    v12 = sub_338BD4(v11, &dword_3C439C);
    if ( v12 )
    {
      v13 = v12 - (_DWORD)v11;
      *a3 = v12 - (_DWORD)v11 + 2 + v10;
    }
    else
    {
      v13 = strlen(v11);
      *a3 = v10 + v13;
    }
    return sub_25A418(a4, "%.*s", v13, v11);
  }
  return result;
}
