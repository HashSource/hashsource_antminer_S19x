int __fastcall sub_3C7E0(int result, void *a2, int a3, char *a4, unsigned int a5)
{
  bool v5; // zf
  int v6; // r4
  unsigned int v7; // r7
  void *v8; // r10
  char *v9; // r5
  char *v10; // r6
  char *v11; // r4
  char *v12; // r0
  unsigned int v13; // r1
  char v14; // t1
  int v15; // r4
  char *v16; // r2
  char *v17; // r3
  char *v18; // r3
  char v19; // t1
  char *v20; // r4
  char *v22; // [sp+4h] [bp-150h]
  char *v23; // [sp+4h] [bp-150h]
  char *v24; // [sp+4h] [bp-150h]
  char v25; // [sp+8h] [bp-14Ch] BYREF
  char v26; // [sp+27h] [bp-12Dh] BYREF
  _BYTE v27[63]; // [sp+28h] [bp-12Ch] BYREF
  char v28; // [sp+67h] [bp-EDh] BYREF
  _BYTE v29[236]; // [sp+68h] [bp-ECh] BYREF

  v5 = a2 == 0;
  if ( a2 )
    v5 = a4 == 0;
  v6 = v5;
  if ( !result )
    v6 |= 1u;
  v7 = a5;
  if ( !v6 )
  {
    v8 = (void *)result;
    if ( a5 > 0x40 )
    {
      v23 = a4;
      sub_6B960(v29);
      v7 = 32;
      sub_6D854((int)v29, v23);
      sub_6D8D8((int)v29);
      a4 = &v25;
    }
    else if ( !a5 )
    {
      goto LABEL_14;
    }
    v9 = a4 - 1;
    v10 = &v26;
    v11 = a4 - 1;
    v12 = &v26;
    v13 = 0;
    do
    {
      v14 = *++v11;
      ++v13;
      *++v12 = v14 ^ 0x36;
    }
    while ( v13 < v7 );
    if ( v7 == 64 )
    {
      v24 = a4;
      v15 = 63;
      sub_6B960(v29);
      sub_6D854((int)v29, v27);
      sub_6D854((int)v29, a2);
      sub_6D8D8((int)v29);
      v17 = v24;
      goto LABEL_18;
    }
LABEL_14:
    v15 = v7 - 1;
    v16 = &v27[v7 - 1];
    do
      *++v16 = 54;
    while ( v16 != &v28 );
    v22 = a4;
    sub_6B960(v29);
    sub_6D854((int)v29, v27);
    sub_6D854((int)v29, a2);
    sub_6D8D8((int)v29);
    if ( !v7 )
    {
LABEL_21:
      v20 = &v27[v15];
      do
        *++v20 = 92;
      while ( v20 != &v28 );
LABEL_23:
      sub_6B960(v29);
      sub_6D854((int)v29, v27);
      sub_6D854((int)v29, v8);
      return sub_6D8D8((int)v29);
    }
    v17 = v22;
    v10 = &v26;
    v9 = v22 - 1;
LABEL_18:
    v18 = &v17[v15];
    do
    {
      v19 = *++v9;
      *++v10 = v19 ^ 0x5C;
    }
    while ( v18 != v9 );
    if ( v7 == 64 )
      goto LABEL_23;
    goto LABEL_21;
  }
  return result;
}
