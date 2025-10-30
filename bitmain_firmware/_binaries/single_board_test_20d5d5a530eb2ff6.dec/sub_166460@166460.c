int __fastcall sub_166460(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int *v8; // r5
  int v9; // r10
  int v10; // r6
  int v11; // r4
  int v12; // r7
  int v13; // r1
  int v14; // r6
  size_t v15; // r2
  void *v16; // r0
  _BYTE v19[4]; // [sp+Ch] [bp-48h] BYREF
  _BYTE v20[68]; // [sp+10h] [bp-44h] BYREF

  v8 = (int *)sub_D14F4();
  if ( !v8 || (v9 = sub_D8C78((int)a5), v9 < 0) )
  {
LABEL_16:
    v14 = -1;
    goto LABEL_15;
  }
  if ( a2 > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v19[3] = v11;
      v19[0] = HIBYTE(v11);
      v19[1] = BYTE2(v11);
      v12 = v9 + v10;
      v19[2] = BYTE1(v11);
      ++v11;
      if ( !sub_D1520(v8, a5, 0) || !sub_D16D8((int)v8, a3, a4) || !sub_D16D8((int)v8, (int)v19, 4) )
        goto LABEL_16;
      v13 = a1 + v10;
      if ( a2 < v12 )
      {
        if ( !sub_D16E4(v8, (int)v20, 0) )
          goto LABEL_16;
        v15 = a2 - v10;
        v16 = (void *)(a1 + v10);
        v14 = 0;
        memcpy(v16, v20, v15);
        goto LABEL_15;
      }
      v10 += v9;
      if ( !sub_D16E4(v8, v13, 0) )
        goto LABEL_16;
    }
    while ( a2 > v12 );
  }
  v14 = 0;
LABEL_15:
  sub_E07F8(v20, 0x40u);
  sub_D1504(v8);
  return v14;
}
