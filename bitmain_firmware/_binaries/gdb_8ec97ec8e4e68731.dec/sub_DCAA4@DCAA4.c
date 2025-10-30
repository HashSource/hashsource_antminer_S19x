int __fastcall sub_DCAA4(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int *v5; // r7
  int *v6; // r5
  int v7; // r0
  int v8; // r8
  int *v9; // r4
  int v10; // t1
  int v11; // r4
  int *v13; // [sp+4h] [bp-Ch] BYREF
  int *v14; // [sp+8h] [bp-8h]

  v2 = sub_1DDBBC(a1);
  v3 = ((int (__fastcall *)(int **, int, int))loc_16A120)(&v13, a1, v2);
  v5 = v13;
  v6 = v14;
  if ( v13 == v14 )
  {
    v11 = 0;
  }
  else
  {
    v7 = sub_15F70C(v3, v4);
    v8 = sub_15DB08(v7);
    v9 = v5;
    do
    {
      v10 = *v9++;
      sub_DC8EC(a1, v8, v10);
    }
    while ( v6 != v9 );
    v11 = 1;
  }
  if ( v5 )
    sub_339E64(v5);
  return v11;
}
