int __fastcall sub_292798(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  char *v5; // r8
  _DWORD *v6; // r0
  int v7; // r2
  _DWORD *v8; // r0
  int v9; // r2

  v2 = a1;
  v3 = a2;
  if ( a1 <= a2 )
  {
    if ( a1 == a2 )
      return 0;
    v3 = a1;
    v2 = a2;
  }
  v5 = sub_2912A8(v3, v2);
  sub_2926F8();
  v6 = sub_93028(0x14u);
  v7 = dword_48B6E0;
  v6[3] = v5;
  v6[1] = v3;
  *v6 = v7;
  v6[2] = v2;
  v6[4] = 0;
  dword_48B6E0 = (int)v6;
  v8 = sub_93028(0x14u);
  v9 = dword_48B6E0;
  v8[3] = 0;
  v8[1] = v3;
  *v8 = v9;
  v8[2] = v2;
  v8[4] = 1;
  dword_48B6E0 = (int)v8;
  sub_292748();
  return 0;
}
