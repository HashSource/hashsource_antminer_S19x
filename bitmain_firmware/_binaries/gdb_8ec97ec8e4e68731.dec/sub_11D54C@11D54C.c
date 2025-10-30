_DWORD *__fastcall sub_11D54C(_DWORD *a1, int a2, int a3, int a4)
{
  char *v7; // r0
  void *v8; // r4
  int v9; // r1
  int v10; // r6
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r0
  void *ptr; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ch] [bp-8h] BYREF

  if ( !a4 )
  {
    v7 = (char *)dword_489698;
    goto LABEL_3;
  }
  v7 = ".";
  if ( !*(_BYTE *)dword_489698 )
  {
LABEL_3:
    v8 = (void *)sub_327254(v7);
    goto LABEL_4;
  }
  v8 = (void *)sub_31E27C(".", ":", dword_489698);
LABEL_4:
  if ( a3 )
    v9 = 6;
  else
    v9 = 4;
  v10 = ((int (__fastcall *)(void *, int, int, _DWORD, void **))loc_203AE4)(v8, v9, a2, 0, &ptr);
  free(v8);
  if ( v10 < 0 )
  {
    *a1 = 0;
    return a1;
  }
  ((void (__fastcall *)(int *, void *, int, int))loc_16298C)(&v17, ptr, dword_47ACA8, v10);
  if ( ptr )
    free(ptr);
  v11 = v17;
  if ( v17 )
  {
    v12 = v17;
    *(_BYTE *)(v17 + 43) |= 2u;
    v13 = sub_2AA86C(v12, 1);
    v14 = v17;
    if ( !v13 )
    {
      *a1 = 0;
      if ( v14 )
        ((void (*)(void))loc_1625A8)();
      return a1;
    }
    sub_163200(*(_DWORD *)(*(_DWORD *)(dword_4872D8 + 344) + 36), v17);
    v11 = v17;
  }
  *a1 = v11;
  return a1;
}
