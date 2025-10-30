int __fastcall sub_31E70(_DWORD *a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r0
  char v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // [sp+4h] [bp-14h] BYREF
  int *v11; // [sp+8h] [bp-10h] BYREF
  int v12; // [sp+Ch] [bp-Ch] BYREF
  int v13; // [sp+14h] [bp-4h]

  v10 = 0;
  v11 = &v10;
  v2 = sub_31D5C(&v12, 0);
  a1[9] = v2;
  if ( v2 )
  {
    result = v12;
    if ( v13 )
      a1[4] = v13;
    if ( result )
      return result;
    return sub_311B8();
  }
  *a1 = 0;
  sub_31684(a1);
  if ( !*a1 )
    return sub_311B8();
  v4 = *(_DWORD *)(dword_487D2C + 8);
  if ( v4 )
  {
    v6 = sub_2AD7AC(v4, ".dynamic");
    v5 = v6;
    if ( v6 )
      v5 = 1;
  }
  else
  {
    v5 = 1;
  }
  v7 = sub_9253C(sub_2FD74, &v10);
  v8 = sub_319C4(a1);
  if ( v8 )
    sub_314B8(v8, 0, &v11, v5);
  v9 = sub_31BC0(a1);
  if ( v9 )
    sub_314B8(v9, 0, &v11, 0);
  sub_92640(v7);
  result = v10;
  if ( !v10 )
    return sub_311B8();
  return result;
}
