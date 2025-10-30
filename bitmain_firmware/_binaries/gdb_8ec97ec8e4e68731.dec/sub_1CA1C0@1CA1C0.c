void __fastcall sub_1CA1C0(int a1, void **a2, void **a3, void **a4)
{
  int v4; // lr
  int v8; // r0
  void **v9; // r3
  void *v10; // r0
  void *v11; // r2
  void *v12; // r1
  void **v13; // r3
  void *v14; // r0
  void *v15; // r2
  void *v16; // r1
  void **v17; // r3
  void *v18; // r0
  void *v19; // r2
  void *v20; // r1
  int v21; // [sp+Ch] [bp-20h] BYREF
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  void *v23; // [sp+14h] [bp-18h]
  _DWORD v24[5]; // [sp+18h] [bp-14h] BYREF

  v4 = (int)a4[1];
  v21 = a1;
  v8 = sub_33BC54((int)a4, 0, v4, "", 0);
  sub_33B48C(a3, v8);
  sub_5B05C((int *)&ptr, &v21);
  v9 = (void **)*a2;
  if ( ptr == v24 )
  {
    sub_33B48C(a2, &ptr);
    v9 = (void **)ptr;
  }
  else
  {
    v10 = v23;
    v11 = (void *)v24[0];
    if ( v9 == a2 + 2 )
    {
      *a2 = ptr;
      a2[1] = v10;
      a2[2] = v11;
    }
    else
    {
      *a2 = ptr;
      a2[1] = v10;
      v12 = a2[2];
      a2[2] = v11;
      if ( v9 )
      {
        ptr = v9;
        v24[0] = v12;
        goto LABEL_5;
      }
    }
    ptr = v24;
    v9 = (void **)v24;
  }
LABEL_5:
  v23 = 0;
  *(_BYTE *)v9 = 0;
  if ( ptr != v24 )
    sub_339E64(ptr);
  if ( a2[1] )
  {
    sub_5B05C((int *)&ptr, &v21);
    v13 = (void **)*a3;
    if ( ptr == v24 )
    {
      sub_33B48C(a3, &ptr);
      v13 = (void **)ptr;
    }
    else
    {
      v14 = v23;
      v15 = (void *)v24[0];
      if ( v13 == a3 + 2 )
      {
        *a3 = ptr;
        a3[1] = v14;
        a3[2] = v15;
      }
      else
      {
        *a3 = ptr;
        a3[1] = v14;
        v16 = a3[2];
        a3[2] = v15;
        if ( v13 )
        {
          ptr = v13;
          v24[0] = v16;
          goto LABEL_13;
        }
      }
      ptr = v24;
      v13 = (void **)v24;
    }
LABEL_13:
    v23 = 0;
    *(_BYTE *)v13 = 0;
    if ( ptr != v24 )
      sub_339E64(ptr);
    if ( !a3[1] )
      return;
    sub_5B05C((int *)&ptr, &v21);
    v17 = (void **)*a4;
    if ( ptr == v24 )
    {
      sub_33B48C(a4, &ptr);
      v17 = (void **)ptr;
    }
    else
    {
      v18 = v23;
      v19 = (void *)v24[0];
      if ( v17 == a4 + 2 )
      {
        *a4 = ptr;
        a4[1] = v18;
        a4[2] = v19;
      }
      else
      {
        *a4 = ptr;
        a4[1] = v18;
        v20 = a4[2];
        a4[2] = v19;
        if ( v17 )
        {
          ptr = v17;
          v24[0] = v20;
          goto LABEL_20;
        }
      }
      ptr = v24;
      v17 = (void **)v24;
    }
LABEL_20:
    v23 = 0;
    *(_BYTE *)v17 = 0;
    if ( ptr != v24 )
      sub_339E64(ptr);
  }
}
