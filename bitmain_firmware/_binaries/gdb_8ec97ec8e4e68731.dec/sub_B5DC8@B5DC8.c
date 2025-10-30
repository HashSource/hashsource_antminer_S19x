void __fastcall sub_B5DC8(int a1, int a2, const char *a3, const char *a4, void **a5, int *a6, int *a7, void **a8)
{
  void **v11; // r3
  void *v12; // r0
  void *v13; // r2
  void *v14; // r1
  bool v15; // zf
  void **v16; // r3
  void *v17; // r0
  void *v18; // r2
  void *v19; // r1
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  void *v21; // [sp+4h] [bp-18h]
  _DWORD v22[5]; // [sp+8h] [bp-14h] BYREF

  if ( !a5 )
    goto LABEL_8;
  sub_931D8((char **)&ptr, "%s.all", a3);
  v11 = (void **)*a5;
  if ( ptr == v22 )
  {
    sub_33B48C(a5, &ptr);
    v11 = (void **)ptr;
  }
  else
  {
    v12 = v21;
    v13 = (void *)v22[0];
    if ( v11 == a5 + 2 )
    {
      *a5 = ptr;
      a5[1] = v12;
      a5[2] = v13;
    }
    else
    {
      *a5 = ptr;
      a5[1] = v12;
      v14 = a5[2];
      a5[2] = v13;
      if ( v11 )
      {
        ptr = v11;
        v22[0] = v14;
        goto LABEL_6;
      }
    }
    ptr = v22;
    v11 = (void **)v22;
  }
LABEL_6:
  v21 = 0;
  *(_BYTE *)v11 = 0;
  if ( ptr != v22 )
    sub_339E64(ptr);
LABEL_8:
  v15 = a6 == 0;
  if ( a6 )
    v15 = a1 == 0;
  if ( !v15 )
    sub_B54A4(a1, a2, a6, 0);
  if ( a7 )
    sub_B54A4(a1, a2, 0, a7);
  if ( a8 )
  {
    sub_931D8((char **)&ptr, "(%s).all", a4);
    v16 = (void **)*a8;
    if ( ptr == v22 )
    {
      sub_33B48C(a8, &ptr);
      v16 = (void **)ptr;
    }
    else
    {
      v17 = v21;
      v18 = (void *)v22[0];
      if ( v16 == a8 + 2 )
      {
        *a8 = ptr;
        a8[1] = v17;
        a8[2] = v18;
      }
      else
      {
        *a8 = ptr;
        a8[1] = v17;
        v19 = a8[2];
        a8[2] = v18;
        if ( v16 )
        {
          ptr = v16;
          v22[0] = v19;
          goto LABEL_19;
        }
      }
      ptr = v22;
      v16 = (void **)v22;
    }
LABEL_19:
    v21 = 0;
    *(_BYTE *)v16 = 0;
    if ( ptr != v22 )
      sub_339E64(ptr);
  }
}
