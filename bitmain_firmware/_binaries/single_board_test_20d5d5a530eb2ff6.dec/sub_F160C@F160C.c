int __fastcall sub_F160C(_DWORD *a1, int a2)
{
  int v5; // r6
  int v6; // r0
  int v7; // r6
  int *v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int (__fastcall *v12)(int, int, _DWORD, _DWORD *); // r6
  int v13; // r0
  int v14; // r2

  if ( !sub_126EFC(*a1, 0) )
    return 0;
  v5 = a1[1];
  v6 = sub_10E65C(a2);
  if ( !sub_115E74(v5, v6) )
    return 0;
  ASN1_INTEGER_free(*(_DWORD *)(a1[1] + 4));
  v7 = a1[1];
  v8 = (int *)sub_10E664(a2);
  v9 = sub_126524(v8);
  *(_DWORD *)(v7 + 4) = v9;
  if ( !v9 )
    return 0;
  v10 = sub_10E89C(a2);
  if ( !v10
    || (v11 = *(_DWORD *)(v10 + 12)) == 0
    || (v12 = *(int (__fastcall **)(int, int, _DWORD, _DWORD *))(v11 + 92)) == 0 )
  {
    v14 = 481;
LABEL_12:
    sub_D0048(33, 130, 150, (int)"crypto/pkcs7/pk7_lib.c", v14);
    return 0;
  }
  v13 = v12(v10, 2, 0, a1);
  if ( v13 == -2 )
  {
    v14 = 488;
    goto LABEL_12;
  }
  if ( v13 <= 0 )
  {
    sub_D0048(33, 130, 149, (int)"crypto/pkcs7/pk7_lib.c", 493);
    return 0;
  }
  else
  {
    sub_10FD18(a2);
    a1[4] = a2;
    return 1;
  }
}
