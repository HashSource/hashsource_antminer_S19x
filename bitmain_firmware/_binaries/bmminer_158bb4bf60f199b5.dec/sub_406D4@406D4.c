void __fastcall sub_406D4(unsigned int *a1, int a2, const char *a3, int a4)
{
  int v5; // r3
  int v6; // r2
  int v7; // r1
  unsigned int *v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r4
  char *v12; // r8
  unsigned __int8 v13; // [sp+20h] [bp+18h]

  v5 = dword_242F4C;
  if ( !dword_242F4C )
  {
    v13 = a4;
    v6 = 0;
    v7 = 8;
LABEL_6:
    sub_3F65C(a1, v7, v6, v5, v13);
    return;
  }
  v8 = a1;
  if ( !a3 || !*a3 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 25;
    v13 = a4;
    goto LABEL_6;
  }
  v9 = strtol(a3, 0, 10);
  v10 = v9;
  if ( v9 < 0 || v9 >= dword_242F4C )
  {
    v13 = a4;
    v6 = v9;
    a1 = v8;
    v5 = 0;
    v7 = 26;
    goto LABEL_6;
  }
  if ( dword_242F4C <= 1 )
  {
    v13 = a4;
    v6 = v9;
    a1 = v8;
    v5 = 0;
    v7 = 66;
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(dword_244048 + 4 * v9);
  if ( v11 == sub_58084() )
    sub_59E6C(0);
  if ( v11 == sub_58084() )
  {
    v13 = a4;
    v6 = v10;
    a1 = v8;
    v5 = 0;
    v7 = 67;
    goto LABEL_6;
  }
  *(_DWORD *)(v11 + 100) = 0;
  v12 = (char *)sub_3C89C(*(const char **)(v11 + 164), a4);
  if ( v12 == *(char **)(v11 + 164) )
  {
    sub_535B8(v11);
    v13 = a4;
    v5 = (int)v12;
    v6 = v10;
    a1 = v8;
    v7 = 68;
    goto LABEL_6;
  }
  sub_535B8(v11);
  sub_3F65C(v8, 68, v10, (int)v12, a4);
  free(v12);
}
