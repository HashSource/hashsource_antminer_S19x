int __fastcall sub_10B680(const char *a1, const char *a2, _DWORD **a3, int **a4, int a5, int a6)
{
  int v10; // r0
  bool v11; // zf
  int v12; // r6
  bool v13; // zf
  _DWORD *v14; // r4
  int *v15; // r7
  int v16; // r8
  bool v18; // zf
  int v19; // r3
  int v20; // r0
  int *v21; // r10
  _BYTE v22[2500]; // [sp+Ch] [bp-9C4h] BYREF

  v10 = sub_130B08(a1);
  v11 = a2 == 0;
  if ( a2 )
    v11 = a1 == 0;
  v12 = v10;
  if ( v11 )
    goto LABEL_8;
  v13 = a4 == 0;
  if ( a4 )
    v13 = a3 == 0;
  if ( v13 )
  {
LABEL_8:
    if ( !a3 )
    {
      v15 = 0;
      v16 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v18 = a6 == 0;
    if ( a6 )
      v18 = a5 == 0;
    v19 = v18;
    if ( !v10 )
      v19 |= 1u;
    if ( !v19 )
    {
      v14 = *a3;
      if ( *a3 || sub_F497C((int)v22, 20) > 0 && (v14 = sub_B8AEC(v22, 20, 0)) != 0 )
      {
        v15 = sub_10A95C(v14, a1, a2);
        v16 = (int)v15;
        if ( v15 )
        {
          v20 = sub_B822C();
          v21 = (int *)v20;
          v16 = v20;
          if ( v20 )
          {
            v16 = sub_132330(v20, a6, v15, a5, v12);
            if ( v16 )
            {
              *a3 = v14;
              v16 = 1;
              *a4 = v21;
            }
            else
            {
              sub_B87C8(v21);
            }
          }
        }
        goto LABEL_10;
      }
    }
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
LABEL_10:
  if ( *a3 != v14 )
    sub_B87C8(v14);
LABEL_12:
  sub_B87C8(v15);
  sub_130B5C(v12);
  return v16;
}
