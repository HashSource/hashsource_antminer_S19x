void __fastcall sub_19B4C(unsigned int *a1, int a2, const char *a3, int a4)
{
  int v5; // r3
  int v6; // r2
  int v7; // r1
  unsigned int *v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r4
  int v12; // r0
  char *v13; // r8
  unsigned __int8 v14; // [sp+20h] [bp+18h]

  v5 = dword_733CC;
  if ( !dword_733CC )
  {
    v14 = a4;
    v6 = 0;
    v7 = 8;
LABEL_6:
    sub_18AD4(a1, v7, v6, v5, v14);
    return;
  }
  v8 = a1;
  if ( !a3 || !*a3 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 25;
    v14 = a4;
    goto LABEL_6;
  }
  v9 = strtol(a3, 0, 10);
  v10 = v9;
  if ( v9 < 0 || v9 >= dword_733CC )
  {
    v14 = a4;
    v6 = v9;
    a1 = v8;
    v5 = 0;
    v7 = 26;
    goto LABEL_6;
  }
  if ( dword_733CC <= 1 )
  {
    v14 = a4;
    v6 = v9;
    a1 = v8;
    v5 = 0;
    v7 = 66;
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(dword_744C8 + 4 * v9);
  v12 = sub_31FF4(v9);
  if ( v11 == v12 )
    v12 = sub_34178(0);
  if ( v11 == sub_31FF4(v12) )
  {
    v14 = a4;
    v6 = v10;
    a1 = v8;
    v5 = 0;
    v7 = 67;
    goto LABEL_6;
  }
  *(_DWORD *)(v11 + 100) = 0;
  v13 = (char *)sub_15C2C(*(const char **)(v11 + 164), a4);
  if ( v13 == *(char **)(v11 + 164) )
  {
    sub_2D0D8(v11);
    v14 = a4;
    v5 = (int)v13;
    v6 = v10;
    a1 = v8;
    v7 = 68;
    goto LABEL_6;
  }
  sub_2D0D8(v11);
  sub_18AD4(v8, 68, v10, (int)v13, a4);
  free(v13);
}
