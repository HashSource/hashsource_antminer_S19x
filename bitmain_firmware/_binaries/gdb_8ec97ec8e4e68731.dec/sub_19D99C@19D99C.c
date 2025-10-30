int *__fastcall sub_19D99C(int *a1, int *a2, int a3, int a4)
{
  int v4; // r2
  int v8; // r0
  _BYTE *v9; // r6
  int v10; // r1
  int v11; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r3
  int v18; // [sp+0h] [bp-14h] BYREF
  int v19; // [sp+4h] [bp-10h] BYREF
  int v20; // [sp+8h] [bp-Ch] BYREF
  int v21; // [sp+Ch] [bp-8h] BYREF

  v4 = *a2;
  *a1 = 0;
  v18 = v4;
  if ( !v4 )
    goto LABEL_10;
  v8 = sub_1CA748(&v18);
  v9 = (_BYTE *)*a2;
  if ( v8 )
  {
    sub_19CE30(&v19, *a2);
    v10 = *a1;
    v11 = v19;
    v19 = 0;
    *a1 = v11;
    if ( v10 )
    {
      ((void (__fastcall *)(int *))loc_19D154)(a1);
      if ( v19 )
        ((void (__fastcall *)(int *))loc_19D154)(&v19);
    }
    *a2 += strlen((const char *)*a2);
    return a1;
  }
  if ( v9 && *v9 == 42 )
  {
    v21 = *a2;
    v15 = sub_199250(&v21);
    sub_19CD50(&v20, v15, (int)v9, v21 - (_DWORD)v9);
    v16 = *a1;
    v17 = v20;
    v20 = 0;
    *a1 = v17;
    if ( v16 )
    {
      ((void (__fastcall *)(int *))loc_19D154)(a1);
      if ( v20 )
        ((void (__fastcall *)(int *))loc_19D154)(&v20);
    }
    *a2 += v21 - (_DWORD)v9;
    return a1;
  }
  else
  {
LABEL_10:
    sub_19CC9C(&v21, a2, a4);
    v13 = *a1;
    v14 = v21;
    v21 = 0;
    *a1 = v14;
    if ( !v13 )
      return a1;
    ((void (__fastcall *)(int *))loc_19D154)(a1);
    if ( !v21 )
      return a1;
    ((void (__fastcall *)(int *))loc_19D154)(&v21);
    return a1;
  }
}
