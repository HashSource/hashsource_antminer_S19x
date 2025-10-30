void __fastcall __noreturn sub_4CBAC(int a1)
{
  unsigned int v2; // r0
  int v3; // r5
  int v4; // r0
  int n; // r9
  int v6; // r11
  int *v7; // r0
  ssize_t v8; // r0
  int v9; // r9
  int *v10; // r0
  ssize_t v11; // r9
  int v12; // r0
  int v13; // r9
  int v14; // r11
  int *v15; // r0
  int v16; // r2
  ssize_t v17; // r9
  int *v18; // r0
  int v19; // [sp+10h] [bp-2014h] BYREF
  int v20; // [sp+14h] [bp-2010h] BYREF
  int v21; // [sp+18h] [bp-200Ch] BYREF
  int v22; // [sp+1Ch] [bp-2008h] BYREF
  char src[4064]; // [sp+20h] [bp-2004h] BYREF
  char v24[4100]; // [sp+1020h] [bp-1004h] BYREF

  while ( 2 )
  {
    while ( 1 )
    {
      v2 = sub_4C9D4(a1, &v19, &v20, &v21, &v22, (unsigned int)src, 4096);
      v3 = v2;
      if ( v2 < 0x1000 )
        break;
LABEL_5:
      v4 = v20;
LABEL_6:
      if ( v4 >= 0 )
        close(v4);
LABEL_8:
      sub_4C878(a1, 0, -1, v21, v22, src, v3 & ~(v3 >> 31));
    }
    switch ( v19 )
    {
      case 1:
        v4 = v20;
        if ( v20 <= 0 )
          goto LABEL_6;
        v9 = setns();
        v10 = _errno_location();
        v8 = sub_4C878(a1, 5, -1, v9, *v10, 0, 0);
        goto LABEL_14;
      case 2:
        if ( !v2 )
          goto LABEL_5;
        v13 = (unsigned __int8)src[v2 - 1];
        if ( src[v2 - 1] )
          goto LABEL_5;
        v14 = sub_967B4(src, v21, v22);
        v15 = _errno_location();
        if ( v14 < -1 )
          v16 = -1;
        else
          v16 = v14;
        v11 = sub_4C878(a1, 6, v16, v14 & (v14 >> 31), *v15, (void *)v13, v13);
        if ( v14 < 0 )
          goto LABEL_15;
        close(v14);
        v12 = v20;
        if ( v20 >= 0 )
          goto LABEL_25;
        goto LABEL_16;
      case 3:
        if ( !v2 )
          goto LABEL_5;
        n = (unsigned __int8)src[v2 - 1];
        if ( src[v2 - 1] )
          goto LABEL_5;
        v6 = unlink(src);
        v7 = _errno_location();
        v8 = sub_4C878(a1, 5, -1, v6, *v7, (void *)n, n);
LABEL_14:
        v11 = v8;
        goto LABEL_15;
      case 4:
        if ( !v2 || src[v2 - 1] )
          goto LABEL_5;
        v17 = readlink(src, v24, 0x1000u);
        v18 = _errno_location();
        v11 = sub_4C878(a1, 7, -1, v17, *v18, v24, v17 & ~(v17 >> 31));
LABEL_15:
        v12 = v20;
        if ( v20 >= 0 )
LABEL_25:
          close(v12);
LABEL_16:
        if ( v11 < 0 )
          goto LABEL_8;
        continue;
      default:
        goto LABEL_5;
    }
  }
}
