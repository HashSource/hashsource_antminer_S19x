int __fastcall sub_C47AC(int a1)
{
  int *v2; // r0
  int v3; // r3
  int v4; // r5
  int v5; // r4
  int v6; // r6
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r0
  char *v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r2
  _BYTE v18[4]; // [sp+4h] [bp-24h] BYREF
  int v19; // [sp+8h] [bp-20h]
  _BYTE v20[12]; // [sp+Ch] [bp-1Ch] BYREF
  int v21; // [sp+18h] [bp-10h] BYREF
  int v22; // [sp+1Ch] [bp-Ch]

  v2 = (int *)sub_242FDC(a1);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *v2;
  v6 = *(_DWORD *)(v3 + 44);
  sub_188284(v20, &v21);
  sub_275A58(v6, v22, v18);
  sub_B74C8(*(_DWORD *)(v4 + 24));
  sub_CE288(v5);
  v8 = *(_DWORD *)(v4 + 20);
  if ( v8 )
    LOWORD(v9) = 19428;
  else
    LOWORD(v9) = 19404;
  HIWORD(v9) = 55;
  sub_257380(v5, v9, v7, v8);
  if ( sub_2573F0(v5) )
  {
    if ( v21 == 8 )
      v10 = 15;
    else
      v10 = 16;
    v11 = sub_9835C(v10);
    sub_2575E8(v5, "reason", v11);
    v12 = sub_CD274(*(_DWORD *)(v4 + 20));
    sub_2575E8(v5, "disp", v12);
  }
  sub_257504(v5, "bkptno", *(_DWORD *)(v4 + 24));
  if ( v21 == 8 )
    LOWORD(v14) = -11592;
  else
    LOWORD(v14) = -11572;
  HIWORD(v14) = 55;
  sub_257380(v5, v14, v13, v21);
  if ( !v19 || sub_2573F0(v5) )
    sub_257504(v5, "syscall-number", v22);
  v16 = v19;
  if ( v19 )
    sub_2575E8(v5, "syscall-name", v19);
  sub_257380(v5, "), ", v16, v15);
  return 0;
}
