int __fastcall sub_63DC0(int a1, int a2)
{
  double v2; // d0
  int v4; // r5
  size_t v5; // r8
  int v6; // r9
  int v7; // r1
  int v8; // r2
  _BYTE *v9; // r0
  char *v10; // lr
  char v11; // r4
  char v12; // r3
  _BYTE *v13; // r3
  _DWORD *v14; // r3
  ssize_t v15; // r0
  int v18; // [sp+10h] [bp-20h] BYREF
  _DWORD v19[2]; // [sp+14h] [bp-1Ch] BYREF
  _BYTE v20[10]; // [sp+1Ch] [bp-14h] BYREF
  char v21; // [sp+26h] [bp-Ah]

  v4 = a2;
  v18 = 16711423;
  v19[0] = 1504;
  v19[1] = -33751040;
  HIBYTE(v18) = a2;
  if ( a2 == 4 )
  {
    v5 = 11;
    v6 = 11;
  }
  else
  {
    v5 = 12;
    v4 = 5;
    v6 = 12;
  }
  sub_6C054(v20, 16, " %10.0f", v2 * 1000000.0);
  LOBYTE(v7) = v21;
  if ( v21 == 32 )
  {
    v8 = 0;
  }
  else
  {
    v9 = v20;
    v10 = (char *)v19 + 1;
    v8 = 0;
    do
    {
      v11 = v9[9];
      v9 -= 2;
      v12 = v7 & 0xF;
      ++v8;
      v7 = (unsigned __int8)v9[10];
      *++v10 = v12 | (16 * v11);
    }
    while ( v7 != 32 );
    v13 = (char *)v19 + v8 + 2;
    if ( v4 <= v8 )
      goto LABEL_11;
  }
  v14 = (int *)((char *)&v18 + v8 + 5);
  do
  {
    *((_BYTE *)v14 + 1) = 0;
    v14 = (_DWORD *)((char *)v14 + 1);
  }
  while ( (_DWORD *)((char *)v19 + v4 + 1) != v14 );
  v13 = (char *)v19 + v4 + 2;
LABEL_11:
  *v13 = -3;
  v15 = write(a1, &v18, v5);
  if ( v15 == -1 )
  {
    sub_64E00(3, "icom_freq: write() failed: %m");
    return -1;
  }
  else if ( v15 == v6 )
  {
    return 0;
  }
  else
  {
    sub_64E00(3, "icom_freq: only wrote %d of %d bytes.", v15, v6);
    return 1;
  }
}
