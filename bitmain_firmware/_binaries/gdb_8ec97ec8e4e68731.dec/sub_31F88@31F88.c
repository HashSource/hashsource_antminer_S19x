int sub_31F88()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r5
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  _DWORD *v5; // r10
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r0
  int *v15; // r4
  int *v16; // r6
  int v18; // [sp+4h] [bp-Ch] BYREF
  _DWORD v19[2]; // [sp+8h] [bp-8h] BYREF

  v0 = (_DWORD *)sub_31060();
  v1 = (_DWORD *)v0[11];
  if ( v1 )
  {
    v19[0] = 0;
    v2 = v19;
    do
    {
      v3 = (_DWORD *)sub_93028(1064);
      memcpy(v3, v1, 0x428u);
      v4 = (_DWORD *)v1[1];
      v5 = (_DWORD *)sub_9836C(32);
      v6 = v4[1];
      v7 = v4[2];
      v8 = v4[3];
      *v5 = *v4;
      v5[1] = v6;
      v5[2] = v7;
      v5[3] = v8;
      v9 = v4[4];
      v10 = v4[5];
      v11 = v4[6];
      v12 = v4[7];
      *v3 = 0;
      v3[1] = v5;
      *v2 = v3;
      v2 = v3;
      v5[4] = v9;
      v5[5] = v10;
      v5[6] = v11;
      v5[7] = v12;
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
    v13 = v19[0];
  }
  else
  {
    v13 = sub_31E70(v0);
  }
  v18 = v13;
  v14 = sub_16F654();
  if ( ((int (__fastcall *)(int, _DWORD *))loc_16E670)(v14, v19) && v19[1] && v13 )
  {
    v15 = (int *)v13;
    v16 = &v18;
    while ( !sub_1B05C8(*(_DWORD *)(v15[1] + 16), v19) )
    {
      v16 = v15;
      v15 = (int *)*v15;
      if ( !v15 )
        return v13;
    }
    *v16 = *v15;
    sub_200A30(v15);
    return v18;
  }
  return v13;
}
