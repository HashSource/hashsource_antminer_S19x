int __fastcall sub_348634(int (__fastcall *a1)(int *, int), int a2, _DWORD *a3)
{
  int *v3; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r6
  _DWORD v24[22]; // [sp+0h] [bp-23Ch] BYREF
  int v25[16]; // [sp+58h] [bp-1E4h] BYREF
  int v26; // [sp+98h] [bp-1A4h]

  v3 = a3 + 1;
  a3[16] = a3[15];
  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v9 = v3[3];
  v3 += 4;
  v25[1] = v6;
  v25[2] = v7;
  v25[3] = v8;
  v25[4] = v9;
  v10 = *v3;
  v11 = v3[1];
  v12 = v3[2];
  v13 = v3[3];
  v3 += 4;
  v25[5] = v10;
  v25[6] = v11;
  v25[7] = v12;
  v25[8] = v13;
  v14 = *v3;
  v15 = v3[1];
  v16 = v3[2];
  v17 = v3[3];
  v3 += 4;
  v25[9] = v14;
  v25[10] = v15;
  v25[11] = v16;
  v25[12] = v17;
  v18 = v3[1];
  v19 = v3[2];
  v20 = v3[3];
  v25[13] = *v3;
  v25[14] = v18;
  v25[15] = v19;
  v26 = v20;
  v25[0] = -1;
  while ( !sub_348264(v24, v26) )
  {
    sub_348618((int)v25, 0xCu, (int)v24);
    if ( a1(v25, a2) )
      break;
    v22 = ((int (__fastcall *)(int, _DWORD *, int *))v24[4])(8, v24, v25);
    if ( ((v22 - 5) & 0xFFFFFFFB) == 0 )
      goto LABEL_6;
  }
  v22 = 9;
LABEL_6:
  sub_348314(v25, v21);
  return v22;
}
