_BYTE *__fastcall sub_B5B00(_DWORD *a1, _BYTE *a2, int a3)
{
  size_t v3; // r4
  _BYTE *v6; // r3
  _BYTE *result; // r0
  int v8; // r2
  int v9; // r3
  int v10; // [sp+4h] [bp-4h] BYREF

  v3 = a3 - (_DWORD)a2;
  v10 = a3 - (_DWORD)a2;
  if ( (unsigned int)(a3 - (_DWORD)a2) > 0xF )
  {
    result = (_BYTE *)sub_33B2BC(a1, &v10, 0);
    v9 = v10;
    *a1 = result;
    a1[2] = v9;
LABEL_6:
    result = memcpy(result, a2, v3);
    v6 = (_BYTE *)*a1;
    goto LABEL_4;
  }
  v6 = (_BYTE *)*a1;
  result = (_BYTE *)*a1;
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_4;
    goto LABEL_6;
  }
  *v6 = *a2;
  v6 = (_BYTE *)*a1;
LABEL_4:
  v8 = v10;
  a1[1] = v10;
  v6[v8] = 0;
  return result;
}
