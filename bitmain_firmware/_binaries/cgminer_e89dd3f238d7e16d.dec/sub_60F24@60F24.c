int __fastcall sub_60F24(_DWORD *a1)
{
  int v2; // r3
  int v3; // r1
  _DWORD *v6; // [sp+10h] [bp-1Ch]
  int v7; // [sp+14h] [bp-18h]
  int v8; // [sp+1Ch] [bp-10h]
  unsigned int i; // [sp+20h] [bp-Ch]
  _DWORD *v10; // [sp+24h] [bp-8h]

  v8 = a1[2] + 1;
  v7 = sub_64070(8 * (1 << v8));
  if ( !v7 )
    return -1;
  sub_640B8(a1[1]);
  a1[1] = v7;
  a1[2] = v8;
  for ( i = 0; i < 1 << a1[2]; ++i )
  {
    v2 = a1[1] + 8 * i;
    *(_DWORD *)(v2 + 4) = a1 + 3;
    *(_DWORD *)(a1[1] + 8 * i) = *(_DWORD *)(v2 + 4);
  }
  v10 = (_DWORD *)a1[4];
  sub_60AB4(a1 + 3);
  while ( v10 != a1 + 3 )
  {
    v6 = (_DWORD *)v10[1];
    sub_67C2C(v10[4], 1 << v8);
    sub_60BF0((int)a1, (int *)(a1[1] + 8 * v3), v10);
    v10 = v6;
  }
  return 0;
}
