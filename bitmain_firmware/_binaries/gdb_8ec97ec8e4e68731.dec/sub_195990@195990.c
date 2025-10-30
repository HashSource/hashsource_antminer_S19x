int __fastcall sub_195990(int a1, int a2, int a3)
{
  _DWORD *v3; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r12
  int v7; // r1
  int v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h]

  v8 = a2;
  v9 = a3;
  v3 = (_DWORD *)sub_324030(a1, &v8, 1);
  if ( *v3 )
    return 0;
  v5 = v3;
  v6 = sub_93028(8u);
  v7 = v9;
  *v6 = v8;
  v6[1] = v7;
  *v5 = v6;
  return 1;
}
