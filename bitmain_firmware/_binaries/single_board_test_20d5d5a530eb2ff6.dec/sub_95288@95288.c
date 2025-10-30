int __fastcall sub_95288(int a1, int a2)
{
  int *v4; // r7
  int *v5; // r4
  int v6; // r0
  int v7; // r1
  int *v8; // r6
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int result; // r0
  int v13; // r4
  int v14; // r5
  int v15; // r4
  int v16; // [sp+Ch] [bp+0h] BYREF

  v4 = &v16;
  v5 = (int *)&unk_1A9914;
  do
  {
    v6 = *v5;
    v5 += 4;
    v7 = *(v5 - 3);
    v8 = v4;
    v9 = *(v5 - 2);
    v4 += 4;
    v10 = *(v5 - 1);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v9;
    v8[3] = v10;
  }
  while ( v5 != (int *)&unk_1A9934 );
  v11 = *(_DWORD *)(a1 + 124);
  *v4 = *v5;
  if ( (unsigned int)*(unsigned __int16 *)(*(_DWORD *)(v11 + 528) + 12) - 128 > 1 )
    return 2;
  v13 = a2;
  v14 = a1;
  if ( sub_8B860(a1) >= 0 )
    return 2;
  v15 = sub_A851C(v13);
  result = 1;
  if ( !v15 )
  {
    sub_95494(v14, 80, 452, 68, "ssl/statem/extensions_srvr.c", 1923);
    return 0;
  }
  return result;
}
