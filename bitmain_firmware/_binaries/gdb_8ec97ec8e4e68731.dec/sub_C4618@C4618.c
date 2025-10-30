int __fastcall sub_C4618(int a1)
{
  int v2; // r7
  int v3; // r9
  __int64 v4; // r2
  int v5; // r1
  char *v6; // r0
  int *v7; // r5
  void *v8; // r4
  int *v9; // r8
  const char *v10; // r11
  int v11; // r11
  int v12; // t1
  int v13; // r2
  void *v14; // r1
  char *v15; // r0
  char *v16; // r0
  bool v17; // zf
  void *v18; // r0
  int v19; // r2
  int v20; // r3
  int result; // r0
  char v22[4]; // [sp+4h] [bp-58h] BYREF
  int v23; // [sp+8h] [bp-54h]
  char v24[20]; // [sp+Ch] [bp-50h] BYREF
  int v25; // [sp+20h] [bp-3Ch]

  v2 = *(_DWORD *)sub_242FDC(a1);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 44);
  sub_2665F0(v24);
  if ( v25 )
    sub_2575A4(v2, "addr");
  sub_B7694(5);
  v4 = *(_QWORD *)(a1 + 136);
  HIDWORD(v4) -= v4;
  if ( HIDWORD(v4) <= 7 )
    LOWORD(v5) = -11644;
  else
    LOWORD(v5) = -11656;
  HIWORD(v5) = 55;
  sub_257380(v2, v5, v4, HIDWORD(v4));
  if ( *(_DWORD *)(a1 + 136) == *(_DWORD *)(a1 + 140) )
  {
    sub_2575E8(v2, "what", "<any syscall>");
  }
  else
  {
    v6 = sub_93140("%s", "");
    v7 = *(int **)(a1 + 136);
    v8 = v6;
    v9 = *(int **)(a1 + 140);
    if ( v9 == v7 )
    {
      v10 = v6;
    }
    else
    {
      do
      {
        v12 = *v7++;
        v11 = v12;
        sub_275A58(v3, v12, v22);
        v13 = v23;
        v14 = v8;
        v15 = "%s%s, ";
        if ( !v23 )
        {
          v13 = v11;
          v14 = v8;
          v15 = "%s%d, ";
        }
        v16 = sub_93140(v15, v14, v13);
        v17 = v8 == 0;
        v10 = v16;
        v18 = v8;
        v8 = (void *)v10;
        if ( !v17 )
          free(v18);
      }
      while ( v9 != v7 );
    }
    v10[strlen(v10) - 2] = 0;
    sub_2575E8(v2, "what", v10);
  }
  sub_257380(v2, "\" ", v19, v20);
  result = sub_2573F0(v2);
  if ( result )
    return sub_2575E8(v2, "catch-type", "syscall");
  return result;
}
