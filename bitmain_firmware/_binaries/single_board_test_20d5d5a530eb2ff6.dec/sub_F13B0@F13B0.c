int __fastcall sub_F13B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int *v13; // r0
  int v14; // r0
  _DWORD *v15; // r5
  unsigned int v16; // r0
  char **v17; // r0
  int v18; // r3
  int (__fastcall *v19)(int, int, _DWORD, _DWORD *); // r5
  int v20; // r0

  if ( !sub_126EFC(*a1, 1) )
    return 0;
  v9 = a1[1];
  v10 = sub_10E65C(a2);
  if ( !sub_115E74(v9, v10) )
    return 0;
  ASN1_INTEGER_free(*(_DWORD *)(a1[1] + 4));
  v11 = a2;
  v12 = a1[1];
  v13 = (int *)sub_10E664(v11);
  v14 = sub_126524(v13);
  *(_DWORD *)(v12 + 4) = v14;
  if ( !v14 )
    return 0;
  sub_D9C08(a3);
  v15 = (_DWORD *)a1[2];
  a1[7] = a3;
  v16 = sub_D8C70(a4);
  v17 = sub_EAA20(v16);
  sub_B28F8(v15, (int)v17, 5, 0);
  v18 = *(_DWORD *)(a3 + 12);
  if ( v18 )
  {
    v19 = *(int (__fastcall **)(int, int, _DWORD, _DWORD *))(v18 + 92);
    if ( v19 )
    {
      v20 = v19(a3, 1, 0, a1);
      if ( v20 > 0 )
        return 1;
      if ( v20 != -2 )
      {
        sub_D0048(33, 129, 147, (int)"crypto/pkcs7/pk7_lib.c", 339);
        return 0;
      }
    }
  }
  sub_D0048(33, 129, 148, (int)"crypto/pkcs7/pk7_lib.c", 344);
  return 0;
}
