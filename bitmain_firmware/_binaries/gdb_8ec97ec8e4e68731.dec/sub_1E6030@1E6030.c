int __fastcall sub_1E6030(int a1, int a2, int *a3, char **a4, _DWORD *a5)
{
  int v9; // r0
  _BYTE **v10; // r5
  int v11; // r7
  int v12; // r0
  char *v13; // r8
  const char *v14; // r8
  int *v15; // r11
  int v16; // r4
  char *v17; // r0
  int v18; // r3
  char *v20; // r0
  char *endptr; // [sp+8h] [bp-Ch] BYREF
  char *v22; // [sp+Ch] [bp-8h] BYREF

  v9 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v9);
  v10 = (_BYTE **)dword_488C94;
  if ( !*(_DWORD *)(dword_488C94 + 56) || ((int (__fastcall *)(int))loc_1E2198)(a2) == 2 )
    goto LABEL_14;
  sub_1E51C4((int)*v10, a1);
  v11 = sub_1E4EB8(v10, (size_t *)v10 + 1, 0, 0, 0);
  if ( v11 < 0 )
    goto LABEL_13;
  v12 = sub_1E1768(*v10, &dword_4886EC[4 * a2]);
  if ( !v12 )
    goto LABEL_13;
  if ( v12 == 2 )
  {
LABEL_14:
    v16 = -1;
    *a3 = 88;
    return v16;
  }
  v13 = *v10;
  *a3 = 0;
  if ( *v13 != 70 )
    goto LABEL_13;
  v14 = v13 + 1;
  v15 = _errno_location();
  *v15 = 0;
  v16 = strtol(v14, &endptr, 16);
  if ( *v15 )
    goto LABEL_13;
  v17 = endptr;
  if ( v14 == endptr )
    goto LABEL_13;
  v18 = (unsigned __int8)*endptr;
  if ( v18 == 44 )
  {
    *a3 = strtol(endptr + 1, &v22, 16);
    if ( *v15 )
      goto LABEL_13;
    v17 = v22;
    if ( v22 == endptr + 1 )
      goto LABEL_13;
    endptr = v22;
    v18 = (unsigned __int8)*v22;
  }
  if ( v18 != 59 )
  {
    if ( v18 )
    {
LABEL_13:
      *a3 = 22;
      return -1;
    }
    goto LABEL_12;
  }
  v20 = v17 + 1;
  if ( !v20 )
  {
LABEL_12:
    if ( a4 )
      goto LABEL_13;
    return v16;
  }
  if ( !a4 )
    goto LABEL_13;
  *a4 = v20;
  *a5 = v11 - (v20 - *v10);
  return v16;
}
