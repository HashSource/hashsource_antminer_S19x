int __fastcall sub_DC64C(int a1, int a2, int *a3, int a4)
{
  int v4; // r6
  int v7; // r0
  int v8; // r0
  int result; // r0
  int v10; // [sp+4h] [bp-4h] BYREF

  v4 = *(_DWORD *)(a1 + 20);
  v7 = sub_D8D8C(a4);
  v8 = sub_D8C78(v7);
  if ( v8 < 0 )
    return 0;
  *a3 = v8;
  result = 1;
  if ( !a2 )
    return result;
  if ( !sub_DCA28(*(_DWORD *)(v4 + 20), a2, &v10) )
    return 0;
  result = 1;
  *a3 = v10;
  return result;
}
