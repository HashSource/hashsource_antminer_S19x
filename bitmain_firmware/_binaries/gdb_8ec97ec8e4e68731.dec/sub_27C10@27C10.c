void __fastcall sub_27C10(int a1, int a2, int a3)
{
  __int64 *v4; // r6
  int v5; // r4
  int v7; // r3
  __int64 v8; // t1
  int v9; // r2
  __int64 v10; // [sp+10h] [bp-8h]

  v4 = (__int64 *)(a3 + 8);
  v5 = 0;
  v10 = sub_20B88(a2, 0);
  do
  {
    v8 = *v4++;
    v9 = v5++;
    sub_25B70(a2, a3, v9, v7, v8, SHIDWORD(v8), 4);
  }
  while ( v5 != 4 );
  sub_25B70(a2, a3, *(_DWORD *)(a3 + 136), 3, v10, SHIDWORD(v10), 3);
}
