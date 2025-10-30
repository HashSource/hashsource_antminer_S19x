int __fastcall sub_11BE40(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r4
  bool v8; // cc
  unsigned int v9; // r1
  _DWORD *v10; // r11
  _DWORD *v11; // r1

  v7 = 0;
  while ( 1 )
  {
    v8 = v7 < sub_10C010((int)a2);
    v9 = v7++;
    if ( !v8 )
      break;
    v10 = (_DWORD *)sub_10C01C(a2, v9);
    sub_B550C(a3, "%*sPolicy: ", a4, &byte_1A4198);
    sub_127D14(a3, *v10);
    sub_B6C30(a3, (int)"\n");
    v11 = (_DWORD *)v10[1];
    if ( v11 )
      sub_11BC60(a3, v11, a4 + 2);
  }
  return 1;
}
