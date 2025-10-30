bool __fastcall sub_3E168(int *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v14; // [sp+4h] [bp-Ch]
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v9 = *(_DWORD *)(dword_487D2C + 8);
  v14 = dword_4878EC;
  v15 = dword_4878F0;
  v16 = dword_4878F4;
  if ( v9 )
    sub_2A78D4(v9);
  v10 = a1[1];
  v11 = a1[2];
  dword_4878EC = *a1;
  dword_4878F0 = v10;
  dword_4878F4 = v11;
  if ( a5 )
    v12 = sub_230484(a2, a3, a4);
  else
    v12 = sub_230020(a2, a3, a4);
  dword_4878EC = v14;
  dword_4878F0 = v15;
  dword_4878F4 = v16;
  return v12 != 0;
}
